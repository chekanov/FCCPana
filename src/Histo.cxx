/*
 *      Initialize histograms here.
 *
 */


#include <iostream>
using namespace std;

#include<iostream>
#include <TROOT.h>
#include"TFile.h"
#include"TH1D.h"
#include"TH2F.h"
#include"Histo.h"
#include<stdlib.h>

#include <TClonesArray.h>
#include <TTree.h>
#include <TFile.h>
#include "Global.h"
#include "SystemOfUnits.h"
#include "TMultiGraph.h"

extern string floatToString(float);
extern Global glob;


// constructor
Histo::Histo() {}


// constructor
void Histo::setOutput(string output) {


    
    string ffile="output/"+output+".root";
    cout << "\n -> Output file is =" << ffile << endl;
    RootFile = new TFile(ffile.c_str(), "RECREATE", "Histogram file");


}



// constructor
void Histo::setHistograms() {


    cout << "Histo::setHistograms() is called" << endl;
    // initialisations of histograms
    debug = new TH1D( "debug", "debug numbers", 15, 0, 15);
    hweights = new TH1D( "analysis_weights", "analysis_weights", 10000, 0, 10000);
    cpucores = new TH1D( "cpucores", "CPU cores", 5, 0, 5);
    cpucores->Fill(1,1);

    jet_pt = new TH1D( "jet_pt", "pt of all jets", 100, 0,300);  jet_pt->Sumw2();
    jet_y = new TH1D( "jet_y", "rapidity of all jets", 40, -3.,3.);  jet_y->Sumw2();
    njet = new TH1D( "njet", "number of jets", 15, 0, 15);njet->Sumw2();

    int nMax=100;
    Mjj = new TH1D( "Mjj", "Mjj", nMax, 0,200);  Mjj->Sumw2();
    Mbb = new TH1D( "Mbb", "Mee", nMax, 0,200);  Mbb->Sumw2();
    Mjb = new TH1D( "Mjb", "Mjb", nMax, 0,200);  Mjb->Sumw2();
    Mee = new TH1D( "Mee", "Mee", nMax, 0,200);  Mee->Sumw2();
    Mmm = new TH1D( "Mmm", "Mmm", nMax, 0,200);  Mmm->Sumw2();
    Mgg = new TH1D( "Mgg", "Mgg", nMax, 0,200);  Mgg->Sumw2();

    // true masses 
    MeeTrue = new TH1D( "MeeTrue", "Mee true", nMax, 0,200);  MeeTrue->Sumw2();
    MmmTrue = new TH1D( "MmmTrue", "Mmm true", nMax, 0,200);  MmmTrue->Sumw2();
    MggTrue = new TH1D( "MggTrue", "Mgg true", nMax, 0,200);  MggTrue->Sumw2();


}




/*
* Destructor
**/

Histo::~Histo() { }



// write histograms
void Histo::finalize() {

      cout << "Histo::finalize() is called" << endl;
      cout << "Print the numbers of events after the selection cuts (\"debug\" histogram)" << endl;
     // debug->Print();
     for (Int_t j=1; j<debug->GetNbinsX(); j++) {
      cout << " ->Cut Nr=" << j << " accepted events=" << debug->GetBinContent(j+1) << endl;
     }

    cout << "--> Number of events requested:" <<  glob.MaxEvents  << endl;
    cout << "--> Number of events processed:" <<  glob.nev  << endl;
    cout << "--> Number of events  selected:" <<  glob.TotalEvents << endl;

    cout << "\n\n-- Write output file=" << ffile << endl;
    cout << "\n\n";
    RootFile->Write();
    RootFile->Print();
    RootFile->Close();
    cout << "\n\n-- Done!" << ffile << endl;

    return;

}

