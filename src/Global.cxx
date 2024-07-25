/*
 *      Define global parameters here,
 */


#include <iostream>
using namespace std;


#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<TROOT.h>
#include"Global.h"
#include"TRandom3.h"
#include <algorithm>
#include <vector>
#include <sstream>

// constructor
Global::Global() {


    timer.Start();
    nev = 0;
    debug=false; 
    systematics=0;
    MaxEvents=2147483640;
    firstEvent=true;
    grandom= new TRandom();

 // min PT to trigger data fill 
 // jet/electrons have different pT!
  PT_CUT=20;
  PT_LEPTON=20;
  PT_PHOTON=20;
  ETA_CUT=2.5; 
  cout << "########  Cuts=" << endl;
  cout << "         minPT=" << PT_CUT << endl;
  cout << "         maxEta=" << ETA_CUT << endl;

}


// destructor
Global::~Global () {

    cout << "real time=" << timer.RealTime() << endl;
    timer.Stop();

}




// read ntuple list
void Global::getNtuples(string xname)
{


    string name="inputs/"+xname;
    ifstream myfile;
    myfile.open(name.c_str(), ios::in);


    if (!myfile) {
      cerr << "Global::getNtuples(): Can't open input file:  " << name << endl;
      exit(1);
    } else {
        cout << "-> Read data file=" << name << endl;
      }

     string temp;
     while (myfile >> temp) {
            ntup.push_back(temp);
     }


    cout << "-> Number of runs=" << ntup.size()  << endl;
    myfile.close();

    for (unsigned int i=0; i<ntup.size(); i++) {
           cout << ".. file to analyse="+ntup[i] << endl;
    }

}



// read initial parameters
void Global::getIni()
{

    nev=0;
    string name="main.ini";
    ifstream myfile;
    myfile.open(name.c_str(), ios::in);

    if (!myfile) {
      cerr << "\nGlobal::getIni(): Can't open input file:  " << name << endl;
      exit(1);
    } else {
        cout << "\nRead file=" << name << endl;
    }

    string message;
    int    number;
    myfile >> message >> MaxEvents;
    myfile >> message >> number;
    myfile >> message >> type;
    myfile >> message >> systematics;
    debug=false;  
    if (number==1) debug=true;
    myfile.close();
    print_init();               // print initialisations
    print_cuts();               // print initialisations



}






