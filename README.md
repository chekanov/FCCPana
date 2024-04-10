# FCCPana
FCC-ee analysis code to process Delphes and full simulations using multiple cores

This code allows analysis of FCC-ee data (Delphes and full simulation in EDM ROOT format)
using multiple cores. You can program any histogram and attach any C++ library.

Get the code:

`git clone https://github.com/chekanov/FCCPana`

First, make sure you can compile it. Setup ke4hep and compile:

```
cd FCCPana
source setup.sh
make
```
Can you create the executable "main"? If yes, now you can run over Delphes and Full simulation files.

Put your input Delphes ROOT files to the directory "data/IDEA_DELPHES"  or  full simulation files to "data/CLD_FULL/". 

Then edit the script "A_RUN". Here you can define what do you want to use for the input:  Delphes and full simulation files.  Also, define the number of cores and how many events to process per core.

Now you can run it!

```
./A_RUN
```

During the runs, the output will be in the temporaty directory "output". 
After the runs finished, the merged output ROOT will be in "out/sysN/name".

# How to create histogram

(1) Define a histogram name in inc/Histo.h
(2) Initialize histogram in src/Histo.cxx
(3) Fill histogram in event loop in src?/Loop.cxx

Note that src/Loop.cxx is the most important for analysis. Here you can define the program logic and fill histograms.

If you need to define some global variables, use inc/Global.h and src/Global.cxx

Attention: Currently this program works for the EDM ROOT files created :

Fast simulation:
https://hep-fcc.github.io/fcc-tutorials/master/fast-sim-and-analysis/k4simdelphes/doc/starterkit/FccFastSimDelphes/Readme.html#part-i-generate-and-simulate-events-with-delphesedm4hep

Full simulation: https://hep-fcc.github.io/fcc-tutorials/master/full-detector-simulations/FCCeeGeneralOverview/FCCeeGeneralOverview.html#towards-full-sim-physics-analyses-with-cld


It does not work for old ROOT files stored in:

(1) https://fcc-physics-events.web.cern.ch/fcc-physics-events/FCCee/winter2023/Delphesevents_IDEA.php
(2) /eos/experiment/fcc/ee/generation/FullSimulation/CLD/CLD_o2_v05/
(3) /eos/experiment/fcc/ee/generation/DelphesEvents/winter2023/IDEA/

since they require rebuilded the header files.

S.Chekanov (ANL)
