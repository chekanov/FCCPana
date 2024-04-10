# FCCPana
FCC-ee analysis code to process Delphes and full simulations using multiple cores

This code allows analysis of FCC-ee data (Delphes and full simulation in EDM ROOT format)
using multiple cores. You can program any histogram and attach any C++ library.
Here are the main features:

- Very simple and fast!
- Can run on multiple cores (tested on 72 cores)
- Can define systematics via main.in input file
- Can attach additional C++ libraries
- Unified object definition, independent is this full or fast simulation.
- Very flexible. You can create any analysis logic using any variable listed in analysis.h

# How to test 

Get the code:

`git clone https://github.com/chekanov/FCCPana`

Make sure you can compile it. Setup the key4hep environment and compile:

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

During the runs, the output will be in the temporary directory "output". 
After the runs finished, the merged output ROOT will be in "out/sysN/name".
The directory "sysN" is needed to add systematical variations,
which can be defined in A_RUN. They are passed to the main program as
variable glob.systematics (inside src/Loop.cxx).
 
During the run, the list of ROOT files are stored inside the file "data.in". In addition,
there is auto-generated "main.in" which keeps global variables for all runs.

# How to create and fill histograms 

The current program fills invariant masses inside src/Loop.cxx (main event loop).
The variables can be found in analysis.h header files (autogenerated by ROOT).

To create a histogram, follow these steps:

(1) Define a histogram name in inc/Histo.h
(2) Initialize histogram in src/Histo.cxx
(3) Fill histogram in event loop in src?/Loop.cxx

Note that src/Loop.cxx is the most important for analysis. Here you can define the program logic and fill histograms.
If you need to define some global variables, use inc/Global.h and src/Global.cxx

# Extending the program

This is really easy. Just drop header files in the directory "inc", and source files in "src". Done!
For more complex (compiled) C++ libraries, you need to attach them in aux/Makefile.delphes or aux/Makefile.geant (full simulation).

# Input files 

Attention: Currently this program works for the EDM ROOT files created :

Fast simulation:
https://hep-fcc.github.io/fcc-tutorials/master/fast-sim-and-analysis/k4simdelphes/doc/starterkit/FccFastSimDelphes/Readme.html#part-i-generate-and-simulate-events-with-delphesedm4hep

Full simulation: https://hep-fcc.github.io/fcc-tutorials/master/full-detector-simulations/FCCeeGeneralOverview/FCCeeGeneralOverview.html#towards-full-sim-physics-analyses-with-cld


It does not work for old ROOT files stored in:

 - https://fcc-physics-events.web.cern.ch/fcc-physics-events/FCCee/winter2023/Delphesevents_IDEA.php
 - /eos/experiment/fcc/ee/generation/FullSimulation/CLD/CLD_o2_v05/
 - /eos/experiment/fcc/ee/generation/DelphesEvents/winter2023/IDEA/

since they require rebuilded the header files. Note the older ROOT files include "#" in tree definitions, which
are not friendly for C++.
 

S.Chekanov (ANL)
