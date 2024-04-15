using namespace std;
#include <vector>
#include <map>
#include <TClonesArray.h>
#include <TLorentzVector.h>
//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Apr 15 15:35:10 2024 by ROOT version 6.12/06
// from TTree events/events data tree
// found on file: data/py8_ZZ_idea_1.root
//////////////////////////////////////////////////////////

#ifndef analysis_h
#define analysis_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>


class analysis {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxCalorimeterHits = 103;
   static constexpr Int_t kMaxEFlowNeutralHadron = 15;
   static constexpr Int_t kMax_EFlowNeutralHadron_clusters = 1;
   static constexpr Int_t kMax_EFlowNeutralHadron_hits = 15;
   static constexpr Int_t kMax_EFlowNeutralHadron_particleIDs = 1;
   static constexpr Int_t kMaxEFlowPhoton = 91;
   static constexpr Int_t kMax_EFlowPhoton_clusters = 1;
   static constexpr Int_t kMax_EFlowPhoton_hits = 91;
   static constexpr Int_t kMax_EFlowPhoton_particleIDs = 1;
   static constexpr Int_t kMaxEFlowTrack = 75;
   static constexpr Int_t kMax_EFlowTrack_trackerHits = 225;
   static constexpr Int_t kMax_EFlowTrack_tracks = 1;
   static constexpr Int_t kMax_EFlowTrack_trackStates = 75;
   static constexpr Int_t kMax_EFlowTrack_dxQuantities = 75;
   static constexpr Int_t kMaxElectron_objIdx = 4;
   static constexpr Int_t kMaxEventHeader = 1;
   static constexpr Int_t kMaxJet = 4;
   static constexpr Int_t kMax_Jet_clusters = 1;
   static constexpr Int_t kMax_Jet_tracks = 1;
   static constexpr Int_t kMax_Jet_particles = 170;
   static constexpr Int_t kMax_Jet_particleIDs = 4;
   static constexpr Int_t kMax_Jet_startVertex = 4;
   static constexpr Int_t kMax_Jet_particleIDUsed = 4;
   static constexpr Int_t kMaxMCRecoAssociations = 170;
   static constexpr Int_t kMax_MCRecoAssociations_rec = 170;
   static constexpr Int_t kMax_MCRecoAssociations_sim = 170;
   static constexpr Int_t kMaxMuon_objIdx = 4;
   static constexpr Int_t kMaxParticle = 455;
   static constexpr Int_t kMax_Particle_parents = 2192;
   static constexpr Int_t kMax_Particle_daughters = 2172;
   static constexpr Int_t kMaxParticleIDs = 78;
   static constexpr Int_t kMaxPhoton_objIdx = 21;
   static constexpr Int_t kMaxReconstructedParticles = 170;
   static constexpr Int_t kMax_ReconstructedParticles_clusters = 103;
   static constexpr Int_t kMax_ReconstructedParticles_tracks = 75;
   static constexpr Int_t kMax_ReconstructedParticles_particles = 1;
   static constexpr Int_t kMax_ReconstructedParticles_particleIDs = 75;
   static constexpr Int_t kMax_ReconstructedParticles_startVertex = 170;
   static constexpr Int_t kMax_ReconstructedParticles_particleIDUsed = 170;
   static constexpr Int_t kMaxTrackerHits = 225;
   static constexpr Int_t kMax_TrackerHits_rawHits = 1;
   static constexpr Int_t kMax_intMap = 1;
   static constexpr Int_t kMax_floatMap = 1;
   static constexpr Int_t kMax_stringMap = 1;
   static constexpr Int_t kMax_doubleMap = 1;

   // Declaration of leaf types
   Int_t           CalorimeterHits_;
   ULong_t         CalorimeterHits_cellID[kMaxCalorimeterHits];   //[CalorimeterHits_]
   Float_t         CalorimeterHits_energy[kMaxCalorimeterHits];   //[CalorimeterHits_]
   Float_t         CalorimeterHits_energyError[kMaxCalorimeterHits];   //[CalorimeterHits_]
   Float_t         CalorimeterHits_time[kMaxCalorimeterHits];   //[CalorimeterHits_]
   Float_t         CalorimeterHits_position_x[kMaxCalorimeterHits];   //[CalorimeterHits_]
   Float_t         CalorimeterHits_position_y[kMaxCalorimeterHits];   //[CalorimeterHits_]
   Float_t         CalorimeterHits_position_z[kMaxCalorimeterHits];   //[CalorimeterHits_]
   Int_t           CalorimeterHits_type[kMaxCalorimeterHits];   //[CalorimeterHits_]
   Int_t           EFlowNeutralHadron_;
   Int_t           EFlowNeutralHadron_type[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_energy[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_energyError[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_position_x[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_position_y[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_position_z[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_positionError[kMaxEFlowNeutralHadron][6];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_iTheta[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_phi[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_directionError_x[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_directionError_y[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_directionError_z[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   UInt_t          EFlowNeutralHadron_shapeParameters_begin[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   UInt_t          EFlowNeutralHadron_shapeParameters_end[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   UInt_t          EFlowNeutralHadron_subdetectorEnergies_begin[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   UInt_t          EFlowNeutralHadron_subdetectorEnergies_end[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   UInt_t          EFlowNeutralHadron_clusters_begin[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   UInt_t          EFlowNeutralHadron_clusters_end[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   UInt_t          EFlowNeutralHadron_hits_begin[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   UInt_t          EFlowNeutralHadron_hits_end[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   UInt_t          EFlowNeutralHadron_particleIDs_begin[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   UInt_t          EFlowNeutralHadron_particleIDs_end[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Int_t           _EFlowNeutralHadron_clusters_;
   Int_t           _EFlowNeutralHadron_clusters_index[kMax_EFlowNeutralHadron_clusters];   //[_EFlowNeutralHadron_clusters_]
   UInt_t          _EFlowNeutralHadron_clusters_collectionID[kMax_EFlowNeutralHadron_clusters];   //[_EFlowNeutralHadron_clusters_]
   Int_t           _EFlowNeutralHadron_hits_;
   Int_t           _EFlowNeutralHadron_hits_index[kMax_EFlowNeutralHadron_hits];   //[_EFlowNeutralHadron_hits_]
   UInt_t          _EFlowNeutralHadron_hits_collectionID[kMax_EFlowNeutralHadron_hits];   //[_EFlowNeutralHadron_hits_]
   Int_t           _EFlowNeutralHadron_particleIDs_;
   Int_t           _EFlowNeutralHadron_particleIDs_index[kMax_EFlowNeutralHadron_particleIDs];   //[_EFlowNeutralHadron_particleIDs_]
   UInt_t          _EFlowNeutralHadron_particleIDs_collectionID[kMax_EFlowNeutralHadron_particleIDs];   //[_EFlowNeutralHadron_particleIDs_]
   vector<float>   *_EFlowNeutralHadron_shapeParameters;
   vector<float>   *_EFlowNeutralHadron_subdetectorEnergies;
   Int_t           EFlowPhoton_;
   Int_t           EFlowPhoton_type[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_energy[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_energyError[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_position_x[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_position_y[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_position_z[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_positionError[kMaxEFlowPhoton][6];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_iTheta[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_phi[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_directionError_x[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_directionError_y[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_directionError_z[kMaxEFlowPhoton];   //[EFlowPhoton_]
   UInt_t          EFlowPhoton_shapeParameters_begin[kMaxEFlowPhoton];   //[EFlowPhoton_]
   UInt_t          EFlowPhoton_shapeParameters_end[kMaxEFlowPhoton];   //[EFlowPhoton_]
   UInt_t          EFlowPhoton_subdetectorEnergies_begin[kMaxEFlowPhoton];   //[EFlowPhoton_]
   UInt_t          EFlowPhoton_subdetectorEnergies_end[kMaxEFlowPhoton];   //[EFlowPhoton_]
   UInt_t          EFlowPhoton_clusters_begin[kMaxEFlowPhoton];   //[EFlowPhoton_]
   UInt_t          EFlowPhoton_clusters_end[kMaxEFlowPhoton];   //[EFlowPhoton_]
   UInt_t          EFlowPhoton_hits_begin[kMaxEFlowPhoton];   //[EFlowPhoton_]
   UInt_t          EFlowPhoton_hits_end[kMaxEFlowPhoton];   //[EFlowPhoton_]
   UInt_t          EFlowPhoton_particleIDs_begin[kMaxEFlowPhoton];   //[EFlowPhoton_]
   UInt_t          EFlowPhoton_particleIDs_end[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Int_t           _EFlowPhoton_clusters_;
   Int_t           _EFlowPhoton_clusters_index[kMax_EFlowPhoton_clusters];   //[_EFlowPhoton_clusters_]
   UInt_t          _EFlowPhoton_clusters_collectionID[kMax_EFlowPhoton_clusters];   //[_EFlowPhoton_clusters_]
   Int_t           _EFlowPhoton_hits_;
   Int_t           _EFlowPhoton_hits_index[kMax_EFlowPhoton_hits];   //[_EFlowPhoton_hits_]
   UInt_t          _EFlowPhoton_hits_collectionID[kMax_EFlowPhoton_hits];   //[_EFlowPhoton_hits_]
   Int_t           _EFlowPhoton_particleIDs_;
   Int_t           _EFlowPhoton_particleIDs_index[kMax_EFlowPhoton_particleIDs];   //[_EFlowPhoton_particleIDs_]
   UInt_t          _EFlowPhoton_particleIDs_collectionID[kMax_EFlowPhoton_particleIDs];   //[_EFlowPhoton_particleIDs_]
   vector<float>   *_EFlowPhoton_shapeParameters;
   vector<float>   *_EFlowPhoton_subdetectorEnergies;
   Int_t           EFlowTrack_;
   Int_t           EFlowTrack_type[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_chi2[kMaxEFlowTrack];   //[EFlowTrack_]
   Int_t           EFlowTrack_ndf[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_dEdx[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_dEdxError[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_radiusOfInnermostHit[kMaxEFlowTrack];   //[EFlowTrack_]
   UInt_t          EFlowTrack_subdetectorHitNumbers_begin[kMaxEFlowTrack];   //[EFlowTrack_]
   UInt_t          EFlowTrack_subdetectorHitNumbers_end[kMaxEFlowTrack];   //[EFlowTrack_]
   UInt_t          EFlowTrack_trackStates_begin[kMaxEFlowTrack];   //[EFlowTrack_]
   UInt_t          EFlowTrack_trackStates_end[kMaxEFlowTrack];   //[EFlowTrack_]
   UInt_t          EFlowTrack_dxQuantities_begin[kMaxEFlowTrack];   //[EFlowTrack_]
   UInt_t          EFlowTrack_dxQuantities_end[kMaxEFlowTrack];   //[EFlowTrack_]
   UInt_t          EFlowTrack_trackerHits_begin[kMaxEFlowTrack];   //[EFlowTrack_]
   UInt_t          EFlowTrack_trackerHits_end[kMaxEFlowTrack];   //[EFlowTrack_]
   UInt_t          EFlowTrack_tracks_begin[kMaxEFlowTrack];   //[EFlowTrack_]
   UInt_t          EFlowTrack_tracks_end[kMaxEFlowTrack];   //[EFlowTrack_]
   Int_t           _EFlowTrack_trackerHits_;
   Int_t           _EFlowTrack_trackerHits_index[kMax_EFlowTrack_trackerHits];   //[_EFlowTrack_trackerHits_]
   UInt_t          _EFlowTrack_trackerHits_collectionID[kMax_EFlowTrack_trackerHits];   //[_EFlowTrack_trackerHits_]
   Int_t           _EFlowTrack_tracks_;
   Int_t           _EFlowTrack_tracks_index[kMax_EFlowTrack_tracks];   //[_EFlowTrack_tracks_]
   UInt_t          _EFlowTrack_tracks_collectionID[kMax_EFlowTrack_tracks];   //[_EFlowTrack_tracks_]
   vector<int>     *_EFlowTrack_subdetectorHitNumbers;
   Int_t           _EFlowTrack_trackStates_;
   Int_t           _EFlowTrack_trackStates_location[kMax_EFlowTrack_trackStates];   //[_EFlowTrack_trackStates_]
   Float_t         _EFlowTrack_trackStates_D0[kMax_EFlowTrack_trackStates];   //[_EFlowTrack_trackStates_]
   Float_t         _EFlowTrack_trackStates_phi[kMax_EFlowTrack_trackStates];   //[_EFlowTrack_trackStates_]
   Float_t         _EFlowTrack_trackStates_omega[kMax_EFlowTrack_trackStates];   //[_EFlowTrack_trackStates_]
   Float_t         _EFlowTrack_trackStates_Z0[kMax_EFlowTrack_trackStates];   //[_EFlowTrack_trackStates_]
   Float_t         _EFlowTrack_trackStates_tanLambda[kMax_EFlowTrack_trackStates];   //[_EFlowTrack_trackStates_]
   Float_t         _EFlowTrack_trackStates_time[kMax_EFlowTrack_trackStates];   //[_EFlowTrack_trackStates_]
   Float_t         _EFlowTrack_trackStates_referencePoint_x[kMax_EFlowTrack_trackStates];   //[_EFlowTrack_trackStates_]
   Float_t         _EFlowTrack_trackStates_referencePoint_y[kMax_EFlowTrack_trackStates];   //[_EFlowTrack_trackStates_]
   Float_t         _EFlowTrack_trackStates_referencePoint_z[kMax_EFlowTrack_trackStates];   //[_EFlowTrack_trackStates_]
   Float_t         _EFlowTrack_trackStates_covMatrix[kMax_EFlowTrack_trackStates][21];   //[_EFlowTrack_trackStates_]
   Int_t           _EFlowTrack_dxQuantities_;
   Short_t         _EFlowTrack_dxQuantities_type[kMax_EFlowTrack_dxQuantities];   //[_EFlowTrack_dxQuantities_]
   Float_t         _EFlowTrack_dxQuantities_value[kMax_EFlowTrack_dxQuantities];   //[_EFlowTrack_dxQuantities_]
   Float_t         _EFlowTrack_dxQuantities_error[kMax_EFlowTrack_dxQuantities];   //[_EFlowTrack_dxQuantities_]
   vector<float>   *EFlowTrack_L;
   Int_t           Electron_objIdx_;
   Int_t           Electron_objIdx_index[kMaxElectron_objIdx];   //[Electron_objIdx_]
   UInt_t          Electron_objIdx_collectionID[kMaxElectron_objIdx];   //[Electron_objIdx_]
   vector<float>   *Electron_IsolationVar;
   Int_t           EventHeader_;
   Int_t           EventHeader_eventNumber[kMaxEventHeader];   //[EventHeader_]
   Int_t           EventHeader_runNumber[kMaxEventHeader];   //[EventHeader_]
   ULong_t         EventHeader_timeStamp[kMaxEventHeader];   //[EventHeader_]
   Float_t         EventHeader_weight[kMaxEventHeader];   //[EventHeader_]
   Int_t           Jet_;
   Int_t           Jet_type[kMaxJet];   //[Jet_]
   Float_t         Jet_energy[kMaxJet];   //[Jet_]
   Float_t         Jet_momentum_x[kMaxJet];   //[Jet_]
   Float_t         Jet_momentum_y[kMaxJet];   //[Jet_]
   Float_t         Jet_momentum_z[kMaxJet];   //[Jet_]
   Float_t         Jet_referencePoint_x[kMaxJet];   //[Jet_]
   Float_t         Jet_referencePoint_y[kMaxJet];   //[Jet_]
   Float_t         Jet_referencePoint_z[kMaxJet];   //[Jet_]
   Float_t         Jet_charge[kMaxJet];   //[Jet_]
   Float_t         Jet_mass[kMaxJet];   //[Jet_]
   Float_t         Jet_goodnessOfPID[kMaxJet];   //[Jet_]
   Float_t         Jet_covMatrix[kMaxJet][10];   //[Jet_]
   UInt_t          Jet_clusters_begin[kMaxJet];   //[Jet_]
   UInt_t          Jet_clusters_end[kMaxJet];   //[Jet_]
   UInt_t          Jet_tracks_begin[kMaxJet];   //[Jet_]
   UInt_t          Jet_tracks_end[kMaxJet];   //[Jet_]
   UInt_t          Jet_particles_begin[kMaxJet];   //[Jet_]
   UInt_t          Jet_particles_end[kMaxJet];   //[Jet_]
   UInt_t          Jet_particleIDs_begin[kMaxJet];   //[Jet_]
   UInt_t          Jet_particleIDs_end[kMaxJet];   //[Jet_]
   Int_t           _Jet_clusters_;
   Int_t           _Jet_clusters_index[kMax_Jet_clusters];   //[_Jet_clusters_]
   UInt_t          _Jet_clusters_collectionID[kMax_Jet_clusters];   //[_Jet_clusters_]
   Int_t           _Jet_tracks_;
   Int_t           _Jet_tracks_index[kMax_Jet_tracks];   //[_Jet_tracks_]
   UInt_t          _Jet_tracks_collectionID[kMax_Jet_tracks];   //[_Jet_tracks_]
   Int_t           _Jet_particles_;
   Int_t           _Jet_particles_index[kMax_Jet_particles];   //[_Jet_particles_]
   UInt_t          _Jet_particles_collectionID[kMax_Jet_particles];   //[_Jet_particles_]
   Int_t           _Jet_particleIDs_;
   Int_t           _Jet_particleIDs_index[kMax_Jet_particleIDs];   //[_Jet_particleIDs_]
   UInt_t          _Jet_particleIDs_collectionID[kMax_Jet_particleIDs];   //[_Jet_particleIDs_]
   Int_t           _Jet_startVertex_;
   Int_t           _Jet_startVertex_index[kMax_Jet_startVertex];   //[_Jet_startVertex_]
   UInt_t          _Jet_startVertex_collectionID[kMax_Jet_startVertex];   //[_Jet_startVertex_]
   Int_t           _Jet_particleIDUsed_;
   Int_t           _Jet_particleIDUsed_index[kMax_Jet_particleIDUsed];   //[_Jet_particleIDUsed_]
   UInt_t          _Jet_particleIDUsed_collectionID[kMax_Jet_particleIDUsed];   //[_Jet_particleIDUsed_]
   vector<float>   *magFieldBz;
   Int_t           MCRecoAssociations_;
   Float_t         MCRecoAssociations_weight[kMaxMCRecoAssociations];   //[MCRecoAssociations_]
   Int_t           _MCRecoAssociations_rec_;
   Int_t           _MCRecoAssociations_rec_index[kMax_MCRecoAssociations_rec];   //[_MCRecoAssociations_rec_]
   UInt_t          _MCRecoAssociations_rec_collectionID[kMax_MCRecoAssociations_rec];   //[_MCRecoAssociations_rec_]
   Int_t           _MCRecoAssociations_sim_;
   Int_t           _MCRecoAssociations_sim_index[kMax_MCRecoAssociations_sim];   //[_MCRecoAssociations_sim_]
   UInt_t          _MCRecoAssociations_sim_collectionID[kMax_MCRecoAssociations_sim];   //[_MCRecoAssociations_sim_]
   Int_t           Muon_objIdx_;
   Int_t           Muon_objIdx_index[kMaxMuon_objIdx];   //[Muon_objIdx_]
   UInt_t          Muon_objIdx_collectionID[kMaxMuon_objIdx];   //[Muon_objIdx_]
   vector<float>   *Muon_IsolationVar;
   Int_t           Particle_;
   Int_t           Particle_PDG[kMaxParticle];   //[Particle_]
   Int_t           Particle_generatorStatus[kMaxParticle];   //[Particle_]
   Int_t           Particle_simulatorStatus[kMaxParticle];   //[Particle_]
   Float_t         Particle_charge[kMaxParticle];   //[Particle_]
   Float_t         Particle_time[kMaxParticle];   //[Particle_]
   Double_t        Particle_mass[kMaxParticle];   //[Particle_]
   Double_t        Particle_vertex_x[kMaxParticle];   //[Particle_]
   Double_t        Particle_vertex_y[kMaxParticle];   //[Particle_]
   Double_t        Particle_vertex_z[kMaxParticle];   //[Particle_]
   Double_t        Particle_endpoint_x[kMaxParticle];   //[Particle_]
   Double_t        Particle_endpoint_y[kMaxParticle];   //[Particle_]
   Double_t        Particle_endpoint_z[kMaxParticle];   //[Particle_]
   Float_t         Particle_momentum_x[kMaxParticle];   //[Particle_]
   Float_t         Particle_momentum_y[kMaxParticle];   //[Particle_]
   Float_t         Particle_momentum_z[kMaxParticle];   //[Particle_]
   Float_t         Particle_momentumAtEndpoint_x[kMaxParticle];   //[Particle_]
   Float_t         Particle_momentumAtEndpoint_y[kMaxParticle];   //[Particle_]
   Float_t         Particle_momentumAtEndpoint_z[kMaxParticle];   //[Particle_]
   Float_t         Particle_spin_x[kMaxParticle];   //[Particle_]
   Float_t         Particle_spin_y[kMaxParticle];   //[Particle_]
   Float_t         Particle_spin_z[kMaxParticle];   //[Particle_]
   Int_t           Particle_colorFlow_a[kMaxParticle];   //[Particle_]
   Int_t           Particle_colorFlow_b[kMaxParticle];   //[Particle_]
   UInt_t          Particle_parents_begin[kMaxParticle];   //[Particle_]
   UInt_t          Particle_parents_end[kMaxParticle];   //[Particle_]
   UInt_t          Particle_daughters_begin[kMaxParticle];   //[Particle_]
   UInt_t          Particle_daughters_end[kMaxParticle];   //[Particle_]
   Int_t           _Particle_parents_;
   Int_t           _Particle_parents_index[kMax_Particle_parents];   //[_Particle_parents_]
   UInt_t          _Particle_parents_collectionID[kMax_Particle_parents];   //[_Particle_parents_]
   Int_t           _Particle_daughters_;
   Int_t           _Particle_daughters_index[kMax_Particle_daughters];   //[_Particle_daughters_]
   UInt_t          _Particle_daughters_collectionID[kMax_Particle_daughters];   //[_Particle_daughters_]
   Int_t           ParticleIDs_;
   Int_t           ParticleIDs_type[kMaxParticleIDs];   //[ParticleIDs_]
   Int_t           ParticleIDs_PDG[kMaxParticleIDs];   //[ParticleIDs_]
   Int_t           ParticleIDs_algorithmType[kMaxParticleIDs];   //[ParticleIDs_]
   Float_t         ParticleIDs_likelihood[kMaxParticleIDs];   //[ParticleIDs_]
   UInt_t          ParticleIDs_parameters_begin[kMaxParticleIDs];   //[ParticleIDs_]
   UInt_t          ParticleIDs_parameters_end[kMaxParticleIDs];   //[ParticleIDs_]
   vector<float>   *_ParticleIDs_parameters;
   Int_t           Photon_objIdx_;
   Int_t           Photon_objIdx_index[kMaxPhoton_objIdx];   //[Photon_objIdx_]
   UInt_t          Photon_objIdx_collectionID[kMaxPhoton_objIdx];   //[Photon_objIdx_]
   vector<float>   *Photon_IsolationVar;
   Int_t           ReconstructedParticles_;
   Int_t           ReconstructedParticles_type[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_energy[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_momentum_x[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_momentum_y[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_momentum_z[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_referencePoint_x[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_referencePoint_y[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_referencePoint_z[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_charge[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_mass[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_goodnessOfPID[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Float_t         ReconstructedParticles_covMatrix[kMaxReconstructedParticles][10];   //[ReconstructedParticles_]
   UInt_t          ReconstructedParticles_clusters_begin[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   UInt_t          ReconstructedParticles_clusters_end[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   UInt_t          ReconstructedParticles_tracks_begin[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   UInt_t          ReconstructedParticles_tracks_end[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   UInt_t          ReconstructedParticles_particles_begin[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   UInt_t          ReconstructedParticles_particles_end[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   UInt_t          ReconstructedParticles_particleIDs_begin[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   UInt_t          ReconstructedParticles_particleIDs_end[kMaxReconstructedParticles];   //[ReconstructedParticles_]
   Int_t           _ReconstructedParticles_clusters_;
   Int_t           _ReconstructedParticles_clusters_index[kMax_ReconstructedParticles_clusters];   //[_ReconstructedParticles_clusters_]
   UInt_t          _ReconstructedParticles_clusters_collectionID[kMax_ReconstructedParticles_clusters];   //[_ReconstructedParticles_clusters_]
   Int_t           _ReconstructedParticles_tracks_;
   Int_t           _ReconstructedParticles_tracks_index[kMax_ReconstructedParticles_tracks];   //[_ReconstructedParticles_tracks_]
   UInt_t          _ReconstructedParticles_tracks_collectionID[kMax_ReconstructedParticles_tracks];   //[_ReconstructedParticles_tracks_]
   Int_t           _ReconstructedParticles_particles_;
   Int_t           _ReconstructedParticles_particles_index[kMax_ReconstructedParticles_particles];   //[_ReconstructedParticles_particles_]
   UInt_t          _ReconstructedParticles_particles_collectionID[kMax_ReconstructedParticles_particles];   //[_ReconstructedParticles_particles_]
   Int_t           _ReconstructedParticles_particleIDs_;
   Int_t           _ReconstructedParticles_particleIDs_index[kMax_ReconstructedParticles_particleIDs];   //[_ReconstructedParticles_particleIDs_]
   UInt_t          _ReconstructedParticles_particleIDs_collectionID[kMax_ReconstructedParticles_particleIDs];   //[_ReconstructedParticles_particleIDs_]
   Int_t           _ReconstructedParticles_startVertex_;
   Int_t           _ReconstructedParticles_startVertex_index[kMax_ReconstructedParticles_startVertex];   //[_ReconstructedParticles_startVertex_]
   UInt_t          _ReconstructedParticles_startVertex_collectionID[kMax_ReconstructedParticles_startVertex];   //[_ReconstructedParticles_startVertex_]
   Int_t           _ReconstructedParticles_particleIDUsed_;
   Int_t           _ReconstructedParticles_particleIDUsed_index[kMax_ReconstructedParticles_particleIDUsed];   //[_ReconstructedParticles_particleIDUsed_]
   UInt_t          _ReconstructedParticles_particleIDUsed_collectionID[kMax_ReconstructedParticles_particleIDUsed];   //[_ReconstructedParticles_particleIDUsed_]
   Int_t           TrackerHits_;
   ULong_t         TrackerHits_cellID[kMaxTrackerHits];   //[TrackerHits_]
   Int_t           TrackerHits_type[kMaxTrackerHits];   //[TrackerHits_]
   Int_t           TrackerHits_quality[kMaxTrackerHits];   //[TrackerHits_]
   Float_t         TrackerHits_time[kMaxTrackerHits];   //[TrackerHits_]
   Float_t         TrackerHits_eDep[kMaxTrackerHits];   //[TrackerHits_]
   Float_t         TrackerHits_eDepError[kMaxTrackerHits];   //[TrackerHits_]
   Double_t        TrackerHits_position_x[kMaxTrackerHits];   //[TrackerHits_]
   Double_t        TrackerHits_position_y[kMaxTrackerHits];   //[TrackerHits_]
   Double_t        TrackerHits_position_z[kMaxTrackerHits];   //[TrackerHits_]
   Float_t         TrackerHits_covMatrix[kMaxTrackerHits][6];   //[TrackerHits_]
   UInt_t          TrackerHits_rawHits_begin[kMaxTrackerHits];   //[TrackerHits_]
   UInt_t          TrackerHits_rawHits_end[kMaxTrackerHits];   //[TrackerHits_]
   Int_t           _TrackerHits_rawHits_;
   Int_t           _TrackerHits_rawHits_index[kMax_TrackerHits_rawHits];   //[_TrackerHits_rawHits_]
   Int_t           _TrackerHits_rawHits_collectionID[kMax_TrackerHits_rawHits];   //[_TrackerHits_rawHits_]
 //podio::GenericParameters *PARAMETERS;
   Int_t           _intMap_;
   string          _intMap_first[kMax_intMap];
   vector<int>     _intMap_second[kMax_intMap];
   Int_t           _floatMap_;
   string          _floatMap_first[kMax_floatMap];
   vector<float>   _floatMap_second[kMax_floatMap];
   Int_t           _stringMap_;
   string          _stringMap_first[kMax_stringMap];
   vector<string>  _stringMap_second[kMax_stringMap];
   Int_t           _doubleMap_;
   string          _doubleMap_first[kMax_doubleMap];
   vector<double>  _doubleMap_second[kMax_doubleMap];

   // List of branches
   TBranch        *b_CalorimeterHits_;   //!
   TBranch        *b_CalorimeterHits_cellID;   //!
   TBranch        *b_CalorimeterHits_energy;   //!
   TBranch        *b_CalorimeterHits_energyError;   //!
   TBranch        *b_CalorimeterHits_time;   //!
   TBranch        *b_CalorimeterHits_position_x;   //!
   TBranch        *b_CalorimeterHits_position_y;   //!
   TBranch        *b_CalorimeterHits_position_z;   //!
   TBranch        *b_CalorimeterHits_type;   //!
   TBranch        *b_EFlowNeutralHadron_;   //!
   TBranch        *b_EFlowNeutralHadron_type;   //!
   TBranch        *b_EFlowNeutralHadron_energy;   //!
   TBranch        *b_EFlowNeutralHadron_energyError;   //!
   TBranch        *b_EFlowNeutralHadron_position_x;   //!
   TBranch        *b_EFlowNeutralHadron_position_y;   //!
   TBranch        *b_EFlowNeutralHadron_position_z;   //!
   TBranch        *b_EFlowNeutralHadron_positionError;   //!
   TBranch        *b_EFlowNeutralHadron_iTheta;   //!
   TBranch        *b_EFlowNeutralHadron_phi;   //!
   TBranch        *b_EFlowNeutralHadron_directionError_x;   //!
   TBranch        *b_EFlowNeutralHadron_directionError_y;   //!
   TBranch        *b_EFlowNeutralHadron_directionError_z;   //!
   TBranch        *b_EFlowNeutralHadron_shapeParameters_begin;   //!
   TBranch        *b_EFlowNeutralHadron_shapeParameters_end;   //!
   TBranch        *b_EFlowNeutralHadron_subdetectorEnergies_begin;   //!
   TBranch        *b_EFlowNeutralHadron_subdetectorEnergies_end;   //!
   TBranch        *b_EFlowNeutralHadron_clusters_begin;   //!
   TBranch        *b_EFlowNeutralHadron_clusters_end;   //!
   TBranch        *b_EFlowNeutralHadron_hits_begin;   //!
   TBranch        *b_EFlowNeutralHadron_hits_end;   //!
   TBranch        *b_EFlowNeutralHadron_particleIDs_begin;   //!
   TBranch        *b_EFlowNeutralHadron_particleIDs_end;   //!
   TBranch        *b__EFlowNeutralHadron_clusters_;   //!
   TBranch        *b__EFlowNeutralHadron_clusters_index;   //!
   TBranch        *b__EFlowNeutralHadron_clusters_collectionID;   //!
   TBranch        *b__EFlowNeutralHadron_hits_;   //!
   TBranch        *b__EFlowNeutralHadron_hits_index;   //!
   TBranch        *b__EFlowNeutralHadron_hits_collectionID;   //!
   TBranch        *b__EFlowNeutralHadron_particleIDs_;   //!
   TBranch        *b__EFlowNeutralHadron_particleIDs_index;   //!
   TBranch        *b__EFlowNeutralHadron_particleIDs_collectionID;   //!
   TBranch        *b__EFlowNeutralHadron_shapeParameters;   //!
   TBranch        *b__EFlowNeutralHadron_subdetectorEnergies;   //!
   TBranch        *b_EFlowPhoton_;   //!
   TBranch        *b_EFlowPhoton_type;   //!
   TBranch        *b_EFlowPhoton_energy;   //!
   TBranch        *b_EFlowPhoton_energyError;   //!
   TBranch        *b_EFlowPhoton_position_x;   //!
   TBranch        *b_EFlowPhoton_position_y;   //!
   TBranch        *b_EFlowPhoton_position_z;   //!
   TBranch        *b_EFlowPhoton_positionError;   //!
   TBranch        *b_EFlowPhoton_iTheta;   //!
   TBranch        *b_EFlowPhoton_phi;   //!
   TBranch        *b_EFlowPhoton_directionError_x;   //!
   TBranch        *b_EFlowPhoton_directionError_y;   //!
   TBranch        *b_EFlowPhoton_directionError_z;   //!
   TBranch        *b_EFlowPhoton_shapeParameters_begin;   //!
   TBranch        *b_EFlowPhoton_shapeParameters_end;   //!
   TBranch        *b_EFlowPhoton_subdetectorEnergies_begin;   //!
   TBranch        *b_EFlowPhoton_subdetectorEnergies_end;   //!
   TBranch        *b_EFlowPhoton_clusters_begin;   //!
   TBranch        *b_EFlowPhoton_clusters_end;   //!
   TBranch        *b_EFlowPhoton_hits_begin;   //!
   TBranch        *b_EFlowPhoton_hits_end;   //!
   TBranch        *b_EFlowPhoton_particleIDs_begin;   //!
   TBranch        *b_EFlowPhoton_particleIDs_end;   //!
   TBranch        *b__EFlowPhoton_clusters_;   //!
   TBranch        *b__EFlowPhoton_clusters_index;   //!
   TBranch        *b__EFlowPhoton_clusters_collectionID;   //!
   TBranch        *b__EFlowPhoton_hits_;   //!
   TBranch        *b__EFlowPhoton_hits_index;   //!
   TBranch        *b__EFlowPhoton_hits_collectionID;   //!
   TBranch        *b__EFlowPhoton_particleIDs_;   //!
   TBranch        *b__EFlowPhoton_particleIDs_index;   //!
   TBranch        *b__EFlowPhoton_particleIDs_collectionID;   //!
   TBranch        *b__EFlowPhoton_shapeParameters;   //!
   TBranch        *b__EFlowPhoton_subdetectorEnergies;   //!
   TBranch        *b_EFlowTrack_;   //!
   TBranch        *b_EFlowTrack_type;   //!
   TBranch        *b_EFlowTrack_chi2;   //!
   TBranch        *b_EFlowTrack_ndf;   //!
   TBranch        *b_EFlowTrack_dEdx;   //!
   TBranch        *b_EFlowTrack_dEdxError;   //!
   TBranch        *b_EFlowTrack_radiusOfInnermostHit;   //!
   TBranch        *b_EFlowTrack_subdetectorHitNumbers_begin;   //!
   TBranch        *b_EFlowTrack_subdetectorHitNumbers_end;   //!
   TBranch        *b_EFlowTrack_trackStates_begin;   //!
   TBranch        *b_EFlowTrack_trackStates_end;   //!
   TBranch        *b_EFlowTrack_dxQuantities_begin;   //!
   TBranch        *b_EFlowTrack_dxQuantities_end;   //!
   TBranch        *b_EFlowTrack_trackerHits_begin;   //!
   TBranch        *b_EFlowTrack_trackerHits_end;   //!
   TBranch        *b_EFlowTrack_tracks_begin;   //!
   TBranch        *b_EFlowTrack_tracks_end;   //!
   TBranch        *b__EFlowTrack_trackerHits_;   //!
   TBranch        *b__EFlowTrack_trackerHits_index;   //!
   TBranch        *b__EFlowTrack_trackerHits_collectionID;   //!
   TBranch        *b__EFlowTrack_tracks_;   //!
   TBranch        *b__EFlowTrack_tracks_index;   //!
   TBranch        *b__EFlowTrack_tracks_collectionID;   //!
   TBranch        *b__EFlowTrack_subdetectorHitNumbers;   //!
   TBranch        *b__EFlowTrack_trackStates_;   //!
   TBranch        *b__EFlowTrack_trackStates_location;   //!
   TBranch        *b__EFlowTrack_trackStates_D0;   //!
   TBranch        *b__EFlowTrack_trackStates_phi;   //!
   TBranch        *b__EFlowTrack_trackStates_omega;   //!
   TBranch        *b__EFlowTrack_trackStates_Z0;   //!
   TBranch        *b__EFlowTrack_trackStates_tanLambda;   //!
   TBranch        *b__EFlowTrack_trackStates_time;   //!
   TBranch        *b__EFlowTrack_trackStates_referencePoint_x;   //!
   TBranch        *b__EFlowTrack_trackStates_referencePoint_y;   //!
   TBranch        *b__EFlowTrack_trackStates_referencePoint_z;   //!
   TBranch        *b__EFlowTrack_trackStates_covMatrix;   //!
   TBranch        *b__EFlowTrack_dxQuantities_;   //!
   TBranch        *b__EFlowTrack_dxQuantities_type;   //!
   TBranch        *b__EFlowTrack_dxQuantities_value;   //!
   TBranch        *b__EFlowTrack_dxQuantities_error;   //!
   TBranch        *b_EFlowTrack_L;   //!
   TBranch        *b_Electron_objIdx_;   //!
   TBranch        *b_Electron_objIdx_index;   //!
   TBranch        *b_Electron_objIdx_collectionID;   //!
   TBranch        *b_Electron_IsolationVar;   //!
   TBranch        *b_EventHeader_;   //!
   TBranch        *b_EventHeader_eventNumber;   //!
   TBranch        *b_EventHeader_runNumber;   //!
   TBranch        *b_EventHeader_timeStamp;   //!
   TBranch        *b_EventHeader_weight;   //!
   TBranch        *b_Jet_;   //!
   TBranch        *b_Jet_type;   //!
   TBranch        *b_Jet_energy;   //!
   TBranch        *b_Jet_momentum_x;   //!
   TBranch        *b_Jet_momentum_y;   //!
   TBranch        *b_Jet_momentum_z;   //!
   TBranch        *b_Jet_referencePoint_x;   //!
   TBranch        *b_Jet_referencePoint_y;   //!
   TBranch        *b_Jet_referencePoint_z;   //!
   TBranch        *b_Jet_charge;   //!
   TBranch        *b_Jet_mass;   //!
   TBranch        *b_Jet_goodnessOfPID;   //!
   TBranch        *b_Jet_covMatrix;   //!
   TBranch        *b_Jet_clusters_begin;   //!
   TBranch        *b_Jet_clusters_end;   //!
   TBranch        *b_Jet_tracks_begin;   //!
   TBranch        *b_Jet_tracks_end;   //!
   TBranch        *b_Jet_particles_begin;   //!
   TBranch        *b_Jet_particles_end;   //!
   TBranch        *b_Jet_particleIDs_begin;   //!
   TBranch        *b_Jet_particleIDs_end;   //!
   TBranch        *b__Jet_clusters_;   //!
   TBranch        *b__Jet_clusters_index;   //!
   TBranch        *b__Jet_clusters_collectionID;   //!
   TBranch        *b__Jet_tracks_;   //!
   TBranch        *b__Jet_tracks_index;   //!
   TBranch        *b__Jet_tracks_collectionID;   //!
   TBranch        *b__Jet_particles_;   //!
   TBranch        *b__Jet_particles_index;   //!
   TBranch        *b__Jet_particles_collectionID;   //!
   TBranch        *b__Jet_particleIDs_;   //!
   TBranch        *b__Jet_particleIDs_index;   //!
   TBranch        *b__Jet_particleIDs_collectionID;   //!
   TBranch        *b__Jet_startVertex_;   //!
   TBranch        *b__Jet_startVertex_index;   //!
   TBranch        *b__Jet_startVertex_collectionID;   //!
   TBranch        *b__Jet_particleIDUsed_;   //!
   TBranch        *b__Jet_particleIDUsed_index;   //!
   TBranch        *b__Jet_particleIDUsed_collectionID;   //!
   TBranch        *b_magFieldBz;   //!
   TBranch        *b_MCRecoAssociations_;   //!
   TBranch        *b_MCRecoAssociations_weight;   //!
   TBranch        *b__MCRecoAssociations_rec_;   //!
   TBranch        *b__MCRecoAssociations_rec_index;   //!
   TBranch        *b__MCRecoAssociations_rec_collectionID;   //!
   TBranch        *b__MCRecoAssociations_sim_;   //!
   TBranch        *b__MCRecoAssociations_sim_index;   //!
   TBranch        *b__MCRecoAssociations_sim_collectionID;   //!
   TBranch        *b_Muon_objIdx_;   //!
   TBranch        *b_Muon_objIdx_index;   //!
   TBranch        *b_Muon_objIdx_collectionID;   //!
   TBranch        *b_Muon_IsolationVar;   //!
   TBranch        *b_Particle_;   //!
   TBranch        *b_Particle_PDG;   //!
   TBranch        *b_Particle_generatorStatus;   //!
   TBranch        *b_Particle_simulatorStatus;   //!
   TBranch        *b_Particle_charge;   //!
   TBranch        *b_Particle_time;   //!
   TBranch        *b_Particle_mass;   //!
   TBranch        *b_Particle_vertex_x;   //!
   TBranch        *b_Particle_vertex_y;   //!
   TBranch        *b_Particle_vertex_z;   //!
   TBranch        *b_Particle_endpoint_x;   //!
   TBranch        *b_Particle_endpoint_y;   //!
   TBranch        *b_Particle_endpoint_z;   //!
   TBranch        *b_Particle_momentum_x;   //!
   TBranch        *b_Particle_momentum_y;   //!
   TBranch        *b_Particle_momentum_z;   //!
   TBranch        *b_Particle_momentumAtEndpoint_x;   //!
   TBranch        *b_Particle_momentumAtEndpoint_y;   //!
   TBranch        *b_Particle_momentumAtEndpoint_z;   //!
   TBranch        *b_Particle_spin_x;   //!
   TBranch        *b_Particle_spin_y;   //!
   TBranch        *b_Particle_spin_z;   //!
   TBranch        *b_Particle_colorFlow_a;   //!
   TBranch        *b_Particle_colorFlow_b;   //!
   TBranch        *b_Particle_parents_begin;   //!
   TBranch        *b_Particle_parents_end;   //!
   TBranch        *b_Particle_daughters_begin;   //!
   TBranch        *b_Particle_daughters_end;   //!
   TBranch        *b__Particle_parents_;   //!
   TBranch        *b__Particle_parents_index;   //!
   TBranch        *b__Particle_parents_collectionID;   //!
   TBranch        *b__Particle_daughters_;   //!
   TBranch        *b__Particle_daughters_index;   //!
   TBranch        *b__Particle_daughters_collectionID;   //!
   TBranch        *b_ParticleIDs_;   //!
   TBranch        *b_ParticleIDs_type;   //!
   TBranch        *b_ParticleIDs_PDG;   //!
   TBranch        *b_ParticleIDs_algorithmType;   //!
   TBranch        *b_ParticleIDs_likelihood;   //!
   TBranch        *b_ParticleIDs_parameters_begin;   //!
   TBranch        *b_ParticleIDs_parameters_end;   //!
   TBranch        *b__ParticleIDs_parameters;   //!
   TBranch        *b_Photon_objIdx_;   //!
   TBranch        *b_Photon_objIdx_index;   //!
   TBranch        *b_Photon_objIdx_collectionID;   //!
   TBranch        *b_Photon_IsolationVar;   //!
   TBranch        *b_ReconstructedParticles_;   //!
   TBranch        *b_ReconstructedParticles_type;   //!
   TBranch        *b_ReconstructedParticles_energy;   //!
   TBranch        *b_ReconstructedParticles_momentum_x;   //!
   TBranch        *b_ReconstructedParticles_momentum_y;   //!
   TBranch        *b_ReconstructedParticles_momentum_z;   //!
   TBranch        *b_ReconstructedParticles_referencePoint_x;   //!
   TBranch        *b_ReconstructedParticles_referencePoint_y;   //!
   TBranch        *b_ReconstructedParticles_referencePoint_z;   //!
   TBranch        *b_ReconstructedParticles_charge;   //!
   TBranch        *b_ReconstructedParticles_mass;   //!
   TBranch        *b_ReconstructedParticles_goodnessOfPID;   //!
   TBranch        *b_ReconstructedParticles_covMatrix;   //!
   TBranch        *b_ReconstructedParticles_clusters_begin;   //!
   TBranch        *b_ReconstructedParticles_clusters_end;   //!
   TBranch        *b_ReconstructedParticles_tracks_begin;   //!
   TBranch        *b_ReconstructedParticles_tracks_end;   //!
   TBranch        *b_ReconstructedParticles_particles_begin;   //!
   TBranch        *b_ReconstructedParticles_particles_end;   //!
   TBranch        *b_ReconstructedParticles_particleIDs_begin;   //!
   TBranch        *b_ReconstructedParticles_particleIDs_end;   //!
   TBranch        *b__ReconstructedParticles_clusters_;   //!
   TBranch        *b__ReconstructedParticles_clusters_index;   //!
   TBranch        *b__ReconstructedParticles_clusters_collectionID;   //!
   TBranch        *b__ReconstructedParticles_tracks_;   //!
   TBranch        *b__ReconstructedParticles_tracks_index;   //!
   TBranch        *b__ReconstructedParticles_tracks_collectionID;   //!
   TBranch        *b__ReconstructedParticles_particles_;   //!
   TBranch        *b__ReconstructedParticles_particles_index;   //!
   TBranch        *b__ReconstructedParticles_particles_collectionID;   //!
   TBranch        *b__ReconstructedParticles_particleIDs_;   //!
   TBranch        *b__ReconstructedParticles_particleIDs_index;   //!
   TBranch        *b__ReconstructedParticles_particleIDs_collectionID;   //!
   TBranch        *b__ReconstructedParticles_startVertex_;   //!
   TBranch        *b__ReconstructedParticles_startVertex_index;   //!
   TBranch        *b__ReconstructedParticles_startVertex_collectionID;   //!
   TBranch        *b__ReconstructedParticles_particleIDUsed_;   //!
   TBranch        *b__ReconstructedParticles_particleIDUsed_index;   //!
   TBranch        *b__ReconstructedParticles_particleIDUsed_collectionID;   //!
   TBranch        *b_TrackerHits_;   //!
   TBranch        *b_TrackerHits_cellID;   //!
   TBranch        *b_TrackerHits_type;   //!
   TBranch        *b_TrackerHits_quality;   //!
   TBranch        *b_TrackerHits_time;   //!
   TBranch        *b_TrackerHits_eDep;   //!
   TBranch        *b_TrackerHits_eDepError;   //!
   TBranch        *b_TrackerHits_position_x;   //!
   TBranch        *b_TrackerHits_position_y;   //!
   TBranch        *b_TrackerHits_position_z;   //!
   TBranch        *b_TrackerHits_covMatrix;   //!
   TBranch        *b_TrackerHits_rawHits_begin;   //!
   TBranch        *b_TrackerHits_rawHits_end;   //!
   TBranch        *b__TrackerHits_rawHits_;   //!
   TBranch        *b__TrackerHits_rawHits_index;   //!
   TBranch        *b__TrackerHits_rawHits_collectionID;   //!
   TBranch        *b_PARAMETERS__intMap_;   //!
   TBranch        *b__intMap_first;   //!
   TBranch        *b__intMap_second;   //!
   TBranch        *b_PARAMETERS__floatMap_;   //!
   TBranch        *b__floatMap_first;   //!
   TBranch        *b__floatMap_second;   //!
   TBranch        *b_PARAMETERS__stringMap_;   //!
   TBranch        *b__stringMap_first;   //!
   TBranch        *b__stringMap_second;   //!
   TBranch        *b_PARAMETERS__doubleMap_;   //!
   TBranch        *b__doubleMap_first;   //!
   TBranch        *b__doubleMap_second;   //!

   analysis(TTree *tree=0);
   virtual ~analysis();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef analysis_cxx
analysis::analysis(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   /*
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("data/py8_ZZ_idea_1.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("data/py8_ZZ_idea_1.root");
      }
      f->GetObject("events",tree);

   }
  */

   Init(tree);
}

analysis::~analysis()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t analysis::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t analysis::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void analysis::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   _EFlowNeutralHadron_shapeParameters = 0;
   _EFlowNeutralHadron_subdetectorEnergies = 0;
   _EFlowPhoton_shapeParameters = 0;
   _EFlowPhoton_subdetectorEnergies = 0;
   _EFlowTrack_subdetectorHitNumbers = 0;
   EFlowTrack_L = 0;
   Electron_IsolationVar = 0;
   magFieldBz = 0;
   Muon_IsolationVar = 0;
   _ParticleIDs_parameters = 0;
   Photon_IsolationVar = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("CalorimeterHits", &CalorimeterHits_, &b_CalorimeterHits_);
   fChain->SetBranchAddress("CalorimeterHits.cellID", CalorimeterHits_cellID, &b_CalorimeterHits_cellID);
   fChain->SetBranchAddress("CalorimeterHits.energy", CalorimeterHits_energy, &b_CalorimeterHits_energy);
   fChain->SetBranchAddress("CalorimeterHits.energyError", CalorimeterHits_energyError, &b_CalorimeterHits_energyError);
   fChain->SetBranchAddress("CalorimeterHits.time", CalorimeterHits_time, &b_CalorimeterHits_time);
   fChain->SetBranchAddress("CalorimeterHits.position.x", CalorimeterHits_position_x, &b_CalorimeterHits_position_x);
   fChain->SetBranchAddress("CalorimeterHits.position.y", CalorimeterHits_position_y, &b_CalorimeterHits_position_y);
   fChain->SetBranchAddress("CalorimeterHits.position.z", CalorimeterHits_position_z, &b_CalorimeterHits_position_z);
   fChain->SetBranchAddress("CalorimeterHits.type", CalorimeterHits_type, &b_CalorimeterHits_type);
   fChain->SetBranchAddress("EFlowNeutralHadron", &EFlowNeutralHadron_, &b_EFlowNeutralHadron_);
   fChain->SetBranchAddress("EFlowNeutralHadron.type", EFlowNeutralHadron_type, &b_EFlowNeutralHadron_type);
   fChain->SetBranchAddress("EFlowNeutralHadron.energy", EFlowNeutralHadron_energy, &b_EFlowNeutralHadron_energy);
   fChain->SetBranchAddress("EFlowNeutralHadron.energyError", EFlowNeutralHadron_energyError, &b_EFlowNeutralHadron_energyError);
   fChain->SetBranchAddress("EFlowNeutralHadron.position.x", EFlowNeutralHadron_position_x, &b_EFlowNeutralHadron_position_x);
   fChain->SetBranchAddress("EFlowNeutralHadron.position.y", EFlowNeutralHadron_position_y, &b_EFlowNeutralHadron_position_y);
   fChain->SetBranchAddress("EFlowNeutralHadron.position.z", EFlowNeutralHadron_position_z, &b_EFlowNeutralHadron_position_z);
   fChain->SetBranchAddress("EFlowNeutralHadron.positionError[6]", EFlowNeutralHadron_positionError, &b_EFlowNeutralHadron_positionError);
   fChain->SetBranchAddress("EFlowNeutralHadron.iTheta", EFlowNeutralHadron_iTheta, &b_EFlowNeutralHadron_iTheta);
   fChain->SetBranchAddress("EFlowNeutralHadron.phi", EFlowNeutralHadron_phi, &b_EFlowNeutralHadron_phi);
   fChain->SetBranchAddress("EFlowNeutralHadron.directionError.x", EFlowNeutralHadron_directionError_x, &b_EFlowNeutralHadron_directionError_x);
   fChain->SetBranchAddress("EFlowNeutralHadron.directionError.y", EFlowNeutralHadron_directionError_y, &b_EFlowNeutralHadron_directionError_y);
   fChain->SetBranchAddress("EFlowNeutralHadron.directionError.z", EFlowNeutralHadron_directionError_z, &b_EFlowNeutralHadron_directionError_z);
   fChain->SetBranchAddress("EFlowNeutralHadron.shapeParameters_begin", EFlowNeutralHadron_shapeParameters_begin, &b_EFlowNeutralHadron_shapeParameters_begin);
   fChain->SetBranchAddress("EFlowNeutralHadron.shapeParameters_end", EFlowNeutralHadron_shapeParameters_end, &b_EFlowNeutralHadron_shapeParameters_end);
   fChain->SetBranchAddress("EFlowNeutralHadron.subdetectorEnergies_begin", EFlowNeutralHadron_subdetectorEnergies_begin, &b_EFlowNeutralHadron_subdetectorEnergies_begin);
   fChain->SetBranchAddress("EFlowNeutralHadron.subdetectorEnergies_end", EFlowNeutralHadron_subdetectorEnergies_end, &b_EFlowNeutralHadron_subdetectorEnergies_end);
   fChain->SetBranchAddress("EFlowNeutralHadron.clusters_begin", EFlowNeutralHadron_clusters_begin, &b_EFlowNeutralHadron_clusters_begin);
   fChain->SetBranchAddress("EFlowNeutralHadron.clusters_end", EFlowNeutralHadron_clusters_end, &b_EFlowNeutralHadron_clusters_end);
   fChain->SetBranchAddress("EFlowNeutralHadron.hits_begin", EFlowNeutralHadron_hits_begin, &b_EFlowNeutralHadron_hits_begin);
   fChain->SetBranchAddress("EFlowNeutralHadron.hits_end", EFlowNeutralHadron_hits_end, &b_EFlowNeutralHadron_hits_end);
   fChain->SetBranchAddress("EFlowNeutralHadron.particleIDs_begin", EFlowNeutralHadron_particleIDs_begin, &b_EFlowNeutralHadron_particleIDs_begin);
   fChain->SetBranchAddress("EFlowNeutralHadron.particleIDs_end", EFlowNeutralHadron_particleIDs_end, &b_EFlowNeutralHadron_particleIDs_end);
   fChain->SetBranchAddress("_EFlowNeutralHadron_clusters", &_EFlowNeutralHadron_clusters_, &b__EFlowNeutralHadron_clusters_);
   fChain->SetBranchAddress("_EFlowNeutralHadron_clusters.index", &_EFlowNeutralHadron_clusters_index, &b__EFlowNeutralHadron_clusters_index);
   fChain->SetBranchAddress("_EFlowNeutralHadron_clusters.collectionID", &_EFlowNeutralHadron_clusters_collectionID, &b__EFlowNeutralHadron_clusters_collectionID);
   fChain->SetBranchAddress("_EFlowNeutralHadron_hits", &_EFlowNeutralHadron_hits_, &b__EFlowNeutralHadron_hits_);
   fChain->SetBranchAddress("_EFlowNeutralHadron_hits.index", _EFlowNeutralHadron_hits_index, &b__EFlowNeutralHadron_hits_index);
   fChain->SetBranchAddress("_EFlowNeutralHadron_hits.collectionID", _EFlowNeutralHadron_hits_collectionID, &b__EFlowNeutralHadron_hits_collectionID);
   fChain->SetBranchAddress("_EFlowNeutralHadron_particleIDs", &_EFlowNeutralHadron_particleIDs_, &b__EFlowNeutralHadron_particleIDs_);
   fChain->SetBranchAddress("_EFlowNeutralHadron_particleIDs.index", &_EFlowNeutralHadron_particleIDs_index, &b__EFlowNeutralHadron_particleIDs_index);
   fChain->SetBranchAddress("_EFlowNeutralHadron_particleIDs.collectionID", &_EFlowNeutralHadron_particleIDs_collectionID, &b__EFlowNeutralHadron_particleIDs_collectionID);
   fChain->SetBranchAddress("_EFlowNeutralHadron_shapeParameters", &_EFlowNeutralHadron_shapeParameters, &b__EFlowNeutralHadron_shapeParameters);
   fChain->SetBranchAddress("_EFlowNeutralHadron_subdetectorEnergies", &_EFlowNeutralHadron_subdetectorEnergies, &b__EFlowNeutralHadron_subdetectorEnergies);
   fChain->SetBranchAddress("EFlowPhoton", &EFlowPhoton_, &b_EFlowPhoton_);
   fChain->SetBranchAddress("EFlowPhoton.type", EFlowPhoton_type, &b_EFlowPhoton_type);
   fChain->SetBranchAddress("EFlowPhoton.energy", EFlowPhoton_energy, &b_EFlowPhoton_energy);
   fChain->SetBranchAddress("EFlowPhoton.energyError", EFlowPhoton_energyError, &b_EFlowPhoton_energyError);
   fChain->SetBranchAddress("EFlowPhoton.position.x", EFlowPhoton_position_x, &b_EFlowPhoton_position_x);
   fChain->SetBranchAddress("EFlowPhoton.position.y", EFlowPhoton_position_y, &b_EFlowPhoton_position_y);
   fChain->SetBranchAddress("EFlowPhoton.position.z", EFlowPhoton_position_z, &b_EFlowPhoton_position_z);
   fChain->SetBranchAddress("EFlowPhoton.positionError[6]", EFlowPhoton_positionError, &b_EFlowPhoton_positionError);
   fChain->SetBranchAddress("EFlowPhoton.iTheta", EFlowPhoton_iTheta, &b_EFlowPhoton_iTheta);
   fChain->SetBranchAddress("EFlowPhoton.phi", EFlowPhoton_phi, &b_EFlowPhoton_phi);
   fChain->SetBranchAddress("EFlowPhoton.directionError.x", EFlowPhoton_directionError_x, &b_EFlowPhoton_directionError_x);
   fChain->SetBranchAddress("EFlowPhoton.directionError.y", EFlowPhoton_directionError_y, &b_EFlowPhoton_directionError_y);
   fChain->SetBranchAddress("EFlowPhoton.directionError.z", EFlowPhoton_directionError_z, &b_EFlowPhoton_directionError_z);
   fChain->SetBranchAddress("EFlowPhoton.shapeParameters_begin", EFlowPhoton_shapeParameters_begin, &b_EFlowPhoton_shapeParameters_begin);
   fChain->SetBranchAddress("EFlowPhoton.shapeParameters_end", EFlowPhoton_shapeParameters_end, &b_EFlowPhoton_shapeParameters_end);
   fChain->SetBranchAddress("EFlowPhoton.subdetectorEnergies_begin", EFlowPhoton_subdetectorEnergies_begin, &b_EFlowPhoton_subdetectorEnergies_begin);
   fChain->SetBranchAddress("EFlowPhoton.subdetectorEnergies_end", EFlowPhoton_subdetectorEnergies_end, &b_EFlowPhoton_subdetectorEnergies_end);
   fChain->SetBranchAddress("EFlowPhoton.clusters_begin", EFlowPhoton_clusters_begin, &b_EFlowPhoton_clusters_begin);
   fChain->SetBranchAddress("EFlowPhoton.clusters_end", EFlowPhoton_clusters_end, &b_EFlowPhoton_clusters_end);
   fChain->SetBranchAddress("EFlowPhoton.hits_begin", EFlowPhoton_hits_begin, &b_EFlowPhoton_hits_begin);
   fChain->SetBranchAddress("EFlowPhoton.hits_end", EFlowPhoton_hits_end, &b_EFlowPhoton_hits_end);
   fChain->SetBranchAddress("EFlowPhoton.particleIDs_begin", EFlowPhoton_particleIDs_begin, &b_EFlowPhoton_particleIDs_begin);
   fChain->SetBranchAddress("EFlowPhoton.particleIDs_end", EFlowPhoton_particleIDs_end, &b_EFlowPhoton_particleIDs_end);
   fChain->SetBranchAddress("_EFlowPhoton_clusters", &_EFlowPhoton_clusters_, &b__EFlowPhoton_clusters_);
   fChain->SetBranchAddress("_EFlowPhoton_clusters.index", &_EFlowPhoton_clusters_index, &b__EFlowPhoton_clusters_index);
   fChain->SetBranchAddress("_EFlowPhoton_clusters.collectionID", &_EFlowPhoton_clusters_collectionID, &b__EFlowPhoton_clusters_collectionID);
   fChain->SetBranchAddress("_EFlowPhoton_hits", &_EFlowPhoton_hits_, &b__EFlowPhoton_hits_);
   fChain->SetBranchAddress("_EFlowPhoton_hits.index", _EFlowPhoton_hits_index, &b__EFlowPhoton_hits_index);
   fChain->SetBranchAddress("_EFlowPhoton_hits.collectionID", _EFlowPhoton_hits_collectionID, &b__EFlowPhoton_hits_collectionID);
   fChain->SetBranchAddress("_EFlowPhoton_particleIDs", &_EFlowPhoton_particleIDs_, &b__EFlowPhoton_particleIDs_);
   fChain->SetBranchAddress("_EFlowPhoton_particleIDs.index", &_EFlowPhoton_particleIDs_index, &b__EFlowPhoton_particleIDs_index);
   fChain->SetBranchAddress("_EFlowPhoton_particleIDs.collectionID", &_EFlowPhoton_particleIDs_collectionID, &b__EFlowPhoton_particleIDs_collectionID);
   fChain->SetBranchAddress("_EFlowPhoton_shapeParameters", &_EFlowPhoton_shapeParameters, &b__EFlowPhoton_shapeParameters);
   fChain->SetBranchAddress("_EFlowPhoton_subdetectorEnergies", &_EFlowPhoton_subdetectorEnergies, &b__EFlowPhoton_subdetectorEnergies);
   fChain->SetBranchAddress("EFlowTrack", &EFlowTrack_, &b_EFlowTrack_);
   fChain->SetBranchAddress("EFlowTrack.type", EFlowTrack_type, &b_EFlowTrack_type);
   fChain->SetBranchAddress("EFlowTrack.chi2", EFlowTrack_chi2, &b_EFlowTrack_chi2);
   fChain->SetBranchAddress("EFlowTrack.ndf", EFlowTrack_ndf, &b_EFlowTrack_ndf);
   fChain->SetBranchAddress("EFlowTrack.dEdx", EFlowTrack_dEdx, &b_EFlowTrack_dEdx);
   fChain->SetBranchAddress("EFlowTrack.dEdxError", EFlowTrack_dEdxError, &b_EFlowTrack_dEdxError);
   fChain->SetBranchAddress("EFlowTrack.radiusOfInnermostHit", EFlowTrack_radiusOfInnermostHit, &b_EFlowTrack_radiusOfInnermostHit);
   fChain->SetBranchAddress("EFlowTrack.subdetectorHitNumbers_begin", EFlowTrack_subdetectorHitNumbers_begin, &b_EFlowTrack_subdetectorHitNumbers_begin);
   fChain->SetBranchAddress("EFlowTrack.subdetectorHitNumbers_end", EFlowTrack_subdetectorHitNumbers_end, &b_EFlowTrack_subdetectorHitNumbers_end);
   fChain->SetBranchAddress("EFlowTrack.trackStates_begin", EFlowTrack_trackStates_begin, &b_EFlowTrack_trackStates_begin);
   fChain->SetBranchAddress("EFlowTrack.trackStates_end", EFlowTrack_trackStates_end, &b_EFlowTrack_trackStates_end);
   fChain->SetBranchAddress("EFlowTrack.dxQuantities_begin", EFlowTrack_dxQuantities_begin, &b_EFlowTrack_dxQuantities_begin);
   fChain->SetBranchAddress("EFlowTrack.dxQuantities_end", EFlowTrack_dxQuantities_end, &b_EFlowTrack_dxQuantities_end);
   fChain->SetBranchAddress("EFlowTrack.trackerHits_begin", EFlowTrack_trackerHits_begin, &b_EFlowTrack_trackerHits_begin);
   fChain->SetBranchAddress("EFlowTrack.trackerHits_end", EFlowTrack_trackerHits_end, &b_EFlowTrack_trackerHits_end);
   fChain->SetBranchAddress("EFlowTrack.tracks_begin", EFlowTrack_tracks_begin, &b_EFlowTrack_tracks_begin);
   fChain->SetBranchAddress("EFlowTrack.tracks_end", EFlowTrack_tracks_end, &b_EFlowTrack_tracks_end);
   fChain->SetBranchAddress("_EFlowTrack_trackerHits", &_EFlowTrack_trackerHits_, &b__EFlowTrack_trackerHits_);
   fChain->SetBranchAddress("_EFlowTrack_trackerHits.index", _EFlowTrack_trackerHits_index, &b__EFlowTrack_trackerHits_index);
   fChain->SetBranchAddress("_EFlowTrack_trackerHits.collectionID", _EFlowTrack_trackerHits_collectionID, &b__EFlowTrack_trackerHits_collectionID);
   fChain->SetBranchAddress("_EFlowTrack_tracks", &_EFlowTrack_tracks_, &b__EFlowTrack_tracks_);
   fChain->SetBranchAddress("_EFlowTrack_tracks.index", &_EFlowTrack_tracks_index, &b__EFlowTrack_tracks_index);
   fChain->SetBranchAddress("_EFlowTrack_tracks.collectionID", &_EFlowTrack_tracks_collectionID, &b__EFlowTrack_tracks_collectionID);
   fChain->SetBranchAddress("_EFlowTrack_subdetectorHitNumbers", &_EFlowTrack_subdetectorHitNumbers, &b__EFlowTrack_subdetectorHitNumbers);
   fChain->SetBranchAddress("_EFlowTrack_trackStates", &_EFlowTrack_trackStates_, &b__EFlowTrack_trackStates_);
   fChain->SetBranchAddress("_EFlowTrack_trackStates.location", _EFlowTrack_trackStates_location, &b__EFlowTrack_trackStates_location);
   fChain->SetBranchAddress("_EFlowTrack_trackStates.D0", _EFlowTrack_trackStates_D0, &b__EFlowTrack_trackStates_D0);
   fChain->SetBranchAddress("_EFlowTrack_trackStates.phi", _EFlowTrack_trackStates_phi, &b__EFlowTrack_trackStates_phi);
   fChain->SetBranchAddress("_EFlowTrack_trackStates.omega", _EFlowTrack_trackStates_omega, &b__EFlowTrack_trackStates_omega);
   fChain->SetBranchAddress("_EFlowTrack_trackStates.Z0", _EFlowTrack_trackStates_Z0, &b__EFlowTrack_trackStates_Z0);
   fChain->SetBranchAddress("_EFlowTrack_trackStates.tanLambda", _EFlowTrack_trackStates_tanLambda, &b__EFlowTrack_trackStates_tanLambda);
   fChain->SetBranchAddress("_EFlowTrack_trackStates.time", _EFlowTrack_trackStates_time, &b__EFlowTrack_trackStates_time);
   fChain->SetBranchAddress("_EFlowTrack_trackStates.referencePoint.x", _EFlowTrack_trackStates_referencePoint_x, &b__EFlowTrack_trackStates_referencePoint_x);
   fChain->SetBranchAddress("_EFlowTrack_trackStates.referencePoint.y", _EFlowTrack_trackStates_referencePoint_y, &b__EFlowTrack_trackStates_referencePoint_y);
   fChain->SetBranchAddress("_EFlowTrack_trackStates.referencePoint.z", _EFlowTrack_trackStates_referencePoint_z, &b__EFlowTrack_trackStates_referencePoint_z);
   fChain->SetBranchAddress("_EFlowTrack_trackStates.covMatrix[21]", _EFlowTrack_trackStates_covMatrix, &b__EFlowTrack_trackStates_covMatrix);
   fChain->SetBranchAddress("_EFlowTrack_dxQuantities", &_EFlowTrack_dxQuantities_, &b__EFlowTrack_dxQuantities_);
   fChain->SetBranchAddress("_EFlowTrack_dxQuantities.type", _EFlowTrack_dxQuantities_type, &b__EFlowTrack_dxQuantities_type);
   fChain->SetBranchAddress("_EFlowTrack_dxQuantities.value", _EFlowTrack_dxQuantities_value, &b__EFlowTrack_dxQuantities_value);
   fChain->SetBranchAddress("_EFlowTrack_dxQuantities.error", _EFlowTrack_dxQuantities_error, &b__EFlowTrack_dxQuantities_error);
   fChain->SetBranchAddress("EFlowTrack_L", &EFlowTrack_L, &b_EFlowTrack_L);
   fChain->SetBranchAddress("Electron_objIdx", &Electron_objIdx_, &b_Electron_objIdx_);
   fChain->SetBranchAddress("Electron_objIdx.index", Electron_objIdx_index, &b_Electron_objIdx_index);
   fChain->SetBranchAddress("Electron_objIdx.collectionID", Electron_objIdx_collectionID, &b_Electron_objIdx_collectionID);
   fChain->SetBranchAddress("Electron_IsolationVar", &Electron_IsolationVar, &b_Electron_IsolationVar);
   fChain->SetBranchAddress("EventHeader", &EventHeader_, &b_EventHeader_);
   fChain->SetBranchAddress("EventHeader.eventNumber", EventHeader_eventNumber, &b_EventHeader_eventNumber);
   fChain->SetBranchAddress("EventHeader.runNumber", EventHeader_runNumber, &b_EventHeader_runNumber);
   fChain->SetBranchAddress("EventHeader.timeStamp", EventHeader_timeStamp, &b_EventHeader_timeStamp);
   fChain->SetBranchAddress("EventHeader.weight", EventHeader_weight, &b_EventHeader_weight);
   fChain->SetBranchAddress("Jet", &Jet_, &b_Jet_);
   fChain->SetBranchAddress("Jet.type", Jet_type, &b_Jet_type);
   fChain->SetBranchAddress("Jet.energy", Jet_energy, &b_Jet_energy);
   fChain->SetBranchAddress("Jet.momentum.x", Jet_momentum_x, &b_Jet_momentum_x);
   fChain->SetBranchAddress("Jet.momentum.y", Jet_momentum_y, &b_Jet_momentum_y);
   fChain->SetBranchAddress("Jet.momentum.z", Jet_momentum_z, &b_Jet_momentum_z);
   fChain->SetBranchAddress("Jet.referencePoint.x", Jet_referencePoint_x, &b_Jet_referencePoint_x);
   fChain->SetBranchAddress("Jet.referencePoint.y", Jet_referencePoint_y, &b_Jet_referencePoint_y);
   fChain->SetBranchAddress("Jet.referencePoint.z", Jet_referencePoint_z, &b_Jet_referencePoint_z);
   fChain->SetBranchAddress("Jet.charge", Jet_charge, &b_Jet_charge);
   fChain->SetBranchAddress("Jet.mass", Jet_mass, &b_Jet_mass);
   fChain->SetBranchAddress("Jet.goodnessOfPID", Jet_goodnessOfPID, &b_Jet_goodnessOfPID);
   fChain->SetBranchAddress("Jet.covMatrix[10]", Jet_covMatrix, &b_Jet_covMatrix);
   fChain->SetBranchAddress("Jet.clusters_begin", Jet_clusters_begin, &b_Jet_clusters_begin);
   fChain->SetBranchAddress("Jet.clusters_end", Jet_clusters_end, &b_Jet_clusters_end);
   fChain->SetBranchAddress("Jet.tracks_begin", Jet_tracks_begin, &b_Jet_tracks_begin);
   fChain->SetBranchAddress("Jet.tracks_end", Jet_tracks_end, &b_Jet_tracks_end);
   fChain->SetBranchAddress("Jet.particles_begin", Jet_particles_begin, &b_Jet_particles_begin);
   fChain->SetBranchAddress("Jet.particles_end", Jet_particles_end, &b_Jet_particles_end);
   fChain->SetBranchAddress("Jet.particleIDs_begin", Jet_particleIDs_begin, &b_Jet_particleIDs_begin);
   fChain->SetBranchAddress("Jet.particleIDs_end", Jet_particleIDs_end, &b_Jet_particleIDs_end);
   fChain->SetBranchAddress("_Jet_clusters", &_Jet_clusters_, &b__Jet_clusters_);
   fChain->SetBranchAddress("_Jet_clusters.index", &_Jet_clusters_index, &b__Jet_clusters_index);
   fChain->SetBranchAddress("_Jet_clusters.collectionID", &_Jet_clusters_collectionID, &b__Jet_clusters_collectionID);
   fChain->SetBranchAddress("_Jet_tracks", &_Jet_tracks_, &b__Jet_tracks_);
   fChain->SetBranchAddress("_Jet_tracks.index", &_Jet_tracks_index, &b__Jet_tracks_index);
   fChain->SetBranchAddress("_Jet_tracks.collectionID", &_Jet_tracks_collectionID, &b__Jet_tracks_collectionID);
   fChain->SetBranchAddress("_Jet_particles", &_Jet_particles_, &b__Jet_particles_);
   fChain->SetBranchAddress("_Jet_particles.index", _Jet_particles_index, &b__Jet_particles_index);
   fChain->SetBranchAddress("_Jet_particles.collectionID", _Jet_particles_collectionID, &b__Jet_particles_collectionID);
   fChain->SetBranchAddress("_Jet_particleIDs", &_Jet_particleIDs_, &b__Jet_particleIDs_);
   fChain->SetBranchAddress("_Jet_particleIDs.index", _Jet_particleIDs_index, &b__Jet_particleIDs_index);
   fChain->SetBranchAddress("_Jet_particleIDs.collectionID", _Jet_particleIDs_collectionID, &b__Jet_particleIDs_collectionID);
   fChain->SetBranchAddress("_Jet_startVertex", &_Jet_startVertex_, &b__Jet_startVertex_);
   fChain->SetBranchAddress("_Jet_startVertex.index", _Jet_startVertex_index, &b__Jet_startVertex_index);
   fChain->SetBranchAddress("_Jet_startVertex.collectionID", _Jet_startVertex_collectionID, &b__Jet_startVertex_collectionID);
   fChain->SetBranchAddress("_Jet_particleIDUsed", &_Jet_particleIDUsed_, &b__Jet_particleIDUsed_);
   fChain->SetBranchAddress("_Jet_particleIDUsed.index", _Jet_particleIDUsed_index, &b__Jet_particleIDUsed_index);
   fChain->SetBranchAddress("_Jet_particleIDUsed.collectionID", _Jet_particleIDUsed_collectionID, &b__Jet_particleIDUsed_collectionID);
   fChain->SetBranchAddress("magFieldBz", &magFieldBz, &b_magFieldBz);
   fChain->SetBranchAddress("MCRecoAssociations", &MCRecoAssociations_, &b_MCRecoAssociations_);
   fChain->SetBranchAddress("MCRecoAssociations.weight", MCRecoAssociations_weight, &b_MCRecoAssociations_weight);
   fChain->SetBranchAddress("_MCRecoAssociations_rec", &_MCRecoAssociations_rec_, &b__MCRecoAssociations_rec_);
   fChain->SetBranchAddress("_MCRecoAssociations_rec.index", _MCRecoAssociations_rec_index, &b__MCRecoAssociations_rec_index);
   fChain->SetBranchAddress("_MCRecoAssociations_rec.collectionID", _MCRecoAssociations_rec_collectionID, &b__MCRecoAssociations_rec_collectionID);
   fChain->SetBranchAddress("_MCRecoAssociations_sim", &_MCRecoAssociations_sim_, &b__MCRecoAssociations_sim_);
   fChain->SetBranchAddress("_MCRecoAssociations_sim.index", _MCRecoAssociations_sim_index, &b__MCRecoAssociations_sim_index);
   fChain->SetBranchAddress("_MCRecoAssociations_sim.collectionID", _MCRecoAssociations_sim_collectionID, &b__MCRecoAssociations_sim_collectionID);
   fChain->SetBranchAddress("Muon_objIdx", &Muon_objIdx_, &b_Muon_objIdx_);
   fChain->SetBranchAddress("Muon_objIdx.index", Muon_objIdx_index, &b_Muon_objIdx_index);
   fChain->SetBranchAddress("Muon_objIdx.collectionID", Muon_objIdx_collectionID, &b_Muon_objIdx_collectionID);
   fChain->SetBranchAddress("Muon_IsolationVar", &Muon_IsolationVar, &b_Muon_IsolationVar);
   fChain->SetBranchAddress("Particle", &Particle_, &b_Particle_);
   fChain->SetBranchAddress("Particle.PDG", Particle_PDG, &b_Particle_PDG);
   fChain->SetBranchAddress("Particle.generatorStatus", Particle_generatorStatus, &b_Particle_generatorStatus);
   fChain->SetBranchAddress("Particle.simulatorStatus", Particle_simulatorStatus, &b_Particle_simulatorStatus);
   fChain->SetBranchAddress("Particle.charge", Particle_charge, &b_Particle_charge);
   fChain->SetBranchAddress("Particle.time", Particle_time, &b_Particle_time);
   fChain->SetBranchAddress("Particle.mass", Particle_mass, &b_Particle_mass);
   fChain->SetBranchAddress("Particle.vertex.x", Particle_vertex_x, &b_Particle_vertex_x);
   fChain->SetBranchAddress("Particle.vertex.y", Particle_vertex_y, &b_Particle_vertex_y);
   fChain->SetBranchAddress("Particle.vertex.z", Particle_vertex_z, &b_Particle_vertex_z);
   fChain->SetBranchAddress("Particle.endpoint.x", Particle_endpoint_x, &b_Particle_endpoint_x);
   fChain->SetBranchAddress("Particle.endpoint.y", Particle_endpoint_y, &b_Particle_endpoint_y);
   fChain->SetBranchAddress("Particle.endpoint.z", Particle_endpoint_z, &b_Particle_endpoint_z);
   fChain->SetBranchAddress("Particle.momentum.x", Particle_momentum_x, &b_Particle_momentum_x);
   fChain->SetBranchAddress("Particle.momentum.y", Particle_momentum_y, &b_Particle_momentum_y);
   fChain->SetBranchAddress("Particle.momentum.z", Particle_momentum_z, &b_Particle_momentum_z);
   fChain->SetBranchAddress("Particle.momentumAtEndpoint.x", Particle_momentumAtEndpoint_x, &b_Particle_momentumAtEndpoint_x);
   fChain->SetBranchAddress("Particle.momentumAtEndpoint.y", Particle_momentumAtEndpoint_y, &b_Particle_momentumAtEndpoint_y);
   fChain->SetBranchAddress("Particle.momentumAtEndpoint.z", Particle_momentumAtEndpoint_z, &b_Particle_momentumAtEndpoint_z);
   fChain->SetBranchAddress("Particle.spin.x", Particle_spin_x, &b_Particle_spin_x);
   fChain->SetBranchAddress("Particle.spin.y", Particle_spin_y, &b_Particle_spin_y);
   fChain->SetBranchAddress("Particle.spin.z", Particle_spin_z, &b_Particle_spin_z);
   fChain->SetBranchAddress("Particle.colorFlow.a", Particle_colorFlow_a, &b_Particle_colorFlow_a);
   fChain->SetBranchAddress("Particle.colorFlow.b", Particle_colorFlow_b, &b_Particle_colorFlow_b);
   fChain->SetBranchAddress("Particle.parents_begin", Particle_parents_begin, &b_Particle_parents_begin);
   fChain->SetBranchAddress("Particle.parents_end", Particle_parents_end, &b_Particle_parents_end);
   fChain->SetBranchAddress("Particle.daughters_begin", Particle_daughters_begin, &b_Particle_daughters_begin);
   fChain->SetBranchAddress("Particle.daughters_end", Particle_daughters_end, &b_Particle_daughters_end);
   fChain->SetBranchAddress("_Particle_parents", &_Particle_parents_, &b__Particle_parents_);
   fChain->SetBranchAddress("_Particle_parents.index", _Particle_parents_index, &b__Particle_parents_index);
   fChain->SetBranchAddress("_Particle_parents.collectionID", _Particle_parents_collectionID, &b__Particle_parents_collectionID);
   fChain->SetBranchAddress("_Particle_daughters", &_Particle_daughters_, &b__Particle_daughters_);
   fChain->SetBranchAddress("_Particle_daughters.index", _Particle_daughters_index, &b__Particle_daughters_index);
   fChain->SetBranchAddress("_Particle_daughters.collectionID", _Particle_daughters_collectionID, &b__Particle_daughters_collectionID);
   fChain->SetBranchAddress("ParticleIDs", &ParticleIDs_, &b_ParticleIDs_);
   fChain->SetBranchAddress("ParticleIDs.type", ParticleIDs_type, &b_ParticleIDs_type);
   fChain->SetBranchAddress("ParticleIDs.PDG", ParticleIDs_PDG, &b_ParticleIDs_PDG);
   fChain->SetBranchAddress("ParticleIDs.algorithmType", ParticleIDs_algorithmType, &b_ParticleIDs_algorithmType);
   fChain->SetBranchAddress("ParticleIDs.likelihood", ParticleIDs_likelihood, &b_ParticleIDs_likelihood);
   fChain->SetBranchAddress("ParticleIDs.parameters_begin", ParticleIDs_parameters_begin, &b_ParticleIDs_parameters_begin);
   fChain->SetBranchAddress("ParticleIDs.parameters_end", ParticleIDs_parameters_end, &b_ParticleIDs_parameters_end);
   fChain->SetBranchAddress("_ParticleIDs_parameters", &_ParticleIDs_parameters, &b__ParticleIDs_parameters);
   fChain->SetBranchAddress("Photon_objIdx", &Photon_objIdx_, &b_Photon_objIdx_);
   fChain->SetBranchAddress("Photon_objIdx.index", Photon_objIdx_index, &b_Photon_objIdx_index);
   fChain->SetBranchAddress("Photon_objIdx.collectionID", Photon_objIdx_collectionID, &b_Photon_objIdx_collectionID);
   fChain->SetBranchAddress("Photon_IsolationVar", &Photon_IsolationVar, &b_Photon_IsolationVar);
   fChain->SetBranchAddress("ReconstructedParticles", &ReconstructedParticles_, &b_ReconstructedParticles_);
   fChain->SetBranchAddress("ReconstructedParticles.type", ReconstructedParticles_type, &b_ReconstructedParticles_type);
   fChain->SetBranchAddress("ReconstructedParticles.energy", ReconstructedParticles_energy, &b_ReconstructedParticles_energy);
   fChain->SetBranchAddress("ReconstructedParticles.momentum.x", ReconstructedParticles_momentum_x, &b_ReconstructedParticles_momentum_x);
   fChain->SetBranchAddress("ReconstructedParticles.momentum.y", ReconstructedParticles_momentum_y, &b_ReconstructedParticles_momentum_y);
   fChain->SetBranchAddress("ReconstructedParticles.momentum.z", ReconstructedParticles_momentum_z, &b_ReconstructedParticles_momentum_z);
   fChain->SetBranchAddress("ReconstructedParticles.referencePoint.x", ReconstructedParticles_referencePoint_x, &b_ReconstructedParticles_referencePoint_x);
   fChain->SetBranchAddress("ReconstructedParticles.referencePoint.y", ReconstructedParticles_referencePoint_y, &b_ReconstructedParticles_referencePoint_y);
   fChain->SetBranchAddress("ReconstructedParticles.referencePoint.z", ReconstructedParticles_referencePoint_z, &b_ReconstructedParticles_referencePoint_z);
   fChain->SetBranchAddress("ReconstructedParticles.charge", ReconstructedParticles_charge, &b_ReconstructedParticles_charge);
   fChain->SetBranchAddress("ReconstructedParticles.mass", ReconstructedParticles_mass, &b_ReconstructedParticles_mass);
   fChain->SetBranchAddress("ReconstructedParticles.goodnessOfPID", ReconstructedParticles_goodnessOfPID, &b_ReconstructedParticles_goodnessOfPID);
   fChain->SetBranchAddress("ReconstructedParticles.covMatrix[10]", ReconstructedParticles_covMatrix, &b_ReconstructedParticles_covMatrix);
   fChain->SetBranchAddress("ReconstructedParticles.clusters_begin", ReconstructedParticles_clusters_begin, &b_ReconstructedParticles_clusters_begin);
   fChain->SetBranchAddress("ReconstructedParticles.clusters_end", ReconstructedParticles_clusters_end, &b_ReconstructedParticles_clusters_end);
   fChain->SetBranchAddress("ReconstructedParticles.tracks_begin", ReconstructedParticles_tracks_begin, &b_ReconstructedParticles_tracks_begin);
   fChain->SetBranchAddress("ReconstructedParticles.tracks_end", ReconstructedParticles_tracks_end, &b_ReconstructedParticles_tracks_end);
   fChain->SetBranchAddress("ReconstructedParticles.particles_begin", ReconstructedParticles_particles_begin, &b_ReconstructedParticles_particles_begin);
   fChain->SetBranchAddress("ReconstructedParticles.particles_end", ReconstructedParticles_particles_end, &b_ReconstructedParticles_particles_end);
   fChain->SetBranchAddress("ReconstructedParticles.particleIDs_begin", ReconstructedParticles_particleIDs_begin, &b_ReconstructedParticles_particleIDs_begin);
   fChain->SetBranchAddress("ReconstructedParticles.particleIDs_end", ReconstructedParticles_particleIDs_end, &b_ReconstructedParticles_particleIDs_end);
   fChain->SetBranchAddress("_ReconstructedParticles_clusters", &_ReconstructedParticles_clusters_, &b__ReconstructedParticles_clusters_);
   fChain->SetBranchAddress("_ReconstructedParticles_clusters.index", _ReconstructedParticles_clusters_index, &b__ReconstructedParticles_clusters_index);
   fChain->SetBranchAddress("_ReconstructedParticles_clusters.collectionID", _ReconstructedParticles_clusters_collectionID, &b__ReconstructedParticles_clusters_collectionID);
   fChain->SetBranchAddress("_ReconstructedParticles_tracks", &_ReconstructedParticles_tracks_, &b__ReconstructedParticles_tracks_);
   fChain->SetBranchAddress("_ReconstructedParticles_tracks.index", _ReconstructedParticles_tracks_index, &b__ReconstructedParticles_tracks_index);
   fChain->SetBranchAddress("_ReconstructedParticles_tracks.collectionID", _ReconstructedParticles_tracks_collectionID, &b__ReconstructedParticles_tracks_collectionID);
   fChain->SetBranchAddress("_ReconstructedParticles_particles", &_ReconstructedParticles_particles_, &b__ReconstructedParticles_particles_);
   fChain->SetBranchAddress("_ReconstructedParticles_particles.index", &_ReconstructedParticles_particles_index, &b__ReconstructedParticles_particles_index);
   fChain->SetBranchAddress("_ReconstructedParticles_particles.collectionID", &_ReconstructedParticles_particles_collectionID, &b__ReconstructedParticles_particles_collectionID);
   fChain->SetBranchAddress("_ReconstructedParticles_particleIDs", &_ReconstructedParticles_particleIDs_, &b__ReconstructedParticles_particleIDs_);
   fChain->SetBranchAddress("_ReconstructedParticles_particleIDs.index", _ReconstructedParticles_particleIDs_index, &b__ReconstructedParticles_particleIDs_index);
   fChain->SetBranchAddress("_ReconstructedParticles_particleIDs.collectionID", _ReconstructedParticles_particleIDs_collectionID, &b__ReconstructedParticles_particleIDs_collectionID);
   fChain->SetBranchAddress("_ReconstructedParticles_startVertex", &_ReconstructedParticles_startVertex_, &b__ReconstructedParticles_startVertex_);
   fChain->SetBranchAddress("_ReconstructedParticles_startVertex.index", _ReconstructedParticles_startVertex_index, &b__ReconstructedParticles_startVertex_index);
   fChain->SetBranchAddress("_ReconstructedParticles_startVertex.collectionID", _ReconstructedParticles_startVertex_collectionID, &b__ReconstructedParticles_startVertex_collectionID);
   fChain->SetBranchAddress("_ReconstructedParticles_particleIDUsed", &_ReconstructedParticles_particleIDUsed_, &b__ReconstructedParticles_particleIDUsed_);
   fChain->SetBranchAddress("_ReconstructedParticles_particleIDUsed.index", _ReconstructedParticles_particleIDUsed_index, &b__ReconstructedParticles_particleIDUsed_index);
   fChain->SetBranchAddress("_ReconstructedParticles_particleIDUsed.collectionID", _ReconstructedParticles_particleIDUsed_collectionID, &b__ReconstructedParticles_particleIDUsed_collectionID);
   fChain->SetBranchAddress("TrackerHits", &TrackerHits_, &b_TrackerHits_);
   fChain->SetBranchAddress("TrackerHits.cellID", TrackerHits_cellID, &b_TrackerHits_cellID);
   fChain->SetBranchAddress("TrackerHits.type", TrackerHits_type, &b_TrackerHits_type);
   fChain->SetBranchAddress("TrackerHits.quality", TrackerHits_quality, &b_TrackerHits_quality);
   fChain->SetBranchAddress("TrackerHits.time", TrackerHits_time, &b_TrackerHits_time);
   fChain->SetBranchAddress("TrackerHits.eDep", TrackerHits_eDep, &b_TrackerHits_eDep);
   fChain->SetBranchAddress("TrackerHits.eDepError", TrackerHits_eDepError, &b_TrackerHits_eDepError);
   fChain->SetBranchAddress("TrackerHits.position.x", TrackerHits_position_x, &b_TrackerHits_position_x);
   fChain->SetBranchAddress("TrackerHits.position.y", TrackerHits_position_y, &b_TrackerHits_position_y);
   fChain->SetBranchAddress("TrackerHits.position.z", TrackerHits_position_z, &b_TrackerHits_position_z);
   fChain->SetBranchAddress("TrackerHits.covMatrix[6]", TrackerHits_covMatrix, &b_TrackerHits_covMatrix);
   fChain->SetBranchAddress("TrackerHits.rawHits_begin", TrackerHits_rawHits_begin, &b_TrackerHits_rawHits_begin);
   fChain->SetBranchAddress("TrackerHits.rawHits_end", TrackerHits_rawHits_end, &b_TrackerHits_rawHits_end);
   fChain->SetBranchAddress("_TrackerHits_rawHits", &_TrackerHits_rawHits_, &b__TrackerHits_rawHits_);
   fChain->SetBranchAddress("_TrackerHits_rawHits.index", &_TrackerHits_rawHits_index, &b__TrackerHits_rawHits_index);
   fChain->SetBranchAddress("_TrackerHits_rawHits.collectionID", &_TrackerHits_rawHits_collectionID, &b__TrackerHits_rawHits_collectionID);
   fChain->SetBranchAddress("_intMap", &_intMap_, &b_PARAMETERS__intMap_);
   fChain->SetBranchAddress("_intMap.first", &_intMap_first, &b__intMap_first);
   fChain->SetBranchAddress("_intMap.second", &_intMap_second, &b__intMap_second);
   fChain->SetBranchAddress("_floatMap", &_floatMap_, &b_PARAMETERS__floatMap_);
   fChain->SetBranchAddress("_floatMap.first", &_floatMap_first, &b__floatMap_first);
   fChain->SetBranchAddress("_floatMap.second", &_floatMap_second, &b__floatMap_second);
   fChain->SetBranchAddress("_stringMap", &_stringMap_, &b_PARAMETERS__stringMap_);
   fChain->SetBranchAddress("_stringMap.first", &_stringMap_first, &b__stringMap_first);
   fChain->SetBranchAddress("_stringMap.second", &_stringMap_second, &b__stringMap_second);
   fChain->SetBranchAddress("_doubleMap", &_doubleMap_, &b_PARAMETERS__doubleMap_);
   fChain->SetBranchAddress("_doubleMap.first", &_doubleMap_first, &b__doubleMap_first);
   fChain->SetBranchAddress("_doubleMap.second", &_doubleMap_second, &b__doubleMap_second);
   Notify();
}

Bool_t analysis::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void analysis::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t analysis::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef analysis_cxx
