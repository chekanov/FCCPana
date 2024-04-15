/*
 *      Loop.cxx
 *
 *      Copyright 2010 Sergei Chekanov <chekanov@hep.anl.gov> ANL
 *      Main analysis Loop.
 *
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin S1kreet, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 */



#include "Ana.h"
#include "Global.h"
#include "SystemOfUnits.h"
#include "Histo.h"
#include "TSpline.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

extern Global glob;
extern Histo  h;

//pi2
const double PI2=2*TMath::Pi();
const double PI=TMath::Pi();

// Event loop.
void Ana::Loop()
{
   if (fChain == 0) return;


   Long64_t nentries = fChain->GetEntriesFast();
   cout << " -> number of entries =" << nentries << endl;
   Long64_t nbytes = 0, nb = 0;
   for (Long64_t n=0; n<nentries; n++) {
     
      if (glob.MaxEvents>0) 
         if (glob.nev>=glob.MaxEvents) break;

      Long64_t ientry = LoadTree(n);
      if (ientry < 0) break;
      nb = fChain->GetEntry(n);   nbytes += nb;

      glob.nev++;

       if (  glob.nev<=10 &&
       ( ( (glob.nev<=100 && (glob.nev%10) == 0) ) ||
       ( (glob.nev<=10000 && (glob.nev%1000) == 0) )  ||
       ( (glob.nev>=10000 && (glob.nev%10000) == 0) ) )   ) {
          cout << "Events= " << glob.nev << " after selection=" << glob.TotalEvents << endl; }
     
      // counter
      glob.nev++;
     // weight in MC (data=1)
     double weight=1.0;

      // skip bad events
      h.debug->Fill("Good events",1.0);
      h.hweights->Fill(weight);

      vector<LParticle> alljets;
      vector<LParticle> Ljets; // light jets 
      vector<LParticle> Bjets; // b-jets 
      vector<LParticle> muons;     // muons 
      vector<LParticle> electrons; // electrons 
      vector<LParticle> photons; // electrons 

      // truth
      vector<LParticle> true_muons;     // muons 
      vector<LParticle> true_electrons; // electrons 
      vector<LParticle> true_photons; // electrons 

      if (CutEvent(ientry) <0) continue;
      h.debug->Fill("Event cut",1.0);

///////////   this is the Delphes filler /////////////////////////
#if delphes 
      // Jets 
      for(Int_t  i = 0; i < Jet_; i++){
        TLorentzVector tl;
        tl.SetPxPyPzE(Jet_momentum_x[i],Jet_momentum_y[i],Jet_momentum_z[i],Jet_energy[i]);
        LParticle p;
        p.SetP(tl);
        p.SetType( Jet_type[i]  );
        p.SetStatus( 0 );
        p.SetParent( 0 ); // save EM pt in MeV units 
        p.SetCharge( Jet_charge[i] );
        alljets.push_back(p);
        Ljets.push_back(p);
        Bjets.push_back(p);
     };

      // fill identified particles 
      for(Int_t  i = 0; i < ReconstructedParticles_ ; i++){
        TLorentzVector tl;
        tl.SetPxPyPzE(ReconstructedParticles_momentum_x[i],ReconstructedParticles_momentum_y[i],ReconstructedParticles_momentum_z[i],ReconstructedParticles_energy[i]);
        LParticle p;
        p.SetP(tl);
        int pdg=ReconstructedParticles_type[i];
        //cout << ReconstructedParticles_type[i] << endl;
        p.SetType( pdg  );
        p.SetStatus( 0 );
        p.SetParent( 0 );
        p.SetCharge( ReconstructedParticles_charge[i]  );
        if (abs(pdg)==11) electrons.push_back(p);
        if (abs(pdg)==13) muons.push_back(p);
        if (abs(pdg)==22) photons.push_back(p);
 
     };


      // truth
      for(Int_t  i = 0; i < Particle_; i++){
       if ( Particle_generatorStatus[i] != 1) continue; 
        TLorentzVector tl;
        float e=sqrt(Particle_momentum_x[i]*Particle_momentum_x[i]+Particle_momentum_y[i]*Particle_momentum_y[i]+Particle_momentum_z[i]*Particle_momentum_z[i]+Particle_mass[i]*Particle_mass[i]); 
        tl.SetPxPyPzE(Particle_momentum_x[i],Particle_momentum_y[i],Particle_momentum_z[i],e);
        LParticle p;
        p.SetP(tl);
        int pdg=Particle_PDG[i];
        p.SetType( pdg  );
        p.SetStatus( Particle_simulatorStatus[i] );
        p.SetParent( 0 );
        p.SetCharge( Particle_charge[i]  );
        if (abs(pdg)==11) true_electrons.push_back(p);
        if (abs(pdg)==13) true_muons.push_back(p);
        if (abs(pdg)==22) true_photons.push_back(p);
     };




#endif
////////////////////////////// end delphes ////////////////////////////////////



// this is full simulation filler //////////////////////////////////////////////
#if geant  

      // Jets 
      for(Int_t  i = 0; i < VertexJets_; i++){
        TLorentzVector tl;
        tl.SetPxPyPzE(VertexJets_momentum_x[i],VertexJets_momentum_y[i],VertexJets_momentum_z[i],VertexJets_energy[i]);
        LParticle p;
        p.SetP(tl);
        p.SetType( VertexJets_PDG[i]  );
        p.SetStatus( 0 );
        p.SetParent( 0 ); 
        p.SetCharge( VertexJets_charge[i] );
        alljets.push_back(p);
        Ljets.push_back(p);
        Bjets.push_back(p);
     };

      // fill identified particles 
      for(Int_t  i = 0; i < PandoraPFOs_; i++){
        TLorentzVector tl;
        tl.SetPxPyPzE(PandoraPFOs_momentum_x[i],PandoraPFOs_momentum_y[i],PandoraPFOs_momentum_z[i],PandoraPFOs_energy[i]);
        LParticle p;
        p.SetP(tl);
        int pdg=PandoraPFOs_PDG[i];
        //cout << ReconstructedParticles_type[i] << endl;
        p.SetType( pdg  );
        p.SetStatus( 0 );
        p.SetParent( 0 ); // save EM pt in MeV units 
        p.SetCharge( PandoraPFOs_charge[i]  );
        if (abs(pdg)==11) electrons.push_back(p);
        if (abs(pdg)==13) muons.push_back(p);
        if (abs(pdg)==22) photons.push_back(p);
     };


      // truth
      for(Int_t  i = 0; i < MCParticles_; i++){
       if ( MCParticles_generatorStatus[i] != 1) continue;
        TLorentzVector tl;
        float e=sqrt( MCParticles_momentum_x[i]* MCParticles_momentum_x[i]+MCParticles_momentum_y[i]* MCParticles_momentum_y[i]+MCParticles_momentum_z[i]*MCParticles_momentum_z[i]+MCParticles_mass[i]*MCParticles_mass[i]);
        tl.SetPxPyPzE(MCParticles_momentum_x[i],MCParticles_momentum_y[i],MCParticles_momentum_z[i],e);
        LParticle p;
        p.SetP(tl);
        int pdg=MCParticles_PDG[i];
        p.SetType( pdg  );
        p.SetStatus(  MCParticles_simulatorStatus[i] );
        p.SetParent( 0 );
        p.SetCharge( MCParticles_charge[i]  );
        if (abs(pdg)==11) true_electrons.push_back(p);
        if (abs(pdg)==13) true_muons.push_back(p);
        if (abs(pdg)==22) true_photons.push_back(p);
     };





/////////////////////////////  end full simulations ////////////////////////////////////////////
#endif






      // sort in PT
      if (Ljets.size()>1) std::sort(Ljets.begin(), Ljets.end(), greater<LParticle>() ) ;
      if (Bjets.size()>1) std::sort(Bjets.begin(), Bjets.end(), greater<LParticle>() ) ;
      if (electrons.size()>1) std::sort(electrons.begin(), electrons.end(), greater<LParticle>() ) ;
      if (muons.size()>1) std::sort(muons.begin(), muons.end(), greater<LParticle>() ) ;
      if (photons.size()>1) std::sort(photons.begin(), photons.end(), greater<LParticle>() ) ;
      // truth level 
      if (true_electrons.size()>1) std::sort(true_electrons.begin(), true_electrons.end(), greater<LParticle>() ) ;
      if (true_muons.size()>1) std::sort(true_muons.begin(), true_muons.end(), greater<LParticle>() ) ;
      if (true_photons.size()>1) std::sort(true_photons.begin(), true_photons.end(), greater<LParticle>() ) ;


         h.njet->Fill(Ljets.size(),weight);
         for(unsigned int i = 0; i < Ljets.size(); i++){
            LParticle p1= Ljets.at(i);
            h.jet_pt->Fill(p1.GetP().Perp(),weight);
            h.jet_y->Fill(p1.GetP().Rapidity(),weight);
         };
 
        // fill here some masses for debugging
       // jj
        if ( Ljets.size()>1){
            LParticle p1= Ljets.at(0);
            LParticle p2= Ljets.at(1);
            TLorentzVector PP=p1.GetP()+p2.GetP();
            h.Mjj->Fill(PP.M(), weight);
        }

      // j+b
        if ( Bjets.size()>0 && Ljets.size()>0){
            LParticle p1= Ljets.at(0);
            LParticle p2= Bjets.at(0);
            TLorentzVector PP=p1.GetP()+p2.GetP();
            h.Mjb->Fill(PP.M(), weight);
        }

     // b+b
        if ( Bjets.size()>1){
            LParticle p1= Bjets.at(0);
            LParticle p2= Bjets.at(1);
            TLorentzVector PP=p1.GetP()+p2.GetP();
            h.Mbb->Fill(PP.M(), weight);
        }

        if ( electrons.size()>1){
            LParticle p1= electrons.at(0);
            LParticle p2= electrons.at(1);
            if (p1.GetCharge()*p2.GetCharge() > 0) continue;
            TLorentzVector PP=p1.GetP()+p2.GetP();
            h.Mee->Fill(PP.M(), weight);
        }

        if ( muons.size()>1){
            LParticle p1= muons.at(0);
            LParticle p2= muons.at(1);
            if (p1.GetCharge()*p2.GetCharge() > 0) continue;
            TLorentzVector PP=p1.GetP()+p2.GetP();
            h.Mmm->Fill(PP.M(), weight);
        }

        if ( photons.size()>1){
            LParticle p1= photons.at(0);
            LParticle p2= photons.at(1);
            TLorentzVector PP=p1.GetP()+p2.GetP();
            h.Mgg->Fill(PP.M(), weight);
        }



         // true masses
         if ( true_electrons.size()>1){
            LParticle p1= true_electrons.at(0);
            LParticle p2= true_electrons.at(1);
            if (p1.GetCharge()*p2.GetCharge() > 0) continue;
            TLorentzVector PP=p1.GetP()+p2.GetP();
            h.MeeTrue->Fill(PP.M(), weight);
        }

        if ( true_muons.size()>1){
            LParticle p1= true_muons.at(0);
            LParticle p2= true_muons.at(1);
            if (p1.GetCharge()*p2.GetCharge() > 0) continue;
            TLorentzVector PP=p1.GetP()+p2.GetP();
            h.MmmTrue->Fill(PP.M(), weight);
        }

        if ( true_photons.size()>1){
            LParticle p1= true_photons.at(0);
            LParticle p2= true_photons.at(1);
            TLorentzVector PP=p1.GetP()+p2.GetP();
            h.MggTrue->Fill(PP.M(), weight);
        }




      glob.TotalEvents++;

   }//end loop over all events
}//end loop method
