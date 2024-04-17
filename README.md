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

Here is a small test using Delphes inputs:

```
mkdir -p data/IDEA_DELPHES
cd data/IDEA_DELPHES
wget https://mc.hep.anl.gov/asc/hepsim/events/ee/240gev/py8_ZH_idea/rfast053/py8_ZH_idea_1.root
wget https://mc.hep.anl.gov/asc/hepsim/events/ee/240gev/py8_ZH_idea/rfast053/py8_ZH_idea_2.root
cd ../../
```
Search for more events using "rfast053" reconstruction tag of HepSim. Or download from CERN.
Then run the 2 processes as: "A_RUN".

Here is a test using full Geant4 simulation with the CLD detector:

```
mkdir data/CLD_FULL/
cd data/CLD_FULL/
wget https://mc.hep.anl.gov/asc/hepsim/events/ee/240gev/pythia6_Heemm/rfull301/wzp6_ee_eeH_ecm240_CLD_RECO_edm4hep.root
cd ../../
```
Then uncomment the lines inside A_RUN to:

```
NPUT_TYPE=2 # 1 delphes, 2 CLT full sim
OUTPUT_DIR="cld_full"
DATA_DIR=data/CLD_FULL/
```

The run the job processes as: "./A_RUN".

# General direction 

Generally, one can create 2 types of executables: for fast simulation data (Delphes) and full simulation (CLD). This is how to make such executables:

```
make fast # analysis of the Delphes simulation
make full # full Geant4 CLD analysis
```

The next step is to edit input for the executable "main".
Edit the script "A_RUN". Here you can define what do you want to use for the input:  Delphes and full simulation files.  Also, define the number of cores and how many events to process per core.
Now you can run it:

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




`git clone https://github.com/chekanov/FCCPana`

Make sure you can compile it. Setup the key4hep environment and compile:

```
cd FCCPana
source setup.sh
make
```
Can you create the executable "main"? If yes, now you can run over Delphes and Full simulation files.
Put your input Delphes ROOT files to the directory "data/IDEA_DELPHES"  or  full simulation files to "data/CLD_FULL/".

Here is a small test using Delphes inputs:

```
mkdir -p data/IDEA_DELPHES
cd data/IDEA_DELPHES
wget https://mc.hep.anl.gov/asc/hepsim/events/ee/240gev/py8_ZH_idea/rfast053/py8_ZH_idea_1.root
wget https://mc.hep.anl.gov/asc/hepsim/events/ee/240gev/py8_ZH_idea/rfast053/py8_ZH_idea_2.root
cd ../../
```
Search for more events using "rfast053" reconstruction tag of HepSim. Or download from CERN.



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

Here is a small test:

```
mkdir -p data/IDEA_DELPHES
cd data/IDEA_DELPHES
wget https://mc.hep.anl.gov/asc/hepsim/events/ee/240gev/py8_ZH_idea/rfast053/py8_ZH_idea_1.root
wget https://mc.hep.anl.gov/asc/hepsim/events/ee/240gev/py8_ZH_idea/rfast053/py8_ZH_idea_2.root 
cd ../../
```
Search for more events using "rfast053" reconstruction tag of HepSim. Or download from CERN. 

You can create 2 types of executables: for fast simulation data (Delphes) and full simulation (CLD). This is how to make such executables:

```
make fast # analysis of the Delphes simulation
make full # full Geant4 CLD analysis
```

The next step is to edit input for the executable "main".
Edit the script "A_RUN". Here you can define what do you want to use for the input:  Delphes and full simulation files.  Also, define the number of cores and how many events to process per core.

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
The histograms are defined in inc/Histo.h and src/Histo.cxx.

The variables for EDM objects can be found in analysis.h header files (autogenerated by ROOT).

To create a histogram, follow these steps:

- Define a histogram name in inc/Histo.h
- Initialize the histogram in src/Histo.cxx
- Fill histogram in event loop in src/Loop.cxx
- Apply selection cuts for your events in src/CutEvent.cxx

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


It does not work for the old ROOT files stored in:

 - https://fcc-physics-events.web.cern.ch/fcc-physics-events/FCCee/winter2023/Delphesevents_IDEA.php
 - /eos/experiment/fcc/ee/generation/FullSimulation/CLD/CLD_o2_v05/
 - /eos/experiment/fcc/ee/generation/DelphesEvents/winter2023/IDEA/

since they require updated header files. Note the older ROOT files include "#" in tree definitions, which
is not friendly for C++ compiler, therefore, creating the header files for old ROOT files with # in variables is not
trivial. 
 

S.Chekanov (ANL)
