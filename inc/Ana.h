// Developed at ASC ANL
// S.Chekanov (ANL). chakanau@hep.anl.gov
// Feb. 2010 

#include "analysis.h"
#include <TROOT.h>
#include <TTree.h>
#include <LParticle.h>
#include <CParticle.h>

// main analysis class. inherent analysis.h which should be rebuilkd each time

class Ana: public analysis  {

    public:
          Ana(TTree *tree);
          virtual ~Ana();
          int    CutEvent(Long64_t entry);
          void   Loop();
};
