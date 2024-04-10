/***************************************************************************
 *            main.cxx
 *
 *  Fri Sep 21 15:05:23 2007
 *  Copyright  2007  chekanov
 *  chekanov@mail.desy.de
 ****************************************************************************/



#include<iostream>
#include<fstream>
#include<stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <TROOT.h>
#include <TTree.h>
#include <TChain.h>
#include <TFile.h>
#include <TBrowser.h>
#include <TStyle.h>
#include "TApplication.h"
#include "TObject.h"
#include "TH1.h"
#include "TMath.h"
#include "TCanvas.h"
#include "TRandom.h"
#include "TThread.h"
#include <TTreePerfStats.h>

// analysis
#include "Ana.h"
#include "Global.h"
#include "Histo.h"


using namespace std;

Global glob;
Histo  h;


int main(int argc, char **argv)
{

      int i=1;
      if(argc < 2) {
	        printf("You must provide at least one argument that defines input list\n");
	        exit(0);
	    }

 // report settings
    for (;i<argc;i++) printf("Argument %d:%s\n",i,argv[i]);
    char * inp = argv[1];
    string name=std::string(inp);
    cout << "Input file=" << name << endl; 

    // get dictinary for vector
    gROOT->ProcessLine("#include <vector>");
    // initialize
    glob.getIni();
    // read list of ntuples
    glob.getNtuples(name);

    // set output and histograms
    h.setOutput(name);
    h.setHistograms();

    const int Nfiles = glob.ntup.size();
    cout << " -> Nr of files to read:" << Nfiles << endl;
    cout << " -> Nr of events to process:" <<  glob.MaxEvents << endl;


    string stree="events";


    cout << "Analysis of tree " << stree << endl;
    for (int i = 0; i < Nfiles; i++) {

       float donefiles= (float)i / (float)Nfiles;
       cout << "\nPercentage done = " << (int)(donefiles*100) <<  " %" << endl;
       cout << "\nfile to read:" << glob.ntup[i] << endl;

       TFile f(glob.ntup[i].c_str());
       if (f.IsZombie()) continue; 
       //if (f.TestBit(TFile::kRecovered)==false) continue;


        TTree *tree = (TTree *)f.Get(stree.c_str());
        glob.SumOfWeights=1.0;
        glob.m_run=i;

        // run over all event is negative
        if (glob.MaxEvents>0)
            if (glob.nev >= glob.MaxEvents) break; 

        Ana ana(tree);
        ana.Notify();

//    ana.GetEntry(12); // Fill t data members with entry number 12
//    ana.Show();       // Show values of entry 12
//    ana.Show(16);     // Read and show values of entry 16
       // fast processing
       if (glob.type != -999) ana.Loop();      // Loop on all entries
     
       // benchmark IO   
       //ps->SaveAs(io_name.c_str());

        delete tree;
        f.Close();


    }


    // write histograms
    h.finalize();

    return 0;
}
