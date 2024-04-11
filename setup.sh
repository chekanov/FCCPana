#!/bin/bash
# Setting up libraries for FCC C++ ANA

source /cvmfs/sw-nightlies.hsf.org/key4hep/setup.sh
echo  "KEY4HEP_STACK=$KEY4HEP_STACK"
echo "Setup FccpAna"

# older
# source /cvmfs/sw.hsf.org/key4hep/setup.sh

# even more older
# source /cvmfs/sw.hsf.org/key4hep/setup.sh -r 2023-11-23


DELIMITER="key4hep-stack"
FCCPANALIB="${KEY4HEP_STACK%$DELIMITER*}"

export EDM_CPPAN=`ls -d -1 ${FCCPANALIB}edm4hep/*`
#echo "$EDM_CPPAN"

export PODIO_CPPAN=`ls -d -1 ${FCCPANALIB}podio/*`
#echo $PODIO_CPPAN
echo "FCCPANA_LIB=$FCCPANALIB"
