/***************************************************************************
 *  Fri Sep 21 15:58:02 2007
 *  Copyright  2007  chekanov
 ****************************************************************************/

using namespace std;
#include<iostream>
#include <iostream>              
#include <fstream>
#include <sstream>
#include "TFile.h"
#include "TRandom.h"
#include "TStopwatch.h"
#include "TSpline.h"
#include <string>
#include <vector>
#include <map>


class Global {

  public:

    Global ();
    virtual ~Global ();

    int TotalEvents;
    void getNtuples(string name);
    void getIni();
    int nev;			// events processed 
    bool firstEvent;

    TFile *RootFile;
    TStopwatch timer;
    char *ffile;
    int MaxEvents;
    int debug;
    int systematics;
    int type; 
    int gen_events;
    double SumOfWeights;
    TRandom*  grandom;
    vector <string> ntup;       // ntuple list

    // some global cuts if you want them
    double PT_CUT;
    double PT_LEPTON;
    double PT_PHOTON; 
    double ETA_CUT;
    int m_run, m_evt;
    double  sumOfWeights;
 

    void print_init() {
        cout << "\n\n  --Job input--: " << endl;
        cout << "   Max events=" << MaxEvents <<
                "\n   Debug=" << debug << 
                "\n   Type=" << type <<
                "\n   Systematics=" << systematics << endl; 
    };



     void print_cuts() {
        cout << "\n\n  --Selected cuts--: " << endl;
        cout << "   PT_LEPTON=" << PT_LEPTON <<
                "\n   Jet PT=" << PT_CUT <<
                "\n   Jet ETA=" << ETA_CUT << endl; 
    };
 

};
