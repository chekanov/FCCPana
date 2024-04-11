/***************************************************************************
 *            histo.h
 *
 *  Fri Sep 21 16:08:23 2007
 *  Copyright  2007  chekanov
 *  chekanov@mail.desy.de
 ****************************************************************************/
using namespace std;
#include<iostream>
#include "TROOT.h"
#include "TFile.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TTree.h"
#include "TProfile.h"
#include <TProfile2D.h>

class Histo {

  public:

    TH1D *debug;
    TH1D *hweights;

    //Jet Kinematic quantities
    TH1D* jet_pt;
    TH1D* jet_y;
    TH1D* njet;
    TH1D* Mjj;
    TH1D* Mbb;
    TH1D* Mjb;
    TH1D* Mee;
    TH1D* Mmm;
    TH1D* Mgg;

    // true 
    TH1D* MeeTrue;
    TH1D* MmmTrue;
    TH1D* MggTrue;





    // CPU cores
    TH1D* cpucores;


// ---- do not modify below -----
    Histo();
    virtual ~Histo();
    void setHistograms();
    void setOutput(string output);
    void finalize();
    char *ffile;
    TFile *RootFile;
};
