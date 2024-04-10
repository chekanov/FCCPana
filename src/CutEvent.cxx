/*
 *      CutEvent.cxx
 *      Apply some selection cuts in this place. 
 *      Return -1 if event should not be considered.  
 *      
*/

#include "Ana.h"
#include "Global.h"
#include "Histo.h"
#include<stdio.h>
#include<stdlib.h>
#include "SystemOfUnits.h"
#include<TROOT.h>
#include<stdio.h>
#include<TMath.h>
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

extern Global glob;


/*
*     Event selection goes here
*     S.Chekanov, 08.04.2010
*/
Int_t Ana::CutEvent(Long64_t entry)
{

       
       glob.m_run=0;
       glob.m_evt=0;


// returns  1 if entry is accepted.
// returns -1 otherwise.
    return 1;
}
