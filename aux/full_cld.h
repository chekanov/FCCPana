using namespace std;
#include <vector>
#include <map>
#include <TClonesArray.h>
#include <TLorentzVector.h>
//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Apr 10 18:00:30 2024 by ROOT version 6.28/10
// from TTree events/events data tree
// found on file: data/CLD_FULL/wzp6_ee_mumuH_ecm240_CLD_RECO_edm4hep.root
//////////////////////////////////////////////////////////

#ifndef analysis_h
#define analysis_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "edm4hep/VertexData.h"
#include "vector"
#include "podio/ObjectID.h"
#include "vector"
#include "vector"
#include "edm4hep/ReconstructedParticleData.h"
#include "vector"
#include "edm4hep/ParticleIDData.h"
#include "vector"
#include "edm4hep/MCRecoCaloParticleAssociationData.h"
#include "vector"
#include "edm4hep/MCRecoClusterParticleAssociationData.h"
#include "vector"
#include "edm4hep/CalorimeterHitData.h"
#include "vector"
#include "edm4hep/SimCalorimeterHitData.h"
#include "vector"
#include "edm4hep/CaloHitContributionData.h"
#include "vector"
#include "edm4hep/EventHeaderData.h"
#include "vector"
#include "vector"
#include "edm4hep/SimTrackerHitData.h"
#include "vector"
#include "edm4hep/MCRecoTrackerHitPlaneAssociationData.h"
#include "vector"
#include "edm4hep/TrackerHitPlaneData.h"
#include "vector"
#include "edm4hep/ClusterData.h"
#include "vector"
#include "edm4hep/MCParticleData.h"
#include "vector"
#include "edm4hep/MCRecoParticleAssociationData.h"
#include "vector"
#include "edm4hep/MCRecoTrackParticleAssociationData.h"
#include "vector"
#include "edm4hep/RecoParticleVertexAssociationData.h"
#include "vector"
#include "edm4hep/MCRecoCaloAssociationData.h"
#include "vector"
#include "edm4hep/TrackData.h"
#include "vector"
#include "vector"
#include "vector"

class analysis {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxBuildUpVertices = 2;
   static constexpr Int_t kMax_BuildUpVertices_associatedParticle = 2;
   static constexpr Int_t kMaxBuildUpVertices_RP = 2;
   static constexpr Int_t kMax_BuildUpVertices_RP_clusters = 1;
   static constexpr Int_t kMax_BuildUpVertices_RP_tracks = 1;
   static constexpr Int_t kMax_BuildUpVertices_RP_particles = 6;
   static constexpr Int_t kMax_BuildUpVertices_RP_particleIDs = 1;
   static constexpr Int_t kMax_BuildUpVertices_RP_startVertex = 2;
   static constexpr Int_t kMax_BuildUpVertices_RP_particleIDUsed = 2;
   static constexpr Int_t kMaxBuildUpVertices_RP_particleIDs = 1;
   static constexpr Int_t kMaxBuildUpVertices_V0 = 1;
   static constexpr Int_t kMax_BuildUpVertices_V0_associatedParticle = 1;
   static constexpr Int_t kMaxBuildUpVertices_V0_RP = 1;
   static constexpr Int_t kMax_BuildUpVertices_V0_RP_clusters = 1;
   static constexpr Int_t kMax_BuildUpVertices_V0_RP_tracks = 1;
   static constexpr Int_t kMax_BuildUpVertices_V0_RP_particles = 2;
   static constexpr Int_t kMax_BuildUpVertices_V0_RP_particleIDs = 1;
   static constexpr Int_t kMax_BuildUpVertices_V0_RP_startVertex = 1;
   static constexpr Int_t kMax_BuildUpVertices_V0_RP_particleIDUsed = 1;
   static constexpr Int_t kMaxBuildUpVertices_V0_RP_particleIDs = 1;
   static constexpr Int_t kMaxCalohitMCTruthLink = 5343;
   static constexpr Int_t kMax_CalohitMCTruthLink_rec = 5343;
   static constexpr Int_t kMax_CalohitMCTruthLink_sim = 5343;
   static constexpr Int_t kMaxClusterMCTruthLink = 111;
   static constexpr Int_t kMax_ClusterMCTruthLink_rec = 111;
   static constexpr Int_t kMax_ClusterMCTruthLink_sim = 111;
   static constexpr Int_t kMaxDebugHits_objIdx = 1;
   static constexpr Int_t kMaxECALBarrel = 3451;
   static constexpr Int_t kMaxECalBarrelCollection = 4085;
   static constexpr Int_t kMax_ECalBarrelCollection_contributions = 29342;
   static constexpr Int_t kMaxECalBarrelCollectionContributions = 29342;
   static constexpr Int_t kMax_ECalBarrelCollectionContributions_particle = 29342;
   static constexpr Int_t kMaxECALEndcap = 3232;
   static constexpr Int_t kMaxECalEndcapCollection = 4126;
   static constexpr Int_t kMax_ECalEndcapCollection_contributions = 25080;
   static constexpr Int_t kMaxECalEndcapCollectionContributions = 25080;
   static constexpr Int_t kMax_ECalEndcapCollectionContributions_particle = 25080;
   static constexpr Int_t kMaxEfficientMCParticles_objIdx = 29;
   static constexpr Int_t kMaxEventHeader = 1;
   static constexpr Int_t kMaxHCALBarrel = 638;
   static constexpr Int_t kMaxHCalBarrelCollection = 3885;
   static constexpr Int_t kMax_HCalBarrelCollection_contributions = 9172;
   static constexpr Int_t kMaxHCalBarrelCollectionContributions = 9172;
   static constexpr Int_t kMax_HCalBarrelCollectionContributions_particle = 9172;
   static constexpr Int_t kMaxHCALEndcap = 549;
   static constexpr Int_t kMaxHCalEndcapCollection = 3512;
   static constexpr Int_t kMax_HCalEndcapCollection_contributions = 7627;
   static constexpr Int_t kMaxHCalEndcapCollectionContributions = 7627;
   static constexpr Int_t kMax_HCalEndcapCollectionContributions_particle = 7627;
   static constexpr Int_t kMaxHCALOther = 40;
   static constexpr Int_t kMaxHCalRingCollection = 412;
   static constexpr Int_t kMax_HCalRingCollection_contributions = 760;
   static constexpr Int_t kMaxHCalRingCollectionContributions = 760;
   static constexpr Int_t kMax_HCalRingCollectionContributions_particle = 760;
   static constexpr Int_t kMaxInefficientMCParticles_objIdx = 1;
   static constexpr Int_t kMaxInnerTrackerBarrelCollection = 126;
   static constexpr Int_t kMax_InnerTrackerBarrelCollection_particle = 126;
   static constexpr Int_t kMaxInnerTrackerBarrelHitsRelations = 122;
   static constexpr Int_t kMax_InnerTrackerBarrelHitsRelations_rec = 122;
   static constexpr Int_t kMax_InnerTrackerBarrelHitsRelations_sim = 122;
   static constexpr Int_t kMaxInnerTrackerEndcapCollection = 125;
   static constexpr Int_t kMax_InnerTrackerEndcapCollection_particle = 125;
   static constexpr Int_t kMaxInnerTrackerEndcapHitsRelations = 112;
   static constexpr Int_t kMax_InnerTrackerEndcapHitsRelations_rec = 112;
   static constexpr Int_t kMax_InnerTrackerEndcapHitsRelations_sim = 112;
   static constexpr Int_t kMaxITrackerEndcapHits = 112;
   static constexpr Int_t kMaxITrackerHits = 122;
   static constexpr Int_t kMaxLooseSelectedPandoraPFOs_objIdx = 62;
   static constexpr Int_t kMaxLumiCalClusters = 1;
   static constexpr Int_t kMax_LumiCalClusters_clusters = 1;
   static constexpr Int_t kMax_LumiCalClusters_hits = 78;
   static constexpr Int_t kMax_LumiCalClusters_particleIDs = 1;
   static constexpr Int_t kMaxLumiCalClusters_particleIDs = 1;
   static constexpr Int_t kMaxLumiCalCollection = 78;
   static constexpr Int_t kMax_LumiCalCollection_contributions = 542;
   static constexpr Int_t kMaxLumiCalCollectionContributions = 542;
   static constexpr Int_t kMax_LumiCalCollectionContributions_particle = 542;
   static constexpr Int_t kMaxLumiCalHits = 78;
   static constexpr Int_t kMaxLumiCalRecoParticles = 1;
   static constexpr Int_t kMax_LumiCalRecoParticles_clusters = 1;
   static constexpr Int_t kMax_LumiCalRecoParticles_tracks = 1;
   static constexpr Int_t kMax_LumiCalRecoParticles_particles = 1;
   static constexpr Int_t kMax_LumiCalRecoParticles_particleIDs = 1;
   static constexpr Int_t kMax_LumiCalRecoParticles_startVertex = 1;
   static constexpr Int_t kMax_LumiCalRecoParticles_particleIDUsed = 1;
   static constexpr Int_t kMaxLumiCalRecoParticles_particleIDs = 1;
   static constexpr Int_t kMaxMCParticles = 1204;
   static constexpr Int_t kMax_MCParticles_parents = 1217;
   static constexpr Int_t kMax_MCParticles_daughters = 1217;
   static constexpr Int_t kMaxMCParticlesSkimmed_objIdx = 191;
   static constexpr Int_t kMaxMCPhysicsParticles_objIdx = 1204;
   static constexpr Int_t kMaxMCTruthClusterLink = 111;
   static constexpr Int_t kMax_MCTruthClusterLink_rec = 111;
   static constexpr Int_t kMax_MCTruthClusterLink_sim = 111;
   static constexpr Int_t kMaxMCTruthRecoLink = 126;
   static constexpr Int_t kMax_MCTruthRecoLink_rec = 126;
   static constexpr Int_t kMax_MCTruthRecoLink_sim = 126;
   static constexpr Int_t kMaxMCTruthSiTracksLink = 37;
   static constexpr Int_t kMax_MCTruthSiTracksLink_rec = 37;
   static constexpr Int_t kMax_MCTruthSiTracksLink_sim = 37;
   static constexpr Int_t kMaxMUON = 29;
   static constexpr Int_t kMaxOTrackerEndcapHits = 126;
   static constexpr Int_t kMaxOTrackerHits = 150;
   static constexpr Int_t kMaxOuterTrackerBarrelCollection = 269;
   static constexpr Int_t kMax_OuterTrackerBarrelCollection_particle = 269;
   static constexpr Int_t kMaxOuterTrackerBarrelHitsRelations = 150;
   static constexpr Int_t kMax_OuterTrackerBarrelHitsRelations_rec = 150;
   static constexpr Int_t kMax_OuterTrackerBarrelHitsRelations_sim = 150;
   static constexpr Int_t kMaxOuterTrackerEndcapCollection = 141;
   static constexpr Int_t kMax_OuterTrackerEndcapCollection_particle = 141;
   static constexpr Int_t kMaxOuterTrackerEndcapHitsRelations = 126;
   static constexpr Int_t kMax_OuterTrackerEndcapHitsRelations_rec = 126;
   static constexpr Int_t kMax_OuterTrackerEndcapHitsRelations_sim = 126;
   static constexpr Int_t kMaxPandoraClusters = 64;
   static constexpr Int_t kMax_PandoraClusters_clusters = 1;
   static constexpr Int_t kMax_PandoraClusters_hits = 4622;
   static constexpr Int_t kMax_PandoraClusters_particleIDs = 1;
   static constexpr Int_t kMaxPandoraClusters_particleIDs = 1;
   static constexpr Int_t kMaxPandoraPFOs = 66;
   static constexpr Int_t kMax_PandoraPFOs_clusters = 64;
   static constexpr Int_t kMax_PandoraPFOs_tracks = 31;
   static constexpr Int_t kMax_PandoraPFOs_particles = 1;
   static constexpr Int_t kMax_PandoraPFOs_particleIDs = 1;
   static constexpr Int_t kMax_PandoraPFOs_startVertex = 66;
   static constexpr Int_t kMax_PandoraPFOs_particleIDUsed = 66;
   static constexpr Int_t kMaxPandoraPFOs_particleIDs = 1;
   static constexpr Int_t kMaxPandoraStartVertices = 66;
   static constexpr Int_t kMax_PandoraStartVertices_associatedParticle = 66;
   static constexpr Int_t kMaxPFOsFromJets_objIdx = 66;
   static constexpr Int_t kMaxPrimaryVertices = 1;
   static constexpr Int_t kMax_PrimaryVertices_associatedParticle = 1;
   static constexpr Int_t kMaxPrimaryVertices_RP = 1;
   static constexpr Int_t kMax_PrimaryVertices_RP_clusters = 1;
   static constexpr Int_t kMax_PrimaryVertices_RP_tracks = 1;
   static constexpr Int_t kMax_PrimaryVertices_RP_particles = 28;
   static constexpr Int_t kMax_PrimaryVertices_RP_particleIDs = 1;
   static constexpr Int_t kMax_PrimaryVertices_RP_startVertex = 1;
   static constexpr Int_t kMax_PrimaryVertices_RP_particleIDUsed = 1;
   static constexpr Int_t kMaxPrimaryVertices_RP_particleIDs = 1;
   static constexpr Int_t kMaxRecoMCTruthLink = 126;
   static constexpr Int_t kMax_RecoMCTruthLink_rec = 126;
   static constexpr Int_t kMax_RecoMCTruthLink_sim = 126;
   static constexpr Int_t kMaxRefinedVertexJets = 2;
   static constexpr Int_t kMax_RefinedVertexJets_clusters = 1;
   static constexpr Int_t kMax_RefinedVertexJets_tracks = 1;
   static constexpr Int_t kMax_RefinedVertexJets_particles = 57;
   static constexpr Int_t kMax_RefinedVertexJets_particleIDs = 3;
   static constexpr Int_t kMax_RefinedVertexJets_startVertex = 2;
   static constexpr Int_t kMax_RefinedVertexJets_particleIDUsed = 2;
   static constexpr Int_t kMaxRefinedVertexJets_particleIDs = 3;
   static constexpr Int_t kMaxRefinedVertexJets_rel = 2;
   static constexpr Int_t kMax_RefinedVertexJets_rel_rec = 2;
   static constexpr Int_t kMax_RefinedVertexJets_rel_vertex = 2;
   static constexpr Int_t kMaxRefinedVertexJets_vtx = 2;
   static constexpr Int_t kMax_RefinedVertexJets_vtx_associatedParticle = 2;
   static constexpr Int_t kMaxRefinedVertexJets_vtx_RP = 2;
   static constexpr Int_t kMax_RefinedVertexJets_vtx_RP_clusters = 1;
   static constexpr Int_t kMax_RefinedVertexJets_vtx_RP_tracks = 1;
   static constexpr Int_t kMax_RefinedVertexJets_vtx_RP_particles = 7;
   static constexpr Int_t kMax_RefinedVertexJets_vtx_RP_particleIDs = 1;
   static constexpr Int_t kMax_RefinedVertexJets_vtx_RP_startVertex = 2;
   static constexpr Int_t kMax_RefinedVertexJets_vtx_RP_particleIDUsed = 2;
   static constexpr Int_t kMaxRefinedVertexJets_vtx_RP_particleIDs = 1;
   static constexpr Int_t kMaxRefinedVertices = 2;
   static constexpr Int_t kMax_RefinedVertices_associatedParticle = 2;
   static constexpr Int_t kMaxRefinedVertices_RP = 2;
   static constexpr Int_t kMax_RefinedVertices_RP_clusters = 1;
   static constexpr Int_t kMax_RefinedVertices_RP_tracks = 1;
   static constexpr Int_t kMax_RefinedVertices_RP_particles = 7;
   static constexpr Int_t kMax_RefinedVertices_RP_particleIDs = 1;
   static constexpr Int_t kMax_RefinedVertices_RP_startVertex = 2;
   static constexpr Int_t kMax_RefinedVertices_RP_particleIDUsed = 2;
   static constexpr Int_t kMaxRefinedVertices_RP_particleIDs = 1;
   static constexpr Int_t kMaxRelationCaloHit = 5323;
   static constexpr Int_t kMax_RelationCaloHit_rec = 5323;
   static constexpr Int_t kMax_RelationCaloHit_sim = 5323;
   static constexpr Int_t kMaxRelationMuonHit = 29;
   static constexpr Int_t kMax_RelationMuonHit_rec = 29;
   static constexpr Int_t kMax_RelationMuonHit_sim = 29;
   static constexpr Int_t kMaxSelectedPandoraPFOs_objIdx = 60;
   static constexpr Int_t kMaxSiTracks = 33;
   static constexpr Int_t kMax_SiTracks_trackerHits = 369;
   static constexpr Int_t kMax_SiTracks_tracks = 1;
   static constexpr Int_t kMax_SiTracks_trackStates = 132;
   static constexpr Int_t kMax_SiTracks_dxQuantities = 33;
   static constexpr Int_t kMaxSiTracks_Refitted = 33;
   static constexpr Int_t kMax_SiTracks_Refitted_trackerHits = 369;
   static constexpr Int_t kMax_SiTracks_Refitted_tracks = 1;
   static constexpr Int_t kMax_SiTracks_Refitted_trackStates = 132;
   static constexpr Int_t kMax_SiTracks_Refitted_dxQuantities = 33;
   static constexpr Int_t kMaxSiTracksCT = 33;
   static constexpr Int_t kMax_SiTracksCT_trackerHits = 369;
   static constexpr Int_t kMax_SiTracksCT_tracks = 1;
   static constexpr Int_t kMax_SiTracksCT_trackStates = 132;
   static constexpr Int_t kMax_SiTracksCT_dxQuantities = 33;
   static constexpr Int_t kMaxSiTracksMCTruthLink = 37;
   static constexpr Int_t kMax_SiTracksMCTruthLink_rec = 37;
   static constexpr Int_t kMax_SiTracksMCTruthLink_sim = 37;
   static constexpr Int_t kMaxTightSelectedPandoraPFOs_objIdx = 54;
   static constexpr Int_t kMaxVertexBarrelCollection = 186;
   static constexpr Int_t kMax_VertexBarrelCollection_particle = 186;
   static constexpr Int_t kMaxVertexEndcapCollection = 87;
   static constexpr Int_t kMax_VertexEndcapCollection_particle = 87;
   static constexpr Int_t kMaxVertexJets = 2;
   static constexpr Int_t kMax_VertexJets_clusters = 1;
   static constexpr Int_t kMax_VertexJets_tracks = 1;
   static constexpr Int_t kMax_VertexJets_particles = 57;
   static constexpr Int_t kMax_VertexJets_particleIDs = 2;
   static constexpr Int_t kMax_VertexJets_startVertex = 2;
   static constexpr Int_t kMax_VertexJets_particleIDUsed = 2;
   static constexpr Int_t kMaxVertexJets_particleIDs = 2;
   static constexpr Int_t kMaxVXDEndcapTrackerHitRelations = 86;
   static constexpr Int_t kMax_VXDEndcapTrackerHitRelations_rec = 86;
   static constexpr Int_t kMax_VXDEndcapTrackerHitRelations_sim = 86;
   static constexpr Int_t kMaxVXDEndcapTrackerHits = 86;
   static constexpr Int_t kMaxVXDTrackerHitRelations = 183;
   static constexpr Int_t kMax_VXDTrackerHitRelations_rec = 183;
   static constexpr Int_t kMax_VXDTrackerHitRelations_sim = 183;
   static constexpr Int_t kMaxVXDTrackerHits = 183;
   static constexpr Int_t kMaxYokeBarrelCollection = 24;
   static constexpr Int_t kMax_YokeBarrelCollection_contributions = 33;
   static constexpr Int_t kMaxYokeBarrelCollectionContributions = 33;
   static constexpr Int_t kMax_YokeBarrelCollectionContributions_particle = 33;
   static constexpr Int_t kMaxYokeEndcapCollection = 17;
   static constexpr Int_t kMax_YokeEndcapCollection_contributions = 23;
   static constexpr Int_t kMaxYokeEndcapCollectionContributions = 23;
   static constexpr Int_t kMax_YokeEndcapCollectionContributions_particle = 23;
   static constexpr Int_t kMax_intMap = 1;
   static constexpr Int_t kMax_floatMap = 1;
   static constexpr Int_t kMax_stringMap = 1;
   static constexpr Int_t kMax_doubleMap = 1;

   // Declaration of leaf types
   Int_t           BuildUpVertices_;
   Int_t           BuildUpVertices_primary[kMaxBuildUpVertices];   //[BuildUpVertices_]
   Float_t         BuildUpVertices_chi2[kMaxBuildUpVertices];   //[BuildUpVertices_]
   Float_t         BuildUpVertices_probability[kMaxBuildUpVertices];   //[BuildUpVertices_]
   Float_t         BuildUpVertices_position_x[kMaxBuildUpVertices];   //[BuildUpVertices_]
   Float_t         BuildUpVertices_position_y[kMaxBuildUpVertices];   //[BuildUpVertices_]
   Float_t         BuildUpVertices_position_z[kMaxBuildUpVertices];   //[BuildUpVertices_]
   Float_t         BuildUpVertices_covMatrix[kMaxBuildUpVertices][6];   //[BuildUpVertices_]
   Int_t           BuildUpVertices_algorithmType[kMaxBuildUpVertices];   //[BuildUpVertices_]
   UInt_t          BuildUpVertices_parameters_begin[kMaxBuildUpVertices];   //[BuildUpVertices_]
   UInt_t          BuildUpVertices_parameters_end[kMaxBuildUpVertices];   //[BuildUpVertices_]
   Int_t           _BuildUpVertices_associatedParticle_;
   Int_t           _BuildUpVertices_associatedParticle_index[kMax_BuildUpVertices_associatedParticle];   //[_BuildUpVertices_associatedParticle_]
   UInt_t          _BuildUpVertices_associatedParticle_collectionID[kMax_BuildUpVertices_associatedParticle];   //[_BuildUpVertices_associatedParticle_]
   vector<float>   *_BuildUpVertices_parameters;
   Int_t           BuildUpVertices_RP_;
   Int_t           BuildUpVertices_RP_PDG[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   Float_t         BuildUpVertices_RP_energy[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   Float_t         BuildUpVertices_RP_momentum_x[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   Float_t         BuildUpVertices_RP_momentum_y[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   Float_t         BuildUpVertices_RP_momentum_z[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   Float_t         BuildUpVertices_RP_referencePoint_x[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   Float_t         BuildUpVertices_RP_referencePoint_y[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   Float_t         BuildUpVertices_RP_referencePoint_z[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   Float_t         BuildUpVertices_RP_charge[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   Float_t         BuildUpVertices_RP_mass[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   Float_t         BuildUpVertices_RP_goodnessOfPID[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   Float_t         BuildUpVertices_RP_covMatrix[kMaxBuildUpVertices_RP][10];   //[BuildUpVertices_RP_]
   UInt_t          BuildUpVertices_RP_clusters_begin[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   UInt_t          BuildUpVertices_RP_clusters_end[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   UInt_t          BuildUpVertices_RP_tracks_begin[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   UInt_t          BuildUpVertices_RP_tracks_end[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   UInt_t          BuildUpVertices_RP_particles_begin[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   UInt_t          BuildUpVertices_RP_particles_end[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   UInt_t          BuildUpVertices_RP_particleIDs_begin[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   UInt_t          BuildUpVertices_RP_particleIDs_end[kMaxBuildUpVertices_RP];   //[BuildUpVertices_RP_]
   Int_t           _BuildUpVertices_RP_clusters_;
   Int_t           _BuildUpVertices_RP_clusters_index[kMax_BuildUpVertices_RP_clusters];   //[_BuildUpVertices_RP_clusters_]
   UInt_t          _BuildUpVertices_RP_clusters_collectionID[kMax_BuildUpVertices_RP_clusters];   //[_BuildUpVertices_RP_clusters_]
   Int_t           _BuildUpVertices_RP_tracks_;
   Int_t           _BuildUpVertices_RP_tracks_index[kMax_BuildUpVertices_RP_tracks];   //[_BuildUpVertices_RP_tracks_]
   UInt_t          _BuildUpVertices_RP_tracks_collectionID[kMax_BuildUpVertices_RP_tracks];   //[_BuildUpVertices_RP_tracks_]
   Int_t           _BuildUpVertices_RP_particles_;
   Int_t           _BuildUpVertices_RP_particles_index[kMax_BuildUpVertices_RP_particles];   //[_BuildUpVertices_RP_particles_]
   UInt_t          _BuildUpVertices_RP_particles_collectionID[kMax_BuildUpVertices_RP_particles];   //[_BuildUpVertices_RP_particles_]
   Int_t           _BuildUpVertices_RP_particleIDs_;
   Int_t           _BuildUpVertices_RP_particleIDs_index[kMax_BuildUpVertices_RP_particleIDs];   //[_BuildUpVertices_RP_particleIDs_]
   UInt_t          _BuildUpVertices_RP_particleIDs_collectionID[kMax_BuildUpVertices_RP_particleIDs];   //[_BuildUpVertices_RP_particleIDs_]
   Int_t           _BuildUpVertices_RP_startVertex_;
   Int_t           _BuildUpVertices_RP_startVertex_index[kMax_BuildUpVertices_RP_startVertex];   //[_BuildUpVertices_RP_startVertex_]
   UInt_t          _BuildUpVertices_RP_startVertex_collectionID[kMax_BuildUpVertices_RP_startVertex];   //[_BuildUpVertices_RP_startVertex_]
   Int_t           _BuildUpVertices_RP_particleIDUsed_;
   Int_t           _BuildUpVertices_RP_particleIDUsed_index[kMax_BuildUpVertices_RP_particleIDUsed];   //[_BuildUpVertices_RP_particleIDUsed_]
   UInt_t          _BuildUpVertices_RP_particleIDUsed_collectionID[kMax_BuildUpVertices_RP_particleIDUsed];   //[_BuildUpVertices_RP_particleIDUsed_]
   Int_t           BuildUpVertices_RP_particleIDs_;
   Int_t           BuildUpVertices_RP_particleIDs_type[kMaxBuildUpVertices_RP_particleIDs];   //[BuildUpVertices_RP_particleIDs_]
   Int_t           BuildUpVertices_RP_particleIDs_PDG[kMaxBuildUpVertices_RP_particleIDs];   //[BuildUpVertices_RP_particleIDs_]
   Int_t           BuildUpVertices_RP_particleIDs_algorithmType[kMaxBuildUpVertices_RP_particleIDs];   //[BuildUpVertices_RP_particleIDs_]
   Float_t         BuildUpVertices_RP_particleIDs_likelihood[kMaxBuildUpVertices_RP_particleIDs];   //[BuildUpVertices_RP_particleIDs_]
   UInt_t          BuildUpVertices_RP_particleIDs_parameters_begin[kMaxBuildUpVertices_RP_particleIDs];   //[BuildUpVertices_RP_particleIDs_]
   UInt_t          BuildUpVertices_RP_particleIDs_parameters_end[kMaxBuildUpVertices_RP_particleIDs];   //[BuildUpVertices_RP_particleIDs_]
   vector<float>   *_BuildUpVertices_RP_particleIDs_parameters;
   Int_t           BuildUpVertices_V0_;
   Int_t           BuildUpVertices_V0_primary[kMaxBuildUpVertices_V0];   //[BuildUpVertices_V0_]
   Float_t         BuildUpVertices_V0_chi2[kMaxBuildUpVertices_V0];   //[BuildUpVertices_V0_]
   Float_t         BuildUpVertices_V0_probability[kMaxBuildUpVertices_V0];   //[BuildUpVertices_V0_]
   Float_t         BuildUpVertices_V0_position_x[kMaxBuildUpVertices_V0];   //[BuildUpVertices_V0_]
   Float_t         BuildUpVertices_V0_position_y[kMaxBuildUpVertices_V0];   //[BuildUpVertices_V0_]
   Float_t         BuildUpVertices_V0_position_z[kMaxBuildUpVertices_V0];   //[BuildUpVertices_V0_]
   Float_t         BuildUpVertices_V0_covMatrix[kMaxBuildUpVertices_V0][6];   //[BuildUpVertices_V0_]
   Int_t           BuildUpVertices_V0_algorithmType[kMaxBuildUpVertices_V0];   //[BuildUpVertices_V0_]
   UInt_t          BuildUpVertices_V0_parameters_begin[kMaxBuildUpVertices_V0];   //[BuildUpVertices_V0_]
   UInt_t          BuildUpVertices_V0_parameters_end[kMaxBuildUpVertices_V0];   //[BuildUpVertices_V0_]
   Int_t           _BuildUpVertices_V0_associatedParticle_;
   Int_t           _BuildUpVertices_V0_associatedParticle_index[kMax_BuildUpVertices_V0_associatedParticle];   //[_BuildUpVertices_V0_associatedParticle_]
   UInt_t          _BuildUpVertices_V0_associatedParticle_collectionID[kMax_BuildUpVertices_V0_associatedParticle];   //[_BuildUpVertices_V0_associatedParticle_]
   vector<float>   *_BuildUpVertices_V0_parameters;
   Int_t           BuildUpVertices_V0_RP_;
   Int_t           BuildUpVertices_V0_RP_PDG[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   Float_t         BuildUpVertices_V0_RP_energy[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   Float_t         BuildUpVertices_V0_RP_momentum_x[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   Float_t         BuildUpVertices_V0_RP_momentum_y[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   Float_t         BuildUpVertices_V0_RP_momentum_z[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   Float_t         BuildUpVertices_V0_RP_referencePoint_x[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   Float_t         BuildUpVertices_V0_RP_referencePoint_y[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   Float_t         BuildUpVertices_V0_RP_referencePoint_z[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   Float_t         BuildUpVertices_V0_RP_charge[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   Float_t         BuildUpVertices_V0_RP_mass[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   Float_t         BuildUpVertices_V0_RP_goodnessOfPID[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   Float_t         BuildUpVertices_V0_RP_covMatrix[kMaxBuildUpVertices_V0_RP][10];   //[BuildUpVertices_V0_RP_]
   UInt_t          BuildUpVertices_V0_RP_clusters_begin[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   UInt_t          BuildUpVertices_V0_RP_clusters_end[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   UInt_t          BuildUpVertices_V0_RP_tracks_begin[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   UInt_t          BuildUpVertices_V0_RP_tracks_end[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   UInt_t          BuildUpVertices_V0_RP_particles_begin[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   UInt_t          BuildUpVertices_V0_RP_particles_end[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   UInt_t          BuildUpVertices_V0_RP_particleIDs_begin[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   UInt_t          BuildUpVertices_V0_RP_particleIDs_end[kMaxBuildUpVertices_V0_RP];   //[BuildUpVertices_V0_RP_]
   Int_t           _BuildUpVertices_V0_RP_clusters_;
   Int_t           _BuildUpVertices_V0_RP_clusters_index[kMax_BuildUpVertices_V0_RP_clusters];   //[_BuildUpVertices_V0_RP_clusters_]
   UInt_t          _BuildUpVertices_V0_RP_clusters_collectionID[kMax_BuildUpVertices_V0_RP_clusters];   //[_BuildUpVertices_V0_RP_clusters_]
   Int_t           _BuildUpVertices_V0_RP_tracks_;
   Int_t           _BuildUpVertices_V0_RP_tracks_index[kMax_BuildUpVertices_V0_RP_tracks];   //[_BuildUpVertices_V0_RP_tracks_]
   UInt_t          _BuildUpVertices_V0_RP_tracks_collectionID[kMax_BuildUpVertices_V0_RP_tracks];   //[_BuildUpVertices_V0_RP_tracks_]
   Int_t           _BuildUpVertices_V0_RP_particles_;
   Int_t           _BuildUpVertices_V0_RP_particles_index[kMax_BuildUpVertices_V0_RP_particles];   //[_BuildUpVertices_V0_RP_particles_]
   UInt_t          _BuildUpVertices_V0_RP_particles_collectionID[kMax_BuildUpVertices_V0_RP_particles];   //[_BuildUpVertices_V0_RP_particles_]
   Int_t           _BuildUpVertices_V0_RP_particleIDs_;
   Int_t           _BuildUpVertices_V0_RP_particleIDs_index[kMax_BuildUpVertices_V0_RP_particleIDs];   //[_BuildUpVertices_V0_RP_particleIDs_]
   UInt_t          _BuildUpVertices_V0_RP_particleIDs_collectionID[kMax_BuildUpVertices_V0_RP_particleIDs];   //[_BuildUpVertices_V0_RP_particleIDs_]
   Int_t           _BuildUpVertices_V0_RP_startVertex_;
   Int_t           _BuildUpVertices_V0_RP_startVertex_index[kMax_BuildUpVertices_V0_RP_startVertex];   //[_BuildUpVertices_V0_RP_startVertex_]
   UInt_t          _BuildUpVertices_V0_RP_startVertex_collectionID[kMax_BuildUpVertices_V0_RP_startVertex];   //[_BuildUpVertices_V0_RP_startVertex_]
   Int_t           _BuildUpVertices_V0_RP_particleIDUsed_;
   Int_t           _BuildUpVertices_V0_RP_particleIDUsed_index[kMax_BuildUpVertices_V0_RP_particleIDUsed];   //[_BuildUpVertices_V0_RP_particleIDUsed_]
   UInt_t          _BuildUpVertices_V0_RP_particleIDUsed_collectionID[kMax_BuildUpVertices_V0_RP_particleIDUsed];   //[_BuildUpVertices_V0_RP_particleIDUsed_]
   Int_t           BuildUpVertices_V0_RP_particleIDs_;
   Int_t           BuildUpVertices_V0_RP_particleIDs_type[kMaxBuildUpVertices_V0_RP_particleIDs];   //[BuildUpVertices_V0_RP_particleIDs_]
   Int_t           BuildUpVertices_V0_RP_particleIDs_PDG[kMaxBuildUpVertices_V0_RP_particleIDs];   //[BuildUpVertices_V0_RP_particleIDs_]
   Int_t           BuildUpVertices_V0_RP_particleIDs_algorithmType[kMaxBuildUpVertices_V0_RP_particleIDs];   //[BuildUpVertices_V0_RP_particleIDs_]
   Float_t         BuildUpVertices_V0_RP_particleIDs_likelihood[kMaxBuildUpVertices_V0_RP_particleIDs];   //[BuildUpVertices_V0_RP_particleIDs_]
   UInt_t          BuildUpVertices_V0_RP_particleIDs_parameters_begin[kMaxBuildUpVertices_V0_RP_particleIDs];   //[BuildUpVertices_V0_RP_particleIDs_]
   UInt_t          BuildUpVertices_V0_RP_particleIDs_parameters_end[kMaxBuildUpVertices_V0_RP_particleIDs];   //[BuildUpVertices_V0_RP_particleIDs_]
   vector<float>   *_BuildUpVertices_V0_RP_particleIDs_parameters;
   Int_t           CalohitMCTruthLink_;
   Float_t         CalohitMCTruthLink_weight[kMaxCalohitMCTruthLink];   //[CalohitMCTruthLink_]
   Int_t           _CalohitMCTruthLink_rec_;
   Int_t           _CalohitMCTruthLink_rec_index[kMax_CalohitMCTruthLink_rec];   //[_CalohitMCTruthLink_rec_]
   UInt_t          _CalohitMCTruthLink_rec_collectionID[kMax_CalohitMCTruthLink_rec];   //[_CalohitMCTruthLink_rec_]
   Int_t           _CalohitMCTruthLink_sim_;
   Int_t           _CalohitMCTruthLink_sim_index[kMax_CalohitMCTruthLink_sim];   //[_CalohitMCTruthLink_sim_]
   UInt_t          _CalohitMCTruthLink_sim_collectionID[kMax_CalohitMCTruthLink_sim];   //[_CalohitMCTruthLink_sim_]
   Int_t           ClusterMCTruthLink_;
   Float_t         ClusterMCTruthLink_weight[kMaxClusterMCTruthLink];   //[ClusterMCTruthLink_]
   Int_t           _ClusterMCTruthLink_rec_;
   Int_t           _ClusterMCTruthLink_rec_index[kMax_ClusterMCTruthLink_rec];   //[_ClusterMCTruthLink_rec_]
   UInt_t          _ClusterMCTruthLink_rec_collectionID[kMax_ClusterMCTruthLink_rec];   //[_ClusterMCTruthLink_rec_]
   Int_t           _ClusterMCTruthLink_sim_;
   Int_t           _ClusterMCTruthLink_sim_index[kMax_ClusterMCTruthLink_sim];   //[_ClusterMCTruthLink_sim_]
   UInt_t          _ClusterMCTruthLink_sim_collectionID[kMax_ClusterMCTruthLink_sim];   //[_ClusterMCTruthLink_sim_]
   Int_t           DebugHits_objIdx_;
   Int_t           DebugHits_objIdx_index[kMaxDebugHits_objIdx];   //[DebugHits_objIdx_]
   UInt_t          DebugHits_objIdx_collectionID[kMaxDebugHits_objIdx];   //[DebugHits_objIdx_]
   Int_t           ECALBarrel_;
   ULong_t         ECALBarrel_cellID[kMaxECALBarrel];   //[ECALBarrel_]
   Float_t         ECALBarrel_energy[kMaxECALBarrel];   //[ECALBarrel_]
   Float_t         ECALBarrel_energyError[kMaxECALBarrel];   //[ECALBarrel_]
   Float_t         ECALBarrel_time[kMaxECALBarrel];   //[ECALBarrel_]
   Float_t         ECALBarrel_position_x[kMaxECALBarrel];   //[ECALBarrel_]
   Float_t         ECALBarrel_position_y[kMaxECALBarrel];   //[ECALBarrel_]
   Float_t         ECALBarrel_position_z[kMaxECALBarrel];   //[ECALBarrel_]
   Int_t           ECALBarrel_type[kMaxECALBarrel];   //[ECALBarrel_]
   Int_t           ECalBarrelCollection_;
   ULong_t         ECalBarrelCollection_cellID[kMaxECalBarrelCollection];   //[ECalBarrelCollection_]
   Float_t         ECalBarrelCollection_energy[kMaxECalBarrelCollection];   //[ECalBarrelCollection_]
   Float_t         ECalBarrelCollection_position_x[kMaxECalBarrelCollection];   //[ECalBarrelCollection_]
   Float_t         ECalBarrelCollection_position_y[kMaxECalBarrelCollection];   //[ECalBarrelCollection_]
   Float_t         ECalBarrelCollection_position_z[kMaxECalBarrelCollection];   //[ECalBarrelCollection_]
   UInt_t          ECalBarrelCollection_contributions_begin[kMaxECalBarrelCollection];   //[ECalBarrelCollection_]
   UInt_t          ECalBarrelCollection_contributions_end[kMaxECalBarrelCollection];   //[ECalBarrelCollection_]
   Int_t           _ECalBarrelCollection_contributions_;
   Int_t           _ECalBarrelCollection_contributions_index[kMax_ECalBarrelCollection_contributions];   //[_ECalBarrelCollection_contributions_]
   UInt_t          _ECalBarrelCollection_contributions_collectionID[kMax_ECalBarrelCollection_contributions];   //[_ECalBarrelCollection_contributions_]
   Int_t           ECalBarrelCollectionContributions_;
   Int_t           ECalBarrelCollectionContributions_PDG[kMaxECalBarrelCollectionContributions];   //[ECalBarrelCollectionContributions_]
   Float_t         ECalBarrelCollectionContributions_energy[kMaxECalBarrelCollectionContributions];   //[ECalBarrelCollectionContributions_]
   Float_t         ECalBarrelCollectionContributions_time[kMaxECalBarrelCollectionContributions];   //[ECalBarrelCollectionContributions_]
   Float_t         ECalBarrelCollectionContributions_stepPosition_x[kMaxECalBarrelCollectionContributions];   //[ECalBarrelCollectionContributions_]
   Float_t         ECalBarrelCollectionContributions_stepPosition_y[kMaxECalBarrelCollectionContributions];   //[ECalBarrelCollectionContributions_]
   Float_t         ECalBarrelCollectionContributions_stepPosition_z[kMaxECalBarrelCollectionContributions];   //[ECalBarrelCollectionContributions_]
   Int_t           _ECalBarrelCollectionContributions_particle_;
   Int_t           _ECalBarrelCollectionContributions_particle_index[kMax_ECalBarrelCollectionContributions_particle];   //[_ECalBarrelCollectionContributions_particle_]
   UInt_t          _ECalBarrelCollectionContributions_particle_collectionID[kMax_ECalBarrelCollectionContributions_particle];   //[_ECalBarrelCollectionContributions_particle_]
   Int_t           ECALEndcap_;
   ULong_t         ECALEndcap_cellID[kMaxECALEndcap];   //[ECALEndcap_]
   Float_t         ECALEndcap_energy[kMaxECALEndcap];   //[ECALEndcap_]
   Float_t         ECALEndcap_energyError[kMaxECALEndcap];   //[ECALEndcap_]
   Float_t         ECALEndcap_time[kMaxECALEndcap];   //[ECALEndcap_]
   Float_t         ECALEndcap_position_x[kMaxECALEndcap];   //[ECALEndcap_]
   Float_t         ECALEndcap_position_y[kMaxECALEndcap];   //[ECALEndcap_]
   Float_t         ECALEndcap_position_z[kMaxECALEndcap];   //[ECALEndcap_]
   Int_t           ECALEndcap_type[kMaxECALEndcap];   //[ECALEndcap_]
   Int_t           ECalEndcapCollection_;
   ULong_t         ECalEndcapCollection_cellID[kMaxECalEndcapCollection];   //[ECalEndcapCollection_]
   Float_t         ECalEndcapCollection_energy[kMaxECalEndcapCollection];   //[ECalEndcapCollection_]
   Float_t         ECalEndcapCollection_position_x[kMaxECalEndcapCollection];   //[ECalEndcapCollection_]
   Float_t         ECalEndcapCollection_position_y[kMaxECalEndcapCollection];   //[ECalEndcapCollection_]
   Float_t         ECalEndcapCollection_position_z[kMaxECalEndcapCollection];   //[ECalEndcapCollection_]
   UInt_t          ECalEndcapCollection_contributions_begin[kMaxECalEndcapCollection];   //[ECalEndcapCollection_]
   UInt_t          ECalEndcapCollection_contributions_end[kMaxECalEndcapCollection];   //[ECalEndcapCollection_]
   Int_t           _ECalEndcapCollection_contributions_;
   Int_t           _ECalEndcapCollection_contributions_index[kMax_ECalEndcapCollection_contributions];   //[_ECalEndcapCollection_contributions_]
   UInt_t          _ECalEndcapCollection_contributions_collectionID[kMax_ECalEndcapCollection_contributions];   //[_ECalEndcapCollection_contributions_]
   Int_t           ECalEndcapCollectionContributions_;
   Int_t           ECalEndcapCollectionContributions_PDG[kMaxECalEndcapCollectionContributions];   //[ECalEndcapCollectionContributions_]
   Float_t         ECalEndcapCollectionContributions_energy[kMaxECalEndcapCollectionContributions];   //[ECalEndcapCollectionContributions_]
   Float_t         ECalEndcapCollectionContributions_time[kMaxECalEndcapCollectionContributions];   //[ECalEndcapCollectionContributions_]
   Float_t         ECalEndcapCollectionContributions_stepPosition_x[kMaxECalEndcapCollectionContributions];   //[ECalEndcapCollectionContributions_]
   Float_t         ECalEndcapCollectionContributions_stepPosition_y[kMaxECalEndcapCollectionContributions];   //[ECalEndcapCollectionContributions_]
   Float_t         ECalEndcapCollectionContributions_stepPosition_z[kMaxECalEndcapCollectionContributions];   //[ECalEndcapCollectionContributions_]
   Int_t           _ECalEndcapCollectionContributions_particle_;
   Int_t           _ECalEndcapCollectionContributions_particle_index[kMax_ECalEndcapCollectionContributions_particle];   //[_ECalEndcapCollectionContributions_particle_]
   UInt_t          _ECalEndcapCollectionContributions_particle_collectionID[kMax_ECalEndcapCollectionContributions_particle];   //[_ECalEndcapCollectionContributions_particle_]
   Int_t           EfficientMCParticles_objIdx_;
   Int_t           EfficientMCParticles_objIdx_index[kMaxEfficientMCParticles_objIdx];   //[EfficientMCParticles_objIdx_]
   UInt_t          EfficientMCParticles_objIdx_collectionID[kMaxEfficientMCParticles_objIdx];   //[EfficientMCParticles_objIdx_]
   Int_t           EventHeader_;
   Int_t           EventHeader_eventNumber[kMaxEventHeader];   //[EventHeader_]
   Int_t           EventHeader_runNumber[kMaxEventHeader];   //[EventHeader_]
   ULong_t         EventHeader_timeStamp[kMaxEventHeader];   //[EventHeader_]
   Double_t        EventHeader_weight[kMaxEventHeader];   //[EventHeader_]
   UInt_t          EventHeader_weights_begin[kMaxEventHeader];   //[EventHeader_]
   UInt_t          EventHeader_weights_end[kMaxEventHeader];   //[EventHeader_]
   vector<double>  *_EventHeader_weights;
   Int_t           HCALBarrel_;
   ULong_t         HCALBarrel_cellID[kMaxHCALBarrel];   //[HCALBarrel_]
   Float_t         HCALBarrel_energy[kMaxHCALBarrel];   //[HCALBarrel_]
   Float_t         HCALBarrel_energyError[kMaxHCALBarrel];   //[HCALBarrel_]
   Float_t         HCALBarrel_time[kMaxHCALBarrel];   //[HCALBarrel_]
   Float_t         HCALBarrel_position_x[kMaxHCALBarrel];   //[HCALBarrel_]
   Float_t         HCALBarrel_position_y[kMaxHCALBarrel];   //[HCALBarrel_]
   Float_t         HCALBarrel_position_z[kMaxHCALBarrel];   //[HCALBarrel_]
   Int_t           HCALBarrel_type[kMaxHCALBarrel];   //[HCALBarrel_]
   Int_t           HCalBarrelCollection_;
   ULong_t         HCalBarrelCollection_cellID[kMaxHCalBarrelCollection];   //[HCalBarrelCollection_]
   Float_t         HCalBarrelCollection_energy[kMaxHCalBarrelCollection];   //[HCalBarrelCollection_]
   Float_t         HCalBarrelCollection_position_x[kMaxHCalBarrelCollection];   //[HCalBarrelCollection_]
   Float_t         HCalBarrelCollection_position_y[kMaxHCalBarrelCollection];   //[HCalBarrelCollection_]
   Float_t         HCalBarrelCollection_position_z[kMaxHCalBarrelCollection];   //[HCalBarrelCollection_]
   UInt_t          HCalBarrelCollection_contributions_begin[kMaxHCalBarrelCollection];   //[HCalBarrelCollection_]
   UInt_t          HCalBarrelCollection_contributions_end[kMaxHCalBarrelCollection];   //[HCalBarrelCollection_]
   Int_t           _HCalBarrelCollection_contributions_;
   Int_t           _HCalBarrelCollection_contributions_index[kMax_HCalBarrelCollection_contributions];   //[_HCalBarrelCollection_contributions_]
   UInt_t          _HCalBarrelCollection_contributions_collectionID[kMax_HCalBarrelCollection_contributions];   //[_HCalBarrelCollection_contributions_]
   Int_t           HCalBarrelCollectionContributions_;
   Int_t           HCalBarrelCollectionContributions_PDG[kMaxHCalBarrelCollectionContributions];   //[HCalBarrelCollectionContributions_]
   Float_t         HCalBarrelCollectionContributions_energy[kMaxHCalBarrelCollectionContributions];   //[HCalBarrelCollectionContributions_]
   Float_t         HCalBarrelCollectionContributions_time[kMaxHCalBarrelCollectionContributions];   //[HCalBarrelCollectionContributions_]
   Float_t         HCalBarrelCollectionContributions_stepPosition_x[kMaxHCalBarrelCollectionContributions];   //[HCalBarrelCollectionContributions_]
   Float_t         HCalBarrelCollectionContributions_stepPosition_y[kMaxHCalBarrelCollectionContributions];   //[HCalBarrelCollectionContributions_]
   Float_t         HCalBarrelCollectionContributions_stepPosition_z[kMaxHCalBarrelCollectionContributions];   //[HCalBarrelCollectionContributions_]
   Int_t           _HCalBarrelCollectionContributions_particle_;
   Int_t           _HCalBarrelCollectionContributions_particle_index[kMax_HCalBarrelCollectionContributions_particle];   //[_HCalBarrelCollectionContributions_particle_]
   UInt_t          _HCalBarrelCollectionContributions_particle_collectionID[kMax_HCalBarrelCollectionContributions_particle];   //[_HCalBarrelCollectionContributions_particle_]
   Int_t           HCALEndcap_;
   ULong_t         HCALEndcap_cellID[kMaxHCALEndcap];   //[HCALEndcap_]
   Float_t         HCALEndcap_energy[kMaxHCALEndcap];   //[HCALEndcap_]
   Float_t         HCALEndcap_energyError[kMaxHCALEndcap];   //[HCALEndcap_]
   Float_t         HCALEndcap_time[kMaxHCALEndcap];   //[HCALEndcap_]
   Float_t         HCALEndcap_position_x[kMaxHCALEndcap];   //[HCALEndcap_]
   Float_t         HCALEndcap_position_y[kMaxHCALEndcap];   //[HCALEndcap_]
   Float_t         HCALEndcap_position_z[kMaxHCALEndcap];   //[HCALEndcap_]
   Int_t           HCALEndcap_type[kMaxHCALEndcap];   //[HCALEndcap_]
   Int_t           HCalEndcapCollection_;
   ULong_t         HCalEndcapCollection_cellID[kMaxHCalEndcapCollection];   //[HCalEndcapCollection_]
   Float_t         HCalEndcapCollection_energy[kMaxHCalEndcapCollection];   //[HCalEndcapCollection_]
   Float_t         HCalEndcapCollection_position_x[kMaxHCalEndcapCollection];   //[HCalEndcapCollection_]
   Float_t         HCalEndcapCollection_position_y[kMaxHCalEndcapCollection];   //[HCalEndcapCollection_]
   Float_t         HCalEndcapCollection_position_z[kMaxHCalEndcapCollection];   //[HCalEndcapCollection_]
   UInt_t          HCalEndcapCollection_contributions_begin[kMaxHCalEndcapCollection];   //[HCalEndcapCollection_]
   UInt_t          HCalEndcapCollection_contributions_end[kMaxHCalEndcapCollection];   //[HCalEndcapCollection_]
   Int_t           _HCalEndcapCollection_contributions_;
   Int_t           _HCalEndcapCollection_contributions_index[kMax_HCalEndcapCollection_contributions];   //[_HCalEndcapCollection_contributions_]
   UInt_t          _HCalEndcapCollection_contributions_collectionID[kMax_HCalEndcapCollection_contributions];   //[_HCalEndcapCollection_contributions_]
   Int_t           HCalEndcapCollectionContributions_;
   Int_t           HCalEndcapCollectionContributions_PDG[kMaxHCalEndcapCollectionContributions];   //[HCalEndcapCollectionContributions_]
   Float_t         HCalEndcapCollectionContributions_energy[kMaxHCalEndcapCollectionContributions];   //[HCalEndcapCollectionContributions_]
   Float_t         HCalEndcapCollectionContributions_time[kMaxHCalEndcapCollectionContributions];   //[HCalEndcapCollectionContributions_]
   Float_t         HCalEndcapCollectionContributions_stepPosition_x[kMaxHCalEndcapCollectionContributions];   //[HCalEndcapCollectionContributions_]
   Float_t         HCalEndcapCollectionContributions_stepPosition_y[kMaxHCalEndcapCollectionContributions];   //[HCalEndcapCollectionContributions_]
   Float_t         HCalEndcapCollectionContributions_stepPosition_z[kMaxHCalEndcapCollectionContributions];   //[HCalEndcapCollectionContributions_]
   Int_t           _HCalEndcapCollectionContributions_particle_;
   Int_t           _HCalEndcapCollectionContributions_particle_index[kMax_HCalEndcapCollectionContributions_particle];   //[_HCalEndcapCollectionContributions_particle_]
   UInt_t          _HCalEndcapCollectionContributions_particle_collectionID[kMax_HCalEndcapCollectionContributions_particle];   //[_HCalEndcapCollectionContributions_particle_]
   Int_t           HCALOther_;
   ULong_t         HCALOther_cellID[kMaxHCALOther];   //[HCALOther_]
   Float_t         HCALOther_energy[kMaxHCALOther];   //[HCALOther_]
   Float_t         HCALOther_energyError[kMaxHCALOther];   //[HCALOther_]
   Float_t         HCALOther_time[kMaxHCALOther];   //[HCALOther_]
   Float_t         HCALOther_position_x[kMaxHCALOther];   //[HCALOther_]
   Float_t         HCALOther_position_y[kMaxHCALOther];   //[HCALOther_]
   Float_t         HCALOther_position_z[kMaxHCALOther];   //[HCALOther_]
   Int_t           HCALOther_type[kMaxHCALOther];   //[HCALOther_]
   Int_t           HCalRingCollection_;
   ULong_t         HCalRingCollection_cellID[kMaxHCalRingCollection];   //[HCalRingCollection_]
   Float_t         HCalRingCollection_energy[kMaxHCalRingCollection];   //[HCalRingCollection_]
   Float_t         HCalRingCollection_position_x[kMaxHCalRingCollection];   //[HCalRingCollection_]
   Float_t         HCalRingCollection_position_y[kMaxHCalRingCollection];   //[HCalRingCollection_]
   Float_t         HCalRingCollection_position_z[kMaxHCalRingCollection];   //[HCalRingCollection_]
   UInt_t          HCalRingCollection_contributions_begin[kMaxHCalRingCollection];   //[HCalRingCollection_]
   UInt_t          HCalRingCollection_contributions_end[kMaxHCalRingCollection];   //[HCalRingCollection_]
   Int_t           _HCalRingCollection_contributions_;
   Int_t           _HCalRingCollection_contributions_index[kMax_HCalRingCollection_contributions];   //[_HCalRingCollection_contributions_]
   UInt_t          _HCalRingCollection_contributions_collectionID[kMax_HCalRingCollection_contributions];   //[_HCalRingCollection_contributions_]
   Int_t           HCalRingCollectionContributions_;
   Int_t           HCalRingCollectionContributions_PDG[kMaxHCalRingCollectionContributions];   //[HCalRingCollectionContributions_]
   Float_t         HCalRingCollectionContributions_energy[kMaxHCalRingCollectionContributions];   //[HCalRingCollectionContributions_]
   Float_t         HCalRingCollectionContributions_time[kMaxHCalRingCollectionContributions];   //[HCalRingCollectionContributions_]
   Float_t         HCalRingCollectionContributions_stepPosition_x[kMaxHCalRingCollectionContributions];   //[HCalRingCollectionContributions_]
   Float_t         HCalRingCollectionContributions_stepPosition_y[kMaxHCalRingCollectionContributions];   //[HCalRingCollectionContributions_]
   Float_t         HCalRingCollectionContributions_stepPosition_z[kMaxHCalRingCollectionContributions];   //[HCalRingCollectionContributions_]
   Int_t           _HCalRingCollectionContributions_particle_;
   Int_t           _HCalRingCollectionContributions_particle_index[kMax_HCalRingCollectionContributions_particle];   //[_HCalRingCollectionContributions_particle_]
   UInt_t          _HCalRingCollectionContributions_particle_collectionID[kMax_HCalRingCollectionContributions_particle];   //[_HCalRingCollectionContributions_particle_]
   Int_t           InefficientMCParticles_objIdx_;
   Int_t           InefficientMCParticles_objIdx_index[kMaxInefficientMCParticles_objIdx];   //[InefficientMCParticles_objIdx_]
   UInt_t          InefficientMCParticles_objIdx_collectionID[kMaxInefficientMCParticles_objIdx];   //[InefficientMCParticles_objIdx_]
   Int_t           InnerTrackerBarrelCollection_;
   ULong_t         InnerTrackerBarrelCollection_cellID[kMaxInnerTrackerBarrelCollection];   //[InnerTrackerBarrelCollection_]
   Float_t         InnerTrackerBarrelCollection_eDep[kMaxInnerTrackerBarrelCollection];   //[InnerTrackerBarrelCollection_]
   Float_t         InnerTrackerBarrelCollection_time[kMaxInnerTrackerBarrelCollection];   //[InnerTrackerBarrelCollection_]
   Float_t         InnerTrackerBarrelCollection_pathLength[kMaxInnerTrackerBarrelCollection];   //[InnerTrackerBarrelCollection_]
   Int_t           InnerTrackerBarrelCollection_quality[kMaxInnerTrackerBarrelCollection];   //[InnerTrackerBarrelCollection_]
   Double_t        InnerTrackerBarrelCollection_position_x[kMaxInnerTrackerBarrelCollection];   //[InnerTrackerBarrelCollection_]
   Double_t        InnerTrackerBarrelCollection_position_y[kMaxInnerTrackerBarrelCollection];   //[InnerTrackerBarrelCollection_]
   Double_t        InnerTrackerBarrelCollection_position_z[kMaxInnerTrackerBarrelCollection];   //[InnerTrackerBarrelCollection_]
   Float_t         InnerTrackerBarrelCollection_momentum_x[kMaxInnerTrackerBarrelCollection];   //[InnerTrackerBarrelCollection_]
   Float_t         InnerTrackerBarrelCollection_momentum_y[kMaxInnerTrackerBarrelCollection];   //[InnerTrackerBarrelCollection_]
   Float_t         InnerTrackerBarrelCollection_momentum_z[kMaxInnerTrackerBarrelCollection];   //[InnerTrackerBarrelCollection_]
   Int_t           _InnerTrackerBarrelCollection_particle_;
   Int_t           _InnerTrackerBarrelCollection_particle_index[kMax_InnerTrackerBarrelCollection_particle];   //[_InnerTrackerBarrelCollection_particle_]
   UInt_t          _InnerTrackerBarrelCollection_particle_collectionID[kMax_InnerTrackerBarrelCollection_particle];   //[_InnerTrackerBarrelCollection_particle_]
   Int_t           InnerTrackerBarrelHitsRelations_;
   Float_t         InnerTrackerBarrelHitsRelations_weight[kMaxInnerTrackerBarrelHitsRelations];   //[InnerTrackerBarrelHitsRelations_]
   Int_t           _InnerTrackerBarrelHitsRelations_rec_;
   Int_t           _InnerTrackerBarrelHitsRelations_rec_index[kMax_InnerTrackerBarrelHitsRelations_rec];   //[_InnerTrackerBarrelHitsRelations_rec_]
   UInt_t          _InnerTrackerBarrelHitsRelations_rec_collectionID[kMax_InnerTrackerBarrelHitsRelations_rec];   //[_InnerTrackerBarrelHitsRelations_rec_]
   Int_t           _InnerTrackerBarrelHitsRelations_sim_;
   Int_t           _InnerTrackerBarrelHitsRelations_sim_index[kMax_InnerTrackerBarrelHitsRelations_sim];   //[_InnerTrackerBarrelHitsRelations_sim_]
   UInt_t          _InnerTrackerBarrelHitsRelations_sim_collectionID[kMax_InnerTrackerBarrelHitsRelations_sim];   //[_InnerTrackerBarrelHitsRelations_sim_]
   Int_t           InnerTrackerEndcapCollection_;
   ULong_t         InnerTrackerEndcapCollection_cellID[kMaxInnerTrackerEndcapCollection];   //[InnerTrackerEndcapCollection_]
   Float_t         InnerTrackerEndcapCollection_eDep[kMaxInnerTrackerEndcapCollection];   //[InnerTrackerEndcapCollection_]
   Float_t         InnerTrackerEndcapCollection_time[kMaxInnerTrackerEndcapCollection];   //[InnerTrackerEndcapCollection_]
   Float_t         InnerTrackerEndcapCollection_pathLength[kMaxInnerTrackerEndcapCollection];   //[InnerTrackerEndcapCollection_]
   Int_t           InnerTrackerEndcapCollection_quality[kMaxInnerTrackerEndcapCollection];   //[InnerTrackerEndcapCollection_]
   Double_t        InnerTrackerEndcapCollection_position_x[kMaxInnerTrackerEndcapCollection];   //[InnerTrackerEndcapCollection_]
   Double_t        InnerTrackerEndcapCollection_position_y[kMaxInnerTrackerEndcapCollection];   //[InnerTrackerEndcapCollection_]
   Double_t        InnerTrackerEndcapCollection_position_z[kMaxInnerTrackerEndcapCollection];   //[InnerTrackerEndcapCollection_]
   Float_t         InnerTrackerEndcapCollection_momentum_x[kMaxInnerTrackerEndcapCollection];   //[InnerTrackerEndcapCollection_]
   Float_t         InnerTrackerEndcapCollection_momentum_y[kMaxInnerTrackerEndcapCollection];   //[InnerTrackerEndcapCollection_]
   Float_t         InnerTrackerEndcapCollection_momentum_z[kMaxInnerTrackerEndcapCollection];   //[InnerTrackerEndcapCollection_]
   Int_t           _InnerTrackerEndcapCollection_particle_;
   Int_t           _InnerTrackerEndcapCollection_particle_index[kMax_InnerTrackerEndcapCollection_particle];   //[_InnerTrackerEndcapCollection_particle_]
   UInt_t          _InnerTrackerEndcapCollection_particle_collectionID[kMax_InnerTrackerEndcapCollection_particle];   //[_InnerTrackerEndcapCollection_particle_]
   Int_t           InnerTrackerEndcapHitsRelations_;
   Float_t         InnerTrackerEndcapHitsRelations_weight[kMaxInnerTrackerEndcapHitsRelations];   //[InnerTrackerEndcapHitsRelations_]
   Int_t           _InnerTrackerEndcapHitsRelations_rec_;
   Int_t           _InnerTrackerEndcapHitsRelations_rec_index[kMax_InnerTrackerEndcapHitsRelations_rec];   //[_InnerTrackerEndcapHitsRelations_rec_]
   UInt_t          _InnerTrackerEndcapHitsRelations_rec_collectionID[kMax_InnerTrackerEndcapHitsRelations_rec];   //[_InnerTrackerEndcapHitsRelations_rec_]
   Int_t           _InnerTrackerEndcapHitsRelations_sim_;
   Int_t           _InnerTrackerEndcapHitsRelations_sim_index[kMax_InnerTrackerEndcapHitsRelations_sim];   //[_InnerTrackerEndcapHitsRelations_sim_]
   UInt_t          _InnerTrackerEndcapHitsRelations_sim_collectionID[kMax_InnerTrackerEndcapHitsRelations_sim];   //[_InnerTrackerEndcapHitsRelations_sim_]
   Int_t           ITrackerEndcapHits_;
   ULong_t         ITrackerEndcapHits_cellID[kMaxITrackerEndcapHits];   //[ITrackerEndcapHits_]
   Int_t           ITrackerEndcapHits_type[kMaxITrackerEndcapHits];   //[ITrackerEndcapHits_]
   Int_t           ITrackerEndcapHits_quality[kMaxITrackerEndcapHits];   //[ITrackerEndcapHits_]
   Float_t         ITrackerEndcapHits_time[kMaxITrackerEndcapHits];   //[ITrackerEndcapHits_]
   Float_t         ITrackerEndcapHits_eDep[kMaxITrackerEndcapHits];   //[ITrackerEndcapHits_]
   Float_t         ITrackerEndcapHits_eDepError[kMaxITrackerEndcapHits];   //[ITrackerEndcapHits_]
   Float_t         ITrackerEndcapHits_u_a[kMaxITrackerEndcapHits];   //[ITrackerEndcapHits_]
   Float_t         ITrackerEndcapHits_u_b[kMaxITrackerEndcapHits];   //[ITrackerEndcapHits_]
   Float_t         ITrackerEndcapHits_v_a[kMaxITrackerEndcapHits];   //[ITrackerEndcapHits_]
   Float_t         ITrackerEndcapHits_v_b[kMaxITrackerEndcapHits];   //[ITrackerEndcapHits_]
   Float_t         ITrackerEndcapHits_du[kMaxITrackerEndcapHits];   //[ITrackerEndcapHits_]
   Float_t         ITrackerEndcapHits_dv[kMaxITrackerEndcapHits];   //[ITrackerEndcapHits_]
   Double_t        ITrackerEndcapHits_position_x[kMaxITrackerEndcapHits];   //[ITrackerEndcapHits_]
   Double_t        ITrackerEndcapHits_position_y[kMaxITrackerEndcapHits];   //[ITrackerEndcapHits_]
   Double_t        ITrackerEndcapHits_position_z[kMaxITrackerEndcapHits];   //[ITrackerEndcapHits_]
   Float_t         ITrackerEndcapHits_covMatrix[kMaxITrackerEndcapHits][6];   //[ITrackerEndcapHits_]
   Int_t           ITrackerHits_;
   ULong_t         ITrackerHits_cellID[kMaxITrackerHits];   //[ITrackerHits_]
   Int_t           ITrackerHits_type[kMaxITrackerHits];   //[ITrackerHits_]
   Int_t           ITrackerHits_quality[kMaxITrackerHits];   //[ITrackerHits_]
   Float_t         ITrackerHits_time[kMaxITrackerHits];   //[ITrackerHits_]
   Float_t         ITrackerHits_eDep[kMaxITrackerHits];   //[ITrackerHits_]
   Float_t         ITrackerHits_eDepError[kMaxITrackerHits];   //[ITrackerHits_]
   Float_t         ITrackerHits_u_a[kMaxITrackerHits];   //[ITrackerHits_]
   Float_t         ITrackerHits_u_b[kMaxITrackerHits];   //[ITrackerHits_]
   Float_t         ITrackerHits_v_a[kMaxITrackerHits];   //[ITrackerHits_]
   Float_t         ITrackerHits_v_b[kMaxITrackerHits];   //[ITrackerHits_]
   Float_t         ITrackerHits_du[kMaxITrackerHits];   //[ITrackerHits_]
   Float_t         ITrackerHits_dv[kMaxITrackerHits];   //[ITrackerHits_]
   Double_t        ITrackerHits_position_x[kMaxITrackerHits];   //[ITrackerHits_]
   Double_t        ITrackerHits_position_y[kMaxITrackerHits];   //[ITrackerHits_]
   Double_t        ITrackerHits_position_z[kMaxITrackerHits];   //[ITrackerHits_]
   Float_t         ITrackerHits_covMatrix[kMaxITrackerHits][6];   //[ITrackerHits_]
   Int_t           LooseSelectedPandoraPFOs_objIdx_;
   Int_t           LooseSelectedPandoraPFOs_objIdx_index[kMaxLooseSelectedPandoraPFOs_objIdx];   //[LooseSelectedPandoraPFOs_objIdx_]
   UInt_t          LooseSelectedPandoraPFOs_objIdx_collectionID[kMaxLooseSelectedPandoraPFOs_objIdx];   //[LooseSelectedPandoraPFOs_objIdx_]
   Int_t           LumiCalClusters_;
   Int_t           LumiCalClusters_type[kMaxLumiCalClusters];   //[LumiCalClusters_]
   Float_t         LumiCalClusters_energy[kMaxLumiCalClusters];   //[LumiCalClusters_]
   Float_t         LumiCalClusters_energyError[kMaxLumiCalClusters];   //[LumiCalClusters_]
   Float_t         LumiCalClusters_position_x[kMaxLumiCalClusters];   //[LumiCalClusters_]
   Float_t         LumiCalClusters_position_y[kMaxLumiCalClusters];   //[LumiCalClusters_]
   Float_t         LumiCalClusters_position_z[kMaxLumiCalClusters];   //[LumiCalClusters_]
   Float_t         LumiCalClusters_positionError[kMaxLumiCalClusters][6];   //[LumiCalClusters_]
   Float_t         LumiCalClusters_iTheta[kMaxLumiCalClusters];   //[LumiCalClusters_]
   Float_t         LumiCalClusters_phi[kMaxLumiCalClusters];   //[LumiCalClusters_]
   Float_t         LumiCalClusters_directionError_x[kMaxLumiCalClusters];   //[LumiCalClusters_]
   Float_t         LumiCalClusters_directionError_y[kMaxLumiCalClusters];   //[LumiCalClusters_]
   Float_t         LumiCalClusters_directionError_z[kMaxLumiCalClusters];   //[LumiCalClusters_]
   UInt_t          LumiCalClusters_shapeParameters_begin[kMaxLumiCalClusters];   //[LumiCalClusters_]
   UInt_t          LumiCalClusters_shapeParameters_end[kMaxLumiCalClusters];   //[LumiCalClusters_]
   UInt_t          LumiCalClusters_subdetectorEnergies_begin[kMaxLumiCalClusters];   //[LumiCalClusters_]
   UInt_t          LumiCalClusters_subdetectorEnergies_end[kMaxLumiCalClusters];   //[LumiCalClusters_]
   UInt_t          LumiCalClusters_clusters_begin[kMaxLumiCalClusters];   //[LumiCalClusters_]
   UInt_t          LumiCalClusters_clusters_end[kMaxLumiCalClusters];   //[LumiCalClusters_]
   UInt_t          LumiCalClusters_hits_begin[kMaxLumiCalClusters];   //[LumiCalClusters_]
   UInt_t          LumiCalClusters_hits_end[kMaxLumiCalClusters];   //[LumiCalClusters_]
   UInt_t          LumiCalClusters_particleIDs_begin[kMaxLumiCalClusters];   //[LumiCalClusters_]
   UInt_t          LumiCalClusters_particleIDs_end[kMaxLumiCalClusters];   //[LumiCalClusters_]
   Int_t           _LumiCalClusters_clusters_;
   Int_t           _LumiCalClusters_clusters_index[kMax_LumiCalClusters_clusters];   //[_LumiCalClusters_clusters_]
   UInt_t          _LumiCalClusters_clusters_collectionID[kMax_LumiCalClusters_clusters];   //[_LumiCalClusters_clusters_]
   Int_t           _LumiCalClusters_hits_;
   Int_t           _LumiCalClusters_hits_index[kMax_LumiCalClusters_hits];   //[_LumiCalClusters_hits_]
   UInt_t          _LumiCalClusters_hits_collectionID[kMax_LumiCalClusters_hits];   //[_LumiCalClusters_hits_]
   Int_t           _LumiCalClusters_particleIDs_;
   Int_t           _LumiCalClusters_particleIDs_index[kMax_LumiCalClusters_particleIDs];   //[_LumiCalClusters_particleIDs_]
   UInt_t          _LumiCalClusters_particleIDs_collectionID[kMax_LumiCalClusters_particleIDs];   //[_LumiCalClusters_particleIDs_]
   vector<float>   *_LumiCalClusters_shapeParameters;
   vector<float>   *_LumiCalClusters_subdetectorEnergies;
   Int_t           LumiCalClusters_particleIDs_;
   Int_t           LumiCalClusters_particleIDs_type[kMaxLumiCalClusters_particleIDs];   //[LumiCalClusters_particleIDs_]
   Int_t           LumiCalClusters_particleIDs_PDG[kMaxLumiCalClusters_particleIDs];   //[LumiCalClusters_particleIDs_]
   Int_t           LumiCalClusters_particleIDs_algorithmType[kMaxLumiCalClusters_particleIDs];   //[LumiCalClusters_particleIDs_]
   Float_t         LumiCalClusters_particleIDs_likelihood[kMaxLumiCalClusters_particleIDs];   //[LumiCalClusters_particleIDs_]
   UInt_t          LumiCalClusters_particleIDs_parameters_begin[kMaxLumiCalClusters_particleIDs];   //[LumiCalClusters_particleIDs_]
   UInt_t          LumiCalClusters_particleIDs_parameters_end[kMaxLumiCalClusters_particleIDs];   //[LumiCalClusters_particleIDs_]
   vector<float>   *_LumiCalClusters_particleIDs_parameters;
   Int_t           LumiCalCollection_;
   ULong_t         LumiCalCollection_cellID[kMaxLumiCalCollection];   //[LumiCalCollection_]
   Float_t         LumiCalCollection_energy[kMaxLumiCalCollection];   //[LumiCalCollection_]
   Float_t         LumiCalCollection_position_x[kMaxLumiCalCollection];   //[LumiCalCollection_]
   Float_t         LumiCalCollection_position_y[kMaxLumiCalCollection];   //[LumiCalCollection_]
   Float_t         LumiCalCollection_position_z[kMaxLumiCalCollection];   //[LumiCalCollection_]
   UInt_t          LumiCalCollection_contributions_begin[kMaxLumiCalCollection];   //[LumiCalCollection_]
   UInt_t          LumiCalCollection_contributions_end[kMaxLumiCalCollection];   //[LumiCalCollection_]
   Int_t           _LumiCalCollection_contributions_;
   Int_t           _LumiCalCollection_contributions_index[kMax_LumiCalCollection_contributions];   //[_LumiCalCollection_contributions_]
   UInt_t          _LumiCalCollection_contributions_collectionID[kMax_LumiCalCollection_contributions];   //[_LumiCalCollection_contributions_]
   Int_t           LumiCalCollectionContributions_;
   Int_t           LumiCalCollectionContributions_PDG[kMaxLumiCalCollectionContributions];   //[LumiCalCollectionContributions_]
   Float_t         LumiCalCollectionContributions_energy[kMaxLumiCalCollectionContributions];   //[LumiCalCollectionContributions_]
   Float_t         LumiCalCollectionContributions_time[kMaxLumiCalCollectionContributions];   //[LumiCalCollectionContributions_]
   Float_t         LumiCalCollectionContributions_stepPosition_x[kMaxLumiCalCollectionContributions];   //[LumiCalCollectionContributions_]
   Float_t         LumiCalCollectionContributions_stepPosition_y[kMaxLumiCalCollectionContributions];   //[LumiCalCollectionContributions_]
   Float_t         LumiCalCollectionContributions_stepPosition_z[kMaxLumiCalCollectionContributions];   //[LumiCalCollectionContributions_]
   Int_t           _LumiCalCollectionContributions_particle_;
   Int_t           _LumiCalCollectionContributions_particle_index[kMax_LumiCalCollectionContributions_particle];   //[_LumiCalCollectionContributions_particle_]
   UInt_t          _LumiCalCollectionContributions_particle_collectionID[kMax_LumiCalCollectionContributions_particle];   //[_LumiCalCollectionContributions_particle_]
   Int_t           LumiCalHits_;
   ULong_t         LumiCalHits_cellID[kMaxLumiCalHits];   //[LumiCalHits_]
   Float_t         LumiCalHits_energy[kMaxLumiCalHits];   //[LumiCalHits_]
   Float_t         LumiCalHits_energyError[kMaxLumiCalHits];   //[LumiCalHits_]
   Float_t         LumiCalHits_time[kMaxLumiCalHits];   //[LumiCalHits_]
   Float_t         LumiCalHits_position_x[kMaxLumiCalHits];   //[LumiCalHits_]
   Float_t         LumiCalHits_position_y[kMaxLumiCalHits];   //[LumiCalHits_]
   Float_t         LumiCalHits_position_z[kMaxLumiCalHits];   //[LumiCalHits_]
   Int_t           LumiCalHits_type[kMaxLumiCalHits];   //[LumiCalHits_]
   Int_t           LumiCalRecoParticles_;
   Int_t           LumiCalRecoParticles_PDG[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   Float_t         LumiCalRecoParticles_energy[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   Float_t         LumiCalRecoParticles_momentum_x[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   Float_t         LumiCalRecoParticles_momentum_y[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   Float_t         LumiCalRecoParticles_momentum_z[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   Float_t         LumiCalRecoParticles_referencePoint_x[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   Float_t         LumiCalRecoParticles_referencePoint_y[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   Float_t         LumiCalRecoParticles_referencePoint_z[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   Float_t         LumiCalRecoParticles_charge[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   Float_t         LumiCalRecoParticles_mass[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   Float_t         LumiCalRecoParticles_goodnessOfPID[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   Float_t         LumiCalRecoParticles_covMatrix[kMaxLumiCalRecoParticles][10];   //[LumiCalRecoParticles_]
   UInt_t          LumiCalRecoParticles_clusters_begin[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   UInt_t          LumiCalRecoParticles_clusters_end[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   UInt_t          LumiCalRecoParticles_tracks_begin[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   UInt_t          LumiCalRecoParticles_tracks_end[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   UInt_t          LumiCalRecoParticles_particles_begin[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   UInt_t          LumiCalRecoParticles_particles_end[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   UInt_t          LumiCalRecoParticles_particleIDs_begin[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   UInt_t          LumiCalRecoParticles_particleIDs_end[kMaxLumiCalRecoParticles];   //[LumiCalRecoParticles_]
   Int_t           _LumiCalRecoParticles_clusters_;
   Int_t           _LumiCalRecoParticles_clusters_index[kMax_LumiCalRecoParticles_clusters];   //[_LumiCalRecoParticles_clusters_]
   UInt_t          _LumiCalRecoParticles_clusters_collectionID[kMax_LumiCalRecoParticles_clusters];   //[_LumiCalRecoParticles_clusters_]
   Int_t           _LumiCalRecoParticles_tracks_;
   Int_t           _LumiCalRecoParticles_tracks_index[kMax_LumiCalRecoParticles_tracks];   //[_LumiCalRecoParticles_tracks_]
   UInt_t          _LumiCalRecoParticles_tracks_collectionID[kMax_LumiCalRecoParticles_tracks];   //[_LumiCalRecoParticles_tracks_]
   Int_t           _LumiCalRecoParticles_particles_;
   Int_t           _LumiCalRecoParticles_particles_index[kMax_LumiCalRecoParticles_particles];   //[_LumiCalRecoParticles_particles_]
   UInt_t          _LumiCalRecoParticles_particles_collectionID[kMax_LumiCalRecoParticles_particles];   //[_LumiCalRecoParticles_particles_]
   Int_t           _LumiCalRecoParticles_particleIDs_;
   Int_t           _LumiCalRecoParticles_particleIDs_index[kMax_LumiCalRecoParticles_particleIDs];   //[_LumiCalRecoParticles_particleIDs_]
   UInt_t          _LumiCalRecoParticles_particleIDs_collectionID[kMax_LumiCalRecoParticles_particleIDs];   //[_LumiCalRecoParticles_particleIDs_]
   Int_t           _LumiCalRecoParticles_startVertex_;
   Int_t           _LumiCalRecoParticles_startVertex_index[kMax_LumiCalRecoParticles_startVertex];   //[_LumiCalRecoParticles_startVertex_]
   UInt_t          _LumiCalRecoParticles_startVertex_collectionID[kMax_LumiCalRecoParticles_startVertex];   //[_LumiCalRecoParticles_startVertex_]
   Int_t           _LumiCalRecoParticles_particleIDUsed_;
   Int_t           _LumiCalRecoParticles_particleIDUsed_index[kMax_LumiCalRecoParticles_particleIDUsed];   //[_LumiCalRecoParticles_particleIDUsed_]
   UInt_t          _LumiCalRecoParticles_particleIDUsed_collectionID[kMax_LumiCalRecoParticles_particleIDUsed];   //[_LumiCalRecoParticles_particleIDUsed_]
   Int_t           LumiCalRecoParticles_particleIDs_;
   Int_t           LumiCalRecoParticles_particleIDs_type[kMaxLumiCalRecoParticles_particleIDs];   //[LumiCalRecoParticles_particleIDs_]
   Int_t           LumiCalRecoParticles_particleIDs_PDG[kMaxLumiCalRecoParticles_particleIDs];   //[LumiCalRecoParticles_particleIDs_]
   Int_t           LumiCalRecoParticles_particleIDs_algorithmType[kMaxLumiCalRecoParticles_particleIDs];   //[LumiCalRecoParticles_particleIDs_]
   Float_t         LumiCalRecoParticles_particleIDs_likelihood[kMaxLumiCalRecoParticles_particleIDs];   //[LumiCalRecoParticles_particleIDs_]
   UInt_t          LumiCalRecoParticles_particleIDs_parameters_begin[kMaxLumiCalRecoParticles_particleIDs];   //[LumiCalRecoParticles_particleIDs_]
   UInt_t          LumiCalRecoParticles_particleIDs_parameters_end[kMaxLumiCalRecoParticles_particleIDs];   //[LumiCalRecoParticles_particleIDs_]
   vector<float>   *_LumiCalRecoParticles_particleIDs_parameters;
   Int_t           MCParticles_;
   Int_t           MCParticles_PDG[kMaxMCParticles];   //[MCParticles_]
   Int_t           MCParticles_generatorStatus[kMaxMCParticles];   //[MCParticles_]
   Int_t           MCParticles_simulatorStatus[kMaxMCParticles];   //[MCParticles_]
   Float_t         MCParticles_charge[kMaxMCParticles];   //[MCParticles_]
   Float_t         MCParticles_time[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_mass[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_vertex_x[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_vertex_y[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_vertex_z[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_endpoint_x[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_endpoint_y[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_endpoint_z[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_momentum_x[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_momentum_y[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_momentum_z[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_momentumAtEndpoint_x[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_momentumAtEndpoint_y[kMaxMCParticles];   //[MCParticles_]
   Double_t        MCParticles_momentumAtEndpoint_z[kMaxMCParticles];   //[MCParticles_]
   Float_t         MCParticles_spin_x[kMaxMCParticles];   //[MCParticles_]
   Float_t         MCParticles_spin_y[kMaxMCParticles];   //[MCParticles_]
   Float_t         MCParticles_spin_z[kMaxMCParticles];   //[MCParticles_]
   Int_t           MCParticles_colorFlow_a[kMaxMCParticles];   //[MCParticles_]
   Int_t           MCParticles_colorFlow_b[kMaxMCParticles];   //[MCParticles_]
   UInt_t          MCParticles_parents_begin[kMaxMCParticles];   //[MCParticles_]
   UInt_t          MCParticles_parents_end[kMaxMCParticles];   //[MCParticles_]
   UInt_t          MCParticles_daughters_begin[kMaxMCParticles];   //[MCParticles_]
   UInt_t          MCParticles_daughters_end[kMaxMCParticles];   //[MCParticles_]
   Int_t           _MCParticles_parents_;
   Int_t           _MCParticles_parents_index[kMax_MCParticles_parents];   //[_MCParticles_parents_]
   UInt_t          _MCParticles_parents_collectionID[kMax_MCParticles_parents];   //[_MCParticles_parents_]
   Int_t           _MCParticles_daughters_;
   Int_t           _MCParticles_daughters_index[kMax_MCParticles_daughters];   //[_MCParticles_daughters_]
   UInt_t          _MCParticles_daughters_collectionID[kMax_MCParticles_daughters];   //[_MCParticles_daughters_]
   Int_t           MCParticlesSkimmed_objIdx_;
   Int_t           MCParticlesSkimmed_objIdx_index[kMaxMCParticlesSkimmed_objIdx];   //[MCParticlesSkimmed_objIdx_]
   UInt_t          MCParticlesSkimmed_objIdx_collectionID[kMaxMCParticlesSkimmed_objIdx];   //[MCParticlesSkimmed_objIdx_]
   Int_t           MCPhysicsParticles_objIdx_;
   Int_t           MCPhysicsParticles_objIdx_index[kMaxMCPhysicsParticles_objIdx];   //[MCPhysicsParticles_objIdx_]
   UInt_t          MCPhysicsParticles_objIdx_collectionID[kMaxMCPhysicsParticles_objIdx];   //[MCPhysicsParticles_objIdx_]
   Int_t           MCTruthClusterLink_;
   Float_t         MCTruthClusterLink_weight[kMaxMCTruthClusterLink];   //[MCTruthClusterLink_]
   Int_t           _MCTruthClusterLink_rec_;
   Int_t           _MCTruthClusterLink_rec_index[kMax_MCTruthClusterLink_rec];   //[_MCTruthClusterLink_rec_]
   UInt_t          _MCTruthClusterLink_rec_collectionID[kMax_MCTruthClusterLink_rec];   //[_MCTruthClusterLink_rec_]
   Int_t           _MCTruthClusterLink_sim_;
   Int_t           _MCTruthClusterLink_sim_index[kMax_MCTruthClusterLink_sim];   //[_MCTruthClusterLink_sim_]
   UInt_t          _MCTruthClusterLink_sim_collectionID[kMax_MCTruthClusterLink_sim];   //[_MCTruthClusterLink_sim_]
   Int_t           MCTruthRecoLink_;
   Float_t         MCTruthRecoLink_weight[kMaxMCTruthRecoLink];   //[MCTruthRecoLink_]
   Int_t           _MCTruthRecoLink_rec_;
   Int_t           _MCTruthRecoLink_rec_index[kMax_MCTruthRecoLink_rec];   //[_MCTruthRecoLink_rec_]
   UInt_t          _MCTruthRecoLink_rec_collectionID[kMax_MCTruthRecoLink_rec];   //[_MCTruthRecoLink_rec_]
   Int_t           _MCTruthRecoLink_sim_;
   Int_t           _MCTruthRecoLink_sim_index[kMax_MCTruthRecoLink_sim];   //[_MCTruthRecoLink_sim_]
   UInt_t          _MCTruthRecoLink_sim_collectionID[kMax_MCTruthRecoLink_sim];   //[_MCTruthRecoLink_sim_]
   Int_t           MCTruthSiTracksLink_;
   Float_t         MCTruthSiTracksLink_weight[kMaxMCTruthSiTracksLink];   //[MCTruthSiTracksLink_]
   Int_t           _MCTruthSiTracksLink_rec_;
   Int_t           _MCTruthSiTracksLink_rec_index[kMax_MCTruthSiTracksLink_rec];   //[_MCTruthSiTracksLink_rec_]
   UInt_t          _MCTruthSiTracksLink_rec_collectionID[kMax_MCTruthSiTracksLink_rec];   //[_MCTruthSiTracksLink_rec_]
   Int_t           _MCTruthSiTracksLink_sim_;
   Int_t           _MCTruthSiTracksLink_sim_index[kMax_MCTruthSiTracksLink_sim];   //[_MCTruthSiTracksLink_sim_]
   UInt_t          _MCTruthSiTracksLink_sim_collectionID[kMax_MCTruthSiTracksLink_sim];   //[_MCTruthSiTracksLink_sim_]
   Int_t           MUON_;
   ULong_t         MUON_cellID[kMaxMUON];   //[MUON_]
   Float_t         MUON_energy[kMaxMUON];   //[MUON_]
   Float_t         MUON_energyError[kMaxMUON];   //[MUON_]
   Float_t         MUON_time[kMaxMUON];   //[MUON_]
   Float_t         MUON_position_x[kMaxMUON];   //[MUON_]
   Float_t         MUON_position_y[kMaxMUON];   //[MUON_]
   Float_t         MUON_position_z[kMaxMUON];   //[MUON_]
   Int_t           MUON_type[kMaxMUON];   //[MUON_]
   Int_t           OTrackerEndcapHits_;
   ULong_t         OTrackerEndcapHits_cellID[kMaxOTrackerEndcapHits];   //[OTrackerEndcapHits_]
   Int_t           OTrackerEndcapHits_type[kMaxOTrackerEndcapHits];   //[OTrackerEndcapHits_]
   Int_t           OTrackerEndcapHits_quality[kMaxOTrackerEndcapHits];   //[OTrackerEndcapHits_]
   Float_t         OTrackerEndcapHits_time[kMaxOTrackerEndcapHits];   //[OTrackerEndcapHits_]
   Float_t         OTrackerEndcapHits_eDep[kMaxOTrackerEndcapHits];   //[OTrackerEndcapHits_]
   Float_t         OTrackerEndcapHits_eDepError[kMaxOTrackerEndcapHits];   //[OTrackerEndcapHits_]
   Float_t         OTrackerEndcapHits_u_a[kMaxOTrackerEndcapHits];   //[OTrackerEndcapHits_]
   Float_t         OTrackerEndcapHits_u_b[kMaxOTrackerEndcapHits];   //[OTrackerEndcapHits_]
   Float_t         OTrackerEndcapHits_v_a[kMaxOTrackerEndcapHits];   //[OTrackerEndcapHits_]
   Float_t         OTrackerEndcapHits_v_b[kMaxOTrackerEndcapHits];   //[OTrackerEndcapHits_]
   Float_t         OTrackerEndcapHits_du[kMaxOTrackerEndcapHits];   //[OTrackerEndcapHits_]
   Float_t         OTrackerEndcapHits_dv[kMaxOTrackerEndcapHits];   //[OTrackerEndcapHits_]
   Double_t        OTrackerEndcapHits_position_x[kMaxOTrackerEndcapHits];   //[OTrackerEndcapHits_]
   Double_t        OTrackerEndcapHits_position_y[kMaxOTrackerEndcapHits];   //[OTrackerEndcapHits_]
   Double_t        OTrackerEndcapHits_position_z[kMaxOTrackerEndcapHits];   //[OTrackerEndcapHits_]
   Float_t         OTrackerEndcapHits_covMatrix[kMaxOTrackerEndcapHits][6];   //[OTrackerEndcapHits_]
   Int_t           OTrackerHits_;
   ULong_t         OTrackerHits_cellID[kMaxOTrackerHits];   //[OTrackerHits_]
   Int_t           OTrackerHits_type[kMaxOTrackerHits];   //[OTrackerHits_]
   Int_t           OTrackerHits_quality[kMaxOTrackerHits];   //[OTrackerHits_]
   Float_t         OTrackerHits_time[kMaxOTrackerHits];   //[OTrackerHits_]
   Float_t         OTrackerHits_eDep[kMaxOTrackerHits];   //[OTrackerHits_]
   Float_t         OTrackerHits_eDepError[kMaxOTrackerHits];   //[OTrackerHits_]
   Float_t         OTrackerHits_u_a[kMaxOTrackerHits];   //[OTrackerHits_]
   Float_t         OTrackerHits_u_b[kMaxOTrackerHits];   //[OTrackerHits_]
   Float_t         OTrackerHits_v_a[kMaxOTrackerHits];   //[OTrackerHits_]
   Float_t         OTrackerHits_v_b[kMaxOTrackerHits];   //[OTrackerHits_]
   Float_t         OTrackerHits_du[kMaxOTrackerHits];   //[OTrackerHits_]
   Float_t         OTrackerHits_dv[kMaxOTrackerHits];   //[OTrackerHits_]
   Double_t        OTrackerHits_position_x[kMaxOTrackerHits];   //[OTrackerHits_]
   Double_t        OTrackerHits_position_y[kMaxOTrackerHits];   //[OTrackerHits_]
   Double_t        OTrackerHits_position_z[kMaxOTrackerHits];   //[OTrackerHits_]
   Float_t         OTrackerHits_covMatrix[kMaxOTrackerHits][6];   //[OTrackerHits_]
   Int_t           OuterTrackerBarrelCollection_;
   ULong_t         OuterTrackerBarrelCollection_cellID[kMaxOuterTrackerBarrelCollection];   //[OuterTrackerBarrelCollection_]
   Float_t         OuterTrackerBarrelCollection_eDep[kMaxOuterTrackerBarrelCollection];   //[OuterTrackerBarrelCollection_]
   Float_t         OuterTrackerBarrelCollection_time[kMaxOuterTrackerBarrelCollection];   //[OuterTrackerBarrelCollection_]
   Float_t         OuterTrackerBarrelCollection_pathLength[kMaxOuterTrackerBarrelCollection];   //[OuterTrackerBarrelCollection_]
   Int_t           OuterTrackerBarrelCollection_quality[kMaxOuterTrackerBarrelCollection];   //[OuterTrackerBarrelCollection_]
   Double_t        OuterTrackerBarrelCollection_position_x[kMaxOuterTrackerBarrelCollection];   //[OuterTrackerBarrelCollection_]
   Double_t        OuterTrackerBarrelCollection_position_y[kMaxOuterTrackerBarrelCollection];   //[OuterTrackerBarrelCollection_]
   Double_t        OuterTrackerBarrelCollection_position_z[kMaxOuterTrackerBarrelCollection];   //[OuterTrackerBarrelCollection_]
   Float_t         OuterTrackerBarrelCollection_momentum_x[kMaxOuterTrackerBarrelCollection];   //[OuterTrackerBarrelCollection_]
   Float_t         OuterTrackerBarrelCollection_momentum_y[kMaxOuterTrackerBarrelCollection];   //[OuterTrackerBarrelCollection_]
   Float_t         OuterTrackerBarrelCollection_momentum_z[kMaxOuterTrackerBarrelCollection];   //[OuterTrackerBarrelCollection_]
   Int_t           _OuterTrackerBarrelCollection_particle_;
   Int_t           _OuterTrackerBarrelCollection_particle_index[kMax_OuterTrackerBarrelCollection_particle];   //[_OuterTrackerBarrelCollection_particle_]
   UInt_t          _OuterTrackerBarrelCollection_particle_collectionID[kMax_OuterTrackerBarrelCollection_particle];   //[_OuterTrackerBarrelCollection_particle_]
   Int_t           OuterTrackerBarrelHitsRelations_;
   Float_t         OuterTrackerBarrelHitsRelations_weight[kMaxOuterTrackerBarrelHitsRelations];   //[OuterTrackerBarrelHitsRelations_]
   Int_t           _OuterTrackerBarrelHitsRelations_rec_;
   Int_t           _OuterTrackerBarrelHitsRelations_rec_index[kMax_OuterTrackerBarrelHitsRelations_rec];   //[_OuterTrackerBarrelHitsRelations_rec_]
   UInt_t          _OuterTrackerBarrelHitsRelations_rec_collectionID[kMax_OuterTrackerBarrelHitsRelations_rec];   //[_OuterTrackerBarrelHitsRelations_rec_]
   Int_t           _OuterTrackerBarrelHitsRelations_sim_;
   Int_t           _OuterTrackerBarrelHitsRelations_sim_index[kMax_OuterTrackerBarrelHitsRelations_sim];   //[_OuterTrackerBarrelHitsRelations_sim_]
   UInt_t          _OuterTrackerBarrelHitsRelations_sim_collectionID[kMax_OuterTrackerBarrelHitsRelations_sim];   //[_OuterTrackerBarrelHitsRelations_sim_]
   Int_t           OuterTrackerEndcapCollection_;
   ULong_t         OuterTrackerEndcapCollection_cellID[kMaxOuterTrackerEndcapCollection];   //[OuterTrackerEndcapCollection_]
   Float_t         OuterTrackerEndcapCollection_eDep[kMaxOuterTrackerEndcapCollection];   //[OuterTrackerEndcapCollection_]
   Float_t         OuterTrackerEndcapCollection_time[kMaxOuterTrackerEndcapCollection];   //[OuterTrackerEndcapCollection_]
   Float_t         OuterTrackerEndcapCollection_pathLength[kMaxOuterTrackerEndcapCollection];   //[OuterTrackerEndcapCollection_]
   Int_t           OuterTrackerEndcapCollection_quality[kMaxOuterTrackerEndcapCollection];   //[OuterTrackerEndcapCollection_]
   Double_t        OuterTrackerEndcapCollection_position_x[kMaxOuterTrackerEndcapCollection];   //[OuterTrackerEndcapCollection_]
   Double_t        OuterTrackerEndcapCollection_position_y[kMaxOuterTrackerEndcapCollection];   //[OuterTrackerEndcapCollection_]
   Double_t        OuterTrackerEndcapCollection_position_z[kMaxOuterTrackerEndcapCollection];   //[OuterTrackerEndcapCollection_]
   Float_t         OuterTrackerEndcapCollection_momentum_x[kMaxOuterTrackerEndcapCollection];   //[OuterTrackerEndcapCollection_]
   Float_t         OuterTrackerEndcapCollection_momentum_y[kMaxOuterTrackerEndcapCollection];   //[OuterTrackerEndcapCollection_]
   Float_t         OuterTrackerEndcapCollection_momentum_z[kMaxOuterTrackerEndcapCollection];   //[OuterTrackerEndcapCollection_]
   Int_t           _OuterTrackerEndcapCollection_particle_;
   Int_t           _OuterTrackerEndcapCollection_particle_index[kMax_OuterTrackerEndcapCollection_particle];   //[_OuterTrackerEndcapCollection_particle_]
   UInt_t          _OuterTrackerEndcapCollection_particle_collectionID[kMax_OuterTrackerEndcapCollection_particle];   //[_OuterTrackerEndcapCollection_particle_]
   Int_t           OuterTrackerEndcapHitsRelations_;
   Float_t         OuterTrackerEndcapHitsRelations_weight[kMaxOuterTrackerEndcapHitsRelations];   //[OuterTrackerEndcapHitsRelations_]
   Int_t           _OuterTrackerEndcapHitsRelations_rec_;
   Int_t           _OuterTrackerEndcapHitsRelations_rec_index[kMax_OuterTrackerEndcapHitsRelations_rec];   //[_OuterTrackerEndcapHitsRelations_rec_]
   UInt_t          _OuterTrackerEndcapHitsRelations_rec_collectionID[kMax_OuterTrackerEndcapHitsRelations_rec];   //[_OuterTrackerEndcapHitsRelations_rec_]
   Int_t           _OuterTrackerEndcapHitsRelations_sim_;
   Int_t           _OuterTrackerEndcapHitsRelations_sim_index[kMax_OuterTrackerEndcapHitsRelations_sim];   //[_OuterTrackerEndcapHitsRelations_sim_]
   UInt_t          _OuterTrackerEndcapHitsRelations_sim_collectionID[kMax_OuterTrackerEndcapHitsRelations_sim];   //[_OuterTrackerEndcapHitsRelations_sim_]
   Int_t           PandoraClusters_;
   Int_t           PandoraClusters_type[kMaxPandoraClusters];   //[PandoraClusters_]
   Float_t         PandoraClusters_energy[kMaxPandoraClusters];   //[PandoraClusters_]
   Float_t         PandoraClusters_energyError[kMaxPandoraClusters];   //[PandoraClusters_]
   Float_t         PandoraClusters_position_x[kMaxPandoraClusters];   //[PandoraClusters_]
   Float_t         PandoraClusters_position_y[kMaxPandoraClusters];   //[PandoraClusters_]
   Float_t         PandoraClusters_position_z[kMaxPandoraClusters];   //[PandoraClusters_]
   Float_t         PandoraClusters_positionError[kMaxPandoraClusters][6];   //[PandoraClusters_]
   Float_t         PandoraClusters_iTheta[kMaxPandoraClusters];   //[PandoraClusters_]
   Float_t         PandoraClusters_phi[kMaxPandoraClusters];   //[PandoraClusters_]
   Float_t         PandoraClusters_directionError_x[kMaxPandoraClusters];   //[PandoraClusters_]
   Float_t         PandoraClusters_directionError_y[kMaxPandoraClusters];   //[PandoraClusters_]
   Float_t         PandoraClusters_directionError_z[kMaxPandoraClusters];   //[PandoraClusters_]
   UInt_t          PandoraClusters_shapeParameters_begin[kMaxPandoraClusters];   //[PandoraClusters_]
   UInt_t          PandoraClusters_shapeParameters_end[kMaxPandoraClusters];   //[PandoraClusters_]
   UInt_t          PandoraClusters_subdetectorEnergies_begin[kMaxPandoraClusters];   //[PandoraClusters_]
   UInt_t          PandoraClusters_subdetectorEnergies_end[kMaxPandoraClusters];   //[PandoraClusters_]
   UInt_t          PandoraClusters_clusters_begin[kMaxPandoraClusters];   //[PandoraClusters_]
   UInt_t          PandoraClusters_clusters_end[kMaxPandoraClusters];   //[PandoraClusters_]
   UInt_t          PandoraClusters_hits_begin[kMaxPandoraClusters];   //[PandoraClusters_]
   UInt_t          PandoraClusters_hits_end[kMaxPandoraClusters];   //[PandoraClusters_]
   UInt_t          PandoraClusters_particleIDs_begin[kMaxPandoraClusters];   //[PandoraClusters_]
   UInt_t          PandoraClusters_particleIDs_end[kMaxPandoraClusters];   //[PandoraClusters_]
   Int_t           _PandoraClusters_clusters_;
   Int_t           _PandoraClusters_clusters_index[kMax_PandoraClusters_clusters];   //[_PandoraClusters_clusters_]
   UInt_t          _PandoraClusters_clusters_collectionID[kMax_PandoraClusters_clusters];   //[_PandoraClusters_clusters_]
   Int_t           _PandoraClusters_hits_;
   Int_t           _PandoraClusters_hits_index[kMax_PandoraClusters_hits];   //[_PandoraClusters_hits_]
   UInt_t          _PandoraClusters_hits_collectionID[kMax_PandoraClusters_hits];   //[_PandoraClusters_hits_]
   Int_t           _PandoraClusters_particleIDs_;
   Int_t           _PandoraClusters_particleIDs_index[kMax_PandoraClusters_particleIDs];   //[_PandoraClusters_particleIDs_]
   UInt_t          _PandoraClusters_particleIDs_collectionID[kMax_PandoraClusters_particleIDs];   //[_PandoraClusters_particleIDs_]
   vector<float>   *_PandoraClusters_shapeParameters;
   vector<float>   *_PandoraClusters_subdetectorEnergies;
   Int_t           PandoraClusters_particleIDs_;
   Int_t           PandoraClusters_particleIDs_type[kMaxPandoraClusters_particleIDs];   //[PandoraClusters_particleIDs_]
   Int_t           PandoraClusters_particleIDs_PDG[kMaxPandoraClusters_particleIDs];   //[PandoraClusters_particleIDs_]
   Int_t           PandoraClusters_particleIDs_algorithmType[kMaxPandoraClusters_particleIDs];   //[PandoraClusters_particleIDs_]
   Float_t         PandoraClusters_particleIDs_likelihood[kMaxPandoraClusters_particleIDs];   //[PandoraClusters_particleIDs_]
   UInt_t          PandoraClusters_particleIDs_parameters_begin[kMaxPandoraClusters_particleIDs];   //[PandoraClusters_particleIDs_]
   UInt_t          PandoraClusters_particleIDs_parameters_end[kMaxPandoraClusters_particleIDs];   //[PandoraClusters_particleIDs_]
   vector<float>   *_PandoraClusters_particleIDs_parameters;
   Int_t           PandoraPFOs_;
   Int_t           PandoraPFOs_PDG[kMaxPandoraPFOs];   //[PandoraPFOs_]
   Float_t         PandoraPFOs_energy[kMaxPandoraPFOs];   //[PandoraPFOs_]
   Float_t         PandoraPFOs_momentum_x[kMaxPandoraPFOs];   //[PandoraPFOs_]
   Float_t         PandoraPFOs_momentum_y[kMaxPandoraPFOs];   //[PandoraPFOs_]
   Float_t         PandoraPFOs_momentum_z[kMaxPandoraPFOs];   //[PandoraPFOs_]
   Float_t         PandoraPFOs_referencePoint_x[kMaxPandoraPFOs];   //[PandoraPFOs_]
   Float_t         PandoraPFOs_referencePoint_y[kMaxPandoraPFOs];   //[PandoraPFOs_]
   Float_t         PandoraPFOs_referencePoint_z[kMaxPandoraPFOs];   //[PandoraPFOs_]
   Float_t         PandoraPFOs_charge[kMaxPandoraPFOs];   //[PandoraPFOs_]
   Float_t         PandoraPFOs_mass[kMaxPandoraPFOs];   //[PandoraPFOs_]
   Float_t         PandoraPFOs_goodnessOfPID[kMaxPandoraPFOs];   //[PandoraPFOs_]
   Float_t         PandoraPFOs_covMatrix[kMaxPandoraPFOs][10];   //[PandoraPFOs_]
   UInt_t          PandoraPFOs_clusters_begin[kMaxPandoraPFOs];   //[PandoraPFOs_]
   UInt_t          PandoraPFOs_clusters_end[kMaxPandoraPFOs];   //[PandoraPFOs_]
   UInt_t          PandoraPFOs_tracks_begin[kMaxPandoraPFOs];   //[PandoraPFOs_]
   UInt_t          PandoraPFOs_tracks_end[kMaxPandoraPFOs];   //[PandoraPFOs_]
   UInt_t          PandoraPFOs_particles_begin[kMaxPandoraPFOs];   //[PandoraPFOs_]
   UInt_t          PandoraPFOs_particles_end[kMaxPandoraPFOs];   //[PandoraPFOs_]
   UInt_t          PandoraPFOs_particleIDs_begin[kMaxPandoraPFOs];   //[PandoraPFOs_]
   UInt_t          PandoraPFOs_particleIDs_end[kMaxPandoraPFOs];   //[PandoraPFOs_]
   Int_t           _PandoraPFOs_clusters_;
   Int_t           _PandoraPFOs_clusters_index[kMax_PandoraPFOs_clusters];   //[_PandoraPFOs_clusters_]
   UInt_t          _PandoraPFOs_clusters_collectionID[kMax_PandoraPFOs_clusters];   //[_PandoraPFOs_clusters_]
   Int_t           _PandoraPFOs_tracks_;
   Int_t           _PandoraPFOs_tracks_index[kMax_PandoraPFOs_tracks];   //[_PandoraPFOs_tracks_]
   UInt_t          _PandoraPFOs_tracks_collectionID[kMax_PandoraPFOs_tracks];   //[_PandoraPFOs_tracks_]
   Int_t           _PandoraPFOs_particles_;
   Int_t           _PandoraPFOs_particles_index[kMax_PandoraPFOs_particles];   //[_PandoraPFOs_particles_]
   UInt_t          _PandoraPFOs_particles_collectionID[kMax_PandoraPFOs_particles];   //[_PandoraPFOs_particles_]
   Int_t           _PandoraPFOs_particleIDs_;
   Int_t           _PandoraPFOs_particleIDs_index[kMax_PandoraPFOs_particleIDs];   //[_PandoraPFOs_particleIDs_]
   UInt_t          _PandoraPFOs_particleIDs_collectionID[kMax_PandoraPFOs_particleIDs];   //[_PandoraPFOs_particleIDs_]
   Int_t           _PandoraPFOs_startVertex_;
   Int_t           _PandoraPFOs_startVertex_index[kMax_PandoraPFOs_startVertex];   //[_PandoraPFOs_startVertex_]
   UInt_t          _PandoraPFOs_startVertex_collectionID[kMax_PandoraPFOs_startVertex];   //[_PandoraPFOs_startVertex_]
   Int_t           _PandoraPFOs_particleIDUsed_;
   Int_t           _PandoraPFOs_particleIDUsed_index[kMax_PandoraPFOs_particleIDUsed];   //[_PandoraPFOs_particleIDUsed_]
   UInt_t          _PandoraPFOs_particleIDUsed_collectionID[kMax_PandoraPFOs_particleIDUsed];   //[_PandoraPFOs_particleIDUsed_]
   Int_t           PandoraPFOs_particleIDs_;
   Int_t           PandoraPFOs_particleIDs_type[kMaxPandoraPFOs_particleIDs];   //[PandoraPFOs_particleIDs_]
   Int_t           PandoraPFOs_particleIDs_PDG[kMaxPandoraPFOs_particleIDs];   //[PandoraPFOs_particleIDs_]
   Int_t           PandoraPFOs_particleIDs_algorithmType[kMaxPandoraPFOs_particleIDs];   //[PandoraPFOs_particleIDs_]
   Float_t         PandoraPFOs_particleIDs_likelihood[kMaxPandoraPFOs_particleIDs];   //[PandoraPFOs_particleIDs_]
   UInt_t          PandoraPFOs_particleIDs_parameters_begin[kMaxPandoraPFOs_particleIDs];   //[PandoraPFOs_particleIDs_]
   UInt_t          PandoraPFOs_particleIDs_parameters_end[kMaxPandoraPFOs_particleIDs];   //[PandoraPFOs_particleIDs_]
   vector<float>   *_PandoraPFOs_particleIDs_parameters;
   Int_t           PandoraStartVertices_;
   Int_t           PandoraStartVertices_primary[kMaxPandoraStartVertices];   //[PandoraStartVertices_]
   Float_t         PandoraStartVertices_chi2[kMaxPandoraStartVertices];   //[PandoraStartVertices_]
   Float_t         PandoraStartVertices_probability[kMaxPandoraStartVertices];   //[PandoraStartVertices_]
   Float_t         PandoraStartVertices_position_x[kMaxPandoraStartVertices];   //[PandoraStartVertices_]
   Float_t         PandoraStartVertices_position_y[kMaxPandoraStartVertices];   //[PandoraStartVertices_]
   Float_t         PandoraStartVertices_position_z[kMaxPandoraStartVertices];   //[PandoraStartVertices_]
   Float_t         PandoraStartVertices_covMatrix[kMaxPandoraStartVertices][6];   //[PandoraStartVertices_]
   Int_t           PandoraStartVertices_algorithmType[kMaxPandoraStartVertices];   //[PandoraStartVertices_]
   UInt_t          PandoraStartVertices_parameters_begin[kMaxPandoraStartVertices];   //[PandoraStartVertices_]
   UInt_t          PandoraStartVertices_parameters_end[kMaxPandoraStartVertices];   //[PandoraStartVertices_]
   Int_t           _PandoraStartVertices_associatedParticle_;
   Int_t           _PandoraStartVertices_associatedParticle_index[kMax_PandoraStartVertices_associatedParticle];   //[_PandoraStartVertices_associatedParticle_]
   UInt_t          _PandoraStartVertices_associatedParticle_collectionID[kMax_PandoraStartVertices_associatedParticle];   //[_PandoraStartVertices_associatedParticle_]
   vector<float>   *_PandoraStartVertices_parameters;
   Int_t           PFOsFromJets_objIdx_;
   Int_t           PFOsFromJets_objIdx_index[kMaxPFOsFromJets_objIdx];   //[PFOsFromJets_objIdx_]
   UInt_t          PFOsFromJets_objIdx_collectionID[kMaxPFOsFromJets_objIdx];   //[PFOsFromJets_objIdx_]
   Int_t           PrimaryVertices_;
   Int_t           PrimaryVertices_primary[kMaxPrimaryVertices];   //[PrimaryVertices_]
   Float_t         PrimaryVertices_chi2[kMaxPrimaryVertices];   //[PrimaryVertices_]
   Float_t         PrimaryVertices_probability[kMaxPrimaryVertices];   //[PrimaryVertices_]
   Float_t         PrimaryVertices_position_x[kMaxPrimaryVertices];   //[PrimaryVertices_]
   Float_t         PrimaryVertices_position_y[kMaxPrimaryVertices];   //[PrimaryVertices_]
   Float_t         PrimaryVertices_position_z[kMaxPrimaryVertices];   //[PrimaryVertices_]
   Float_t         PrimaryVertices_covMatrix[kMaxPrimaryVertices][6];   //[PrimaryVertices_]
   Int_t           PrimaryVertices_algorithmType[kMaxPrimaryVertices];   //[PrimaryVertices_]
   UInt_t          PrimaryVertices_parameters_begin[kMaxPrimaryVertices];   //[PrimaryVertices_]
   UInt_t          PrimaryVertices_parameters_end[kMaxPrimaryVertices];   //[PrimaryVertices_]
   Int_t           _PrimaryVertices_associatedParticle_;
   Int_t           _PrimaryVertices_associatedParticle_index[kMax_PrimaryVertices_associatedParticle];   //[_PrimaryVertices_associatedParticle_]
   UInt_t          _PrimaryVertices_associatedParticle_collectionID[kMax_PrimaryVertices_associatedParticle];   //[_PrimaryVertices_associatedParticle_]
   vector<float>   *_PrimaryVertices_parameters;
   Int_t           PrimaryVertices_RP_;
   Int_t           PrimaryVertices_RP_PDG[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   Float_t         PrimaryVertices_RP_energy[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   Float_t         PrimaryVertices_RP_momentum_x[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   Float_t         PrimaryVertices_RP_momentum_y[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   Float_t         PrimaryVertices_RP_momentum_z[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   Float_t         PrimaryVertices_RP_referencePoint_x[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   Float_t         PrimaryVertices_RP_referencePoint_y[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   Float_t         PrimaryVertices_RP_referencePoint_z[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   Float_t         PrimaryVertices_RP_charge[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   Float_t         PrimaryVertices_RP_mass[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   Float_t         PrimaryVertices_RP_goodnessOfPID[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   Float_t         PrimaryVertices_RP_covMatrix[kMaxPrimaryVertices_RP][10];   //[PrimaryVertices_RP_]
   UInt_t          PrimaryVertices_RP_clusters_begin[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   UInt_t          PrimaryVertices_RP_clusters_end[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   UInt_t          PrimaryVertices_RP_tracks_begin[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   UInt_t          PrimaryVertices_RP_tracks_end[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   UInt_t          PrimaryVertices_RP_particles_begin[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   UInt_t          PrimaryVertices_RP_particles_end[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   UInt_t          PrimaryVertices_RP_particleIDs_begin[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   UInt_t          PrimaryVertices_RP_particleIDs_end[kMaxPrimaryVertices_RP];   //[PrimaryVertices_RP_]
   Int_t           _PrimaryVertices_RP_clusters_;
   Int_t           _PrimaryVertices_RP_clusters_index[kMax_PrimaryVertices_RP_clusters];   //[_PrimaryVertices_RP_clusters_]
   UInt_t          _PrimaryVertices_RP_clusters_collectionID[kMax_PrimaryVertices_RP_clusters];   //[_PrimaryVertices_RP_clusters_]
   Int_t           _PrimaryVertices_RP_tracks_;
   Int_t           _PrimaryVertices_RP_tracks_index[kMax_PrimaryVertices_RP_tracks];   //[_PrimaryVertices_RP_tracks_]
   UInt_t          _PrimaryVertices_RP_tracks_collectionID[kMax_PrimaryVertices_RP_tracks];   //[_PrimaryVertices_RP_tracks_]
   Int_t           _PrimaryVertices_RP_particles_;
   Int_t           _PrimaryVertices_RP_particles_index[kMax_PrimaryVertices_RP_particles];   //[_PrimaryVertices_RP_particles_]
   UInt_t          _PrimaryVertices_RP_particles_collectionID[kMax_PrimaryVertices_RP_particles];   //[_PrimaryVertices_RP_particles_]
   Int_t           _PrimaryVertices_RP_particleIDs_;
   Int_t           _PrimaryVertices_RP_particleIDs_index[kMax_PrimaryVertices_RP_particleIDs];   //[_PrimaryVertices_RP_particleIDs_]
   UInt_t          _PrimaryVertices_RP_particleIDs_collectionID[kMax_PrimaryVertices_RP_particleIDs];   //[_PrimaryVertices_RP_particleIDs_]
   Int_t           _PrimaryVertices_RP_startVertex_;
   Int_t           _PrimaryVertices_RP_startVertex_index[kMax_PrimaryVertices_RP_startVertex];   //[_PrimaryVertices_RP_startVertex_]
   UInt_t          _PrimaryVertices_RP_startVertex_collectionID[kMax_PrimaryVertices_RP_startVertex];   //[_PrimaryVertices_RP_startVertex_]
   Int_t           _PrimaryVertices_RP_particleIDUsed_;
   Int_t           _PrimaryVertices_RP_particleIDUsed_index[kMax_PrimaryVertices_RP_particleIDUsed];   //[_PrimaryVertices_RP_particleIDUsed_]
   UInt_t          _PrimaryVertices_RP_particleIDUsed_collectionID[kMax_PrimaryVertices_RP_particleIDUsed];   //[_PrimaryVertices_RP_particleIDUsed_]
   Int_t           PrimaryVertices_RP_particleIDs_;
   Int_t           PrimaryVertices_RP_particleIDs_type[kMaxPrimaryVertices_RP_particleIDs];   //[PrimaryVertices_RP_particleIDs_]
   Int_t           PrimaryVertices_RP_particleIDs_PDG[kMaxPrimaryVertices_RP_particleIDs];   //[PrimaryVertices_RP_particleIDs_]
   Int_t           PrimaryVertices_RP_particleIDs_algorithmType[kMaxPrimaryVertices_RP_particleIDs];   //[PrimaryVertices_RP_particleIDs_]
   Float_t         PrimaryVertices_RP_particleIDs_likelihood[kMaxPrimaryVertices_RP_particleIDs];   //[PrimaryVertices_RP_particleIDs_]
   UInt_t          PrimaryVertices_RP_particleIDs_parameters_begin[kMaxPrimaryVertices_RP_particleIDs];   //[PrimaryVertices_RP_particleIDs_]
   UInt_t          PrimaryVertices_RP_particleIDs_parameters_end[kMaxPrimaryVertices_RP_particleIDs];   //[PrimaryVertices_RP_particleIDs_]
   vector<float>   *_PrimaryVertices_RP_particleIDs_parameters;
   Int_t           RecoMCTruthLink_;
   Float_t         RecoMCTruthLink_weight[kMaxRecoMCTruthLink];   //[RecoMCTruthLink_]
   Int_t           _RecoMCTruthLink_rec_;
   Int_t           _RecoMCTruthLink_rec_index[kMax_RecoMCTruthLink_rec];   //[_RecoMCTruthLink_rec_]
   UInt_t          _RecoMCTruthLink_rec_collectionID[kMax_RecoMCTruthLink_rec];   //[_RecoMCTruthLink_rec_]
   Int_t           _RecoMCTruthLink_sim_;
   Int_t           _RecoMCTruthLink_sim_index[kMax_RecoMCTruthLink_sim];   //[_RecoMCTruthLink_sim_]
   UInt_t          _RecoMCTruthLink_sim_collectionID[kMax_RecoMCTruthLink_sim];   //[_RecoMCTruthLink_sim_]
   Int_t           RefinedVertexJets_;
   Int_t           RefinedVertexJets_PDG[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   Float_t         RefinedVertexJets_energy[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   Float_t         RefinedVertexJets_momentum_x[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   Float_t         RefinedVertexJets_momentum_y[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   Float_t         RefinedVertexJets_momentum_z[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   Float_t         RefinedVertexJets_referencePoint_x[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   Float_t         RefinedVertexJets_referencePoint_y[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   Float_t         RefinedVertexJets_referencePoint_z[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   Float_t         RefinedVertexJets_charge[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   Float_t         RefinedVertexJets_mass[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   Float_t         RefinedVertexJets_goodnessOfPID[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   Float_t         RefinedVertexJets_covMatrix[kMaxRefinedVertexJets][10];   //[RefinedVertexJets_]
   UInt_t          RefinedVertexJets_clusters_begin[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   UInt_t          RefinedVertexJets_clusters_end[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   UInt_t          RefinedVertexJets_tracks_begin[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   UInt_t          RefinedVertexJets_tracks_end[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   UInt_t          RefinedVertexJets_particles_begin[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   UInt_t          RefinedVertexJets_particles_end[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   UInt_t          RefinedVertexJets_particleIDs_begin[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   UInt_t          RefinedVertexJets_particleIDs_end[kMaxRefinedVertexJets];   //[RefinedVertexJets_]
   Int_t           _RefinedVertexJets_clusters_;
   Int_t           _RefinedVertexJets_clusters_index[kMax_RefinedVertexJets_clusters];   //[_RefinedVertexJets_clusters_]
   UInt_t          _RefinedVertexJets_clusters_collectionID[kMax_RefinedVertexJets_clusters];   //[_RefinedVertexJets_clusters_]
   Int_t           _RefinedVertexJets_tracks_;
   Int_t           _RefinedVertexJets_tracks_index[kMax_RefinedVertexJets_tracks];   //[_RefinedVertexJets_tracks_]
   UInt_t          _RefinedVertexJets_tracks_collectionID[kMax_RefinedVertexJets_tracks];   //[_RefinedVertexJets_tracks_]
   Int_t           _RefinedVertexJets_particles_;
   Int_t           _RefinedVertexJets_particles_index[kMax_RefinedVertexJets_particles];   //[_RefinedVertexJets_particles_]
   UInt_t          _RefinedVertexJets_particles_collectionID[kMax_RefinedVertexJets_particles];   //[_RefinedVertexJets_particles_]
   Int_t           _RefinedVertexJets_particleIDs_;
   Int_t           _RefinedVertexJets_particleIDs_index[kMax_RefinedVertexJets_particleIDs];   //[_RefinedVertexJets_particleIDs_]
   UInt_t          _RefinedVertexJets_particleIDs_collectionID[kMax_RefinedVertexJets_particleIDs];   //[_RefinedVertexJets_particleIDs_]
   Int_t           _RefinedVertexJets_startVertex_;
   Int_t           _RefinedVertexJets_startVertex_index[kMax_RefinedVertexJets_startVertex];   //[_RefinedVertexJets_startVertex_]
   UInt_t          _RefinedVertexJets_startVertex_collectionID[kMax_RefinedVertexJets_startVertex];   //[_RefinedVertexJets_startVertex_]
   Int_t           _RefinedVertexJets_particleIDUsed_;
   Int_t           _RefinedVertexJets_particleIDUsed_index[kMax_RefinedVertexJets_particleIDUsed];   //[_RefinedVertexJets_particleIDUsed_]
   UInt_t          _RefinedVertexJets_particleIDUsed_collectionID[kMax_RefinedVertexJets_particleIDUsed];   //[_RefinedVertexJets_particleIDUsed_]
   Int_t           RefinedVertexJets_particleIDs_;
   Int_t           RefinedVertexJets_particleIDs_type[kMaxRefinedVertexJets_particleIDs];   //[RefinedVertexJets_particleIDs_]
   Int_t           RefinedVertexJets_particleIDs_PDG[kMaxRefinedVertexJets_particleIDs];   //[RefinedVertexJets_particleIDs_]
   Int_t           RefinedVertexJets_particleIDs_algorithmType[kMaxRefinedVertexJets_particleIDs];   //[RefinedVertexJets_particleIDs_]
   Float_t         RefinedVertexJets_particleIDs_likelihood[kMaxRefinedVertexJets_particleIDs];   //[RefinedVertexJets_particleIDs_]
   UInt_t          RefinedVertexJets_particleIDs_parameters_begin[kMaxRefinedVertexJets_particleIDs];   //[RefinedVertexJets_particleIDs_]
   UInt_t          RefinedVertexJets_particleIDs_parameters_end[kMaxRefinedVertexJets_particleIDs];   //[RefinedVertexJets_particleIDs_]
   vector<float>   *_RefinedVertexJets_particleIDs_parameters;
   Int_t           RefinedVertexJets_rel_;
   Float_t         RefinedVertexJets_rel_weight[kMaxRefinedVertexJets_rel];   //[RefinedVertexJets_rel_]
   Int_t           _RefinedVertexJets_rel_rec_;
   Int_t           _RefinedVertexJets_rel_rec_index[kMax_RefinedVertexJets_rel_rec];   //[_RefinedVertexJets_rel_rec_]
   UInt_t          _RefinedVertexJets_rel_rec_collectionID[kMax_RefinedVertexJets_rel_rec];   //[_RefinedVertexJets_rel_rec_]
   Int_t           _RefinedVertexJets_rel_vertex_;
   Int_t           _RefinedVertexJets_rel_vertex_index[kMax_RefinedVertexJets_rel_vertex];   //[_RefinedVertexJets_rel_vertex_]
   UInt_t          _RefinedVertexJets_rel_vertex_collectionID[kMax_RefinedVertexJets_rel_vertex];   //[_RefinedVertexJets_rel_vertex_]
   Int_t           RefinedVertexJets_vtx_;
   Int_t           RefinedVertexJets_vtx_primary[kMaxRefinedVertexJets_vtx];   //[RefinedVertexJets_vtx_]
   Float_t         RefinedVertexJets_vtx_chi2[kMaxRefinedVertexJets_vtx];   //[RefinedVertexJets_vtx_]
   Float_t         RefinedVertexJets_vtx_probability[kMaxRefinedVertexJets_vtx];   //[RefinedVertexJets_vtx_]
   Float_t         RefinedVertexJets_vtx_position_x[kMaxRefinedVertexJets_vtx];   //[RefinedVertexJets_vtx_]
   Float_t         RefinedVertexJets_vtx_position_y[kMaxRefinedVertexJets_vtx];   //[RefinedVertexJets_vtx_]
   Float_t         RefinedVertexJets_vtx_position_z[kMaxRefinedVertexJets_vtx];   //[RefinedVertexJets_vtx_]
   Float_t         RefinedVertexJets_vtx_covMatrix[kMaxRefinedVertexJets_vtx][6];   //[RefinedVertexJets_vtx_]
   Int_t           RefinedVertexJets_vtx_algorithmType[kMaxRefinedVertexJets_vtx];   //[RefinedVertexJets_vtx_]
   UInt_t          RefinedVertexJets_vtx_parameters_begin[kMaxRefinedVertexJets_vtx];   //[RefinedVertexJets_vtx_]
   UInt_t          RefinedVertexJets_vtx_parameters_end[kMaxRefinedVertexJets_vtx];   //[RefinedVertexJets_vtx_]
   Int_t           _RefinedVertexJets_vtx_associatedParticle_;
   Int_t           _RefinedVertexJets_vtx_associatedParticle_index[kMax_RefinedVertexJets_vtx_associatedParticle];   //[_RefinedVertexJets_vtx_associatedParticle_]
   UInt_t          _RefinedVertexJets_vtx_associatedParticle_collectionID[kMax_RefinedVertexJets_vtx_associatedParticle];   //[_RefinedVertexJets_vtx_associatedParticle_]
   vector<float>   *_RefinedVertexJets_vtx_parameters;
   Int_t           RefinedVertexJets_vtx_RP_;
   Int_t           RefinedVertexJets_vtx_RP_PDG[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   Float_t         RefinedVertexJets_vtx_RP_energy[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   Float_t         RefinedVertexJets_vtx_RP_momentum_x[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   Float_t         RefinedVertexJets_vtx_RP_momentum_y[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   Float_t         RefinedVertexJets_vtx_RP_momentum_z[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   Float_t         RefinedVertexJets_vtx_RP_referencePoint_x[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   Float_t         RefinedVertexJets_vtx_RP_referencePoint_y[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   Float_t         RefinedVertexJets_vtx_RP_referencePoint_z[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   Float_t         RefinedVertexJets_vtx_RP_charge[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   Float_t         RefinedVertexJets_vtx_RP_mass[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   Float_t         RefinedVertexJets_vtx_RP_goodnessOfPID[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   Float_t         RefinedVertexJets_vtx_RP_covMatrix[kMaxRefinedVertexJets_vtx_RP][10];   //[RefinedVertexJets_vtx_RP_]
   UInt_t          RefinedVertexJets_vtx_RP_clusters_begin[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   UInt_t          RefinedVertexJets_vtx_RP_clusters_end[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   UInt_t          RefinedVertexJets_vtx_RP_tracks_begin[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   UInt_t          RefinedVertexJets_vtx_RP_tracks_end[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   UInt_t          RefinedVertexJets_vtx_RP_particles_begin[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   UInt_t          RefinedVertexJets_vtx_RP_particles_end[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   UInt_t          RefinedVertexJets_vtx_RP_particleIDs_begin[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   UInt_t          RefinedVertexJets_vtx_RP_particleIDs_end[kMaxRefinedVertexJets_vtx_RP];   //[RefinedVertexJets_vtx_RP_]
   Int_t           _RefinedVertexJets_vtx_RP_clusters_;
   Int_t           _RefinedVertexJets_vtx_RP_clusters_index[kMax_RefinedVertexJets_vtx_RP_clusters];   //[_RefinedVertexJets_vtx_RP_clusters_]
   UInt_t          _RefinedVertexJets_vtx_RP_clusters_collectionID[kMax_RefinedVertexJets_vtx_RP_clusters];   //[_RefinedVertexJets_vtx_RP_clusters_]
   Int_t           _RefinedVertexJets_vtx_RP_tracks_;
   Int_t           _RefinedVertexJets_vtx_RP_tracks_index[kMax_RefinedVertexJets_vtx_RP_tracks];   //[_RefinedVertexJets_vtx_RP_tracks_]
   UInt_t          _RefinedVertexJets_vtx_RP_tracks_collectionID[kMax_RefinedVertexJets_vtx_RP_tracks];   //[_RefinedVertexJets_vtx_RP_tracks_]
   Int_t           _RefinedVertexJets_vtx_RP_particles_;
   Int_t           _RefinedVertexJets_vtx_RP_particles_index[kMax_RefinedVertexJets_vtx_RP_particles];   //[_RefinedVertexJets_vtx_RP_particles_]
   UInt_t          _RefinedVertexJets_vtx_RP_particles_collectionID[kMax_RefinedVertexJets_vtx_RP_particles];   //[_RefinedVertexJets_vtx_RP_particles_]
   Int_t           _RefinedVertexJets_vtx_RP_particleIDs_;
   Int_t           _RefinedVertexJets_vtx_RP_particleIDs_index[kMax_RefinedVertexJets_vtx_RP_particleIDs];   //[_RefinedVertexJets_vtx_RP_particleIDs_]
   UInt_t          _RefinedVertexJets_vtx_RP_particleIDs_collectionID[kMax_RefinedVertexJets_vtx_RP_particleIDs];   //[_RefinedVertexJets_vtx_RP_particleIDs_]
   Int_t           _RefinedVertexJets_vtx_RP_startVertex_;
   Int_t           _RefinedVertexJets_vtx_RP_startVertex_index[kMax_RefinedVertexJets_vtx_RP_startVertex];   //[_RefinedVertexJets_vtx_RP_startVertex_]
   UInt_t          _RefinedVertexJets_vtx_RP_startVertex_collectionID[kMax_RefinedVertexJets_vtx_RP_startVertex];   //[_RefinedVertexJets_vtx_RP_startVertex_]
   Int_t           _RefinedVertexJets_vtx_RP_particleIDUsed_;
   Int_t           _RefinedVertexJets_vtx_RP_particleIDUsed_index[kMax_RefinedVertexJets_vtx_RP_particleIDUsed];   //[_RefinedVertexJets_vtx_RP_particleIDUsed_]
   UInt_t          _RefinedVertexJets_vtx_RP_particleIDUsed_collectionID[kMax_RefinedVertexJets_vtx_RP_particleIDUsed];   //[_RefinedVertexJets_vtx_RP_particleIDUsed_]
   Int_t           RefinedVertexJets_vtx_RP_particleIDs_;
   Int_t           RefinedVertexJets_vtx_RP_particleIDs_type[kMaxRefinedVertexJets_vtx_RP_particleIDs];   //[RefinedVertexJets_vtx_RP_particleIDs_]
   Int_t           RefinedVertexJets_vtx_RP_particleIDs_PDG[kMaxRefinedVertexJets_vtx_RP_particleIDs];   //[RefinedVertexJets_vtx_RP_particleIDs_]
   Int_t           RefinedVertexJets_vtx_RP_particleIDs_algorithmType[kMaxRefinedVertexJets_vtx_RP_particleIDs];   //[RefinedVertexJets_vtx_RP_particleIDs_]
   Float_t         RefinedVertexJets_vtx_RP_particleIDs_likelihood[kMaxRefinedVertexJets_vtx_RP_particleIDs];   //[RefinedVertexJets_vtx_RP_particleIDs_]
   UInt_t          RefinedVertexJets_vtx_RP_particleIDs_parameters_begin[kMaxRefinedVertexJets_vtx_RP_particleIDs];   //[RefinedVertexJets_vtx_RP_particleIDs_]
   UInt_t          RefinedVertexJets_vtx_RP_particleIDs_parameters_end[kMaxRefinedVertexJets_vtx_RP_particleIDs];   //[RefinedVertexJets_vtx_RP_particleIDs_]
   vector<float>   *_RefinedVertexJets_vtx_RP_particleIDs_parameters;
   Int_t           RefinedVertices_;
   Int_t           RefinedVertices_primary[kMaxRefinedVertices];   //[RefinedVertices_]
   Float_t         RefinedVertices_chi2[kMaxRefinedVertices];   //[RefinedVertices_]
   Float_t         RefinedVertices_probability[kMaxRefinedVertices];   //[RefinedVertices_]
   Float_t         RefinedVertices_position_x[kMaxRefinedVertices];   //[RefinedVertices_]
   Float_t         RefinedVertices_position_y[kMaxRefinedVertices];   //[RefinedVertices_]
   Float_t         RefinedVertices_position_z[kMaxRefinedVertices];   //[RefinedVertices_]
   Float_t         RefinedVertices_covMatrix[kMaxRefinedVertices][6];   //[RefinedVertices_]
   Int_t           RefinedVertices_algorithmType[kMaxRefinedVertices];   //[RefinedVertices_]
   UInt_t          RefinedVertices_parameters_begin[kMaxRefinedVertices];   //[RefinedVertices_]
   UInt_t          RefinedVertices_parameters_end[kMaxRefinedVertices];   //[RefinedVertices_]
   Int_t           _RefinedVertices_associatedParticle_;
   Int_t           _RefinedVertices_associatedParticle_index[kMax_RefinedVertices_associatedParticle];   //[_RefinedVertices_associatedParticle_]
   UInt_t          _RefinedVertices_associatedParticle_collectionID[kMax_RefinedVertices_associatedParticle];   //[_RefinedVertices_associatedParticle_]
   vector<float>   *_RefinedVertices_parameters;
   Int_t           RefinedVertices_RP_;
   Int_t           RefinedVertices_RP_PDG[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   Float_t         RefinedVertices_RP_energy[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   Float_t         RefinedVertices_RP_momentum_x[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   Float_t         RefinedVertices_RP_momentum_y[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   Float_t         RefinedVertices_RP_momentum_z[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   Float_t         RefinedVertices_RP_referencePoint_x[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   Float_t         RefinedVertices_RP_referencePoint_y[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   Float_t         RefinedVertices_RP_referencePoint_z[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   Float_t         RefinedVertices_RP_charge[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   Float_t         RefinedVertices_RP_mass[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   Float_t         RefinedVertices_RP_goodnessOfPID[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   Float_t         RefinedVertices_RP_covMatrix[kMaxRefinedVertices_RP][10];   //[RefinedVertices_RP_]
   UInt_t          RefinedVertices_RP_clusters_begin[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   UInt_t          RefinedVertices_RP_clusters_end[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   UInt_t          RefinedVertices_RP_tracks_begin[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   UInt_t          RefinedVertices_RP_tracks_end[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   UInt_t          RefinedVertices_RP_particles_begin[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   UInt_t          RefinedVertices_RP_particles_end[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   UInt_t          RefinedVertices_RP_particleIDs_begin[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   UInt_t          RefinedVertices_RP_particleIDs_end[kMaxRefinedVertices_RP];   //[RefinedVertices_RP_]
   Int_t           _RefinedVertices_RP_clusters_;
   Int_t           _RefinedVertices_RP_clusters_index[kMax_RefinedVertices_RP_clusters];   //[_RefinedVertices_RP_clusters_]
   UInt_t          _RefinedVertices_RP_clusters_collectionID[kMax_RefinedVertices_RP_clusters];   //[_RefinedVertices_RP_clusters_]
   Int_t           _RefinedVertices_RP_tracks_;
   Int_t           _RefinedVertices_RP_tracks_index[kMax_RefinedVertices_RP_tracks];   //[_RefinedVertices_RP_tracks_]
   UInt_t          _RefinedVertices_RP_tracks_collectionID[kMax_RefinedVertices_RP_tracks];   //[_RefinedVertices_RP_tracks_]
   Int_t           _RefinedVertices_RP_particles_;
   Int_t           _RefinedVertices_RP_particles_index[kMax_RefinedVertices_RP_particles];   //[_RefinedVertices_RP_particles_]
   UInt_t          _RefinedVertices_RP_particles_collectionID[kMax_RefinedVertices_RP_particles];   //[_RefinedVertices_RP_particles_]
   Int_t           _RefinedVertices_RP_particleIDs_;
   Int_t           _RefinedVertices_RP_particleIDs_index[kMax_RefinedVertices_RP_particleIDs];   //[_RefinedVertices_RP_particleIDs_]
   UInt_t          _RefinedVertices_RP_particleIDs_collectionID[kMax_RefinedVertices_RP_particleIDs];   //[_RefinedVertices_RP_particleIDs_]
   Int_t           _RefinedVertices_RP_startVertex_;
   Int_t           _RefinedVertices_RP_startVertex_index[kMax_RefinedVertices_RP_startVertex];   //[_RefinedVertices_RP_startVertex_]
   UInt_t          _RefinedVertices_RP_startVertex_collectionID[kMax_RefinedVertices_RP_startVertex];   //[_RefinedVertices_RP_startVertex_]
   Int_t           _RefinedVertices_RP_particleIDUsed_;
   Int_t           _RefinedVertices_RP_particleIDUsed_index[kMax_RefinedVertices_RP_particleIDUsed];   //[_RefinedVertices_RP_particleIDUsed_]
   UInt_t          _RefinedVertices_RP_particleIDUsed_collectionID[kMax_RefinedVertices_RP_particleIDUsed];   //[_RefinedVertices_RP_particleIDUsed_]
   Int_t           RefinedVertices_RP_particleIDs_;
   Int_t           RefinedVertices_RP_particleIDs_type[kMaxRefinedVertices_RP_particleIDs];   //[RefinedVertices_RP_particleIDs_]
   Int_t           RefinedVertices_RP_particleIDs_PDG[kMaxRefinedVertices_RP_particleIDs];   //[RefinedVertices_RP_particleIDs_]
   Int_t           RefinedVertices_RP_particleIDs_algorithmType[kMaxRefinedVertices_RP_particleIDs];   //[RefinedVertices_RP_particleIDs_]
   Float_t         RefinedVertices_RP_particleIDs_likelihood[kMaxRefinedVertices_RP_particleIDs];   //[RefinedVertices_RP_particleIDs_]
   UInt_t          RefinedVertices_RP_particleIDs_parameters_begin[kMaxRefinedVertices_RP_particleIDs];   //[RefinedVertices_RP_particleIDs_]
   UInt_t          RefinedVertices_RP_particleIDs_parameters_end[kMaxRefinedVertices_RP_particleIDs];   //[RefinedVertices_RP_particleIDs_]
   vector<float>   *_RefinedVertices_RP_particleIDs_parameters;
   Int_t           RelationCaloHit_;
   Float_t         RelationCaloHit_weight[kMaxRelationCaloHit];   //[RelationCaloHit_]
   Int_t           _RelationCaloHit_rec_;
   Int_t           _RelationCaloHit_rec_index[kMax_RelationCaloHit_rec];   //[_RelationCaloHit_rec_]
   UInt_t          _RelationCaloHit_rec_collectionID[kMax_RelationCaloHit_rec];   //[_RelationCaloHit_rec_]
   Int_t           _RelationCaloHit_sim_;
   Int_t           _RelationCaloHit_sim_index[kMax_RelationCaloHit_sim];   //[_RelationCaloHit_sim_]
   UInt_t          _RelationCaloHit_sim_collectionID[kMax_RelationCaloHit_sim];   //[_RelationCaloHit_sim_]
   Int_t           RelationMuonHit_;
   Float_t         RelationMuonHit_weight[kMaxRelationMuonHit];   //[RelationMuonHit_]
   Int_t           _RelationMuonHit_rec_;
   Int_t           _RelationMuonHit_rec_index[kMax_RelationMuonHit_rec];   //[_RelationMuonHit_rec_]
   UInt_t          _RelationMuonHit_rec_collectionID[kMax_RelationMuonHit_rec];   //[_RelationMuonHit_rec_]
   Int_t           _RelationMuonHit_sim_;
   Int_t           _RelationMuonHit_sim_index[kMax_RelationMuonHit_sim];   //[_RelationMuonHit_sim_]
   UInt_t          _RelationMuonHit_sim_collectionID[kMax_RelationMuonHit_sim];   //[_RelationMuonHit_sim_]
   Int_t           SelectedPandoraPFOs_objIdx_;
   Int_t           SelectedPandoraPFOs_objIdx_index[kMaxSelectedPandoraPFOs_objIdx];   //[SelectedPandoraPFOs_objIdx_]
   UInt_t          SelectedPandoraPFOs_objIdx_collectionID[kMaxSelectedPandoraPFOs_objIdx];   //[SelectedPandoraPFOs_objIdx_]
   Int_t           SiTracks_;
   Int_t           SiTracks_type[kMaxSiTracks];   //[SiTracks_]
   Float_t         SiTracks_chi2[kMaxSiTracks];   //[SiTracks_]
   Int_t           SiTracks_ndf[kMaxSiTracks];   //[SiTracks_]
   Float_t         SiTracks_dEdx[kMaxSiTracks];   //[SiTracks_]
   Float_t         SiTracks_dEdxError[kMaxSiTracks];   //[SiTracks_]
   Float_t         SiTracks_radiusOfInnermostHit[kMaxSiTracks];   //[SiTracks_]
   UInt_t          SiTracks_subdetectorHitNumbers_begin[kMaxSiTracks];   //[SiTracks_]
   UInt_t          SiTracks_subdetectorHitNumbers_end[kMaxSiTracks];   //[SiTracks_]
   UInt_t          SiTracks_trackStates_begin[kMaxSiTracks];   //[SiTracks_]
   UInt_t          SiTracks_trackStates_end[kMaxSiTracks];   //[SiTracks_]
   UInt_t          SiTracks_dxQuantities_begin[kMaxSiTracks];   //[SiTracks_]
   UInt_t          SiTracks_dxQuantities_end[kMaxSiTracks];   //[SiTracks_]
   UInt_t          SiTracks_trackerHits_begin[kMaxSiTracks];   //[SiTracks_]
   UInt_t          SiTracks_trackerHits_end[kMaxSiTracks];   //[SiTracks_]
   UInt_t          SiTracks_tracks_begin[kMaxSiTracks];   //[SiTracks_]
   UInt_t          SiTracks_tracks_end[kMaxSiTracks];   //[SiTracks_]
   Int_t           _SiTracks_trackerHits_;
   Int_t           _SiTracks_trackerHits_index[kMax_SiTracks_trackerHits];   //[_SiTracks_trackerHits_]
   UInt_t          _SiTracks_trackerHits_collectionID[kMax_SiTracks_trackerHits];   //[_SiTracks_trackerHits_]
   Int_t           _SiTracks_tracks_;
   Int_t           _SiTracks_tracks_index[kMax_SiTracks_tracks];   //[_SiTracks_tracks_]
   UInt_t          _SiTracks_tracks_collectionID[kMax_SiTracks_tracks];   //[_SiTracks_tracks_]
   vector<int>     *_SiTracks_subdetectorHitNumbers;
   Int_t           _SiTracks_trackStates_;
   Int_t           _SiTracks_trackStates_location[kMax_SiTracks_trackStates];   //[_SiTracks_trackStates_]
   Float_t         _SiTracks_trackStates_D0[kMax_SiTracks_trackStates];   //[_SiTracks_trackStates_]
   Float_t         _SiTracks_trackStates_phi[kMax_SiTracks_trackStates];   //[_SiTracks_trackStates_]
   Float_t         _SiTracks_trackStates_omega[kMax_SiTracks_trackStates];   //[_SiTracks_trackStates_]
   Float_t         _SiTracks_trackStates_Z0[kMax_SiTracks_trackStates];   //[_SiTracks_trackStates_]
   Float_t         _SiTracks_trackStates_tanLambda[kMax_SiTracks_trackStates];   //[_SiTracks_trackStates_]
   Float_t         _SiTracks_trackStates_time[kMax_SiTracks_trackStates];   //[_SiTracks_trackStates_]
   Float_t         _SiTracks_trackStates_referencePoint_x[kMax_SiTracks_trackStates];   //[_SiTracks_trackStates_]
   Float_t         _SiTracks_trackStates_referencePoint_y[kMax_SiTracks_trackStates];   //[_SiTracks_trackStates_]
   Float_t         _SiTracks_trackStates_referencePoint_z[kMax_SiTracks_trackStates];   //[_SiTracks_trackStates_]
   Float_t         _SiTracks_trackStates_covMatrix[kMax_SiTracks_trackStates][21];   //[_SiTracks_trackStates_]
   Int_t           _SiTracks_dxQuantities_;
   Short_t         _SiTracks_dxQuantities_type[kMax_SiTracks_dxQuantities];   //[_SiTracks_dxQuantities_]
   Float_t         _SiTracks_dxQuantities_value[kMax_SiTracks_dxQuantities];   //[_SiTracks_dxQuantities_]
   Float_t         _SiTracks_dxQuantities_error[kMax_SiTracks_dxQuantities];   //[_SiTracks_dxQuantities_]
   Int_t           SiTracks_Refitted_;
   Int_t           SiTracks_Refitted_type[kMaxSiTracks_Refitted];   //[SiTracks_Refitted_]
   Float_t         SiTracks_Refitted_chi2[kMaxSiTracks_Refitted];   //[SiTracks_Refitted_]
   Int_t           SiTracks_Refitted_ndf[kMaxSiTracks_Refitted];   //[SiTracks_Refitted_]
   Float_t         SiTracks_Refitted_dEdx[kMaxSiTracks_Refitted];   //[SiTracks_Refitted_]
   Float_t         SiTracks_Refitted_dEdxError[kMaxSiTracks_Refitted];   //[SiTracks_Refitted_]
   Float_t         SiTracks_Refitted_radiusOfInnermostHit[kMaxSiTracks_Refitted];   //[SiTracks_Refitted_]
   UInt_t          SiTracks_Refitted_subdetectorHitNumbers_begin[kMaxSiTracks_Refitted];   //[SiTracks_Refitted_]
   UInt_t          SiTracks_Refitted_subdetectorHitNumbers_end[kMaxSiTracks_Refitted];   //[SiTracks_Refitted_]
   UInt_t          SiTracks_Refitted_trackStates_begin[kMaxSiTracks_Refitted];   //[SiTracks_Refitted_]
   UInt_t          SiTracks_Refitted_trackStates_end[kMaxSiTracks_Refitted];   //[SiTracks_Refitted_]
   UInt_t          SiTracks_Refitted_dxQuantities_begin[kMaxSiTracks_Refitted];   //[SiTracks_Refitted_]
   UInt_t          SiTracks_Refitted_dxQuantities_end[kMaxSiTracks_Refitted];   //[SiTracks_Refitted_]
   UInt_t          SiTracks_Refitted_trackerHits_begin[kMaxSiTracks_Refitted];   //[SiTracks_Refitted_]
   UInt_t          SiTracks_Refitted_trackerHits_end[kMaxSiTracks_Refitted];   //[SiTracks_Refitted_]
   UInt_t          SiTracks_Refitted_tracks_begin[kMaxSiTracks_Refitted];   //[SiTracks_Refitted_]
   UInt_t          SiTracks_Refitted_tracks_end[kMaxSiTracks_Refitted];   //[SiTracks_Refitted_]
   Int_t           _SiTracks_Refitted_trackerHits_;
   Int_t           _SiTracks_Refitted_trackerHits_index[kMax_SiTracks_Refitted_trackerHits];   //[_SiTracks_Refitted_trackerHits_]
   UInt_t          _SiTracks_Refitted_trackerHits_collectionID[kMax_SiTracks_Refitted_trackerHits];   //[_SiTracks_Refitted_trackerHits_]
   Int_t           _SiTracks_Refitted_tracks_;
   Int_t           _SiTracks_Refitted_tracks_index[kMax_SiTracks_Refitted_tracks];   //[_SiTracks_Refitted_tracks_]
   UInt_t          _SiTracks_Refitted_tracks_collectionID[kMax_SiTracks_Refitted_tracks];   //[_SiTracks_Refitted_tracks_]
   vector<int>     *_SiTracks_Refitted_subdetectorHitNumbers;
   Int_t           _SiTracks_Refitted_trackStates_;
   Int_t           _SiTracks_Refitted_trackStates_location[kMax_SiTracks_Refitted_trackStates];   //[_SiTracks_Refitted_trackStates_]
   Float_t         _SiTracks_Refitted_trackStates_D0[kMax_SiTracks_Refitted_trackStates];   //[_SiTracks_Refitted_trackStates_]
   Float_t         _SiTracks_Refitted_trackStates_phi[kMax_SiTracks_Refitted_trackStates];   //[_SiTracks_Refitted_trackStates_]
   Float_t         _SiTracks_Refitted_trackStates_omega[kMax_SiTracks_Refitted_trackStates];   //[_SiTracks_Refitted_trackStates_]
   Float_t         _SiTracks_Refitted_trackStates_Z0[kMax_SiTracks_Refitted_trackStates];   //[_SiTracks_Refitted_trackStates_]
   Float_t         _SiTracks_Refitted_trackStates_tanLambda[kMax_SiTracks_Refitted_trackStates];   //[_SiTracks_Refitted_trackStates_]
   Float_t         _SiTracks_Refitted_trackStates_time[kMax_SiTracks_Refitted_trackStates];   //[_SiTracks_Refitted_trackStates_]
   Float_t         _SiTracks_Refitted_trackStates_referencePoint_x[kMax_SiTracks_Refitted_trackStates];   //[_SiTracks_Refitted_trackStates_]
   Float_t         _SiTracks_Refitted_trackStates_referencePoint_y[kMax_SiTracks_Refitted_trackStates];   //[_SiTracks_Refitted_trackStates_]
   Float_t         _SiTracks_Refitted_trackStates_referencePoint_z[kMax_SiTracks_Refitted_trackStates];   //[_SiTracks_Refitted_trackStates_]
   Float_t         _SiTracks_Refitted_trackStates_covMatrix[kMax_SiTracks_Refitted_trackStates][21];   //[_SiTracks_Refitted_trackStates_]
   Int_t           _SiTracks_Refitted_dxQuantities_;
   Short_t         _SiTracks_Refitted_dxQuantities_type[kMax_SiTracks_Refitted_dxQuantities];   //[_SiTracks_Refitted_dxQuantities_]
   Float_t         _SiTracks_Refitted_dxQuantities_value[kMax_SiTracks_Refitted_dxQuantities];   //[_SiTracks_Refitted_dxQuantities_]
   Float_t         _SiTracks_Refitted_dxQuantities_error[kMax_SiTracks_Refitted_dxQuantities];   //[_SiTracks_Refitted_dxQuantities_]
   Int_t           SiTracksCT_;
   Int_t           SiTracksCT_type[kMaxSiTracksCT];   //[SiTracksCT_]
   Float_t         SiTracksCT_chi2[kMaxSiTracksCT];   //[SiTracksCT_]
   Int_t           SiTracksCT_ndf[kMaxSiTracksCT];   //[SiTracksCT_]
   Float_t         SiTracksCT_dEdx[kMaxSiTracksCT];   //[SiTracksCT_]
   Float_t         SiTracksCT_dEdxError[kMaxSiTracksCT];   //[SiTracksCT_]
   Float_t         SiTracksCT_radiusOfInnermostHit[kMaxSiTracksCT];   //[SiTracksCT_]
   UInt_t          SiTracksCT_subdetectorHitNumbers_begin[kMaxSiTracksCT];   //[SiTracksCT_]
   UInt_t          SiTracksCT_subdetectorHitNumbers_end[kMaxSiTracksCT];   //[SiTracksCT_]
   UInt_t          SiTracksCT_trackStates_begin[kMaxSiTracksCT];   //[SiTracksCT_]
   UInt_t          SiTracksCT_trackStates_end[kMaxSiTracksCT];   //[SiTracksCT_]
   UInt_t          SiTracksCT_dxQuantities_begin[kMaxSiTracksCT];   //[SiTracksCT_]
   UInt_t          SiTracksCT_dxQuantities_end[kMaxSiTracksCT];   //[SiTracksCT_]
   UInt_t          SiTracksCT_trackerHits_begin[kMaxSiTracksCT];   //[SiTracksCT_]
   UInt_t          SiTracksCT_trackerHits_end[kMaxSiTracksCT];   //[SiTracksCT_]
   UInt_t          SiTracksCT_tracks_begin[kMaxSiTracksCT];   //[SiTracksCT_]
   UInt_t          SiTracksCT_tracks_end[kMaxSiTracksCT];   //[SiTracksCT_]
   Int_t           _SiTracksCT_trackerHits_;
   Int_t           _SiTracksCT_trackerHits_index[kMax_SiTracksCT_trackerHits];   //[_SiTracksCT_trackerHits_]
   UInt_t          _SiTracksCT_trackerHits_collectionID[kMax_SiTracksCT_trackerHits];   //[_SiTracksCT_trackerHits_]
   Int_t           _SiTracksCT_tracks_;
   Int_t           _SiTracksCT_tracks_index[kMax_SiTracksCT_tracks];   //[_SiTracksCT_tracks_]
   UInt_t          _SiTracksCT_tracks_collectionID[kMax_SiTracksCT_tracks];   //[_SiTracksCT_tracks_]
   vector<int>     *_SiTracksCT_subdetectorHitNumbers;
   Int_t           _SiTracksCT_trackStates_;
   Int_t           _SiTracksCT_trackStates_location[kMax_SiTracksCT_trackStates];   //[_SiTracksCT_trackStates_]
   Float_t         _SiTracksCT_trackStates_D0[kMax_SiTracksCT_trackStates];   //[_SiTracksCT_trackStates_]
   Float_t         _SiTracksCT_trackStates_phi[kMax_SiTracksCT_trackStates];   //[_SiTracksCT_trackStates_]
   Float_t         _SiTracksCT_trackStates_omega[kMax_SiTracksCT_trackStates];   //[_SiTracksCT_trackStates_]
   Float_t         _SiTracksCT_trackStates_Z0[kMax_SiTracksCT_trackStates];   //[_SiTracksCT_trackStates_]
   Float_t         _SiTracksCT_trackStates_tanLambda[kMax_SiTracksCT_trackStates];   //[_SiTracksCT_trackStates_]
   Float_t         _SiTracksCT_trackStates_time[kMax_SiTracksCT_trackStates];   //[_SiTracksCT_trackStates_]
   Float_t         _SiTracksCT_trackStates_referencePoint_x[kMax_SiTracksCT_trackStates];   //[_SiTracksCT_trackStates_]
   Float_t         _SiTracksCT_trackStates_referencePoint_y[kMax_SiTracksCT_trackStates];   //[_SiTracksCT_trackStates_]
   Float_t         _SiTracksCT_trackStates_referencePoint_z[kMax_SiTracksCT_trackStates];   //[_SiTracksCT_trackStates_]
   Float_t         _SiTracksCT_trackStates_covMatrix[kMax_SiTracksCT_trackStates][21];   //[_SiTracksCT_trackStates_]
   Int_t           _SiTracksCT_dxQuantities_;
   Short_t         _SiTracksCT_dxQuantities_type[kMax_SiTracksCT_dxQuantities];   //[_SiTracksCT_dxQuantities_]
   Float_t         _SiTracksCT_dxQuantities_value[kMax_SiTracksCT_dxQuantities];   //[_SiTracksCT_dxQuantities_]
   Float_t         _SiTracksCT_dxQuantities_error[kMax_SiTracksCT_dxQuantities];   //[_SiTracksCT_dxQuantities_]
   Int_t           SiTracksMCTruthLink_;
   Float_t         SiTracksMCTruthLink_weight[kMaxSiTracksMCTruthLink];   //[SiTracksMCTruthLink_]
   Int_t           _SiTracksMCTruthLink_rec_;
   Int_t           _SiTracksMCTruthLink_rec_index[kMax_SiTracksMCTruthLink_rec];   //[_SiTracksMCTruthLink_rec_]
   UInt_t          _SiTracksMCTruthLink_rec_collectionID[kMax_SiTracksMCTruthLink_rec];   //[_SiTracksMCTruthLink_rec_]
   Int_t           _SiTracksMCTruthLink_sim_;
   Int_t           _SiTracksMCTruthLink_sim_index[kMax_SiTracksMCTruthLink_sim];   //[_SiTracksMCTruthLink_sim_]
   UInt_t          _SiTracksMCTruthLink_sim_collectionID[kMax_SiTracksMCTruthLink_sim];   //[_SiTracksMCTruthLink_sim_]
   Int_t           TightSelectedPandoraPFOs_objIdx_;
   Int_t           TightSelectedPandoraPFOs_objIdx_index[kMaxTightSelectedPandoraPFOs_objIdx];   //[TightSelectedPandoraPFOs_objIdx_]
   UInt_t          TightSelectedPandoraPFOs_objIdx_collectionID[kMaxTightSelectedPandoraPFOs_objIdx];   //[TightSelectedPandoraPFOs_objIdx_]
   Int_t           VertexBarrelCollection_;
   ULong_t         VertexBarrelCollection_cellID[kMaxVertexBarrelCollection];   //[VertexBarrelCollection_]
   Float_t         VertexBarrelCollection_eDep[kMaxVertexBarrelCollection];   //[VertexBarrelCollection_]
   Float_t         VertexBarrelCollection_time[kMaxVertexBarrelCollection];   //[VertexBarrelCollection_]
   Float_t         VertexBarrelCollection_pathLength[kMaxVertexBarrelCollection];   //[VertexBarrelCollection_]
   Int_t           VertexBarrelCollection_quality[kMaxVertexBarrelCollection];   //[VertexBarrelCollection_]
   Double_t        VertexBarrelCollection_position_x[kMaxVertexBarrelCollection];   //[VertexBarrelCollection_]
   Double_t        VertexBarrelCollection_position_y[kMaxVertexBarrelCollection];   //[VertexBarrelCollection_]
   Double_t        VertexBarrelCollection_position_z[kMaxVertexBarrelCollection];   //[VertexBarrelCollection_]
   Float_t         VertexBarrelCollection_momentum_x[kMaxVertexBarrelCollection];   //[VertexBarrelCollection_]
   Float_t         VertexBarrelCollection_momentum_y[kMaxVertexBarrelCollection];   //[VertexBarrelCollection_]
   Float_t         VertexBarrelCollection_momentum_z[kMaxVertexBarrelCollection];   //[VertexBarrelCollection_]
   Int_t           _VertexBarrelCollection_particle_;
   Int_t           _VertexBarrelCollection_particle_index[kMax_VertexBarrelCollection_particle];   //[_VertexBarrelCollection_particle_]
   UInt_t          _VertexBarrelCollection_particle_collectionID[kMax_VertexBarrelCollection_particle];   //[_VertexBarrelCollection_particle_]
   Int_t           VertexEndcapCollection_;
   ULong_t         VertexEndcapCollection_cellID[kMaxVertexEndcapCollection];   //[VertexEndcapCollection_]
   Float_t         VertexEndcapCollection_eDep[kMaxVertexEndcapCollection];   //[VertexEndcapCollection_]
   Float_t         VertexEndcapCollection_time[kMaxVertexEndcapCollection];   //[VertexEndcapCollection_]
   Float_t         VertexEndcapCollection_pathLength[kMaxVertexEndcapCollection];   //[VertexEndcapCollection_]
   Int_t           VertexEndcapCollection_quality[kMaxVertexEndcapCollection];   //[VertexEndcapCollection_]
   Double_t        VertexEndcapCollection_position_x[kMaxVertexEndcapCollection];   //[VertexEndcapCollection_]
   Double_t        VertexEndcapCollection_position_y[kMaxVertexEndcapCollection];   //[VertexEndcapCollection_]
   Double_t        VertexEndcapCollection_position_z[kMaxVertexEndcapCollection];   //[VertexEndcapCollection_]
   Float_t         VertexEndcapCollection_momentum_x[kMaxVertexEndcapCollection];   //[VertexEndcapCollection_]
   Float_t         VertexEndcapCollection_momentum_y[kMaxVertexEndcapCollection];   //[VertexEndcapCollection_]
   Float_t         VertexEndcapCollection_momentum_z[kMaxVertexEndcapCollection];   //[VertexEndcapCollection_]
   Int_t           _VertexEndcapCollection_particle_;
   Int_t           _VertexEndcapCollection_particle_index[kMax_VertexEndcapCollection_particle];   //[_VertexEndcapCollection_particle_]
   UInt_t          _VertexEndcapCollection_particle_collectionID[kMax_VertexEndcapCollection_particle];   //[_VertexEndcapCollection_particle_]
   Int_t           VertexJets_;
   Int_t           VertexJets_PDG[kMaxVertexJets];   //[VertexJets_]
   Float_t         VertexJets_energy[kMaxVertexJets];   //[VertexJets_]
   Float_t         VertexJets_momentum_x[kMaxVertexJets];   //[VertexJets_]
   Float_t         VertexJets_momentum_y[kMaxVertexJets];   //[VertexJets_]
   Float_t         VertexJets_momentum_z[kMaxVertexJets];   //[VertexJets_]
   Float_t         VertexJets_referencePoint_x[kMaxVertexJets];   //[VertexJets_]
   Float_t         VertexJets_referencePoint_y[kMaxVertexJets];   //[VertexJets_]
   Float_t         VertexJets_referencePoint_z[kMaxVertexJets];   //[VertexJets_]
   Float_t         VertexJets_charge[kMaxVertexJets];   //[VertexJets_]
   Float_t         VertexJets_mass[kMaxVertexJets];   //[VertexJets_]
   Float_t         VertexJets_goodnessOfPID[kMaxVertexJets];   //[VertexJets_]
   Float_t         VertexJets_covMatrix[kMaxVertexJets][10];   //[VertexJets_]
   UInt_t          VertexJets_clusters_begin[kMaxVertexJets];   //[VertexJets_]
   UInt_t          VertexJets_clusters_end[kMaxVertexJets];   //[VertexJets_]
   UInt_t          VertexJets_tracks_begin[kMaxVertexJets];   //[VertexJets_]
   UInt_t          VertexJets_tracks_end[kMaxVertexJets];   //[VertexJets_]
   UInt_t          VertexJets_particles_begin[kMaxVertexJets];   //[VertexJets_]
   UInt_t          VertexJets_particles_end[kMaxVertexJets];   //[VertexJets_]
   UInt_t          VertexJets_particleIDs_begin[kMaxVertexJets];   //[VertexJets_]
   UInt_t          VertexJets_particleIDs_end[kMaxVertexJets];   //[VertexJets_]
   Int_t           _VertexJets_clusters_;
   Int_t           _VertexJets_clusters_index[kMax_VertexJets_clusters];   //[_VertexJets_clusters_]
   UInt_t          _VertexJets_clusters_collectionID[kMax_VertexJets_clusters];   //[_VertexJets_clusters_]
   Int_t           _VertexJets_tracks_;
   Int_t           _VertexJets_tracks_index[kMax_VertexJets_tracks];   //[_VertexJets_tracks_]
   UInt_t          _VertexJets_tracks_collectionID[kMax_VertexJets_tracks];   //[_VertexJets_tracks_]
   Int_t           _VertexJets_particles_;
   Int_t           _VertexJets_particles_index[kMax_VertexJets_particles];   //[_VertexJets_particles_]
   UInt_t          _VertexJets_particles_collectionID[kMax_VertexJets_particles];   //[_VertexJets_particles_]
   Int_t           _VertexJets_particleIDs_;
   Int_t           _VertexJets_particleIDs_index[kMax_VertexJets_particleIDs];   //[_VertexJets_particleIDs_]
   UInt_t          _VertexJets_particleIDs_collectionID[kMax_VertexJets_particleIDs];   //[_VertexJets_particleIDs_]
   Int_t           _VertexJets_startVertex_;
   Int_t           _VertexJets_startVertex_index[kMax_VertexJets_startVertex];   //[_VertexJets_startVertex_]
   UInt_t          _VertexJets_startVertex_collectionID[kMax_VertexJets_startVertex];   //[_VertexJets_startVertex_]
   Int_t           _VertexJets_particleIDUsed_;
   Int_t           _VertexJets_particleIDUsed_index[kMax_VertexJets_particleIDUsed];   //[_VertexJets_particleIDUsed_]
   UInt_t          _VertexJets_particleIDUsed_collectionID[kMax_VertexJets_particleIDUsed];   //[_VertexJets_particleIDUsed_]
   Int_t           VertexJets_particleIDs_;
   Int_t           VertexJets_particleIDs_type[kMaxVertexJets_particleIDs];   //[VertexJets_particleIDs_]
   Int_t           VertexJets_particleIDs_PDG[kMaxVertexJets_particleIDs];   //[VertexJets_particleIDs_]
   Int_t           VertexJets_particleIDs_algorithmType[kMaxVertexJets_particleIDs];   //[VertexJets_particleIDs_]
   Float_t         VertexJets_particleIDs_likelihood[kMaxVertexJets_particleIDs];   //[VertexJets_particleIDs_]
   UInt_t          VertexJets_particleIDs_parameters_begin[kMaxVertexJets_particleIDs];   //[VertexJets_particleIDs_]
   UInt_t          VertexJets_particleIDs_parameters_end[kMaxVertexJets_particleIDs];   //[VertexJets_particleIDs_]
   vector<float>   *_VertexJets_particleIDs_parameters;
   Int_t           VXDEndcapTrackerHitRelations_;
   Float_t         VXDEndcapTrackerHitRelations_weight[kMaxVXDEndcapTrackerHitRelations];   //[VXDEndcapTrackerHitRelations_]
   Int_t           _VXDEndcapTrackerHitRelations_rec_;
   Int_t           _VXDEndcapTrackerHitRelations_rec_index[kMax_VXDEndcapTrackerHitRelations_rec];   //[_VXDEndcapTrackerHitRelations_rec_]
   UInt_t          _VXDEndcapTrackerHitRelations_rec_collectionID[kMax_VXDEndcapTrackerHitRelations_rec];   //[_VXDEndcapTrackerHitRelations_rec_]
   Int_t           _VXDEndcapTrackerHitRelations_sim_;
   Int_t           _VXDEndcapTrackerHitRelations_sim_index[kMax_VXDEndcapTrackerHitRelations_sim];   //[_VXDEndcapTrackerHitRelations_sim_]
   UInt_t          _VXDEndcapTrackerHitRelations_sim_collectionID[kMax_VXDEndcapTrackerHitRelations_sim];   //[_VXDEndcapTrackerHitRelations_sim_]
   Int_t           VXDEndcapTrackerHits_;
   ULong_t         VXDEndcapTrackerHits_cellID[kMaxVXDEndcapTrackerHits];   //[VXDEndcapTrackerHits_]
   Int_t           VXDEndcapTrackerHits_type[kMaxVXDEndcapTrackerHits];   //[VXDEndcapTrackerHits_]
   Int_t           VXDEndcapTrackerHits_quality[kMaxVXDEndcapTrackerHits];   //[VXDEndcapTrackerHits_]
   Float_t         VXDEndcapTrackerHits_time[kMaxVXDEndcapTrackerHits];   //[VXDEndcapTrackerHits_]
   Float_t         VXDEndcapTrackerHits_eDep[kMaxVXDEndcapTrackerHits];   //[VXDEndcapTrackerHits_]
   Float_t         VXDEndcapTrackerHits_eDepError[kMaxVXDEndcapTrackerHits];   //[VXDEndcapTrackerHits_]
   Float_t         VXDEndcapTrackerHits_u_a[kMaxVXDEndcapTrackerHits];   //[VXDEndcapTrackerHits_]
   Float_t         VXDEndcapTrackerHits_u_b[kMaxVXDEndcapTrackerHits];   //[VXDEndcapTrackerHits_]
   Float_t         VXDEndcapTrackerHits_v_a[kMaxVXDEndcapTrackerHits];   //[VXDEndcapTrackerHits_]
   Float_t         VXDEndcapTrackerHits_v_b[kMaxVXDEndcapTrackerHits];   //[VXDEndcapTrackerHits_]
   Float_t         VXDEndcapTrackerHits_du[kMaxVXDEndcapTrackerHits];   //[VXDEndcapTrackerHits_]
   Float_t         VXDEndcapTrackerHits_dv[kMaxVXDEndcapTrackerHits];   //[VXDEndcapTrackerHits_]
   Double_t        VXDEndcapTrackerHits_position_x[kMaxVXDEndcapTrackerHits];   //[VXDEndcapTrackerHits_]
   Double_t        VXDEndcapTrackerHits_position_y[kMaxVXDEndcapTrackerHits];   //[VXDEndcapTrackerHits_]
   Double_t        VXDEndcapTrackerHits_position_z[kMaxVXDEndcapTrackerHits];   //[VXDEndcapTrackerHits_]
   Float_t         VXDEndcapTrackerHits_covMatrix[kMaxVXDEndcapTrackerHits][6];   //[VXDEndcapTrackerHits_]
   Int_t           VXDTrackerHitRelations_;
   Float_t         VXDTrackerHitRelations_weight[kMaxVXDTrackerHitRelations];   //[VXDTrackerHitRelations_]
   Int_t           _VXDTrackerHitRelations_rec_;
   Int_t           _VXDTrackerHitRelations_rec_index[kMax_VXDTrackerHitRelations_rec];   //[_VXDTrackerHitRelations_rec_]
   UInt_t          _VXDTrackerHitRelations_rec_collectionID[kMax_VXDTrackerHitRelations_rec];   //[_VXDTrackerHitRelations_rec_]
   Int_t           _VXDTrackerHitRelations_sim_;
   Int_t           _VXDTrackerHitRelations_sim_index[kMax_VXDTrackerHitRelations_sim];   //[_VXDTrackerHitRelations_sim_]
   UInt_t          _VXDTrackerHitRelations_sim_collectionID[kMax_VXDTrackerHitRelations_sim];   //[_VXDTrackerHitRelations_sim_]
   Int_t           VXDTrackerHits_;
   ULong_t         VXDTrackerHits_cellID[kMaxVXDTrackerHits];   //[VXDTrackerHits_]
   Int_t           VXDTrackerHits_type[kMaxVXDTrackerHits];   //[VXDTrackerHits_]
   Int_t           VXDTrackerHits_quality[kMaxVXDTrackerHits];   //[VXDTrackerHits_]
   Float_t         VXDTrackerHits_time[kMaxVXDTrackerHits];   //[VXDTrackerHits_]
   Float_t         VXDTrackerHits_eDep[kMaxVXDTrackerHits];   //[VXDTrackerHits_]
   Float_t         VXDTrackerHits_eDepError[kMaxVXDTrackerHits];   //[VXDTrackerHits_]
   Float_t         VXDTrackerHits_u_a[kMaxVXDTrackerHits];   //[VXDTrackerHits_]
   Float_t         VXDTrackerHits_u_b[kMaxVXDTrackerHits];   //[VXDTrackerHits_]
   Float_t         VXDTrackerHits_v_a[kMaxVXDTrackerHits];   //[VXDTrackerHits_]
   Float_t         VXDTrackerHits_v_b[kMaxVXDTrackerHits];   //[VXDTrackerHits_]
   Float_t         VXDTrackerHits_du[kMaxVXDTrackerHits];   //[VXDTrackerHits_]
   Float_t         VXDTrackerHits_dv[kMaxVXDTrackerHits];   //[VXDTrackerHits_]
   Double_t        VXDTrackerHits_position_x[kMaxVXDTrackerHits];   //[VXDTrackerHits_]
   Double_t        VXDTrackerHits_position_y[kMaxVXDTrackerHits];   //[VXDTrackerHits_]
   Double_t        VXDTrackerHits_position_z[kMaxVXDTrackerHits];   //[VXDTrackerHits_]
   Float_t         VXDTrackerHits_covMatrix[kMaxVXDTrackerHits][6];   //[VXDTrackerHits_]
   Int_t           YokeBarrelCollection_;
   ULong_t         YokeBarrelCollection_cellID[kMaxYokeBarrelCollection];   //[YokeBarrelCollection_]
   Float_t         YokeBarrelCollection_energy[kMaxYokeBarrelCollection];   //[YokeBarrelCollection_]
   Float_t         YokeBarrelCollection_position_x[kMaxYokeBarrelCollection];   //[YokeBarrelCollection_]
   Float_t         YokeBarrelCollection_position_y[kMaxYokeBarrelCollection];   //[YokeBarrelCollection_]
   Float_t         YokeBarrelCollection_position_z[kMaxYokeBarrelCollection];   //[YokeBarrelCollection_]
   UInt_t          YokeBarrelCollection_contributions_begin[kMaxYokeBarrelCollection];   //[YokeBarrelCollection_]
   UInt_t          YokeBarrelCollection_contributions_end[kMaxYokeBarrelCollection];   //[YokeBarrelCollection_]
   Int_t           _YokeBarrelCollection_contributions_;
   Int_t           _YokeBarrelCollection_contributions_index[kMax_YokeBarrelCollection_contributions];   //[_YokeBarrelCollection_contributions_]
   UInt_t          _YokeBarrelCollection_contributions_collectionID[kMax_YokeBarrelCollection_contributions];   //[_YokeBarrelCollection_contributions_]
   Int_t           YokeBarrelCollectionContributions_;
   Int_t           YokeBarrelCollectionContributions_PDG[kMaxYokeBarrelCollectionContributions];   //[YokeBarrelCollectionContributions_]
   Float_t         YokeBarrelCollectionContributions_energy[kMaxYokeBarrelCollectionContributions];   //[YokeBarrelCollectionContributions_]
   Float_t         YokeBarrelCollectionContributions_time[kMaxYokeBarrelCollectionContributions];   //[YokeBarrelCollectionContributions_]
   Float_t         YokeBarrelCollectionContributions_stepPosition_x[kMaxYokeBarrelCollectionContributions];   //[YokeBarrelCollectionContributions_]
   Float_t         YokeBarrelCollectionContributions_stepPosition_y[kMaxYokeBarrelCollectionContributions];   //[YokeBarrelCollectionContributions_]
   Float_t         YokeBarrelCollectionContributions_stepPosition_z[kMaxYokeBarrelCollectionContributions];   //[YokeBarrelCollectionContributions_]
   Int_t           _YokeBarrelCollectionContributions_particle_;
   Int_t           _YokeBarrelCollectionContributions_particle_index[kMax_YokeBarrelCollectionContributions_particle];   //[_YokeBarrelCollectionContributions_particle_]
   UInt_t          _YokeBarrelCollectionContributions_particle_collectionID[kMax_YokeBarrelCollectionContributions_particle];   //[_YokeBarrelCollectionContributions_particle_]
   Int_t           YokeEndcapCollection_;
   ULong_t         YokeEndcapCollection_cellID[kMaxYokeEndcapCollection];   //[YokeEndcapCollection_]
   Float_t         YokeEndcapCollection_energy[kMaxYokeEndcapCollection];   //[YokeEndcapCollection_]
   Float_t         YokeEndcapCollection_position_x[kMaxYokeEndcapCollection];   //[YokeEndcapCollection_]
   Float_t         YokeEndcapCollection_position_y[kMaxYokeEndcapCollection];   //[YokeEndcapCollection_]
   Float_t         YokeEndcapCollection_position_z[kMaxYokeEndcapCollection];   //[YokeEndcapCollection_]
   UInt_t          YokeEndcapCollection_contributions_begin[kMaxYokeEndcapCollection];   //[YokeEndcapCollection_]
   UInt_t          YokeEndcapCollection_contributions_end[kMaxYokeEndcapCollection];   //[YokeEndcapCollection_]
   Int_t           _YokeEndcapCollection_contributions_;
   Int_t           _YokeEndcapCollection_contributions_index[kMax_YokeEndcapCollection_contributions];   //[_YokeEndcapCollection_contributions_]
   UInt_t          _YokeEndcapCollection_contributions_collectionID[kMax_YokeEndcapCollection_contributions];   //[_YokeEndcapCollection_contributions_]
   Int_t           YokeEndcapCollectionContributions_;
   Int_t           YokeEndcapCollectionContributions_PDG[kMaxYokeEndcapCollectionContributions];   //[YokeEndcapCollectionContributions_]
   Float_t         YokeEndcapCollectionContributions_energy[kMaxYokeEndcapCollectionContributions];   //[YokeEndcapCollectionContributions_]
   Float_t         YokeEndcapCollectionContributions_time[kMaxYokeEndcapCollectionContributions];   //[YokeEndcapCollectionContributions_]
   Float_t         YokeEndcapCollectionContributions_stepPosition_x[kMaxYokeEndcapCollectionContributions];   //[YokeEndcapCollectionContributions_]
   Float_t         YokeEndcapCollectionContributions_stepPosition_y[kMaxYokeEndcapCollectionContributions];   //[YokeEndcapCollectionContributions_]
   Float_t         YokeEndcapCollectionContributions_stepPosition_z[kMaxYokeEndcapCollectionContributions];   //[YokeEndcapCollectionContributions_]
   Int_t           _YokeEndcapCollectionContributions_particle_;
   Int_t           _YokeEndcapCollectionContributions_particle_index[kMax_YokeEndcapCollectionContributions_particle];   //[_YokeEndcapCollectionContributions_particle_]
   UInt_t          _YokeEndcapCollectionContributions_particle_collectionID[kMax_YokeEndcapCollectionContributions_particle];   //[_YokeEndcapCollectionContributions_particle_]
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
   TBranch        *b_BuildUpVertices_;   //!
   TBranch        *b_BuildUpVertices_primary;   //!
   TBranch        *b_BuildUpVertices_chi2;   //!
   TBranch        *b_BuildUpVertices_probability;   //!
   TBranch        *b_BuildUpVertices_position_x;   //!
   TBranch        *b_BuildUpVertices_position_y;   //!
   TBranch        *b_BuildUpVertices_position_z;   //!
   TBranch        *b_BuildUpVertices_covMatrix;   //!
   TBranch        *b_BuildUpVertices_algorithmType;   //!
   TBranch        *b_BuildUpVertices_parameters_begin;   //!
   TBranch        *b_BuildUpVertices_parameters_end;   //!
   TBranch        *b__BuildUpVertices_associatedParticle_;   //!
   TBranch        *b__BuildUpVertices_associatedParticle_index;   //!
   TBranch        *b__BuildUpVertices_associatedParticle_collectionID;   //!
   TBranch        *b__BuildUpVertices_parameters;   //!
   TBranch        *b_BuildUpVertices_RP_;   //!
   TBranch        *b_BuildUpVertices_RP_PDG;   //!
   TBranch        *b_BuildUpVertices_RP_energy;   //!
   TBranch        *b_BuildUpVertices_RP_momentum_x;   //!
   TBranch        *b_BuildUpVertices_RP_momentum_y;   //!
   TBranch        *b_BuildUpVertices_RP_momentum_z;   //!
   TBranch        *b_BuildUpVertices_RP_referencePoint_x;   //!
   TBranch        *b_BuildUpVertices_RP_referencePoint_y;   //!
   TBranch        *b_BuildUpVertices_RP_referencePoint_z;   //!
   TBranch        *b_BuildUpVertices_RP_charge;   //!
   TBranch        *b_BuildUpVertices_RP_mass;   //!
   TBranch        *b_BuildUpVertices_RP_goodnessOfPID;   //!
   TBranch        *b_BuildUpVertices_RP_covMatrix;   //!
   TBranch        *b_BuildUpVertices_RP_clusters_begin;   //!
   TBranch        *b_BuildUpVertices_RP_clusters_end;   //!
   TBranch        *b_BuildUpVertices_RP_tracks_begin;   //!
   TBranch        *b_BuildUpVertices_RP_tracks_end;   //!
   TBranch        *b_BuildUpVertices_RP_particles_begin;   //!
   TBranch        *b_BuildUpVertices_RP_particles_end;   //!
   TBranch        *b_BuildUpVertices_RP_particleIDs_begin;   //!
   TBranch        *b_BuildUpVertices_RP_particleIDs_end;   //!
   TBranch        *b__BuildUpVertices_RP_clusters_;   //!
   TBranch        *b__BuildUpVertices_RP_clusters_index;   //!
   TBranch        *b__BuildUpVertices_RP_clusters_collectionID;   //!
   TBranch        *b__BuildUpVertices_RP_tracks_;   //!
   TBranch        *b__BuildUpVertices_RP_tracks_index;   //!
   TBranch        *b__BuildUpVertices_RP_tracks_collectionID;   //!
   TBranch        *b__BuildUpVertices_RP_particles_;   //!
   TBranch        *b__BuildUpVertices_RP_particles_index;   //!
   TBranch        *b__BuildUpVertices_RP_particles_collectionID;   //!
   TBranch        *b__BuildUpVertices_RP_particleIDs_;   //!
   TBranch        *b__BuildUpVertices_RP_particleIDs_index;   //!
   TBranch        *b__BuildUpVertices_RP_particleIDs_collectionID;   //!
   TBranch        *b__BuildUpVertices_RP_startVertex_;   //!
   TBranch        *b__BuildUpVertices_RP_startVertex_index;   //!
   TBranch        *b__BuildUpVertices_RP_startVertex_collectionID;   //!
   TBranch        *b__BuildUpVertices_RP_particleIDUsed_;   //!
   TBranch        *b__BuildUpVertices_RP_particleIDUsed_index;   //!
   TBranch        *b__BuildUpVertices_RP_particleIDUsed_collectionID;   //!
   TBranch        *b_BuildUpVertices_RP_particleIDs_;   //!
   TBranch        *b_BuildUpVertices_RP_particleIDs_type;   //!
   TBranch        *b_BuildUpVertices_RP_particleIDs_PDG;   //!
   TBranch        *b_BuildUpVertices_RP_particleIDs_algorithmType;   //!
   TBranch        *b_BuildUpVertices_RP_particleIDs_likelihood;   //!
   TBranch        *b_BuildUpVertices_RP_particleIDs_parameters_begin;   //!
   TBranch        *b_BuildUpVertices_RP_particleIDs_parameters_end;   //!
   TBranch        *b__BuildUpVertices_RP_particleIDs_parameters;   //!
   TBranch        *b_BuildUpVertices_V0_;   //!
   TBranch        *b_BuildUpVertices_V0_primary;   //!
   TBranch        *b_BuildUpVertices_V0_chi2;   //!
   TBranch        *b_BuildUpVertices_V0_probability;   //!
   TBranch        *b_BuildUpVertices_V0_position_x;   //!
   TBranch        *b_BuildUpVertices_V0_position_y;   //!
   TBranch        *b_BuildUpVertices_V0_position_z;   //!
   TBranch        *b_BuildUpVertices_V0_covMatrix;   //!
   TBranch        *b_BuildUpVertices_V0_algorithmType;   //!
   TBranch        *b_BuildUpVertices_V0_parameters_begin;   //!
   TBranch        *b_BuildUpVertices_V0_parameters_end;   //!
   TBranch        *b__BuildUpVertices_V0_associatedParticle_;   //!
   TBranch        *b__BuildUpVertices_V0_associatedParticle_index;   //!
   TBranch        *b__BuildUpVertices_V0_associatedParticle_collectionID;   //!
   TBranch        *b__BuildUpVertices_V0_parameters;   //!
   TBranch        *b_BuildUpVertices_V0_RP_;   //!
   TBranch        *b_BuildUpVertices_V0_RP_PDG;   //!
   TBranch        *b_BuildUpVertices_V0_RP_energy;   //!
   TBranch        *b_BuildUpVertices_V0_RP_momentum_x;   //!
   TBranch        *b_BuildUpVertices_V0_RP_momentum_y;   //!
   TBranch        *b_BuildUpVertices_V0_RP_momentum_z;   //!
   TBranch        *b_BuildUpVertices_V0_RP_referencePoint_x;   //!
   TBranch        *b_BuildUpVertices_V0_RP_referencePoint_y;   //!
   TBranch        *b_BuildUpVertices_V0_RP_referencePoint_z;   //!
   TBranch        *b_BuildUpVertices_V0_RP_charge;   //!
   TBranch        *b_BuildUpVertices_V0_RP_mass;   //!
   TBranch        *b_BuildUpVertices_V0_RP_goodnessOfPID;   //!
   TBranch        *b_BuildUpVertices_V0_RP_covMatrix;   //!
   TBranch        *b_BuildUpVertices_V0_RP_clusters_begin;   //!
   TBranch        *b_BuildUpVertices_V0_RP_clusters_end;   //!
   TBranch        *b_BuildUpVertices_V0_RP_tracks_begin;   //!
   TBranch        *b_BuildUpVertices_V0_RP_tracks_end;   //!
   TBranch        *b_BuildUpVertices_V0_RP_particles_begin;   //!
   TBranch        *b_BuildUpVertices_V0_RP_particles_end;   //!
   TBranch        *b_BuildUpVertices_V0_RP_particleIDs_begin;   //!
   TBranch        *b_BuildUpVertices_V0_RP_particleIDs_end;   //!
   TBranch        *b__BuildUpVertices_V0_RP_clusters_;   //!
   TBranch        *b__BuildUpVertices_V0_RP_clusters_index;   //!
   TBranch        *b__BuildUpVertices_V0_RP_clusters_collectionID;   //!
   TBranch        *b__BuildUpVertices_V0_RP_tracks_;   //!
   TBranch        *b__BuildUpVertices_V0_RP_tracks_index;   //!
   TBranch        *b__BuildUpVertices_V0_RP_tracks_collectionID;   //!
   TBranch        *b__BuildUpVertices_V0_RP_particles_;   //!
   TBranch        *b__BuildUpVertices_V0_RP_particles_index;   //!
   TBranch        *b__BuildUpVertices_V0_RP_particles_collectionID;   //!
   TBranch        *b__BuildUpVertices_V0_RP_particleIDs_;   //!
   TBranch        *b__BuildUpVertices_V0_RP_particleIDs_index;   //!
   TBranch        *b__BuildUpVertices_V0_RP_particleIDs_collectionID;   //!
   TBranch        *b__BuildUpVertices_V0_RP_startVertex_;   //!
   TBranch        *b__BuildUpVertices_V0_RP_startVertex_index;   //!
   TBranch        *b__BuildUpVertices_V0_RP_startVertex_collectionID;   //!
   TBranch        *b__BuildUpVertices_V0_RP_particleIDUsed_;   //!
   TBranch        *b__BuildUpVertices_V0_RP_particleIDUsed_index;   //!
   TBranch        *b__BuildUpVertices_V0_RP_particleIDUsed_collectionID;   //!
   TBranch        *b_BuildUpVertices_V0_RP_particleIDs_;   //!
   TBranch        *b_BuildUpVertices_V0_RP_particleIDs_type;   //!
   TBranch        *b_BuildUpVertices_V0_RP_particleIDs_PDG;   //!
   TBranch        *b_BuildUpVertices_V0_RP_particleIDs_algorithmType;   //!
   TBranch        *b_BuildUpVertices_V0_RP_particleIDs_likelihood;   //!
   TBranch        *b_BuildUpVertices_V0_RP_particleIDs_parameters_begin;   //!
   TBranch        *b_BuildUpVertices_V0_RP_particleIDs_parameters_end;   //!
   TBranch        *b__BuildUpVertices_V0_RP_particleIDs_parameters;   //!
   TBranch        *b_CalohitMCTruthLink_;   //!
   TBranch        *b_CalohitMCTruthLink_weight;   //!
   TBranch        *b__CalohitMCTruthLink_rec_;   //!
   TBranch        *b__CalohitMCTruthLink_rec_index;   //!
   TBranch        *b__CalohitMCTruthLink_rec_collectionID;   //!
   TBranch        *b__CalohitMCTruthLink_sim_;   //!
   TBranch        *b__CalohitMCTruthLink_sim_index;   //!
   TBranch        *b__CalohitMCTruthLink_sim_collectionID;   //!
   TBranch        *b_ClusterMCTruthLink_;   //!
   TBranch        *b_ClusterMCTruthLink_weight;   //!
   TBranch        *b__ClusterMCTruthLink_rec_;   //!
   TBranch        *b__ClusterMCTruthLink_rec_index;   //!
   TBranch        *b__ClusterMCTruthLink_rec_collectionID;   //!
   TBranch        *b__ClusterMCTruthLink_sim_;   //!
   TBranch        *b__ClusterMCTruthLink_sim_index;   //!
   TBranch        *b__ClusterMCTruthLink_sim_collectionID;   //!
   TBranch        *b_DebugHits_objIdx_;   //!
   TBranch        *b_DebugHits_objIdx_index;   //!
   TBranch        *b_DebugHits_objIdx_collectionID;   //!
   TBranch        *b_ECALBarrel_;   //!
   TBranch        *b_ECALBarrel_cellID;   //!
   TBranch        *b_ECALBarrel_energy;   //!
   TBranch        *b_ECALBarrel_energyError;   //!
   TBranch        *b_ECALBarrel_time;   //!
   TBranch        *b_ECALBarrel_position_x;   //!
   TBranch        *b_ECALBarrel_position_y;   //!
   TBranch        *b_ECALBarrel_position_z;   //!
   TBranch        *b_ECALBarrel_type;   //!
   TBranch        *b_ECalBarrelCollection_;   //!
   TBranch        *b_ECalBarrelCollection_cellID;   //!
   TBranch        *b_ECalBarrelCollection_energy;   //!
   TBranch        *b_ECalBarrelCollection_position_x;   //!
   TBranch        *b_ECalBarrelCollection_position_y;   //!
   TBranch        *b_ECalBarrelCollection_position_z;   //!
   TBranch        *b_ECalBarrelCollection_contributions_begin;   //!
   TBranch        *b_ECalBarrelCollection_contributions_end;   //!
   TBranch        *b__ECalBarrelCollection_contributions_;   //!
   TBranch        *b__ECalBarrelCollection_contributions_index;   //!
   TBranch        *b__ECalBarrelCollection_contributions_collectionID;   //!
   TBranch        *b_ECalBarrelCollectionContributions_;   //!
   TBranch        *b_ECalBarrelCollectionContributions_PDG;   //!
   TBranch        *b_ECalBarrelCollectionContributions_energy;   //!
   TBranch        *b_ECalBarrelCollectionContributions_time;   //!
   TBranch        *b_ECalBarrelCollectionContributions_stepPosition_x;   //!
   TBranch        *b_ECalBarrelCollectionContributions_stepPosition_y;   //!
   TBranch        *b_ECalBarrelCollectionContributions_stepPosition_z;   //!
   TBranch        *b__ECalBarrelCollectionContributions_particle_;   //!
   TBranch        *b__ECalBarrelCollectionContributions_particle_index;   //!
   TBranch        *b__ECalBarrelCollectionContributions_particle_collectionID;   //!
   TBranch        *b_ECALEndcap_;   //!
   TBranch        *b_ECALEndcap_cellID;   //!
   TBranch        *b_ECALEndcap_energy;   //!
   TBranch        *b_ECALEndcap_energyError;   //!
   TBranch        *b_ECALEndcap_time;   //!
   TBranch        *b_ECALEndcap_position_x;   //!
   TBranch        *b_ECALEndcap_position_y;   //!
   TBranch        *b_ECALEndcap_position_z;   //!
   TBranch        *b_ECALEndcap_type;   //!
   TBranch        *b_ECalEndcapCollection_;   //!
   TBranch        *b_ECalEndcapCollection_cellID;   //!
   TBranch        *b_ECalEndcapCollection_energy;   //!
   TBranch        *b_ECalEndcapCollection_position_x;   //!
   TBranch        *b_ECalEndcapCollection_position_y;   //!
   TBranch        *b_ECalEndcapCollection_position_z;   //!
   TBranch        *b_ECalEndcapCollection_contributions_begin;   //!
   TBranch        *b_ECalEndcapCollection_contributions_end;   //!
   TBranch        *b__ECalEndcapCollection_contributions_;   //!
   TBranch        *b__ECalEndcapCollection_contributions_index;   //!
   TBranch        *b__ECalEndcapCollection_contributions_collectionID;   //!
   TBranch        *b_ECalEndcapCollectionContributions_;   //!
   TBranch        *b_ECalEndcapCollectionContributions_PDG;   //!
   TBranch        *b_ECalEndcapCollectionContributions_energy;   //!
   TBranch        *b_ECalEndcapCollectionContributions_time;   //!
   TBranch        *b_ECalEndcapCollectionContributions_stepPosition_x;   //!
   TBranch        *b_ECalEndcapCollectionContributions_stepPosition_y;   //!
   TBranch        *b_ECalEndcapCollectionContributions_stepPosition_z;   //!
   TBranch        *b__ECalEndcapCollectionContributions_particle_;   //!
   TBranch        *b__ECalEndcapCollectionContributions_particle_index;   //!
   TBranch        *b__ECalEndcapCollectionContributions_particle_collectionID;   //!
   TBranch        *b_EfficientMCParticles_objIdx_;   //!
   TBranch        *b_EfficientMCParticles_objIdx_index;   //!
   TBranch        *b_EfficientMCParticles_objIdx_collectionID;   //!
   TBranch        *b_EventHeader_;   //!
   TBranch        *b_EventHeader_eventNumber;   //!
   TBranch        *b_EventHeader_runNumber;   //!
   TBranch        *b_EventHeader_timeStamp;   //!
   TBranch        *b_EventHeader_weight;   //!
   TBranch        *b_EventHeader_weights_begin;   //!
   TBranch        *b_EventHeader_weights_end;   //!
   TBranch        *b__EventHeader_weights;   //!
   TBranch        *b_HCALBarrel_;   //!
   TBranch        *b_HCALBarrel_cellID;   //!
   TBranch        *b_HCALBarrel_energy;   //!
   TBranch        *b_HCALBarrel_energyError;   //!
   TBranch        *b_HCALBarrel_time;   //!
   TBranch        *b_HCALBarrel_position_x;   //!
   TBranch        *b_HCALBarrel_position_y;   //!
   TBranch        *b_HCALBarrel_position_z;   //!
   TBranch        *b_HCALBarrel_type;   //!
   TBranch        *b_HCalBarrelCollection_;   //!
   TBranch        *b_HCalBarrelCollection_cellID;   //!
   TBranch        *b_HCalBarrelCollection_energy;   //!
   TBranch        *b_HCalBarrelCollection_position_x;   //!
   TBranch        *b_HCalBarrelCollection_position_y;   //!
   TBranch        *b_HCalBarrelCollection_position_z;   //!
   TBranch        *b_HCalBarrelCollection_contributions_begin;   //!
   TBranch        *b_HCalBarrelCollection_contributions_end;   //!
   TBranch        *b__HCalBarrelCollection_contributions_;   //!
   TBranch        *b__HCalBarrelCollection_contributions_index;   //!
   TBranch        *b__HCalBarrelCollection_contributions_collectionID;   //!
   TBranch        *b_HCalBarrelCollectionContributions_;   //!
   TBranch        *b_HCalBarrelCollectionContributions_PDG;   //!
   TBranch        *b_HCalBarrelCollectionContributions_energy;   //!
   TBranch        *b_HCalBarrelCollectionContributions_time;   //!
   TBranch        *b_HCalBarrelCollectionContributions_stepPosition_x;   //!
   TBranch        *b_HCalBarrelCollectionContributions_stepPosition_y;   //!
   TBranch        *b_HCalBarrelCollectionContributions_stepPosition_z;   //!
   TBranch        *b__HCalBarrelCollectionContributions_particle_;   //!
   TBranch        *b__HCalBarrelCollectionContributions_particle_index;   //!
   TBranch        *b__HCalBarrelCollectionContributions_particle_collectionID;   //!
   TBranch        *b_HCALEndcap_;   //!
   TBranch        *b_HCALEndcap_cellID;   //!
   TBranch        *b_HCALEndcap_energy;   //!
   TBranch        *b_HCALEndcap_energyError;   //!
   TBranch        *b_HCALEndcap_time;   //!
   TBranch        *b_HCALEndcap_position_x;   //!
   TBranch        *b_HCALEndcap_position_y;   //!
   TBranch        *b_HCALEndcap_position_z;   //!
   TBranch        *b_HCALEndcap_type;   //!
   TBranch        *b_HCalEndcapCollection_;   //!
   TBranch        *b_HCalEndcapCollection_cellID;   //!
   TBranch        *b_HCalEndcapCollection_energy;   //!
   TBranch        *b_HCalEndcapCollection_position_x;   //!
   TBranch        *b_HCalEndcapCollection_position_y;   //!
   TBranch        *b_HCalEndcapCollection_position_z;   //!
   TBranch        *b_HCalEndcapCollection_contributions_begin;   //!
   TBranch        *b_HCalEndcapCollection_contributions_end;   //!
   TBranch        *b__HCalEndcapCollection_contributions_;   //!
   TBranch        *b__HCalEndcapCollection_contributions_index;   //!
   TBranch        *b__HCalEndcapCollection_contributions_collectionID;   //!
   TBranch        *b_HCalEndcapCollectionContributions_;   //!
   TBranch        *b_HCalEndcapCollectionContributions_PDG;   //!
   TBranch        *b_HCalEndcapCollectionContributions_energy;   //!
   TBranch        *b_HCalEndcapCollectionContributions_time;   //!
   TBranch        *b_HCalEndcapCollectionContributions_stepPosition_x;   //!
   TBranch        *b_HCalEndcapCollectionContributions_stepPosition_y;   //!
   TBranch        *b_HCalEndcapCollectionContributions_stepPosition_z;   //!
   TBranch        *b__HCalEndcapCollectionContributions_particle_;   //!
   TBranch        *b__HCalEndcapCollectionContributions_particle_index;   //!
   TBranch        *b__HCalEndcapCollectionContributions_particle_collectionID;   //!
   TBranch        *b_HCALOther_;   //!
   TBranch        *b_HCALOther_cellID;   //!
   TBranch        *b_HCALOther_energy;   //!
   TBranch        *b_HCALOther_energyError;   //!
   TBranch        *b_HCALOther_time;   //!
   TBranch        *b_HCALOther_position_x;   //!
   TBranch        *b_HCALOther_position_y;   //!
   TBranch        *b_HCALOther_position_z;   //!
   TBranch        *b_HCALOther_type;   //!
   TBranch        *b_HCalRingCollection_;   //!
   TBranch        *b_HCalRingCollection_cellID;   //!
   TBranch        *b_HCalRingCollection_energy;   //!
   TBranch        *b_HCalRingCollection_position_x;   //!
   TBranch        *b_HCalRingCollection_position_y;   //!
   TBranch        *b_HCalRingCollection_position_z;   //!
   TBranch        *b_HCalRingCollection_contributions_begin;   //!
   TBranch        *b_HCalRingCollection_contributions_end;   //!
   TBranch        *b__HCalRingCollection_contributions_;   //!
   TBranch        *b__HCalRingCollection_contributions_index;   //!
   TBranch        *b__HCalRingCollection_contributions_collectionID;   //!
   TBranch        *b_HCalRingCollectionContributions_;   //!
   TBranch        *b_HCalRingCollectionContributions_PDG;   //!
   TBranch        *b_HCalRingCollectionContributions_energy;   //!
   TBranch        *b_HCalRingCollectionContributions_time;   //!
   TBranch        *b_HCalRingCollectionContributions_stepPosition_x;   //!
   TBranch        *b_HCalRingCollectionContributions_stepPosition_y;   //!
   TBranch        *b_HCalRingCollectionContributions_stepPosition_z;   //!
   TBranch        *b__HCalRingCollectionContributions_particle_;   //!
   TBranch        *b__HCalRingCollectionContributions_particle_index;   //!
   TBranch        *b__HCalRingCollectionContributions_particle_collectionID;   //!
   TBranch        *b_InefficientMCParticles_objIdx_;   //!
   TBranch        *b_InefficientMCParticles_objIdx_index;   //!
   TBranch        *b_InefficientMCParticles_objIdx_collectionID;   //!
   TBranch        *b_InnerTrackerBarrelCollection_;   //!
   TBranch        *b_InnerTrackerBarrelCollection_cellID;   //!
   TBranch        *b_InnerTrackerBarrelCollection_eDep;   //!
   TBranch        *b_InnerTrackerBarrelCollection_time;   //!
   TBranch        *b_InnerTrackerBarrelCollection_pathLength;   //!
   TBranch        *b_InnerTrackerBarrelCollection_quality;   //!
   TBranch        *b_InnerTrackerBarrelCollection_position_x;   //!
   TBranch        *b_InnerTrackerBarrelCollection_position_y;   //!
   TBranch        *b_InnerTrackerBarrelCollection_position_z;   //!
   TBranch        *b_InnerTrackerBarrelCollection_momentum_x;   //!
   TBranch        *b_InnerTrackerBarrelCollection_momentum_y;   //!
   TBranch        *b_InnerTrackerBarrelCollection_momentum_z;   //!
   TBranch        *b__InnerTrackerBarrelCollection_particle_;   //!
   TBranch        *b__InnerTrackerBarrelCollection_particle_index;   //!
   TBranch        *b__InnerTrackerBarrelCollection_particle_collectionID;   //!
   TBranch        *b_InnerTrackerBarrelHitsRelations_;   //!
   TBranch        *b_InnerTrackerBarrelHitsRelations_weight;   //!
   TBranch        *b__InnerTrackerBarrelHitsRelations_rec_;   //!
   TBranch        *b__InnerTrackerBarrelHitsRelations_rec_index;   //!
   TBranch        *b__InnerTrackerBarrelHitsRelations_rec_collectionID;   //!
   TBranch        *b__InnerTrackerBarrelHitsRelations_sim_;   //!
   TBranch        *b__InnerTrackerBarrelHitsRelations_sim_index;   //!
   TBranch        *b__InnerTrackerBarrelHitsRelations_sim_collectionID;   //!
   TBranch        *b_InnerTrackerEndcapCollection_;   //!
   TBranch        *b_InnerTrackerEndcapCollection_cellID;   //!
   TBranch        *b_InnerTrackerEndcapCollection_eDep;   //!
   TBranch        *b_InnerTrackerEndcapCollection_time;   //!
   TBranch        *b_InnerTrackerEndcapCollection_pathLength;   //!
   TBranch        *b_InnerTrackerEndcapCollection_quality;   //!
   TBranch        *b_InnerTrackerEndcapCollection_position_x;   //!
   TBranch        *b_InnerTrackerEndcapCollection_position_y;   //!
   TBranch        *b_InnerTrackerEndcapCollection_position_z;   //!
   TBranch        *b_InnerTrackerEndcapCollection_momentum_x;   //!
   TBranch        *b_InnerTrackerEndcapCollection_momentum_y;   //!
   TBranch        *b_InnerTrackerEndcapCollection_momentum_z;   //!
   TBranch        *b__InnerTrackerEndcapCollection_particle_;   //!
   TBranch        *b__InnerTrackerEndcapCollection_particle_index;   //!
   TBranch        *b__InnerTrackerEndcapCollection_particle_collectionID;   //!
   TBranch        *b_InnerTrackerEndcapHitsRelations_;   //!
   TBranch        *b_InnerTrackerEndcapHitsRelations_weight;   //!
   TBranch        *b__InnerTrackerEndcapHitsRelations_rec_;   //!
   TBranch        *b__InnerTrackerEndcapHitsRelations_rec_index;   //!
   TBranch        *b__InnerTrackerEndcapHitsRelations_rec_collectionID;   //!
   TBranch        *b__InnerTrackerEndcapHitsRelations_sim_;   //!
   TBranch        *b__InnerTrackerEndcapHitsRelations_sim_index;   //!
   TBranch        *b__InnerTrackerEndcapHitsRelations_sim_collectionID;   //!
   TBranch        *b_ITrackerEndcapHits_;   //!
   TBranch        *b_ITrackerEndcapHits_cellID;   //!
   TBranch        *b_ITrackerEndcapHits_type;   //!
   TBranch        *b_ITrackerEndcapHits_quality;   //!
   TBranch        *b_ITrackerEndcapHits_time;   //!
   TBranch        *b_ITrackerEndcapHits_eDep;   //!
   TBranch        *b_ITrackerEndcapHits_eDepError;   //!
   TBranch        *b_ITrackerEndcapHits_u_a;   //!
   TBranch        *b_ITrackerEndcapHits_u_b;   //!
   TBranch        *b_ITrackerEndcapHits_v_a;   //!
   TBranch        *b_ITrackerEndcapHits_v_b;   //!
   TBranch        *b_ITrackerEndcapHits_du;   //!
   TBranch        *b_ITrackerEndcapHits_dv;   //!
   TBranch        *b_ITrackerEndcapHits_position_x;   //!
   TBranch        *b_ITrackerEndcapHits_position_y;   //!
   TBranch        *b_ITrackerEndcapHits_position_z;   //!
   TBranch        *b_ITrackerEndcapHits_covMatrix;   //!
   TBranch        *b_ITrackerHits_;   //!
   TBranch        *b_ITrackerHits_cellID;   //!
   TBranch        *b_ITrackerHits_type;   //!
   TBranch        *b_ITrackerHits_quality;   //!
   TBranch        *b_ITrackerHits_time;   //!
   TBranch        *b_ITrackerHits_eDep;   //!
   TBranch        *b_ITrackerHits_eDepError;   //!
   TBranch        *b_ITrackerHits_u_a;   //!
   TBranch        *b_ITrackerHits_u_b;   //!
   TBranch        *b_ITrackerHits_v_a;   //!
   TBranch        *b_ITrackerHits_v_b;   //!
   TBranch        *b_ITrackerHits_du;   //!
   TBranch        *b_ITrackerHits_dv;   //!
   TBranch        *b_ITrackerHits_position_x;   //!
   TBranch        *b_ITrackerHits_position_y;   //!
   TBranch        *b_ITrackerHits_position_z;   //!
   TBranch        *b_ITrackerHits_covMatrix;   //!
   TBranch        *b_LooseSelectedPandoraPFOs_objIdx_;   //!
   TBranch        *b_LooseSelectedPandoraPFOs_objIdx_index;   //!
   TBranch        *b_LooseSelectedPandoraPFOs_objIdx_collectionID;   //!
   TBranch        *b_LumiCalClusters_;   //!
   TBranch        *b_LumiCalClusters_type;   //!
   TBranch        *b_LumiCalClusters_energy;   //!
   TBranch        *b_LumiCalClusters_energyError;   //!
   TBranch        *b_LumiCalClusters_position_x;   //!
   TBranch        *b_LumiCalClusters_position_y;   //!
   TBranch        *b_LumiCalClusters_position_z;   //!
   TBranch        *b_LumiCalClusters_positionError;   //!
   TBranch        *b_LumiCalClusters_iTheta;   //!
   TBranch        *b_LumiCalClusters_phi;   //!
   TBranch        *b_LumiCalClusters_directionError_x;   //!
   TBranch        *b_LumiCalClusters_directionError_y;   //!
   TBranch        *b_LumiCalClusters_directionError_z;   //!
   TBranch        *b_LumiCalClusters_shapeParameters_begin;   //!
   TBranch        *b_LumiCalClusters_shapeParameters_end;   //!
   TBranch        *b_LumiCalClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_LumiCalClusters_subdetectorEnergies_end;   //!
   TBranch        *b_LumiCalClusters_clusters_begin;   //!
   TBranch        *b_LumiCalClusters_clusters_end;   //!
   TBranch        *b_LumiCalClusters_hits_begin;   //!
   TBranch        *b_LumiCalClusters_hits_end;   //!
   TBranch        *b_LumiCalClusters_particleIDs_begin;   //!
   TBranch        *b_LumiCalClusters_particleIDs_end;   //!
   TBranch        *b__LumiCalClusters_clusters_;   //!
   TBranch        *b__LumiCalClusters_clusters_index;   //!
   TBranch        *b__LumiCalClusters_clusters_collectionID;   //!
   TBranch        *b__LumiCalClusters_hits_;   //!
   TBranch        *b__LumiCalClusters_hits_index;   //!
   TBranch        *b__LumiCalClusters_hits_collectionID;   //!
   TBranch        *b__LumiCalClusters_particleIDs_;   //!
   TBranch        *b__LumiCalClusters_particleIDs_index;   //!
   TBranch        *b__LumiCalClusters_particleIDs_collectionID;   //!
   TBranch        *b__LumiCalClusters_shapeParameters;   //!
   TBranch        *b__LumiCalClusters_subdetectorEnergies;   //!
   TBranch        *b_LumiCalClusters_particleIDs_;   //!
   TBranch        *b_LumiCalClusters_particleIDs_type;   //!
   TBranch        *b_LumiCalClusters_particleIDs_PDG;   //!
   TBranch        *b_LumiCalClusters_particleIDs_algorithmType;   //!
   TBranch        *b_LumiCalClusters_particleIDs_likelihood;   //!
   TBranch        *b_LumiCalClusters_particleIDs_parameters_begin;   //!
   TBranch        *b_LumiCalClusters_particleIDs_parameters_end;   //!
   TBranch        *b__LumiCalClusters_particleIDs_parameters;   //!
   TBranch        *b_LumiCalCollection_;   //!
   TBranch        *b_LumiCalCollection_cellID;   //!
   TBranch        *b_LumiCalCollection_energy;   //!
   TBranch        *b_LumiCalCollection_position_x;   //!
   TBranch        *b_LumiCalCollection_position_y;   //!
   TBranch        *b_LumiCalCollection_position_z;   //!
   TBranch        *b_LumiCalCollection_contributions_begin;   //!
   TBranch        *b_LumiCalCollection_contributions_end;   //!
   TBranch        *b__LumiCalCollection_contributions_;   //!
   TBranch        *b__LumiCalCollection_contributions_index;   //!
   TBranch        *b__LumiCalCollection_contributions_collectionID;   //!
   TBranch        *b_LumiCalCollectionContributions_;   //!
   TBranch        *b_LumiCalCollectionContributions_PDG;   //!
   TBranch        *b_LumiCalCollectionContributions_energy;   //!
   TBranch        *b_LumiCalCollectionContributions_time;   //!
   TBranch        *b_LumiCalCollectionContributions_stepPosition_x;   //!
   TBranch        *b_LumiCalCollectionContributions_stepPosition_y;   //!
   TBranch        *b_LumiCalCollectionContributions_stepPosition_z;   //!
   TBranch        *b__LumiCalCollectionContributions_particle_;   //!
   TBranch        *b__LumiCalCollectionContributions_particle_index;   //!
   TBranch        *b__LumiCalCollectionContributions_particle_collectionID;   //!
   TBranch        *b_LumiCalHits_;   //!
   TBranch        *b_LumiCalHits_cellID;   //!
   TBranch        *b_LumiCalHits_energy;   //!
   TBranch        *b_LumiCalHits_energyError;   //!
   TBranch        *b_LumiCalHits_time;   //!
   TBranch        *b_LumiCalHits_position_x;   //!
   TBranch        *b_LumiCalHits_position_y;   //!
   TBranch        *b_LumiCalHits_position_z;   //!
   TBranch        *b_LumiCalHits_type;   //!
   TBranch        *b_LumiCalRecoParticles_;   //!
   TBranch        *b_LumiCalRecoParticles_PDG;   //!
   TBranch        *b_LumiCalRecoParticles_energy;   //!
   TBranch        *b_LumiCalRecoParticles_momentum_x;   //!
   TBranch        *b_LumiCalRecoParticles_momentum_y;   //!
   TBranch        *b_LumiCalRecoParticles_momentum_z;   //!
   TBranch        *b_LumiCalRecoParticles_referencePoint_x;   //!
   TBranch        *b_LumiCalRecoParticles_referencePoint_y;   //!
   TBranch        *b_LumiCalRecoParticles_referencePoint_z;   //!
   TBranch        *b_LumiCalRecoParticles_charge;   //!
   TBranch        *b_LumiCalRecoParticles_mass;   //!
   TBranch        *b_LumiCalRecoParticles_goodnessOfPID;   //!
   TBranch        *b_LumiCalRecoParticles_covMatrix;   //!
   TBranch        *b_LumiCalRecoParticles_clusters_begin;   //!
   TBranch        *b_LumiCalRecoParticles_clusters_end;   //!
   TBranch        *b_LumiCalRecoParticles_tracks_begin;   //!
   TBranch        *b_LumiCalRecoParticles_tracks_end;   //!
   TBranch        *b_LumiCalRecoParticles_particles_begin;   //!
   TBranch        *b_LumiCalRecoParticles_particles_end;   //!
   TBranch        *b_LumiCalRecoParticles_particleIDs_begin;   //!
   TBranch        *b_LumiCalRecoParticles_particleIDs_end;   //!
   TBranch        *b__LumiCalRecoParticles_clusters_;   //!
   TBranch        *b__LumiCalRecoParticles_clusters_index;   //!
   TBranch        *b__LumiCalRecoParticles_clusters_collectionID;   //!
   TBranch        *b__LumiCalRecoParticles_tracks_;   //!
   TBranch        *b__LumiCalRecoParticles_tracks_index;   //!
   TBranch        *b__LumiCalRecoParticles_tracks_collectionID;   //!
   TBranch        *b__LumiCalRecoParticles_particles_;   //!
   TBranch        *b__LumiCalRecoParticles_particles_index;   //!
   TBranch        *b__LumiCalRecoParticles_particles_collectionID;   //!
   TBranch        *b__LumiCalRecoParticles_particleIDs_;   //!
   TBranch        *b__LumiCalRecoParticles_particleIDs_index;   //!
   TBranch        *b__LumiCalRecoParticles_particleIDs_collectionID;   //!
   TBranch        *b__LumiCalRecoParticles_startVertex_;   //!
   TBranch        *b__LumiCalRecoParticles_startVertex_index;   //!
   TBranch        *b__LumiCalRecoParticles_startVertex_collectionID;   //!
   TBranch        *b__LumiCalRecoParticles_particleIDUsed_;   //!
   TBranch        *b__LumiCalRecoParticles_particleIDUsed_index;   //!
   TBranch        *b__LumiCalRecoParticles_particleIDUsed_collectionID;   //!
   TBranch        *b_LumiCalRecoParticles_particleIDs_;   //!
   TBranch        *b_LumiCalRecoParticles_particleIDs_type;   //!
   TBranch        *b_LumiCalRecoParticles_particleIDs_PDG;   //!
   TBranch        *b_LumiCalRecoParticles_particleIDs_algorithmType;   //!
   TBranch        *b_LumiCalRecoParticles_particleIDs_likelihood;   //!
   TBranch        *b_LumiCalRecoParticles_particleIDs_parameters_begin;   //!
   TBranch        *b_LumiCalRecoParticles_particleIDs_parameters_end;   //!
   TBranch        *b__LumiCalRecoParticles_particleIDs_parameters;   //!
   TBranch        *b_MCParticles_;   //!
   TBranch        *b_MCParticles_PDG;   //!
   TBranch        *b_MCParticles_generatorStatus;   //!
   TBranch        *b_MCParticles_simulatorStatus;   //!
   TBranch        *b_MCParticles_charge;   //!
   TBranch        *b_MCParticles_time;   //!
   TBranch        *b_MCParticles_mass;   //!
   TBranch        *b_MCParticles_vertex_x;   //!
   TBranch        *b_MCParticles_vertex_y;   //!
   TBranch        *b_MCParticles_vertex_z;   //!
   TBranch        *b_MCParticles_endpoint_x;   //!
   TBranch        *b_MCParticles_endpoint_y;   //!
   TBranch        *b_MCParticles_endpoint_z;   //!
   TBranch        *b_MCParticles_momentum_x;   //!
   TBranch        *b_MCParticles_momentum_y;   //!
   TBranch        *b_MCParticles_momentum_z;   //!
   TBranch        *b_MCParticles_momentumAtEndpoint_x;   //!
   TBranch        *b_MCParticles_momentumAtEndpoint_y;   //!
   TBranch        *b_MCParticles_momentumAtEndpoint_z;   //!
   TBranch        *b_MCParticles_spin_x;   //!
   TBranch        *b_MCParticles_spin_y;   //!
   TBranch        *b_MCParticles_spin_z;   //!
   TBranch        *b_MCParticles_colorFlow_a;   //!
   TBranch        *b_MCParticles_colorFlow_b;   //!
   TBranch        *b_MCParticles_parents_begin;   //!
   TBranch        *b_MCParticles_parents_end;   //!
   TBranch        *b_MCParticles_daughters_begin;   //!
   TBranch        *b_MCParticles_daughters_end;   //!
   TBranch        *b__MCParticles_parents_;   //!
   TBranch        *b__MCParticles_parents_index;   //!
   TBranch        *b__MCParticles_parents_collectionID;   //!
   TBranch        *b__MCParticles_daughters_;   //!
   TBranch        *b__MCParticles_daughters_index;   //!
   TBranch        *b__MCParticles_daughters_collectionID;   //!
   TBranch        *b_MCParticlesSkimmed_objIdx_;   //!
   TBranch        *b_MCParticlesSkimmed_objIdx_index;   //!
   TBranch        *b_MCParticlesSkimmed_objIdx_collectionID;   //!
   TBranch        *b_MCPhysicsParticles_objIdx_;   //!
   TBranch        *b_MCPhysicsParticles_objIdx_index;   //!
   TBranch        *b_MCPhysicsParticles_objIdx_collectionID;   //!
   TBranch        *b_MCTruthClusterLink_;   //!
   TBranch        *b_MCTruthClusterLink_weight;   //!
   TBranch        *b__MCTruthClusterLink_rec_;   //!
   TBranch        *b__MCTruthClusterLink_rec_index;   //!
   TBranch        *b__MCTruthClusterLink_rec_collectionID;   //!
   TBranch        *b__MCTruthClusterLink_sim_;   //!
   TBranch        *b__MCTruthClusterLink_sim_index;   //!
   TBranch        *b__MCTruthClusterLink_sim_collectionID;   //!
   TBranch        *b_MCTruthRecoLink_;   //!
   TBranch        *b_MCTruthRecoLink_weight;   //!
   TBranch        *b__MCTruthRecoLink_rec_;   //!
   TBranch        *b__MCTruthRecoLink_rec_index;   //!
   TBranch        *b__MCTruthRecoLink_rec_collectionID;   //!
   TBranch        *b__MCTruthRecoLink_sim_;   //!
   TBranch        *b__MCTruthRecoLink_sim_index;   //!
   TBranch        *b__MCTruthRecoLink_sim_collectionID;   //!
   TBranch        *b_MCTruthSiTracksLink_;   //!
   TBranch        *b_MCTruthSiTracksLink_weight;   //!
   TBranch        *b__MCTruthSiTracksLink_rec_;   //!
   TBranch        *b__MCTruthSiTracksLink_rec_index;   //!
   TBranch        *b__MCTruthSiTracksLink_rec_collectionID;   //!
   TBranch        *b__MCTruthSiTracksLink_sim_;   //!
   TBranch        *b__MCTruthSiTracksLink_sim_index;   //!
   TBranch        *b__MCTruthSiTracksLink_sim_collectionID;   //!
   TBranch        *b_MUON_;   //!
   TBranch        *b_MUON_cellID;   //!
   TBranch        *b_MUON_energy;   //!
   TBranch        *b_MUON_energyError;   //!
   TBranch        *b_MUON_time;   //!
   TBranch        *b_MUON_position_x;   //!
   TBranch        *b_MUON_position_y;   //!
   TBranch        *b_MUON_position_z;   //!
   TBranch        *b_MUON_type;   //!
   TBranch        *b_OTrackerEndcapHits_;   //!
   TBranch        *b_OTrackerEndcapHits_cellID;   //!
   TBranch        *b_OTrackerEndcapHits_type;   //!
   TBranch        *b_OTrackerEndcapHits_quality;   //!
   TBranch        *b_OTrackerEndcapHits_time;   //!
   TBranch        *b_OTrackerEndcapHits_eDep;   //!
   TBranch        *b_OTrackerEndcapHits_eDepError;   //!
   TBranch        *b_OTrackerEndcapHits_u_a;   //!
   TBranch        *b_OTrackerEndcapHits_u_b;   //!
   TBranch        *b_OTrackerEndcapHits_v_a;   //!
   TBranch        *b_OTrackerEndcapHits_v_b;   //!
   TBranch        *b_OTrackerEndcapHits_du;   //!
   TBranch        *b_OTrackerEndcapHits_dv;   //!
   TBranch        *b_OTrackerEndcapHits_position_x;   //!
   TBranch        *b_OTrackerEndcapHits_position_y;   //!
   TBranch        *b_OTrackerEndcapHits_position_z;   //!
   TBranch        *b_OTrackerEndcapHits_covMatrix;   //!
   TBranch        *b_OTrackerHits_;   //!
   TBranch        *b_OTrackerHits_cellID;   //!
   TBranch        *b_OTrackerHits_type;   //!
   TBranch        *b_OTrackerHits_quality;   //!
   TBranch        *b_OTrackerHits_time;   //!
   TBranch        *b_OTrackerHits_eDep;   //!
   TBranch        *b_OTrackerHits_eDepError;   //!
   TBranch        *b_OTrackerHits_u_a;   //!
   TBranch        *b_OTrackerHits_u_b;   //!
   TBranch        *b_OTrackerHits_v_a;   //!
   TBranch        *b_OTrackerHits_v_b;   //!
   TBranch        *b_OTrackerHits_du;   //!
   TBranch        *b_OTrackerHits_dv;   //!
   TBranch        *b_OTrackerHits_position_x;   //!
   TBranch        *b_OTrackerHits_position_y;   //!
   TBranch        *b_OTrackerHits_position_z;   //!
   TBranch        *b_OTrackerHits_covMatrix;   //!
   TBranch        *b_OuterTrackerBarrelCollection_;   //!
   TBranch        *b_OuterTrackerBarrelCollection_cellID;   //!
   TBranch        *b_OuterTrackerBarrelCollection_eDep;   //!
   TBranch        *b_OuterTrackerBarrelCollection_time;   //!
   TBranch        *b_OuterTrackerBarrelCollection_pathLength;   //!
   TBranch        *b_OuterTrackerBarrelCollection_quality;   //!
   TBranch        *b_OuterTrackerBarrelCollection_position_x;   //!
   TBranch        *b_OuterTrackerBarrelCollection_position_y;   //!
   TBranch        *b_OuterTrackerBarrelCollection_position_z;   //!
   TBranch        *b_OuterTrackerBarrelCollection_momentum_x;   //!
   TBranch        *b_OuterTrackerBarrelCollection_momentum_y;   //!
   TBranch        *b_OuterTrackerBarrelCollection_momentum_z;   //!
   TBranch        *b__OuterTrackerBarrelCollection_particle_;   //!
   TBranch        *b__OuterTrackerBarrelCollection_particle_index;   //!
   TBranch        *b__OuterTrackerBarrelCollection_particle_collectionID;   //!
   TBranch        *b_OuterTrackerBarrelHitsRelations_;   //!
   TBranch        *b_OuterTrackerBarrelHitsRelations_weight;   //!
   TBranch        *b__OuterTrackerBarrelHitsRelations_rec_;   //!
   TBranch        *b__OuterTrackerBarrelHitsRelations_rec_index;   //!
   TBranch        *b__OuterTrackerBarrelHitsRelations_rec_collectionID;   //!
   TBranch        *b__OuterTrackerBarrelHitsRelations_sim_;   //!
   TBranch        *b__OuterTrackerBarrelHitsRelations_sim_index;   //!
   TBranch        *b__OuterTrackerBarrelHitsRelations_sim_collectionID;   //!
   TBranch        *b_OuterTrackerEndcapCollection_;   //!
   TBranch        *b_OuterTrackerEndcapCollection_cellID;   //!
   TBranch        *b_OuterTrackerEndcapCollection_eDep;   //!
   TBranch        *b_OuterTrackerEndcapCollection_time;   //!
   TBranch        *b_OuterTrackerEndcapCollection_pathLength;   //!
   TBranch        *b_OuterTrackerEndcapCollection_quality;   //!
   TBranch        *b_OuterTrackerEndcapCollection_position_x;   //!
   TBranch        *b_OuterTrackerEndcapCollection_position_y;   //!
   TBranch        *b_OuterTrackerEndcapCollection_position_z;   //!
   TBranch        *b_OuterTrackerEndcapCollection_momentum_x;   //!
   TBranch        *b_OuterTrackerEndcapCollection_momentum_y;   //!
   TBranch        *b_OuterTrackerEndcapCollection_momentum_z;   //!
   TBranch        *b__OuterTrackerEndcapCollection_particle_;   //!
   TBranch        *b__OuterTrackerEndcapCollection_particle_index;   //!
   TBranch        *b__OuterTrackerEndcapCollection_particle_collectionID;   //!
   TBranch        *b_OuterTrackerEndcapHitsRelations_;   //!
   TBranch        *b_OuterTrackerEndcapHitsRelations_weight;   //!
   TBranch        *b__OuterTrackerEndcapHitsRelations_rec_;   //!
   TBranch        *b__OuterTrackerEndcapHitsRelations_rec_index;   //!
   TBranch        *b__OuterTrackerEndcapHitsRelations_rec_collectionID;   //!
   TBranch        *b__OuterTrackerEndcapHitsRelations_sim_;   //!
   TBranch        *b__OuterTrackerEndcapHitsRelations_sim_index;   //!
   TBranch        *b__OuterTrackerEndcapHitsRelations_sim_collectionID;   //!
   TBranch        *b_PandoraClusters_;   //!
   TBranch        *b_PandoraClusters_type;   //!
   TBranch        *b_PandoraClusters_energy;   //!
   TBranch        *b_PandoraClusters_energyError;   //!
   TBranch        *b_PandoraClusters_position_x;   //!
   TBranch        *b_PandoraClusters_position_y;   //!
   TBranch        *b_PandoraClusters_position_z;   //!
   TBranch        *b_PandoraClusters_positionError;   //!
   TBranch        *b_PandoraClusters_iTheta;   //!
   TBranch        *b_PandoraClusters_phi;   //!
   TBranch        *b_PandoraClusters_directionError_x;   //!
   TBranch        *b_PandoraClusters_directionError_y;   //!
   TBranch        *b_PandoraClusters_directionError_z;   //!
   TBranch        *b_PandoraClusters_shapeParameters_begin;   //!
   TBranch        *b_PandoraClusters_shapeParameters_end;   //!
   TBranch        *b_PandoraClusters_subdetectorEnergies_begin;   //!
   TBranch        *b_PandoraClusters_subdetectorEnergies_end;   //!
   TBranch        *b_PandoraClusters_clusters_begin;   //!
   TBranch        *b_PandoraClusters_clusters_end;   //!
   TBranch        *b_PandoraClusters_hits_begin;   //!
   TBranch        *b_PandoraClusters_hits_end;   //!
   TBranch        *b_PandoraClusters_particleIDs_begin;   //!
   TBranch        *b_PandoraClusters_particleIDs_end;   //!
   TBranch        *b__PandoraClusters_clusters_;   //!
   TBranch        *b__PandoraClusters_clusters_index;   //!
   TBranch        *b__PandoraClusters_clusters_collectionID;   //!
   TBranch        *b__PandoraClusters_hits_;   //!
   TBranch        *b__PandoraClusters_hits_index;   //!
   TBranch        *b__PandoraClusters_hits_collectionID;   //!
   TBranch        *b__PandoraClusters_particleIDs_;   //!
   TBranch        *b__PandoraClusters_particleIDs_index;   //!
   TBranch        *b__PandoraClusters_particleIDs_collectionID;   //!
   TBranch        *b__PandoraClusters_shapeParameters;   //!
   TBranch        *b__PandoraClusters_subdetectorEnergies;   //!
   TBranch        *b_PandoraClusters_particleIDs_;   //!
   TBranch        *b_PandoraClusters_particleIDs_type;   //!
   TBranch        *b_PandoraClusters_particleIDs_PDG;   //!
   TBranch        *b_PandoraClusters_particleIDs_algorithmType;   //!
   TBranch        *b_PandoraClusters_particleIDs_likelihood;   //!
   TBranch        *b_PandoraClusters_particleIDs_parameters_begin;   //!
   TBranch        *b_PandoraClusters_particleIDs_parameters_end;   //!
   TBranch        *b__PandoraClusters_particleIDs_parameters;   //!
   TBranch        *b_PandoraPFOs_;   //!
   TBranch        *b_PandoraPFOs_PDG;   //!
   TBranch        *b_PandoraPFOs_energy;   //!
   TBranch        *b_PandoraPFOs_momentum_x;   //!
   TBranch        *b_PandoraPFOs_momentum_y;   //!
   TBranch        *b_PandoraPFOs_momentum_z;   //!
   TBranch        *b_PandoraPFOs_referencePoint_x;   //!
   TBranch        *b_PandoraPFOs_referencePoint_y;   //!
   TBranch        *b_PandoraPFOs_referencePoint_z;   //!
   TBranch        *b_PandoraPFOs_charge;   //!
   TBranch        *b_PandoraPFOs_mass;   //!
   TBranch        *b_PandoraPFOs_goodnessOfPID;   //!
   TBranch        *b_PandoraPFOs_covMatrix;   //!
   TBranch        *b_PandoraPFOs_clusters_begin;   //!
   TBranch        *b_PandoraPFOs_clusters_end;   //!
   TBranch        *b_PandoraPFOs_tracks_begin;   //!
   TBranch        *b_PandoraPFOs_tracks_end;   //!
   TBranch        *b_PandoraPFOs_particles_begin;   //!
   TBranch        *b_PandoraPFOs_particles_end;   //!
   TBranch        *b_PandoraPFOs_particleIDs_begin;   //!
   TBranch        *b_PandoraPFOs_particleIDs_end;   //!
   TBranch        *b__PandoraPFOs_clusters_;   //!
   TBranch        *b__PandoraPFOs_clusters_index;   //!
   TBranch        *b__PandoraPFOs_clusters_collectionID;   //!
   TBranch        *b__PandoraPFOs_tracks_;   //!
   TBranch        *b__PandoraPFOs_tracks_index;   //!
   TBranch        *b__PandoraPFOs_tracks_collectionID;   //!
   TBranch        *b__PandoraPFOs_particles_;   //!
   TBranch        *b__PandoraPFOs_particles_index;   //!
   TBranch        *b__PandoraPFOs_particles_collectionID;   //!
   TBranch        *b__PandoraPFOs_particleIDs_;   //!
   TBranch        *b__PandoraPFOs_particleIDs_index;   //!
   TBranch        *b__PandoraPFOs_particleIDs_collectionID;   //!
   TBranch        *b__PandoraPFOs_startVertex_;   //!
   TBranch        *b__PandoraPFOs_startVertex_index;   //!
   TBranch        *b__PandoraPFOs_startVertex_collectionID;   //!
   TBranch        *b__PandoraPFOs_particleIDUsed_;   //!
   TBranch        *b__PandoraPFOs_particleIDUsed_index;   //!
   TBranch        *b__PandoraPFOs_particleIDUsed_collectionID;   //!
   TBranch        *b_PandoraPFOs_particleIDs_;   //!
   TBranch        *b_PandoraPFOs_particleIDs_type;   //!
   TBranch        *b_PandoraPFOs_particleIDs_PDG;   //!
   TBranch        *b_PandoraPFOs_particleIDs_algorithmType;   //!
   TBranch        *b_PandoraPFOs_particleIDs_likelihood;   //!
   TBranch        *b_PandoraPFOs_particleIDs_parameters_begin;   //!
   TBranch        *b_PandoraPFOs_particleIDs_parameters_end;   //!
   TBranch        *b__PandoraPFOs_particleIDs_parameters;   //!
   TBranch        *b_PandoraStartVertices_;   //!
   TBranch        *b_PandoraStartVertices_primary;   //!
   TBranch        *b_PandoraStartVertices_chi2;   //!
   TBranch        *b_PandoraStartVertices_probability;   //!
   TBranch        *b_PandoraStartVertices_position_x;   //!
   TBranch        *b_PandoraStartVertices_position_y;   //!
   TBranch        *b_PandoraStartVertices_position_z;   //!
   TBranch        *b_PandoraStartVertices_covMatrix;   //!
   TBranch        *b_PandoraStartVertices_algorithmType;   //!
   TBranch        *b_PandoraStartVertices_parameters_begin;   //!
   TBranch        *b_PandoraStartVertices_parameters_end;   //!
   TBranch        *b__PandoraStartVertices_associatedParticle_;   //!
   TBranch        *b__PandoraStartVertices_associatedParticle_index;   //!
   TBranch        *b__PandoraStartVertices_associatedParticle_collectionID;   //!
   TBranch        *b__PandoraStartVertices_parameters;   //!
   TBranch        *b_PFOsFromJets_objIdx_;   //!
   TBranch        *b_PFOsFromJets_objIdx_index;   //!
   TBranch        *b_PFOsFromJets_objIdx_collectionID;   //!
   TBranch        *b_PrimaryVertices_;   //!
   TBranch        *b_PrimaryVertices_primary;   //!
   TBranch        *b_PrimaryVertices_chi2;   //!
   TBranch        *b_PrimaryVertices_probability;   //!
   TBranch        *b_PrimaryVertices_position_x;   //!
   TBranch        *b_PrimaryVertices_position_y;   //!
   TBranch        *b_PrimaryVertices_position_z;   //!
   TBranch        *b_PrimaryVertices_covMatrix;   //!
   TBranch        *b_PrimaryVertices_algorithmType;   //!
   TBranch        *b_PrimaryVertices_parameters_begin;   //!
   TBranch        *b_PrimaryVertices_parameters_end;   //!
   TBranch        *b__PrimaryVertices_associatedParticle_;   //!
   TBranch        *b__PrimaryVertices_associatedParticle_index;   //!
   TBranch        *b__PrimaryVertices_associatedParticle_collectionID;   //!
   TBranch        *b__PrimaryVertices_parameters;   //!
   TBranch        *b_PrimaryVertices_RP_;   //!
   TBranch        *b_PrimaryVertices_RP_PDG;   //!
   TBranch        *b_PrimaryVertices_RP_energy;   //!
   TBranch        *b_PrimaryVertices_RP_momentum_x;   //!
   TBranch        *b_PrimaryVertices_RP_momentum_y;   //!
   TBranch        *b_PrimaryVertices_RP_momentum_z;   //!
   TBranch        *b_PrimaryVertices_RP_referencePoint_x;   //!
   TBranch        *b_PrimaryVertices_RP_referencePoint_y;   //!
   TBranch        *b_PrimaryVertices_RP_referencePoint_z;   //!
   TBranch        *b_PrimaryVertices_RP_charge;   //!
   TBranch        *b_PrimaryVertices_RP_mass;   //!
   TBranch        *b_PrimaryVertices_RP_goodnessOfPID;   //!
   TBranch        *b_PrimaryVertices_RP_covMatrix;   //!
   TBranch        *b_PrimaryVertices_RP_clusters_begin;   //!
   TBranch        *b_PrimaryVertices_RP_clusters_end;   //!
   TBranch        *b_PrimaryVertices_RP_tracks_begin;   //!
   TBranch        *b_PrimaryVertices_RP_tracks_end;   //!
   TBranch        *b_PrimaryVertices_RP_particles_begin;   //!
   TBranch        *b_PrimaryVertices_RP_particles_end;   //!
   TBranch        *b_PrimaryVertices_RP_particleIDs_begin;   //!
   TBranch        *b_PrimaryVertices_RP_particleIDs_end;   //!
   TBranch        *b__PrimaryVertices_RP_clusters_;   //!
   TBranch        *b__PrimaryVertices_RP_clusters_index;   //!
   TBranch        *b__PrimaryVertices_RP_clusters_collectionID;   //!
   TBranch        *b__PrimaryVertices_RP_tracks_;   //!
   TBranch        *b__PrimaryVertices_RP_tracks_index;   //!
   TBranch        *b__PrimaryVertices_RP_tracks_collectionID;   //!
   TBranch        *b__PrimaryVertices_RP_particles_;   //!
   TBranch        *b__PrimaryVertices_RP_particles_index;   //!
   TBranch        *b__PrimaryVertices_RP_particles_collectionID;   //!
   TBranch        *b__PrimaryVertices_RP_particleIDs_;   //!
   TBranch        *b__PrimaryVertices_RP_particleIDs_index;   //!
   TBranch        *b__PrimaryVertices_RP_particleIDs_collectionID;   //!
   TBranch        *b__PrimaryVertices_RP_startVertex_;   //!
   TBranch        *b__PrimaryVertices_RP_startVertex_index;   //!
   TBranch        *b__PrimaryVertices_RP_startVertex_collectionID;   //!
   TBranch        *b__PrimaryVertices_RP_particleIDUsed_;   //!
   TBranch        *b__PrimaryVertices_RP_particleIDUsed_index;   //!
   TBranch        *b__PrimaryVertices_RP_particleIDUsed_collectionID;   //!
   TBranch        *b_PrimaryVertices_RP_particleIDs_;   //!
   TBranch        *b_PrimaryVertices_RP_particleIDs_type;   //!
   TBranch        *b_PrimaryVertices_RP_particleIDs_PDG;   //!
   TBranch        *b_PrimaryVertices_RP_particleIDs_algorithmType;   //!
   TBranch        *b_PrimaryVertices_RP_particleIDs_likelihood;   //!
   TBranch        *b_PrimaryVertices_RP_particleIDs_parameters_begin;   //!
   TBranch        *b_PrimaryVertices_RP_particleIDs_parameters_end;   //!
   TBranch        *b__PrimaryVertices_RP_particleIDs_parameters;   //!
   TBranch        *b_RecoMCTruthLink_;   //!
   TBranch        *b_RecoMCTruthLink_weight;   //!
   TBranch        *b__RecoMCTruthLink_rec_;   //!
   TBranch        *b__RecoMCTruthLink_rec_index;   //!
   TBranch        *b__RecoMCTruthLink_rec_collectionID;   //!
   TBranch        *b__RecoMCTruthLink_sim_;   //!
   TBranch        *b__RecoMCTruthLink_sim_index;   //!
   TBranch        *b__RecoMCTruthLink_sim_collectionID;   //!
   TBranch        *b_RefinedVertexJets_;   //!
   TBranch        *b_RefinedVertexJets_PDG;   //!
   TBranch        *b_RefinedVertexJets_energy;   //!
   TBranch        *b_RefinedVertexJets_momentum_x;   //!
   TBranch        *b_RefinedVertexJets_momentum_y;   //!
   TBranch        *b_RefinedVertexJets_momentum_z;   //!
   TBranch        *b_RefinedVertexJets_referencePoint_x;   //!
   TBranch        *b_RefinedVertexJets_referencePoint_y;   //!
   TBranch        *b_RefinedVertexJets_referencePoint_z;   //!
   TBranch        *b_RefinedVertexJets_charge;   //!
   TBranch        *b_RefinedVertexJets_mass;   //!
   TBranch        *b_RefinedVertexJets_goodnessOfPID;   //!
   TBranch        *b_RefinedVertexJets_covMatrix;   //!
   TBranch        *b_RefinedVertexJets_clusters_begin;   //!
   TBranch        *b_RefinedVertexJets_clusters_end;   //!
   TBranch        *b_RefinedVertexJets_tracks_begin;   //!
   TBranch        *b_RefinedVertexJets_tracks_end;   //!
   TBranch        *b_RefinedVertexJets_particles_begin;   //!
   TBranch        *b_RefinedVertexJets_particles_end;   //!
   TBranch        *b_RefinedVertexJets_particleIDs_begin;   //!
   TBranch        *b_RefinedVertexJets_particleIDs_end;   //!
   TBranch        *b__RefinedVertexJets_clusters_;   //!
   TBranch        *b__RefinedVertexJets_clusters_index;   //!
   TBranch        *b__RefinedVertexJets_clusters_collectionID;   //!
   TBranch        *b__RefinedVertexJets_tracks_;   //!
   TBranch        *b__RefinedVertexJets_tracks_index;   //!
   TBranch        *b__RefinedVertexJets_tracks_collectionID;   //!
   TBranch        *b__RefinedVertexJets_particles_;   //!
   TBranch        *b__RefinedVertexJets_particles_index;   //!
   TBranch        *b__RefinedVertexJets_particles_collectionID;   //!
   TBranch        *b__RefinedVertexJets_particleIDs_;   //!
   TBranch        *b__RefinedVertexJets_particleIDs_index;   //!
   TBranch        *b__RefinedVertexJets_particleIDs_collectionID;   //!
   TBranch        *b__RefinedVertexJets_startVertex_;   //!
   TBranch        *b__RefinedVertexJets_startVertex_index;   //!
   TBranch        *b__RefinedVertexJets_startVertex_collectionID;   //!
   TBranch        *b__RefinedVertexJets_particleIDUsed_;   //!
   TBranch        *b__RefinedVertexJets_particleIDUsed_index;   //!
   TBranch        *b__RefinedVertexJets_particleIDUsed_collectionID;   //!
   TBranch        *b_RefinedVertexJets_particleIDs_;   //!
   TBranch        *b_RefinedVertexJets_particleIDs_type;   //!
   TBranch        *b_RefinedVertexJets_particleIDs_PDG;   //!
   TBranch        *b_RefinedVertexJets_particleIDs_algorithmType;   //!
   TBranch        *b_RefinedVertexJets_particleIDs_likelihood;   //!
   TBranch        *b_RefinedVertexJets_particleIDs_parameters_begin;   //!
   TBranch        *b_RefinedVertexJets_particleIDs_parameters_end;   //!
   TBranch        *b__RefinedVertexJets_particleIDs_parameters;   //!
   TBranch        *b_RefinedVertexJets_rel_;   //!
   TBranch        *b_RefinedVertexJets_rel_weight;   //!
   TBranch        *b__RefinedVertexJets_rel_rec_;   //!
   TBranch        *b__RefinedVertexJets_rel_rec_index;   //!
   TBranch        *b__RefinedVertexJets_rel_rec_collectionID;   //!
   TBranch        *b__RefinedVertexJets_rel_vertex_;   //!
   TBranch        *b__RefinedVertexJets_rel_vertex_index;   //!
   TBranch        *b__RefinedVertexJets_rel_vertex_collectionID;   //!
   TBranch        *b_RefinedVertexJets_vtx_;   //!
   TBranch        *b_RefinedVertexJets_vtx_primary;   //!
   TBranch        *b_RefinedVertexJets_vtx_chi2;   //!
   TBranch        *b_RefinedVertexJets_vtx_probability;   //!
   TBranch        *b_RefinedVertexJets_vtx_position_x;   //!
   TBranch        *b_RefinedVertexJets_vtx_position_y;   //!
   TBranch        *b_RefinedVertexJets_vtx_position_z;   //!
   TBranch        *b_RefinedVertexJets_vtx_covMatrix;   //!
   TBranch        *b_RefinedVertexJets_vtx_algorithmType;   //!
   TBranch        *b_RefinedVertexJets_vtx_parameters_begin;   //!
   TBranch        *b_RefinedVertexJets_vtx_parameters_end;   //!
   TBranch        *b__RefinedVertexJets_vtx_associatedParticle_;   //!
   TBranch        *b__RefinedVertexJets_vtx_associatedParticle_index;   //!
   TBranch        *b__RefinedVertexJets_vtx_associatedParticle_collectionID;   //!
   TBranch        *b__RefinedVertexJets_vtx_parameters;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_PDG;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_energy;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_momentum_x;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_momentum_y;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_momentum_z;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_referencePoint_x;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_referencePoint_y;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_referencePoint_z;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_charge;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_mass;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_goodnessOfPID;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_covMatrix;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_clusters_begin;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_clusters_end;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_tracks_begin;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_tracks_end;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_particles_begin;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_particles_end;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_particleIDs_begin;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_particleIDs_end;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_clusters_;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_clusters_index;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_clusters_collectionID;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_tracks_;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_tracks_index;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_tracks_collectionID;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_particles_;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_particles_index;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_particles_collectionID;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_particleIDs_;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_particleIDs_index;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_particleIDs_collectionID;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_startVertex_;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_startVertex_index;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_startVertex_collectionID;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_particleIDUsed_;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_particleIDUsed_index;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_particleIDUsed_collectionID;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_particleIDs_;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_particleIDs_type;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_particleIDs_PDG;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_particleIDs_algorithmType;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_particleIDs_likelihood;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_particleIDs_parameters_begin;   //!
   TBranch        *b_RefinedVertexJets_vtx_RP_particleIDs_parameters_end;   //!
   TBranch        *b__RefinedVertexJets_vtx_RP_particleIDs_parameters;   //!
   TBranch        *b_RefinedVertices_;   //!
   TBranch        *b_RefinedVertices_primary;   //!
   TBranch        *b_RefinedVertices_chi2;   //!
   TBranch        *b_RefinedVertices_probability;   //!
   TBranch        *b_RefinedVertices_position_x;   //!
   TBranch        *b_RefinedVertices_position_y;   //!
   TBranch        *b_RefinedVertices_position_z;   //!
   TBranch        *b_RefinedVertices_covMatrix;   //!
   TBranch        *b_RefinedVertices_algorithmType;   //!
   TBranch        *b_RefinedVertices_parameters_begin;   //!
   TBranch        *b_RefinedVertices_parameters_end;   //!
   TBranch        *b__RefinedVertices_associatedParticle_;   //!
   TBranch        *b__RefinedVertices_associatedParticle_index;   //!
   TBranch        *b__RefinedVertices_associatedParticle_collectionID;   //!
   TBranch        *b__RefinedVertices_parameters;   //!
   TBranch        *b_RefinedVertices_RP_;   //!
   TBranch        *b_RefinedVertices_RP_PDG;   //!
   TBranch        *b_RefinedVertices_RP_energy;   //!
   TBranch        *b_RefinedVertices_RP_momentum_x;   //!
   TBranch        *b_RefinedVertices_RP_momentum_y;   //!
   TBranch        *b_RefinedVertices_RP_momentum_z;   //!
   TBranch        *b_RefinedVertices_RP_referencePoint_x;   //!
   TBranch        *b_RefinedVertices_RP_referencePoint_y;   //!
   TBranch        *b_RefinedVertices_RP_referencePoint_z;   //!
   TBranch        *b_RefinedVertices_RP_charge;   //!
   TBranch        *b_RefinedVertices_RP_mass;   //!
   TBranch        *b_RefinedVertices_RP_goodnessOfPID;   //!
   TBranch        *b_RefinedVertices_RP_covMatrix;   //!
   TBranch        *b_RefinedVertices_RP_clusters_begin;   //!
   TBranch        *b_RefinedVertices_RP_clusters_end;   //!
   TBranch        *b_RefinedVertices_RP_tracks_begin;   //!
   TBranch        *b_RefinedVertices_RP_tracks_end;   //!
   TBranch        *b_RefinedVertices_RP_particles_begin;   //!
   TBranch        *b_RefinedVertices_RP_particles_end;   //!
   TBranch        *b_RefinedVertices_RP_particleIDs_begin;   //!
   TBranch        *b_RefinedVertices_RP_particleIDs_end;   //!
   TBranch        *b__RefinedVertices_RP_clusters_;   //!
   TBranch        *b__RefinedVertices_RP_clusters_index;   //!
   TBranch        *b__RefinedVertices_RP_clusters_collectionID;   //!
   TBranch        *b__RefinedVertices_RP_tracks_;   //!
   TBranch        *b__RefinedVertices_RP_tracks_index;   //!
   TBranch        *b__RefinedVertices_RP_tracks_collectionID;   //!
   TBranch        *b__RefinedVertices_RP_particles_;   //!
   TBranch        *b__RefinedVertices_RP_particles_index;   //!
   TBranch        *b__RefinedVertices_RP_particles_collectionID;   //!
   TBranch        *b__RefinedVertices_RP_particleIDs_;   //!
   TBranch        *b__RefinedVertices_RP_particleIDs_index;   //!
   TBranch        *b__RefinedVertices_RP_particleIDs_collectionID;   //!
   TBranch        *b__RefinedVertices_RP_startVertex_;   //!
   TBranch        *b__RefinedVertices_RP_startVertex_index;   //!
   TBranch        *b__RefinedVertices_RP_startVertex_collectionID;   //!
   TBranch        *b__RefinedVertices_RP_particleIDUsed_;   //!
   TBranch        *b__RefinedVertices_RP_particleIDUsed_index;   //!
   TBranch        *b__RefinedVertices_RP_particleIDUsed_collectionID;   //!
   TBranch        *b_RefinedVertices_RP_particleIDs_;   //!
   TBranch        *b_RefinedVertices_RP_particleIDs_type;   //!
   TBranch        *b_RefinedVertices_RP_particleIDs_PDG;   //!
   TBranch        *b_RefinedVertices_RP_particleIDs_algorithmType;   //!
   TBranch        *b_RefinedVertices_RP_particleIDs_likelihood;   //!
   TBranch        *b_RefinedVertices_RP_particleIDs_parameters_begin;   //!
   TBranch        *b_RefinedVertices_RP_particleIDs_parameters_end;   //!
   TBranch        *b__RefinedVertices_RP_particleIDs_parameters;   //!
   TBranch        *b_RelationCaloHit_;   //!
   TBranch        *b_RelationCaloHit_weight;   //!
   TBranch        *b__RelationCaloHit_rec_;   //!
   TBranch        *b__RelationCaloHit_rec_index;   //!
   TBranch        *b__RelationCaloHit_rec_collectionID;   //!
   TBranch        *b__RelationCaloHit_sim_;   //!
   TBranch        *b__RelationCaloHit_sim_index;   //!
   TBranch        *b__RelationCaloHit_sim_collectionID;   //!
   TBranch        *b_RelationMuonHit_;   //!
   TBranch        *b_RelationMuonHit_weight;   //!
   TBranch        *b__RelationMuonHit_rec_;   //!
   TBranch        *b__RelationMuonHit_rec_index;   //!
   TBranch        *b__RelationMuonHit_rec_collectionID;   //!
   TBranch        *b__RelationMuonHit_sim_;   //!
   TBranch        *b__RelationMuonHit_sim_index;   //!
   TBranch        *b__RelationMuonHit_sim_collectionID;   //!
   TBranch        *b_SelectedPandoraPFOs_objIdx_;   //!
   TBranch        *b_SelectedPandoraPFOs_objIdx_index;   //!
   TBranch        *b_SelectedPandoraPFOs_objIdx_collectionID;   //!
   TBranch        *b_SiTracks_;   //!
   TBranch        *b_SiTracks_type;   //!
   TBranch        *b_SiTracks_chi2;   //!
   TBranch        *b_SiTracks_ndf;   //!
   TBranch        *b_SiTracks_dEdx;   //!
   TBranch        *b_SiTracks_dEdxError;   //!
   TBranch        *b_SiTracks_radiusOfInnermostHit;   //!
   TBranch        *b_SiTracks_subdetectorHitNumbers_begin;   //!
   TBranch        *b_SiTracks_subdetectorHitNumbers_end;   //!
   TBranch        *b_SiTracks_trackStates_begin;   //!
   TBranch        *b_SiTracks_trackStates_end;   //!
   TBranch        *b_SiTracks_dxQuantities_begin;   //!
   TBranch        *b_SiTracks_dxQuantities_end;   //!
   TBranch        *b_SiTracks_trackerHits_begin;   //!
   TBranch        *b_SiTracks_trackerHits_end;   //!
   TBranch        *b_SiTracks_tracks_begin;   //!
   TBranch        *b_SiTracks_tracks_end;   //!
   TBranch        *b__SiTracks_trackerHits_;   //!
   TBranch        *b__SiTracks_trackerHits_index;   //!
   TBranch        *b__SiTracks_trackerHits_collectionID;   //!
   TBranch        *b__SiTracks_tracks_;   //!
   TBranch        *b__SiTracks_tracks_index;   //!
   TBranch        *b__SiTracks_tracks_collectionID;   //!
   TBranch        *b__SiTracks_subdetectorHitNumbers;   //!
   TBranch        *b__SiTracks_trackStates_;   //!
   TBranch        *b__SiTracks_trackStates_location;   //!
   TBranch        *b__SiTracks_trackStates_D0;   //!
   TBranch        *b__SiTracks_trackStates_phi;   //!
   TBranch        *b__SiTracks_trackStates_omega;   //!
   TBranch        *b__SiTracks_trackStates_Z0;   //!
   TBranch        *b__SiTracks_trackStates_tanLambda;   //!
   TBranch        *b__SiTracks_trackStates_time;   //!
   TBranch        *b__SiTracks_trackStates_referencePoint_x;   //!
   TBranch        *b__SiTracks_trackStates_referencePoint_y;   //!
   TBranch        *b__SiTracks_trackStates_referencePoint_z;   //!
   TBranch        *b__SiTracks_trackStates_covMatrix;   //!
   TBranch        *b__SiTracks_dxQuantities_;   //!
   TBranch        *b__SiTracks_dxQuantities_type;   //!
   TBranch        *b__SiTracks_dxQuantities_value;   //!
   TBranch        *b__SiTracks_dxQuantities_error;   //!
   TBranch        *b_SiTracks_Refitted_;   //!
   TBranch        *b_SiTracks_Refitted_type;   //!
   TBranch        *b_SiTracks_Refitted_chi2;   //!
   TBranch        *b_SiTracks_Refitted_ndf;   //!
   TBranch        *b_SiTracks_Refitted_dEdx;   //!
   TBranch        *b_SiTracks_Refitted_dEdxError;   //!
   TBranch        *b_SiTracks_Refitted_radiusOfInnermostHit;   //!
   TBranch        *b_SiTracks_Refitted_subdetectorHitNumbers_begin;   //!
   TBranch        *b_SiTracks_Refitted_subdetectorHitNumbers_end;   //!
   TBranch        *b_SiTracks_Refitted_trackStates_begin;   //!
   TBranch        *b_SiTracks_Refitted_trackStates_end;   //!
   TBranch        *b_SiTracks_Refitted_dxQuantities_begin;   //!
   TBranch        *b_SiTracks_Refitted_dxQuantities_end;   //!
   TBranch        *b_SiTracks_Refitted_trackerHits_begin;   //!
   TBranch        *b_SiTracks_Refitted_trackerHits_end;   //!
   TBranch        *b_SiTracks_Refitted_tracks_begin;   //!
   TBranch        *b_SiTracks_Refitted_tracks_end;   //!
   TBranch        *b__SiTracks_Refitted_trackerHits_;   //!
   TBranch        *b__SiTracks_Refitted_trackerHits_index;   //!
   TBranch        *b__SiTracks_Refitted_trackerHits_collectionID;   //!
   TBranch        *b__SiTracks_Refitted_tracks_;   //!
   TBranch        *b__SiTracks_Refitted_tracks_index;   //!
   TBranch        *b__SiTracks_Refitted_tracks_collectionID;   //!
   TBranch        *b__SiTracks_Refitted_subdetectorHitNumbers;   //!
   TBranch        *b__SiTracks_Refitted_trackStates_;   //!
   TBranch        *b__SiTracks_Refitted_trackStates_location;   //!
   TBranch        *b__SiTracks_Refitted_trackStates_D0;   //!
   TBranch        *b__SiTracks_Refitted_trackStates_phi;   //!
   TBranch        *b__SiTracks_Refitted_trackStates_omega;   //!
   TBranch        *b__SiTracks_Refitted_trackStates_Z0;   //!
   TBranch        *b__SiTracks_Refitted_trackStates_tanLambda;   //!
   TBranch        *b__SiTracks_Refitted_trackStates_time;   //!
   TBranch        *b__SiTracks_Refitted_trackStates_referencePoint_x;   //!
   TBranch        *b__SiTracks_Refitted_trackStates_referencePoint_y;   //!
   TBranch        *b__SiTracks_Refitted_trackStates_referencePoint_z;   //!
   TBranch        *b__SiTracks_Refitted_trackStates_covMatrix;   //!
   TBranch        *b__SiTracks_Refitted_dxQuantities_;   //!
   TBranch        *b__SiTracks_Refitted_dxQuantities_type;   //!
   TBranch        *b__SiTracks_Refitted_dxQuantities_value;   //!
   TBranch        *b__SiTracks_Refitted_dxQuantities_error;   //!
   TBranch        *b_SiTracksCT_;   //!
   TBranch        *b_SiTracksCT_type;   //!
   TBranch        *b_SiTracksCT_chi2;   //!
   TBranch        *b_SiTracksCT_ndf;   //!
   TBranch        *b_SiTracksCT_dEdx;   //!
   TBranch        *b_SiTracksCT_dEdxError;   //!
   TBranch        *b_SiTracksCT_radiusOfInnermostHit;   //!
   TBranch        *b_SiTracksCT_subdetectorHitNumbers_begin;   //!
   TBranch        *b_SiTracksCT_subdetectorHitNumbers_end;   //!
   TBranch        *b_SiTracksCT_trackStates_begin;   //!
   TBranch        *b_SiTracksCT_trackStates_end;   //!
   TBranch        *b_SiTracksCT_dxQuantities_begin;   //!
   TBranch        *b_SiTracksCT_dxQuantities_end;   //!
   TBranch        *b_SiTracksCT_trackerHits_begin;   //!
   TBranch        *b_SiTracksCT_trackerHits_end;   //!
   TBranch        *b_SiTracksCT_tracks_begin;   //!
   TBranch        *b_SiTracksCT_tracks_end;   //!
   TBranch        *b__SiTracksCT_trackerHits_;   //!
   TBranch        *b__SiTracksCT_trackerHits_index;   //!
   TBranch        *b__SiTracksCT_trackerHits_collectionID;   //!
   TBranch        *b__SiTracksCT_tracks_;   //!
   TBranch        *b__SiTracksCT_tracks_index;   //!
   TBranch        *b__SiTracksCT_tracks_collectionID;   //!
   TBranch        *b__SiTracksCT_subdetectorHitNumbers;   //!
   TBranch        *b__SiTracksCT_trackStates_;   //!
   TBranch        *b__SiTracksCT_trackStates_location;   //!
   TBranch        *b__SiTracksCT_trackStates_D0;   //!
   TBranch        *b__SiTracksCT_trackStates_phi;   //!
   TBranch        *b__SiTracksCT_trackStates_omega;   //!
   TBranch        *b__SiTracksCT_trackStates_Z0;   //!
   TBranch        *b__SiTracksCT_trackStates_tanLambda;   //!
   TBranch        *b__SiTracksCT_trackStates_time;   //!
   TBranch        *b__SiTracksCT_trackStates_referencePoint_x;   //!
   TBranch        *b__SiTracksCT_trackStates_referencePoint_y;   //!
   TBranch        *b__SiTracksCT_trackStates_referencePoint_z;   //!
   TBranch        *b__SiTracksCT_trackStates_covMatrix;   //!
   TBranch        *b__SiTracksCT_dxQuantities_;   //!
   TBranch        *b__SiTracksCT_dxQuantities_type;   //!
   TBranch        *b__SiTracksCT_dxQuantities_value;   //!
   TBranch        *b__SiTracksCT_dxQuantities_error;   //!
   TBranch        *b_SiTracksMCTruthLink_;   //!
   TBranch        *b_SiTracksMCTruthLink_weight;   //!
   TBranch        *b__SiTracksMCTruthLink_rec_;   //!
   TBranch        *b__SiTracksMCTruthLink_rec_index;   //!
   TBranch        *b__SiTracksMCTruthLink_rec_collectionID;   //!
   TBranch        *b__SiTracksMCTruthLink_sim_;   //!
   TBranch        *b__SiTracksMCTruthLink_sim_index;   //!
   TBranch        *b__SiTracksMCTruthLink_sim_collectionID;   //!
   TBranch        *b_TightSelectedPandoraPFOs_objIdx_;   //!
   TBranch        *b_TightSelectedPandoraPFOs_objIdx_index;   //!
   TBranch        *b_TightSelectedPandoraPFOs_objIdx_collectionID;   //!
   TBranch        *b_VertexBarrelCollection_;   //!
   TBranch        *b_VertexBarrelCollection_cellID;   //!
   TBranch        *b_VertexBarrelCollection_eDep;   //!
   TBranch        *b_VertexBarrelCollection_time;   //!
   TBranch        *b_VertexBarrelCollection_pathLength;   //!
   TBranch        *b_VertexBarrelCollection_quality;   //!
   TBranch        *b_VertexBarrelCollection_position_x;   //!
   TBranch        *b_VertexBarrelCollection_position_y;   //!
   TBranch        *b_VertexBarrelCollection_position_z;   //!
   TBranch        *b_VertexBarrelCollection_momentum_x;   //!
   TBranch        *b_VertexBarrelCollection_momentum_y;   //!
   TBranch        *b_VertexBarrelCollection_momentum_z;   //!
   TBranch        *b__VertexBarrelCollection_particle_;   //!
   TBranch        *b__VertexBarrelCollection_particle_index;   //!
   TBranch        *b__VertexBarrelCollection_particle_collectionID;   //!
   TBranch        *b_VertexEndcapCollection_;   //!
   TBranch        *b_VertexEndcapCollection_cellID;   //!
   TBranch        *b_VertexEndcapCollection_eDep;   //!
   TBranch        *b_VertexEndcapCollection_time;   //!
   TBranch        *b_VertexEndcapCollection_pathLength;   //!
   TBranch        *b_VertexEndcapCollection_quality;   //!
   TBranch        *b_VertexEndcapCollection_position_x;   //!
   TBranch        *b_VertexEndcapCollection_position_y;   //!
   TBranch        *b_VertexEndcapCollection_position_z;   //!
   TBranch        *b_VertexEndcapCollection_momentum_x;   //!
   TBranch        *b_VertexEndcapCollection_momentum_y;   //!
   TBranch        *b_VertexEndcapCollection_momentum_z;   //!
   TBranch        *b__VertexEndcapCollection_particle_;   //!
   TBranch        *b__VertexEndcapCollection_particle_index;   //!
   TBranch        *b__VertexEndcapCollection_particle_collectionID;   //!
   TBranch        *b_VertexJets_;   //!
   TBranch        *b_VertexJets_PDG;   //!
   TBranch        *b_VertexJets_energy;   //!
   TBranch        *b_VertexJets_momentum_x;   //!
   TBranch        *b_VertexJets_momentum_y;   //!
   TBranch        *b_VertexJets_momentum_z;   //!
   TBranch        *b_VertexJets_referencePoint_x;   //!
   TBranch        *b_VertexJets_referencePoint_y;   //!
   TBranch        *b_VertexJets_referencePoint_z;   //!
   TBranch        *b_VertexJets_charge;   //!
   TBranch        *b_VertexJets_mass;   //!
   TBranch        *b_VertexJets_goodnessOfPID;   //!
   TBranch        *b_VertexJets_covMatrix;   //!
   TBranch        *b_VertexJets_clusters_begin;   //!
   TBranch        *b_VertexJets_clusters_end;   //!
   TBranch        *b_VertexJets_tracks_begin;   //!
   TBranch        *b_VertexJets_tracks_end;   //!
   TBranch        *b_VertexJets_particles_begin;   //!
   TBranch        *b_VertexJets_particles_end;   //!
   TBranch        *b_VertexJets_particleIDs_begin;   //!
   TBranch        *b_VertexJets_particleIDs_end;   //!
   TBranch        *b__VertexJets_clusters_;   //!
   TBranch        *b__VertexJets_clusters_index;   //!
   TBranch        *b__VertexJets_clusters_collectionID;   //!
   TBranch        *b__VertexJets_tracks_;   //!
   TBranch        *b__VertexJets_tracks_index;   //!
   TBranch        *b__VertexJets_tracks_collectionID;   //!
   TBranch        *b__VertexJets_particles_;   //!
   TBranch        *b__VertexJets_particles_index;   //!
   TBranch        *b__VertexJets_particles_collectionID;   //!
   TBranch        *b__VertexJets_particleIDs_;   //!
   TBranch        *b__VertexJets_particleIDs_index;   //!
   TBranch        *b__VertexJets_particleIDs_collectionID;   //!
   TBranch        *b__VertexJets_startVertex_;   //!
   TBranch        *b__VertexJets_startVertex_index;   //!
   TBranch        *b__VertexJets_startVertex_collectionID;   //!
   TBranch        *b__VertexJets_particleIDUsed_;   //!
   TBranch        *b__VertexJets_particleIDUsed_index;   //!
   TBranch        *b__VertexJets_particleIDUsed_collectionID;   //!
   TBranch        *b_VertexJets_particleIDs_;   //!
   TBranch        *b_VertexJets_particleIDs_type;   //!
   TBranch        *b_VertexJets_particleIDs_PDG;   //!
   TBranch        *b_VertexJets_particleIDs_algorithmType;   //!
   TBranch        *b_VertexJets_particleIDs_likelihood;   //!
   TBranch        *b_VertexJets_particleIDs_parameters_begin;   //!
   TBranch        *b_VertexJets_particleIDs_parameters_end;   //!
   TBranch        *b__VertexJets_particleIDs_parameters;   //!
   TBranch        *b_VXDEndcapTrackerHitRelations_;   //!
   TBranch        *b_VXDEndcapTrackerHitRelations_weight;   //!
   TBranch        *b__VXDEndcapTrackerHitRelations_rec_;   //!
   TBranch        *b__VXDEndcapTrackerHitRelations_rec_index;   //!
   TBranch        *b__VXDEndcapTrackerHitRelations_rec_collectionID;   //!
   TBranch        *b__VXDEndcapTrackerHitRelations_sim_;   //!
   TBranch        *b__VXDEndcapTrackerHitRelations_sim_index;   //!
   TBranch        *b__VXDEndcapTrackerHitRelations_sim_collectionID;   //!
   TBranch        *b_VXDEndcapTrackerHits_;   //!
   TBranch        *b_VXDEndcapTrackerHits_cellID;   //!
   TBranch        *b_VXDEndcapTrackerHits_type;   //!
   TBranch        *b_VXDEndcapTrackerHits_quality;   //!
   TBranch        *b_VXDEndcapTrackerHits_time;   //!
   TBranch        *b_VXDEndcapTrackerHits_eDep;   //!
   TBranch        *b_VXDEndcapTrackerHits_eDepError;   //!
   TBranch        *b_VXDEndcapTrackerHits_u_a;   //!
   TBranch        *b_VXDEndcapTrackerHits_u_b;   //!
   TBranch        *b_VXDEndcapTrackerHits_v_a;   //!
   TBranch        *b_VXDEndcapTrackerHits_v_b;   //!
   TBranch        *b_VXDEndcapTrackerHits_du;   //!
   TBranch        *b_VXDEndcapTrackerHits_dv;   //!
   TBranch        *b_VXDEndcapTrackerHits_position_x;   //!
   TBranch        *b_VXDEndcapTrackerHits_position_y;   //!
   TBranch        *b_VXDEndcapTrackerHits_position_z;   //!
   TBranch        *b_VXDEndcapTrackerHits_covMatrix;   //!
   TBranch        *b_VXDTrackerHitRelations_;   //!
   TBranch        *b_VXDTrackerHitRelations_weight;   //!
   TBranch        *b__VXDTrackerHitRelations_rec_;   //!
   TBranch        *b__VXDTrackerHitRelations_rec_index;   //!
   TBranch        *b__VXDTrackerHitRelations_rec_collectionID;   //!
   TBranch        *b__VXDTrackerHitRelations_sim_;   //!
   TBranch        *b__VXDTrackerHitRelations_sim_index;   //!
   TBranch        *b__VXDTrackerHitRelations_sim_collectionID;   //!
   TBranch        *b_VXDTrackerHits_;   //!
   TBranch        *b_VXDTrackerHits_cellID;   //!
   TBranch        *b_VXDTrackerHits_type;   //!
   TBranch        *b_VXDTrackerHits_quality;   //!
   TBranch        *b_VXDTrackerHits_time;   //!
   TBranch        *b_VXDTrackerHits_eDep;   //!
   TBranch        *b_VXDTrackerHits_eDepError;   //!
   TBranch        *b_VXDTrackerHits_u_a;   //!
   TBranch        *b_VXDTrackerHits_u_b;   //!
   TBranch        *b_VXDTrackerHits_v_a;   //!
   TBranch        *b_VXDTrackerHits_v_b;   //!
   TBranch        *b_VXDTrackerHits_du;   //!
   TBranch        *b_VXDTrackerHits_dv;   //!
   TBranch        *b_VXDTrackerHits_position_x;   //!
   TBranch        *b_VXDTrackerHits_position_y;   //!
   TBranch        *b_VXDTrackerHits_position_z;   //!
   TBranch        *b_VXDTrackerHits_covMatrix;   //!
   TBranch        *b_YokeBarrelCollection_;   //!
   TBranch        *b_YokeBarrelCollection_cellID;   //!
   TBranch        *b_YokeBarrelCollection_energy;   //!
   TBranch        *b_YokeBarrelCollection_position_x;   //!
   TBranch        *b_YokeBarrelCollection_position_y;   //!
   TBranch        *b_YokeBarrelCollection_position_z;   //!
   TBranch        *b_YokeBarrelCollection_contributions_begin;   //!
   TBranch        *b_YokeBarrelCollection_contributions_end;   //!
   TBranch        *b__YokeBarrelCollection_contributions_;   //!
   TBranch        *b__YokeBarrelCollection_contributions_index;   //!
   TBranch        *b__YokeBarrelCollection_contributions_collectionID;   //!
   TBranch        *b_YokeBarrelCollectionContributions_;   //!
   TBranch        *b_YokeBarrelCollectionContributions_PDG;   //!
   TBranch        *b_YokeBarrelCollectionContributions_energy;   //!
   TBranch        *b_YokeBarrelCollectionContributions_time;   //!
   TBranch        *b_YokeBarrelCollectionContributions_stepPosition_x;   //!
   TBranch        *b_YokeBarrelCollectionContributions_stepPosition_y;   //!
   TBranch        *b_YokeBarrelCollectionContributions_stepPosition_z;   //!
   TBranch        *b__YokeBarrelCollectionContributions_particle_;   //!
   TBranch        *b__YokeBarrelCollectionContributions_particle_index;   //!
   TBranch        *b__YokeBarrelCollectionContributions_particle_collectionID;   //!
   TBranch        *b_YokeEndcapCollection_;   //!
   TBranch        *b_YokeEndcapCollection_cellID;   //!
   TBranch        *b_YokeEndcapCollection_energy;   //!
   TBranch        *b_YokeEndcapCollection_position_x;   //!
   TBranch        *b_YokeEndcapCollection_position_y;   //!
   TBranch        *b_YokeEndcapCollection_position_z;   //!
   TBranch        *b_YokeEndcapCollection_contributions_begin;   //!
   TBranch        *b_YokeEndcapCollection_contributions_end;   //!
   TBranch        *b__YokeEndcapCollection_contributions_;   //!
   TBranch        *b__YokeEndcapCollection_contributions_index;   //!
   TBranch        *b__YokeEndcapCollection_contributions_collectionID;   //!
   TBranch        *b_YokeEndcapCollectionContributions_;   //!
   TBranch        *b_YokeEndcapCollectionContributions_PDG;   //!
   TBranch        *b_YokeEndcapCollectionContributions_energy;   //!
   TBranch        *b_YokeEndcapCollectionContributions_time;   //!
   TBranch        *b_YokeEndcapCollectionContributions_stepPosition_x;   //!
   TBranch        *b_YokeEndcapCollectionContributions_stepPosition_y;   //!
   TBranch        *b_YokeEndcapCollectionContributions_stepPosition_z;   //!
   TBranch        *b__YokeEndcapCollectionContributions_particle_;   //!
   TBranch        *b__YokeEndcapCollectionContributions_particle_index;   //!
   TBranch        *b__YokeEndcapCollectionContributions_particle_collectionID;   //!
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
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("data/CLD_FULL/wzp6_ee_mumuH_ecm240_CLD_RECO_edm4hep.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("data/CLD_FULL/wzp6_ee_mumuH_ecm240_CLD_RECO_edm4hep.root");
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
   _BuildUpVertices_parameters = 0;
   _BuildUpVertices_RP_particleIDs_parameters = 0;
   _BuildUpVertices_V0_parameters = 0;
   _BuildUpVertices_V0_RP_particleIDs_parameters = 0;
   _EventHeader_weights = 0;
   _LumiCalClusters_shapeParameters = 0;
   _LumiCalClusters_subdetectorEnergies = 0;
   _LumiCalClusters_particleIDs_parameters = 0;
   _LumiCalRecoParticles_particleIDs_parameters = 0;
   _PandoraClusters_shapeParameters = 0;
   _PandoraClusters_subdetectorEnergies = 0;
   _PandoraClusters_particleIDs_parameters = 0;
   _PandoraPFOs_particleIDs_parameters = 0;
   _PandoraStartVertices_parameters = 0;
   _PrimaryVertices_parameters = 0;
   _PrimaryVertices_RP_particleIDs_parameters = 0;
   _RefinedVertexJets_particleIDs_parameters = 0;
   _RefinedVertexJets_vtx_parameters = 0;
   _RefinedVertexJets_vtx_RP_particleIDs_parameters = 0;
   _RefinedVertices_parameters = 0;
   _RefinedVertices_RP_particleIDs_parameters = 0;
   _SiTracks_subdetectorHitNumbers = 0;
   _SiTracks_Refitted_subdetectorHitNumbers = 0;
   _SiTracksCT_subdetectorHitNumbers = 0;
   _VertexJets_particleIDs_parameters = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("BuildUpVertices", &BuildUpVertices_, &b_BuildUpVertices_);
   fChain->SetBranchAddress("BuildUpVertices.primary", BuildUpVertices_primary, &b_BuildUpVertices_primary);
   fChain->SetBranchAddress("BuildUpVertices.chi2", BuildUpVertices_chi2, &b_BuildUpVertices_chi2);
   fChain->SetBranchAddress("BuildUpVertices.probability", BuildUpVertices_probability, &b_BuildUpVertices_probability);
   fChain->SetBranchAddress("BuildUpVertices.position.x", BuildUpVertices_position_x, &b_BuildUpVertices_position_x);
   fChain->SetBranchAddress("BuildUpVertices.position.y", BuildUpVertices_position_y, &b_BuildUpVertices_position_y);
   fChain->SetBranchAddress("BuildUpVertices.position.z", BuildUpVertices_position_z, &b_BuildUpVertices_position_z);
   fChain->SetBranchAddress("BuildUpVertices.covMatrix[6]", BuildUpVertices_covMatrix, &b_BuildUpVertices_covMatrix);
   fChain->SetBranchAddress("BuildUpVertices.algorithmType", BuildUpVertices_algorithmType, &b_BuildUpVertices_algorithmType);
   fChain->SetBranchAddress("BuildUpVertices.parameters_begin", BuildUpVertices_parameters_begin, &b_BuildUpVertices_parameters_begin);
   fChain->SetBranchAddress("BuildUpVertices.parameters_end", BuildUpVertices_parameters_end, &b_BuildUpVertices_parameters_end);
   fChain->SetBranchAddress("_BuildUpVertices_associatedParticle", &_BuildUpVertices_associatedParticle_, &b__BuildUpVertices_associatedParticle_);
   fChain->SetBranchAddress("_BuildUpVertices_associatedParticle.index", _BuildUpVertices_associatedParticle_index, &b__BuildUpVertices_associatedParticle_index);
   fChain->SetBranchAddress("_BuildUpVertices_associatedParticle.collectionID", _BuildUpVertices_associatedParticle_collectionID, &b__BuildUpVertices_associatedParticle_collectionID);
   fChain->SetBranchAddress("_BuildUpVertices_parameters", &_BuildUpVertices_parameters, &b__BuildUpVertices_parameters);
   fChain->SetBranchAddress("BuildUpVertices_RP", &BuildUpVertices_RP_, &b_BuildUpVertices_RP_);
   fChain->SetBranchAddress("BuildUpVertices_RP.PDG", BuildUpVertices_RP_PDG, &b_BuildUpVertices_RP_PDG);
   fChain->SetBranchAddress("BuildUpVertices_RP.energy", BuildUpVertices_RP_energy, &b_BuildUpVertices_RP_energy);
   fChain->SetBranchAddress("BuildUpVertices_RP.momentum.x", BuildUpVertices_RP_momentum_x, &b_BuildUpVertices_RP_momentum_x);
   fChain->SetBranchAddress("BuildUpVertices_RP.momentum.y", BuildUpVertices_RP_momentum_y, &b_BuildUpVertices_RP_momentum_y);
   fChain->SetBranchAddress("BuildUpVertices_RP.momentum.z", BuildUpVertices_RP_momentum_z, &b_BuildUpVertices_RP_momentum_z);
   fChain->SetBranchAddress("BuildUpVertices_RP.referencePoint.x", BuildUpVertices_RP_referencePoint_x, &b_BuildUpVertices_RP_referencePoint_x);
   fChain->SetBranchAddress("BuildUpVertices_RP.referencePoint.y", BuildUpVertices_RP_referencePoint_y, &b_BuildUpVertices_RP_referencePoint_y);
   fChain->SetBranchAddress("BuildUpVertices_RP.referencePoint.z", BuildUpVertices_RP_referencePoint_z, &b_BuildUpVertices_RP_referencePoint_z);
   fChain->SetBranchAddress("BuildUpVertices_RP.charge", BuildUpVertices_RP_charge, &b_BuildUpVertices_RP_charge);
   fChain->SetBranchAddress("BuildUpVertices_RP.mass", BuildUpVertices_RP_mass, &b_BuildUpVertices_RP_mass);
   fChain->SetBranchAddress("BuildUpVertices_RP.goodnessOfPID", BuildUpVertices_RP_goodnessOfPID, &b_BuildUpVertices_RP_goodnessOfPID);
   fChain->SetBranchAddress("BuildUpVertices_RP.covMatrix[10]", BuildUpVertices_RP_covMatrix, &b_BuildUpVertices_RP_covMatrix);
   fChain->SetBranchAddress("BuildUpVertices_RP.clusters_begin", BuildUpVertices_RP_clusters_begin, &b_BuildUpVertices_RP_clusters_begin);
   fChain->SetBranchAddress("BuildUpVertices_RP.clusters_end", BuildUpVertices_RP_clusters_end, &b_BuildUpVertices_RP_clusters_end);
   fChain->SetBranchAddress("BuildUpVertices_RP.tracks_begin", BuildUpVertices_RP_tracks_begin, &b_BuildUpVertices_RP_tracks_begin);
   fChain->SetBranchAddress("BuildUpVertices_RP.tracks_end", BuildUpVertices_RP_tracks_end, &b_BuildUpVertices_RP_tracks_end);
   fChain->SetBranchAddress("BuildUpVertices_RP.particles_begin", BuildUpVertices_RP_particles_begin, &b_BuildUpVertices_RP_particles_begin);
   fChain->SetBranchAddress("BuildUpVertices_RP.particles_end", BuildUpVertices_RP_particles_end, &b_BuildUpVertices_RP_particles_end);
   fChain->SetBranchAddress("BuildUpVertices_RP.particleIDs_begin", BuildUpVertices_RP_particleIDs_begin, &b_BuildUpVertices_RP_particleIDs_begin);
   fChain->SetBranchAddress("BuildUpVertices_RP.particleIDs_end", BuildUpVertices_RP_particleIDs_end, &b_BuildUpVertices_RP_particleIDs_end);
   fChain->SetBranchAddress("_BuildUpVertices_RP_clusters", &_BuildUpVertices_RP_clusters_, &b__BuildUpVertices_RP_clusters_);
   fChain->SetBranchAddress("_BuildUpVertices_RP_clusters.index", &_BuildUpVertices_RP_clusters_index, &b__BuildUpVertices_RP_clusters_index);
   fChain->SetBranchAddress("_BuildUpVertices_RP_clusters.collectionID", &_BuildUpVertices_RP_clusters_collectionID, &b__BuildUpVertices_RP_clusters_collectionID);
   fChain->SetBranchAddress("_BuildUpVertices_RP_tracks", &_BuildUpVertices_RP_tracks_, &b__BuildUpVertices_RP_tracks_);
   fChain->SetBranchAddress("_BuildUpVertices_RP_tracks.index", &_BuildUpVertices_RP_tracks_index, &b__BuildUpVertices_RP_tracks_index);
   fChain->SetBranchAddress("_BuildUpVertices_RP_tracks.collectionID", &_BuildUpVertices_RP_tracks_collectionID, &b__BuildUpVertices_RP_tracks_collectionID);
   fChain->SetBranchAddress("_BuildUpVertices_RP_particles", &_BuildUpVertices_RP_particles_, &b__BuildUpVertices_RP_particles_);
   fChain->SetBranchAddress("_BuildUpVertices_RP_particles.index", _BuildUpVertices_RP_particles_index, &b__BuildUpVertices_RP_particles_index);
   fChain->SetBranchAddress("_BuildUpVertices_RP_particles.collectionID", _BuildUpVertices_RP_particles_collectionID, &b__BuildUpVertices_RP_particles_collectionID);
   fChain->SetBranchAddress("_BuildUpVertices_RP_particleIDs", &_BuildUpVertices_RP_particleIDs_, &b__BuildUpVertices_RP_particleIDs_);
   fChain->SetBranchAddress("_BuildUpVertices_RP_particleIDs.index", &_BuildUpVertices_RP_particleIDs_index, &b__BuildUpVertices_RP_particleIDs_index);
   fChain->SetBranchAddress("_BuildUpVertices_RP_particleIDs.collectionID", &_BuildUpVertices_RP_particleIDs_collectionID, &b__BuildUpVertices_RP_particleIDs_collectionID);
   fChain->SetBranchAddress("_BuildUpVertices_RP_startVertex", &_BuildUpVertices_RP_startVertex_, &b__BuildUpVertices_RP_startVertex_);
   fChain->SetBranchAddress("_BuildUpVertices_RP_startVertex.index", _BuildUpVertices_RP_startVertex_index, &b__BuildUpVertices_RP_startVertex_index);
   fChain->SetBranchAddress("_BuildUpVertices_RP_startVertex.collectionID", _BuildUpVertices_RP_startVertex_collectionID, &b__BuildUpVertices_RP_startVertex_collectionID);
   fChain->SetBranchAddress("_BuildUpVertices_RP_particleIDUsed", &_BuildUpVertices_RP_particleIDUsed_, &b__BuildUpVertices_RP_particleIDUsed_);
   fChain->SetBranchAddress("_BuildUpVertices_RP_particleIDUsed.index", _BuildUpVertices_RP_particleIDUsed_index, &b__BuildUpVertices_RP_particleIDUsed_index);
   fChain->SetBranchAddress("_BuildUpVertices_RP_particleIDUsed.collectionID", _BuildUpVertices_RP_particleIDUsed_collectionID, &b__BuildUpVertices_RP_particleIDUsed_collectionID);
   fChain->SetBranchAddress("BuildUpVertices_RP_particleIDs", &BuildUpVertices_RP_particleIDs_, &b_BuildUpVertices_RP_particleIDs_);
   fChain->SetBranchAddress("BuildUpVertices_RP_particleIDs.type", &BuildUpVertices_RP_particleIDs_type, &b_BuildUpVertices_RP_particleIDs_type);
   fChain->SetBranchAddress("BuildUpVertices_RP_particleIDs.PDG", &BuildUpVertices_RP_particleIDs_PDG, &b_BuildUpVertices_RP_particleIDs_PDG);
   fChain->SetBranchAddress("BuildUpVertices_RP_particleIDs.algorithmType", &BuildUpVertices_RP_particleIDs_algorithmType, &b_BuildUpVertices_RP_particleIDs_algorithmType);
   fChain->SetBranchAddress("BuildUpVertices_RP_particleIDs.likelihood", &BuildUpVertices_RP_particleIDs_likelihood, &b_BuildUpVertices_RP_particleIDs_likelihood);
   fChain->SetBranchAddress("BuildUpVertices_RP_particleIDs.parameters_begin", &BuildUpVertices_RP_particleIDs_parameters_begin, &b_BuildUpVertices_RP_particleIDs_parameters_begin);
   fChain->SetBranchAddress("BuildUpVertices_RP_particleIDs.parameters_end", &BuildUpVertices_RP_particleIDs_parameters_end, &b_BuildUpVertices_RP_particleIDs_parameters_end);
   fChain->SetBranchAddress("_BuildUpVertices_RP_particleIDs_parameters", &_BuildUpVertices_RP_particleIDs_parameters, &b__BuildUpVertices_RP_particleIDs_parameters);
   fChain->SetBranchAddress("BuildUpVertices_V0", &BuildUpVertices_V0_, &b_BuildUpVertices_V0_);
   fChain->SetBranchAddress("BuildUpVertices_V0.primary", BuildUpVertices_V0_primary, &b_BuildUpVertices_V0_primary);
   fChain->SetBranchAddress("BuildUpVertices_V0.chi2", BuildUpVertices_V0_chi2, &b_BuildUpVertices_V0_chi2);
   fChain->SetBranchAddress("BuildUpVertices_V0.probability", BuildUpVertices_V0_probability, &b_BuildUpVertices_V0_probability);
   fChain->SetBranchAddress("BuildUpVertices_V0.position.x", BuildUpVertices_V0_position_x, &b_BuildUpVertices_V0_position_x);
   fChain->SetBranchAddress("BuildUpVertices_V0.position.y", BuildUpVertices_V0_position_y, &b_BuildUpVertices_V0_position_y);
   fChain->SetBranchAddress("BuildUpVertices_V0.position.z", BuildUpVertices_V0_position_z, &b_BuildUpVertices_V0_position_z);
   fChain->SetBranchAddress("BuildUpVertices_V0.covMatrix[6]", BuildUpVertices_V0_covMatrix, &b_BuildUpVertices_V0_covMatrix);
   fChain->SetBranchAddress("BuildUpVertices_V0.algorithmType", BuildUpVertices_V0_algorithmType, &b_BuildUpVertices_V0_algorithmType);
   fChain->SetBranchAddress("BuildUpVertices_V0.parameters_begin", BuildUpVertices_V0_parameters_begin, &b_BuildUpVertices_V0_parameters_begin);
   fChain->SetBranchAddress("BuildUpVertices_V0.parameters_end", BuildUpVertices_V0_parameters_end, &b_BuildUpVertices_V0_parameters_end);
   fChain->SetBranchAddress("_BuildUpVertices_V0_associatedParticle", &_BuildUpVertices_V0_associatedParticle_, &b__BuildUpVertices_V0_associatedParticle_);
   fChain->SetBranchAddress("_BuildUpVertices_V0_associatedParticle.index", _BuildUpVertices_V0_associatedParticle_index, &b__BuildUpVertices_V0_associatedParticle_index);
   fChain->SetBranchAddress("_BuildUpVertices_V0_associatedParticle.collectionID", _BuildUpVertices_V0_associatedParticle_collectionID, &b__BuildUpVertices_V0_associatedParticle_collectionID);
   fChain->SetBranchAddress("_BuildUpVertices_V0_parameters", &_BuildUpVertices_V0_parameters, &b__BuildUpVertices_V0_parameters);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP", &BuildUpVertices_V0_RP_, &b_BuildUpVertices_V0_RP_);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.PDG", BuildUpVertices_V0_RP_PDG, &b_BuildUpVertices_V0_RP_PDG);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.energy", BuildUpVertices_V0_RP_energy, &b_BuildUpVertices_V0_RP_energy);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.momentum.x", BuildUpVertices_V0_RP_momentum_x, &b_BuildUpVertices_V0_RP_momentum_x);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.momentum.y", BuildUpVertices_V0_RP_momentum_y, &b_BuildUpVertices_V0_RP_momentum_y);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.momentum.z", BuildUpVertices_V0_RP_momentum_z, &b_BuildUpVertices_V0_RP_momentum_z);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.referencePoint.x", BuildUpVertices_V0_RP_referencePoint_x, &b_BuildUpVertices_V0_RP_referencePoint_x);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.referencePoint.y", BuildUpVertices_V0_RP_referencePoint_y, &b_BuildUpVertices_V0_RP_referencePoint_y);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.referencePoint.z", BuildUpVertices_V0_RP_referencePoint_z, &b_BuildUpVertices_V0_RP_referencePoint_z);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.charge", BuildUpVertices_V0_RP_charge, &b_BuildUpVertices_V0_RP_charge);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.mass", BuildUpVertices_V0_RP_mass, &b_BuildUpVertices_V0_RP_mass);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.goodnessOfPID", BuildUpVertices_V0_RP_goodnessOfPID, &b_BuildUpVertices_V0_RP_goodnessOfPID);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.covMatrix[10]", BuildUpVertices_V0_RP_covMatrix, &b_BuildUpVertices_V0_RP_covMatrix);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.clusters_begin", BuildUpVertices_V0_RP_clusters_begin, &b_BuildUpVertices_V0_RP_clusters_begin);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.clusters_end", BuildUpVertices_V0_RP_clusters_end, &b_BuildUpVertices_V0_RP_clusters_end);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.tracks_begin", BuildUpVertices_V0_RP_tracks_begin, &b_BuildUpVertices_V0_RP_tracks_begin);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.tracks_end", BuildUpVertices_V0_RP_tracks_end, &b_BuildUpVertices_V0_RP_tracks_end);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.particles_begin", BuildUpVertices_V0_RP_particles_begin, &b_BuildUpVertices_V0_RP_particles_begin);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.particles_end", BuildUpVertices_V0_RP_particles_end, &b_BuildUpVertices_V0_RP_particles_end);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.particleIDs_begin", BuildUpVertices_V0_RP_particleIDs_begin, &b_BuildUpVertices_V0_RP_particleIDs_begin);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP.particleIDs_end", BuildUpVertices_V0_RP_particleIDs_end, &b_BuildUpVertices_V0_RP_particleIDs_end);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_clusters", &_BuildUpVertices_V0_RP_clusters_, &b__BuildUpVertices_V0_RP_clusters_);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_clusters.index", &_BuildUpVertices_V0_RP_clusters_index, &b__BuildUpVertices_V0_RP_clusters_index);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_clusters.collectionID", &_BuildUpVertices_V0_RP_clusters_collectionID, &b__BuildUpVertices_V0_RP_clusters_collectionID);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_tracks", &_BuildUpVertices_V0_RP_tracks_, &b__BuildUpVertices_V0_RP_tracks_);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_tracks.index", &_BuildUpVertices_V0_RP_tracks_index, &b__BuildUpVertices_V0_RP_tracks_index);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_tracks.collectionID", &_BuildUpVertices_V0_RP_tracks_collectionID, &b__BuildUpVertices_V0_RP_tracks_collectionID);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_particles", &_BuildUpVertices_V0_RP_particles_, &b__BuildUpVertices_V0_RP_particles_);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_particles.index", _BuildUpVertices_V0_RP_particles_index, &b__BuildUpVertices_V0_RP_particles_index);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_particles.collectionID", _BuildUpVertices_V0_RP_particles_collectionID, &b__BuildUpVertices_V0_RP_particles_collectionID);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_particleIDs", &_BuildUpVertices_V0_RP_particleIDs_, &b__BuildUpVertices_V0_RP_particleIDs_);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_particleIDs.index", &_BuildUpVertices_V0_RP_particleIDs_index, &b__BuildUpVertices_V0_RP_particleIDs_index);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_particleIDs.collectionID", &_BuildUpVertices_V0_RP_particleIDs_collectionID, &b__BuildUpVertices_V0_RP_particleIDs_collectionID);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_startVertex", &_BuildUpVertices_V0_RP_startVertex_, &b__BuildUpVertices_V0_RP_startVertex_);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_startVertex.index", _BuildUpVertices_V0_RP_startVertex_index, &b__BuildUpVertices_V0_RP_startVertex_index);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_startVertex.collectionID", _BuildUpVertices_V0_RP_startVertex_collectionID, &b__BuildUpVertices_V0_RP_startVertex_collectionID);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_particleIDUsed", &_BuildUpVertices_V0_RP_particleIDUsed_, &b__BuildUpVertices_V0_RP_particleIDUsed_);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_particleIDUsed.index", _BuildUpVertices_V0_RP_particleIDUsed_index, &b__BuildUpVertices_V0_RP_particleIDUsed_index);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_particleIDUsed.collectionID", _BuildUpVertices_V0_RP_particleIDUsed_collectionID, &b__BuildUpVertices_V0_RP_particleIDUsed_collectionID);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP_particleIDs", &BuildUpVertices_V0_RP_particleIDs_, &b_BuildUpVertices_V0_RP_particleIDs_);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP_particleIDs.type", &BuildUpVertices_V0_RP_particleIDs_type, &b_BuildUpVertices_V0_RP_particleIDs_type);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP_particleIDs.PDG", &BuildUpVertices_V0_RP_particleIDs_PDG, &b_BuildUpVertices_V0_RP_particleIDs_PDG);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP_particleIDs.algorithmType", &BuildUpVertices_V0_RP_particleIDs_algorithmType, &b_BuildUpVertices_V0_RP_particleIDs_algorithmType);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP_particleIDs.likelihood", &BuildUpVertices_V0_RP_particleIDs_likelihood, &b_BuildUpVertices_V0_RP_particleIDs_likelihood);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP_particleIDs.parameters_begin", &BuildUpVertices_V0_RP_particleIDs_parameters_begin, &b_BuildUpVertices_V0_RP_particleIDs_parameters_begin);
   fChain->SetBranchAddress("BuildUpVertices_V0_RP_particleIDs.parameters_end", &BuildUpVertices_V0_RP_particleIDs_parameters_end, &b_BuildUpVertices_V0_RP_particleIDs_parameters_end);
   fChain->SetBranchAddress("_BuildUpVertices_V0_RP_particleIDs_parameters", &_BuildUpVertices_V0_RP_particleIDs_parameters, &b__BuildUpVertices_V0_RP_particleIDs_parameters);
   fChain->SetBranchAddress("CalohitMCTruthLink", &CalohitMCTruthLink_, &b_CalohitMCTruthLink_);
   fChain->SetBranchAddress("CalohitMCTruthLink.weight", CalohitMCTruthLink_weight, &b_CalohitMCTruthLink_weight);
   fChain->SetBranchAddress("_CalohitMCTruthLink_rec", &_CalohitMCTruthLink_rec_, &b__CalohitMCTruthLink_rec_);
   fChain->SetBranchAddress("_CalohitMCTruthLink_rec.index", _CalohitMCTruthLink_rec_index, &b__CalohitMCTruthLink_rec_index);
   fChain->SetBranchAddress("_CalohitMCTruthLink_rec.collectionID", _CalohitMCTruthLink_rec_collectionID, &b__CalohitMCTruthLink_rec_collectionID);
   fChain->SetBranchAddress("_CalohitMCTruthLink_sim", &_CalohitMCTruthLink_sim_, &b__CalohitMCTruthLink_sim_);
   fChain->SetBranchAddress("_CalohitMCTruthLink_sim.index", _CalohitMCTruthLink_sim_index, &b__CalohitMCTruthLink_sim_index);
   fChain->SetBranchAddress("_CalohitMCTruthLink_sim.collectionID", _CalohitMCTruthLink_sim_collectionID, &b__CalohitMCTruthLink_sim_collectionID);
   fChain->SetBranchAddress("ClusterMCTruthLink", &ClusterMCTruthLink_, &b_ClusterMCTruthLink_);
   fChain->SetBranchAddress("ClusterMCTruthLink.weight", ClusterMCTruthLink_weight, &b_ClusterMCTruthLink_weight);
   fChain->SetBranchAddress("_ClusterMCTruthLink_rec", &_ClusterMCTruthLink_rec_, &b__ClusterMCTruthLink_rec_);
   fChain->SetBranchAddress("_ClusterMCTruthLink_rec.index", _ClusterMCTruthLink_rec_index, &b__ClusterMCTruthLink_rec_index);
   fChain->SetBranchAddress("_ClusterMCTruthLink_rec.collectionID", _ClusterMCTruthLink_rec_collectionID, &b__ClusterMCTruthLink_rec_collectionID);
   fChain->SetBranchAddress("_ClusterMCTruthLink_sim", &_ClusterMCTruthLink_sim_, &b__ClusterMCTruthLink_sim_);
   fChain->SetBranchAddress("_ClusterMCTruthLink_sim.index", _ClusterMCTruthLink_sim_index, &b__ClusterMCTruthLink_sim_index);
   fChain->SetBranchAddress("_ClusterMCTruthLink_sim.collectionID", _ClusterMCTruthLink_sim_collectionID, &b__ClusterMCTruthLink_sim_collectionID);
   fChain->SetBranchAddress("DebugHits_objIdx", &DebugHits_objIdx_, &b_DebugHits_objIdx_);
   fChain->SetBranchAddress("DebugHits_objIdx.index", &DebugHits_objIdx_index, &b_DebugHits_objIdx_index);
   fChain->SetBranchAddress("DebugHits_objIdx.collectionID", &DebugHits_objIdx_collectionID, &b_DebugHits_objIdx_collectionID);
   fChain->SetBranchAddress("ECALBarrel", &ECALBarrel_, &b_ECALBarrel_);
   fChain->SetBranchAddress("ECALBarrel.cellID", ECALBarrel_cellID, &b_ECALBarrel_cellID);
   fChain->SetBranchAddress("ECALBarrel.energy", ECALBarrel_energy, &b_ECALBarrel_energy);
   fChain->SetBranchAddress("ECALBarrel.energyError", ECALBarrel_energyError, &b_ECALBarrel_energyError);
   fChain->SetBranchAddress("ECALBarrel.time", ECALBarrel_time, &b_ECALBarrel_time);
   fChain->SetBranchAddress("ECALBarrel.position.x", ECALBarrel_position_x, &b_ECALBarrel_position_x);
   fChain->SetBranchAddress("ECALBarrel.position.y", ECALBarrel_position_y, &b_ECALBarrel_position_y);
   fChain->SetBranchAddress("ECALBarrel.position.z", ECALBarrel_position_z, &b_ECALBarrel_position_z);
   fChain->SetBranchAddress("ECALBarrel.type", ECALBarrel_type, &b_ECALBarrel_type);
   fChain->SetBranchAddress("ECalBarrelCollection", &ECalBarrelCollection_, &b_ECalBarrelCollection_);
   fChain->SetBranchAddress("ECalBarrelCollection.cellID", ECalBarrelCollection_cellID, &b_ECalBarrelCollection_cellID);
   fChain->SetBranchAddress("ECalBarrelCollection.energy", ECalBarrelCollection_energy, &b_ECalBarrelCollection_energy);
   fChain->SetBranchAddress("ECalBarrelCollection.position.x", ECalBarrelCollection_position_x, &b_ECalBarrelCollection_position_x);
   fChain->SetBranchAddress("ECalBarrelCollection.position.y", ECalBarrelCollection_position_y, &b_ECalBarrelCollection_position_y);
   fChain->SetBranchAddress("ECalBarrelCollection.position.z", ECalBarrelCollection_position_z, &b_ECalBarrelCollection_position_z);
   fChain->SetBranchAddress("ECalBarrelCollection.contributions_begin", ECalBarrelCollection_contributions_begin, &b_ECalBarrelCollection_contributions_begin);
   fChain->SetBranchAddress("ECalBarrelCollection.contributions_end", ECalBarrelCollection_contributions_end, &b_ECalBarrelCollection_contributions_end);
   fChain->SetBranchAddress("_ECalBarrelCollection_contributions", &_ECalBarrelCollection_contributions_, &b__ECalBarrelCollection_contributions_);
   fChain->SetBranchAddress("_ECalBarrelCollection_contributions.index", _ECalBarrelCollection_contributions_index, &b__ECalBarrelCollection_contributions_index);
   fChain->SetBranchAddress("_ECalBarrelCollection_contributions.collectionID", _ECalBarrelCollection_contributions_collectionID, &b__ECalBarrelCollection_contributions_collectionID);
   fChain->SetBranchAddress("ECalBarrelCollectionContributions", &ECalBarrelCollectionContributions_, &b_ECalBarrelCollectionContributions_);
   fChain->SetBranchAddress("ECalBarrelCollectionContributions.PDG", ECalBarrelCollectionContributions_PDG, &b_ECalBarrelCollectionContributions_PDG);
   fChain->SetBranchAddress("ECalBarrelCollectionContributions.energy", ECalBarrelCollectionContributions_energy, &b_ECalBarrelCollectionContributions_energy);
   fChain->SetBranchAddress("ECalBarrelCollectionContributions.time", ECalBarrelCollectionContributions_time, &b_ECalBarrelCollectionContributions_time);
   fChain->SetBranchAddress("ECalBarrelCollectionContributions.stepPosition.x", ECalBarrelCollectionContributions_stepPosition_x, &b_ECalBarrelCollectionContributions_stepPosition_x);
   fChain->SetBranchAddress("ECalBarrelCollectionContributions.stepPosition.y", ECalBarrelCollectionContributions_stepPosition_y, &b_ECalBarrelCollectionContributions_stepPosition_y);
   fChain->SetBranchAddress("ECalBarrelCollectionContributions.stepPosition.z", ECalBarrelCollectionContributions_stepPosition_z, &b_ECalBarrelCollectionContributions_stepPosition_z);
   fChain->SetBranchAddress("_ECalBarrelCollectionContributions_particle", &_ECalBarrelCollectionContributions_particle_, &b__ECalBarrelCollectionContributions_particle_);
   fChain->SetBranchAddress("_ECalBarrelCollectionContributions_particle.index", _ECalBarrelCollectionContributions_particle_index, &b__ECalBarrelCollectionContributions_particle_index);
   fChain->SetBranchAddress("_ECalBarrelCollectionContributions_particle.collectionID", _ECalBarrelCollectionContributions_particle_collectionID, &b__ECalBarrelCollectionContributions_particle_collectionID);
   fChain->SetBranchAddress("ECALEndcap", &ECALEndcap_, &b_ECALEndcap_);
   fChain->SetBranchAddress("ECALEndcap.cellID", ECALEndcap_cellID, &b_ECALEndcap_cellID);
   fChain->SetBranchAddress("ECALEndcap.energy", ECALEndcap_energy, &b_ECALEndcap_energy);
   fChain->SetBranchAddress("ECALEndcap.energyError", ECALEndcap_energyError, &b_ECALEndcap_energyError);
   fChain->SetBranchAddress("ECALEndcap.time", ECALEndcap_time, &b_ECALEndcap_time);
   fChain->SetBranchAddress("ECALEndcap.position.x", ECALEndcap_position_x, &b_ECALEndcap_position_x);
   fChain->SetBranchAddress("ECALEndcap.position.y", ECALEndcap_position_y, &b_ECALEndcap_position_y);
   fChain->SetBranchAddress("ECALEndcap.position.z", ECALEndcap_position_z, &b_ECALEndcap_position_z);
   fChain->SetBranchAddress("ECALEndcap.type", ECALEndcap_type, &b_ECALEndcap_type);
   fChain->SetBranchAddress("ECalEndcapCollection", &ECalEndcapCollection_, &b_ECalEndcapCollection_);
   fChain->SetBranchAddress("ECalEndcapCollection.cellID", ECalEndcapCollection_cellID, &b_ECalEndcapCollection_cellID);
   fChain->SetBranchAddress("ECalEndcapCollection.energy", ECalEndcapCollection_energy, &b_ECalEndcapCollection_energy);
   fChain->SetBranchAddress("ECalEndcapCollection.position.x", ECalEndcapCollection_position_x, &b_ECalEndcapCollection_position_x);
   fChain->SetBranchAddress("ECalEndcapCollection.position.y", ECalEndcapCollection_position_y, &b_ECalEndcapCollection_position_y);
   fChain->SetBranchAddress("ECalEndcapCollection.position.z", ECalEndcapCollection_position_z, &b_ECalEndcapCollection_position_z);
   fChain->SetBranchAddress("ECalEndcapCollection.contributions_begin", ECalEndcapCollection_contributions_begin, &b_ECalEndcapCollection_contributions_begin);
   fChain->SetBranchAddress("ECalEndcapCollection.contributions_end", ECalEndcapCollection_contributions_end, &b_ECalEndcapCollection_contributions_end);
   fChain->SetBranchAddress("_ECalEndcapCollection_contributions", &_ECalEndcapCollection_contributions_, &b__ECalEndcapCollection_contributions_);
   fChain->SetBranchAddress("_ECalEndcapCollection_contributions.index", _ECalEndcapCollection_contributions_index, &b__ECalEndcapCollection_contributions_index);
   fChain->SetBranchAddress("_ECalEndcapCollection_contributions.collectionID", _ECalEndcapCollection_contributions_collectionID, &b__ECalEndcapCollection_contributions_collectionID);
   fChain->SetBranchAddress("ECalEndcapCollectionContributions", &ECalEndcapCollectionContributions_, &b_ECalEndcapCollectionContributions_);
   fChain->SetBranchAddress("ECalEndcapCollectionContributions.PDG", ECalEndcapCollectionContributions_PDG, &b_ECalEndcapCollectionContributions_PDG);
   fChain->SetBranchAddress("ECalEndcapCollectionContributions.energy", ECalEndcapCollectionContributions_energy, &b_ECalEndcapCollectionContributions_energy);
   fChain->SetBranchAddress("ECalEndcapCollectionContributions.time", ECalEndcapCollectionContributions_time, &b_ECalEndcapCollectionContributions_time);
   fChain->SetBranchAddress("ECalEndcapCollectionContributions.stepPosition.x", ECalEndcapCollectionContributions_stepPosition_x, &b_ECalEndcapCollectionContributions_stepPosition_x);
   fChain->SetBranchAddress("ECalEndcapCollectionContributions.stepPosition.y", ECalEndcapCollectionContributions_stepPosition_y, &b_ECalEndcapCollectionContributions_stepPosition_y);
   fChain->SetBranchAddress("ECalEndcapCollectionContributions.stepPosition.z", ECalEndcapCollectionContributions_stepPosition_z, &b_ECalEndcapCollectionContributions_stepPosition_z);
   fChain->SetBranchAddress("_ECalEndcapCollectionContributions_particle", &_ECalEndcapCollectionContributions_particle_, &b__ECalEndcapCollectionContributions_particle_);
   fChain->SetBranchAddress("_ECalEndcapCollectionContributions_particle.index", _ECalEndcapCollectionContributions_particle_index, &b__ECalEndcapCollectionContributions_particle_index);
   fChain->SetBranchAddress("_ECalEndcapCollectionContributions_particle.collectionID", _ECalEndcapCollectionContributions_particle_collectionID, &b__ECalEndcapCollectionContributions_particle_collectionID);
   fChain->SetBranchAddress("EfficientMCParticles_objIdx", &EfficientMCParticles_objIdx_, &b_EfficientMCParticles_objIdx_);
   fChain->SetBranchAddress("EfficientMCParticles_objIdx.index", EfficientMCParticles_objIdx_index, &b_EfficientMCParticles_objIdx_index);
   fChain->SetBranchAddress("EfficientMCParticles_objIdx.collectionID", EfficientMCParticles_objIdx_collectionID, &b_EfficientMCParticles_objIdx_collectionID);
   fChain->SetBranchAddress("EventHeader", &EventHeader_, &b_EventHeader_);
   fChain->SetBranchAddress("EventHeader.eventNumber", EventHeader_eventNumber, &b_EventHeader_eventNumber);
   fChain->SetBranchAddress("EventHeader.runNumber", EventHeader_runNumber, &b_EventHeader_runNumber);
   fChain->SetBranchAddress("EventHeader.timeStamp", EventHeader_timeStamp, &b_EventHeader_timeStamp);
   fChain->SetBranchAddress("EventHeader.weight", EventHeader_weight, &b_EventHeader_weight);
   fChain->SetBranchAddress("EventHeader.weights_begin", EventHeader_weights_begin, &b_EventHeader_weights_begin);
   fChain->SetBranchAddress("EventHeader.weights_end", EventHeader_weights_end, &b_EventHeader_weights_end);
   fChain->SetBranchAddress("_EventHeader_weights", &_EventHeader_weights, &b__EventHeader_weights);
   fChain->SetBranchAddress("HCALBarrel", &HCALBarrel_, &b_HCALBarrel_);
   fChain->SetBranchAddress("HCALBarrel.cellID", HCALBarrel_cellID, &b_HCALBarrel_cellID);
   fChain->SetBranchAddress("HCALBarrel.energy", HCALBarrel_energy, &b_HCALBarrel_energy);
   fChain->SetBranchAddress("HCALBarrel.energyError", HCALBarrel_energyError, &b_HCALBarrel_energyError);
   fChain->SetBranchAddress("HCALBarrel.time", HCALBarrel_time, &b_HCALBarrel_time);
   fChain->SetBranchAddress("HCALBarrel.position.x", HCALBarrel_position_x, &b_HCALBarrel_position_x);
   fChain->SetBranchAddress("HCALBarrel.position.y", HCALBarrel_position_y, &b_HCALBarrel_position_y);
   fChain->SetBranchAddress("HCALBarrel.position.z", HCALBarrel_position_z, &b_HCALBarrel_position_z);
   fChain->SetBranchAddress("HCALBarrel.type", HCALBarrel_type, &b_HCALBarrel_type);
   fChain->SetBranchAddress("HCalBarrelCollection", &HCalBarrelCollection_, &b_HCalBarrelCollection_);
   fChain->SetBranchAddress("HCalBarrelCollection.cellID", HCalBarrelCollection_cellID, &b_HCalBarrelCollection_cellID);
   fChain->SetBranchAddress("HCalBarrelCollection.energy", HCalBarrelCollection_energy, &b_HCalBarrelCollection_energy);
   fChain->SetBranchAddress("HCalBarrelCollection.position.x", HCalBarrelCollection_position_x, &b_HCalBarrelCollection_position_x);
   fChain->SetBranchAddress("HCalBarrelCollection.position.y", HCalBarrelCollection_position_y, &b_HCalBarrelCollection_position_y);
   fChain->SetBranchAddress("HCalBarrelCollection.position.z", HCalBarrelCollection_position_z, &b_HCalBarrelCollection_position_z);
   fChain->SetBranchAddress("HCalBarrelCollection.contributions_begin", HCalBarrelCollection_contributions_begin, &b_HCalBarrelCollection_contributions_begin);
   fChain->SetBranchAddress("HCalBarrelCollection.contributions_end", HCalBarrelCollection_contributions_end, &b_HCalBarrelCollection_contributions_end);
   fChain->SetBranchAddress("_HCalBarrelCollection_contributions", &_HCalBarrelCollection_contributions_, &b__HCalBarrelCollection_contributions_);
   fChain->SetBranchAddress("_HCalBarrelCollection_contributions.index", _HCalBarrelCollection_contributions_index, &b__HCalBarrelCollection_contributions_index);
   fChain->SetBranchAddress("_HCalBarrelCollection_contributions.collectionID", _HCalBarrelCollection_contributions_collectionID, &b__HCalBarrelCollection_contributions_collectionID);
   fChain->SetBranchAddress("HCalBarrelCollectionContributions", &HCalBarrelCollectionContributions_, &b_HCalBarrelCollectionContributions_);
   fChain->SetBranchAddress("HCalBarrelCollectionContributions.PDG", HCalBarrelCollectionContributions_PDG, &b_HCalBarrelCollectionContributions_PDG);
   fChain->SetBranchAddress("HCalBarrelCollectionContributions.energy", HCalBarrelCollectionContributions_energy, &b_HCalBarrelCollectionContributions_energy);
   fChain->SetBranchAddress("HCalBarrelCollectionContributions.time", HCalBarrelCollectionContributions_time, &b_HCalBarrelCollectionContributions_time);
   fChain->SetBranchAddress("HCalBarrelCollectionContributions.stepPosition.x", HCalBarrelCollectionContributions_stepPosition_x, &b_HCalBarrelCollectionContributions_stepPosition_x);
   fChain->SetBranchAddress("HCalBarrelCollectionContributions.stepPosition.y", HCalBarrelCollectionContributions_stepPosition_y, &b_HCalBarrelCollectionContributions_stepPosition_y);
   fChain->SetBranchAddress("HCalBarrelCollectionContributions.stepPosition.z", HCalBarrelCollectionContributions_stepPosition_z, &b_HCalBarrelCollectionContributions_stepPosition_z);
   fChain->SetBranchAddress("_HCalBarrelCollectionContributions_particle", &_HCalBarrelCollectionContributions_particle_, &b__HCalBarrelCollectionContributions_particle_);
   fChain->SetBranchAddress("_HCalBarrelCollectionContributions_particle.index", _HCalBarrelCollectionContributions_particle_index, &b__HCalBarrelCollectionContributions_particle_index);
   fChain->SetBranchAddress("_HCalBarrelCollectionContributions_particle.collectionID", _HCalBarrelCollectionContributions_particle_collectionID, &b__HCalBarrelCollectionContributions_particle_collectionID);
   fChain->SetBranchAddress("HCALEndcap", &HCALEndcap_, &b_HCALEndcap_);
   fChain->SetBranchAddress("HCALEndcap.cellID", HCALEndcap_cellID, &b_HCALEndcap_cellID);
   fChain->SetBranchAddress("HCALEndcap.energy", HCALEndcap_energy, &b_HCALEndcap_energy);
   fChain->SetBranchAddress("HCALEndcap.energyError", HCALEndcap_energyError, &b_HCALEndcap_energyError);
   fChain->SetBranchAddress("HCALEndcap.time", HCALEndcap_time, &b_HCALEndcap_time);
   fChain->SetBranchAddress("HCALEndcap.position.x", HCALEndcap_position_x, &b_HCALEndcap_position_x);
   fChain->SetBranchAddress("HCALEndcap.position.y", HCALEndcap_position_y, &b_HCALEndcap_position_y);
   fChain->SetBranchAddress("HCALEndcap.position.z", HCALEndcap_position_z, &b_HCALEndcap_position_z);
   fChain->SetBranchAddress("HCALEndcap.type", HCALEndcap_type, &b_HCALEndcap_type);
   fChain->SetBranchAddress("HCalEndcapCollection", &HCalEndcapCollection_, &b_HCalEndcapCollection_);
   fChain->SetBranchAddress("HCalEndcapCollection.cellID", HCalEndcapCollection_cellID, &b_HCalEndcapCollection_cellID);
   fChain->SetBranchAddress("HCalEndcapCollection.energy", HCalEndcapCollection_energy, &b_HCalEndcapCollection_energy);
   fChain->SetBranchAddress("HCalEndcapCollection.position.x", HCalEndcapCollection_position_x, &b_HCalEndcapCollection_position_x);
   fChain->SetBranchAddress("HCalEndcapCollection.position.y", HCalEndcapCollection_position_y, &b_HCalEndcapCollection_position_y);
   fChain->SetBranchAddress("HCalEndcapCollection.position.z", HCalEndcapCollection_position_z, &b_HCalEndcapCollection_position_z);
   fChain->SetBranchAddress("HCalEndcapCollection.contributions_begin", HCalEndcapCollection_contributions_begin, &b_HCalEndcapCollection_contributions_begin);
   fChain->SetBranchAddress("HCalEndcapCollection.contributions_end", HCalEndcapCollection_contributions_end, &b_HCalEndcapCollection_contributions_end);
   fChain->SetBranchAddress("_HCalEndcapCollection_contributions", &_HCalEndcapCollection_contributions_, &b__HCalEndcapCollection_contributions_);
   fChain->SetBranchAddress("_HCalEndcapCollection_contributions.index", _HCalEndcapCollection_contributions_index, &b__HCalEndcapCollection_contributions_index);
   fChain->SetBranchAddress("_HCalEndcapCollection_contributions.collectionID", _HCalEndcapCollection_contributions_collectionID, &b__HCalEndcapCollection_contributions_collectionID);
   fChain->SetBranchAddress("HCalEndcapCollectionContributions", &HCalEndcapCollectionContributions_, &b_HCalEndcapCollectionContributions_);
   fChain->SetBranchAddress("HCalEndcapCollectionContributions.PDG", HCalEndcapCollectionContributions_PDG, &b_HCalEndcapCollectionContributions_PDG);
   fChain->SetBranchAddress("HCalEndcapCollectionContributions.energy", HCalEndcapCollectionContributions_energy, &b_HCalEndcapCollectionContributions_energy);
   fChain->SetBranchAddress("HCalEndcapCollectionContributions.time", HCalEndcapCollectionContributions_time, &b_HCalEndcapCollectionContributions_time);
   fChain->SetBranchAddress("HCalEndcapCollectionContributions.stepPosition.x", HCalEndcapCollectionContributions_stepPosition_x, &b_HCalEndcapCollectionContributions_stepPosition_x);
   fChain->SetBranchAddress("HCalEndcapCollectionContributions.stepPosition.y", HCalEndcapCollectionContributions_stepPosition_y, &b_HCalEndcapCollectionContributions_stepPosition_y);
   fChain->SetBranchAddress("HCalEndcapCollectionContributions.stepPosition.z", HCalEndcapCollectionContributions_stepPosition_z, &b_HCalEndcapCollectionContributions_stepPosition_z);
   fChain->SetBranchAddress("_HCalEndcapCollectionContributions_particle", &_HCalEndcapCollectionContributions_particle_, &b__HCalEndcapCollectionContributions_particle_);
   fChain->SetBranchAddress("_HCalEndcapCollectionContributions_particle.index", _HCalEndcapCollectionContributions_particle_index, &b__HCalEndcapCollectionContributions_particle_index);
   fChain->SetBranchAddress("_HCalEndcapCollectionContributions_particle.collectionID", _HCalEndcapCollectionContributions_particle_collectionID, &b__HCalEndcapCollectionContributions_particle_collectionID);
   fChain->SetBranchAddress("HCALOther", &HCALOther_, &b_HCALOther_);
   fChain->SetBranchAddress("HCALOther.cellID", HCALOther_cellID, &b_HCALOther_cellID);
   fChain->SetBranchAddress("HCALOther.energy", HCALOther_energy, &b_HCALOther_energy);
   fChain->SetBranchAddress("HCALOther.energyError", HCALOther_energyError, &b_HCALOther_energyError);
   fChain->SetBranchAddress("HCALOther.time", HCALOther_time, &b_HCALOther_time);
   fChain->SetBranchAddress("HCALOther.position.x", HCALOther_position_x, &b_HCALOther_position_x);
   fChain->SetBranchAddress("HCALOther.position.y", HCALOther_position_y, &b_HCALOther_position_y);
   fChain->SetBranchAddress("HCALOther.position.z", HCALOther_position_z, &b_HCALOther_position_z);
   fChain->SetBranchAddress("HCALOther.type", HCALOther_type, &b_HCALOther_type);
   fChain->SetBranchAddress("HCalRingCollection", &HCalRingCollection_, &b_HCalRingCollection_);
   fChain->SetBranchAddress("HCalRingCollection.cellID", HCalRingCollection_cellID, &b_HCalRingCollection_cellID);
   fChain->SetBranchAddress("HCalRingCollection.energy", HCalRingCollection_energy, &b_HCalRingCollection_energy);
   fChain->SetBranchAddress("HCalRingCollection.position.x", HCalRingCollection_position_x, &b_HCalRingCollection_position_x);
   fChain->SetBranchAddress("HCalRingCollection.position.y", HCalRingCollection_position_y, &b_HCalRingCollection_position_y);
   fChain->SetBranchAddress("HCalRingCollection.position.z", HCalRingCollection_position_z, &b_HCalRingCollection_position_z);
   fChain->SetBranchAddress("HCalRingCollection.contributions_begin", HCalRingCollection_contributions_begin, &b_HCalRingCollection_contributions_begin);
   fChain->SetBranchAddress("HCalRingCollection.contributions_end", HCalRingCollection_contributions_end, &b_HCalRingCollection_contributions_end);
   fChain->SetBranchAddress("_HCalRingCollection_contributions", &_HCalRingCollection_contributions_, &b__HCalRingCollection_contributions_);
   fChain->SetBranchAddress("_HCalRingCollection_contributions.index", _HCalRingCollection_contributions_index, &b__HCalRingCollection_contributions_index);
   fChain->SetBranchAddress("_HCalRingCollection_contributions.collectionID", _HCalRingCollection_contributions_collectionID, &b__HCalRingCollection_contributions_collectionID);
   fChain->SetBranchAddress("HCalRingCollectionContributions", &HCalRingCollectionContributions_, &b_HCalRingCollectionContributions_);
   fChain->SetBranchAddress("HCalRingCollectionContributions.PDG", HCalRingCollectionContributions_PDG, &b_HCalRingCollectionContributions_PDG);
   fChain->SetBranchAddress("HCalRingCollectionContributions.energy", HCalRingCollectionContributions_energy, &b_HCalRingCollectionContributions_energy);
   fChain->SetBranchAddress("HCalRingCollectionContributions.time", HCalRingCollectionContributions_time, &b_HCalRingCollectionContributions_time);
   fChain->SetBranchAddress("HCalRingCollectionContributions.stepPosition.x", HCalRingCollectionContributions_stepPosition_x, &b_HCalRingCollectionContributions_stepPosition_x);
   fChain->SetBranchAddress("HCalRingCollectionContributions.stepPosition.y", HCalRingCollectionContributions_stepPosition_y, &b_HCalRingCollectionContributions_stepPosition_y);
   fChain->SetBranchAddress("HCalRingCollectionContributions.stepPosition.z", HCalRingCollectionContributions_stepPosition_z, &b_HCalRingCollectionContributions_stepPosition_z);
   fChain->SetBranchAddress("_HCalRingCollectionContributions_particle", &_HCalRingCollectionContributions_particle_, &b__HCalRingCollectionContributions_particle_);
   fChain->SetBranchAddress("_HCalRingCollectionContributions_particle.index", _HCalRingCollectionContributions_particle_index, &b__HCalRingCollectionContributions_particle_index);
   fChain->SetBranchAddress("_HCalRingCollectionContributions_particle.collectionID", _HCalRingCollectionContributions_particle_collectionID, &b__HCalRingCollectionContributions_particle_collectionID);
   fChain->SetBranchAddress("InefficientMCParticles_objIdx", &InefficientMCParticles_objIdx_, &b_InefficientMCParticles_objIdx_);
   fChain->SetBranchAddress("InefficientMCParticles_objIdx.index", InefficientMCParticles_objIdx_index, &b_InefficientMCParticles_objIdx_index);
   fChain->SetBranchAddress("InefficientMCParticles_objIdx.collectionID", InefficientMCParticles_objIdx_collectionID, &b_InefficientMCParticles_objIdx_collectionID);
   fChain->SetBranchAddress("InnerTrackerBarrelCollection", &InnerTrackerBarrelCollection_, &b_InnerTrackerBarrelCollection_);
   fChain->SetBranchAddress("InnerTrackerBarrelCollection.cellID", InnerTrackerBarrelCollection_cellID, &b_InnerTrackerBarrelCollection_cellID);
   fChain->SetBranchAddress("InnerTrackerBarrelCollection.eDep", InnerTrackerBarrelCollection_eDep, &b_InnerTrackerBarrelCollection_eDep);
   fChain->SetBranchAddress("InnerTrackerBarrelCollection.time", InnerTrackerBarrelCollection_time, &b_InnerTrackerBarrelCollection_time);
   fChain->SetBranchAddress("InnerTrackerBarrelCollection.pathLength", InnerTrackerBarrelCollection_pathLength, &b_InnerTrackerBarrelCollection_pathLength);
   fChain->SetBranchAddress("InnerTrackerBarrelCollection.quality", InnerTrackerBarrelCollection_quality, &b_InnerTrackerBarrelCollection_quality);
   fChain->SetBranchAddress("InnerTrackerBarrelCollection.position.x", InnerTrackerBarrelCollection_position_x, &b_InnerTrackerBarrelCollection_position_x);
   fChain->SetBranchAddress("InnerTrackerBarrelCollection.position.y", InnerTrackerBarrelCollection_position_y, &b_InnerTrackerBarrelCollection_position_y);
   fChain->SetBranchAddress("InnerTrackerBarrelCollection.position.z", InnerTrackerBarrelCollection_position_z, &b_InnerTrackerBarrelCollection_position_z);
   fChain->SetBranchAddress("InnerTrackerBarrelCollection.momentum.x", InnerTrackerBarrelCollection_momentum_x, &b_InnerTrackerBarrelCollection_momentum_x);
   fChain->SetBranchAddress("InnerTrackerBarrelCollection.momentum.y", InnerTrackerBarrelCollection_momentum_y, &b_InnerTrackerBarrelCollection_momentum_y);
   fChain->SetBranchAddress("InnerTrackerBarrelCollection.momentum.z", InnerTrackerBarrelCollection_momentum_z, &b_InnerTrackerBarrelCollection_momentum_z);
   fChain->SetBranchAddress("_InnerTrackerBarrelCollection_particle", &_InnerTrackerBarrelCollection_particle_, &b__InnerTrackerBarrelCollection_particle_);
   fChain->SetBranchAddress("_InnerTrackerBarrelCollection_particle.index", _InnerTrackerBarrelCollection_particle_index, &b__InnerTrackerBarrelCollection_particle_index);
   fChain->SetBranchAddress("_InnerTrackerBarrelCollection_particle.collectionID", _InnerTrackerBarrelCollection_particle_collectionID, &b__InnerTrackerBarrelCollection_particle_collectionID);
   fChain->SetBranchAddress("InnerTrackerBarrelHitsRelations", &InnerTrackerBarrelHitsRelations_, &b_InnerTrackerBarrelHitsRelations_);
   fChain->SetBranchAddress("InnerTrackerBarrelHitsRelations.weight", InnerTrackerBarrelHitsRelations_weight, &b_InnerTrackerBarrelHitsRelations_weight);
   fChain->SetBranchAddress("_InnerTrackerBarrelHitsRelations_rec", &_InnerTrackerBarrelHitsRelations_rec_, &b__InnerTrackerBarrelHitsRelations_rec_);
   fChain->SetBranchAddress("_InnerTrackerBarrelHitsRelations_rec.index", _InnerTrackerBarrelHitsRelations_rec_index, &b__InnerTrackerBarrelHitsRelations_rec_index);
   fChain->SetBranchAddress("_InnerTrackerBarrelHitsRelations_rec.collectionID", _InnerTrackerBarrelHitsRelations_rec_collectionID, &b__InnerTrackerBarrelHitsRelations_rec_collectionID);
   fChain->SetBranchAddress("_InnerTrackerBarrelHitsRelations_sim", &_InnerTrackerBarrelHitsRelations_sim_, &b__InnerTrackerBarrelHitsRelations_sim_);
   fChain->SetBranchAddress("_InnerTrackerBarrelHitsRelations_sim.index", _InnerTrackerBarrelHitsRelations_sim_index, &b__InnerTrackerBarrelHitsRelations_sim_index);
   fChain->SetBranchAddress("_InnerTrackerBarrelHitsRelations_sim.collectionID", _InnerTrackerBarrelHitsRelations_sim_collectionID, &b__InnerTrackerBarrelHitsRelations_sim_collectionID);
   fChain->SetBranchAddress("InnerTrackerEndcapCollection", &InnerTrackerEndcapCollection_, &b_InnerTrackerEndcapCollection_);
   fChain->SetBranchAddress("InnerTrackerEndcapCollection.cellID", InnerTrackerEndcapCollection_cellID, &b_InnerTrackerEndcapCollection_cellID);
   fChain->SetBranchAddress("InnerTrackerEndcapCollection.eDep", InnerTrackerEndcapCollection_eDep, &b_InnerTrackerEndcapCollection_eDep);
   fChain->SetBranchAddress("InnerTrackerEndcapCollection.time", InnerTrackerEndcapCollection_time, &b_InnerTrackerEndcapCollection_time);
   fChain->SetBranchAddress("InnerTrackerEndcapCollection.pathLength", InnerTrackerEndcapCollection_pathLength, &b_InnerTrackerEndcapCollection_pathLength);
   fChain->SetBranchAddress("InnerTrackerEndcapCollection.quality", InnerTrackerEndcapCollection_quality, &b_InnerTrackerEndcapCollection_quality);
   fChain->SetBranchAddress("InnerTrackerEndcapCollection.position.x", InnerTrackerEndcapCollection_position_x, &b_InnerTrackerEndcapCollection_position_x);
   fChain->SetBranchAddress("InnerTrackerEndcapCollection.position.y", InnerTrackerEndcapCollection_position_y, &b_InnerTrackerEndcapCollection_position_y);
   fChain->SetBranchAddress("InnerTrackerEndcapCollection.position.z", InnerTrackerEndcapCollection_position_z, &b_InnerTrackerEndcapCollection_position_z);
   fChain->SetBranchAddress("InnerTrackerEndcapCollection.momentum.x", InnerTrackerEndcapCollection_momentum_x, &b_InnerTrackerEndcapCollection_momentum_x);
   fChain->SetBranchAddress("InnerTrackerEndcapCollection.momentum.y", InnerTrackerEndcapCollection_momentum_y, &b_InnerTrackerEndcapCollection_momentum_y);
   fChain->SetBranchAddress("InnerTrackerEndcapCollection.momentum.z", InnerTrackerEndcapCollection_momentum_z, &b_InnerTrackerEndcapCollection_momentum_z);
   fChain->SetBranchAddress("_InnerTrackerEndcapCollection_particle", &_InnerTrackerEndcapCollection_particle_, &b__InnerTrackerEndcapCollection_particle_);
   fChain->SetBranchAddress("_InnerTrackerEndcapCollection_particle.index", _InnerTrackerEndcapCollection_particle_index, &b__InnerTrackerEndcapCollection_particle_index);
   fChain->SetBranchAddress("_InnerTrackerEndcapCollection_particle.collectionID", _InnerTrackerEndcapCollection_particle_collectionID, &b__InnerTrackerEndcapCollection_particle_collectionID);
   fChain->SetBranchAddress("InnerTrackerEndcapHitsRelations", &InnerTrackerEndcapHitsRelations_, &b_InnerTrackerEndcapHitsRelations_);
   fChain->SetBranchAddress("InnerTrackerEndcapHitsRelations.weight", InnerTrackerEndcapHitsRelations_weight, &b_InnerTrackerEndcapHitsRelations_weight);
   fChain->SetBranchAddress("_InnerTrackerEndcapHitsRelations_rec", &_InnerTrackerEndcapHitsRelations_rec_, &b__InnerTrackerEndcapHitsRelations_rec_);
   fChain->SetBranchAddress("_InnerTrackerEndcapHitsRelations_rec.index", _InnerTrackerEndcapHitsRelations_rec_index, &b__InnerTrackerEndcapHitsRelations_rec_index);
   fChain->SetBranchAddress("_InnerTrackerEndcapHitsRelations_rec.collectionID", _InnerTrackerEndcapHitsRelations_rec_collectionID, &b__InnerTrackerEndcapHitsRelations_rec_collectionID);
   fChain->SetBranchAddress("_InnerTrackerEndcapHitsRelations_sim", &_InnerTrackerEndcapHitsRelations_sim_, &b__InnerTrackerEndcapHitsRelations_sim_);
   fChain->SetBranchAddress("_InnerTrackerEndcapHitsRelations_sim.index", _InnerTrackerEndcapHitsRelations_sim_index, &b__InnerTrackerEndcapHitsRelations_sim_index);
   fChain->SetBranchAddress("_InnerTrackerEndcapHitsRelations_sim.collectionID", _InnerTrackerEndcapHitsRelations_sim_collectionID, &b__InnerTrackerEndcapHitsRelations_sim_collectionID);
   fChain->SetBranchAddress("ITrackerEndcapHits", &ITrackerEndcapHits_, &b_ITrackerEndcapHits_);
   fChain->SetBranchAddress("ITrackerEndcapHits.cellID", ITrackerEndcapHits_cellID, &b_ITrackerEndcapHits_cellID);
   fChain->SetBranchAddress("ITrackerEndcapHits.type", ITrackerEndcapHits_type, &b_ITrackerEndcapHits_type);
   fChain->SetBranchAddress("ITrackerEndcapHits.quality", ITrackerEndcapHits_quality, &b_ITrackerEndcapHits_quality);
   fChain->SetBranchAddress("ITrackerEndcapHits.time", ITrackerEndcapHits_time, &b_ITrackerEndcapHits_time);
   fChain->SetBranchAddress("ITrackerEndcapHits.eDep", ITrackerEndcapHits_eDep, &b_ITrackerEndcapHits_eDep);
   fChain->SetBranchAddress("ITrackerEndcapHits.eDepError", ITrackerEndcapHits_eDepError, &b_ITrackerEndcapHits_eDepError);
   fChain->SetBranchAddress("ITrackerEndcapHits.u.a", ITrackerEndcapHits_u_a, &b_ITrackerEndcapHits_u_a);
   fChain->SetBranchAddress("ITrackerEndcapHits.u.b", ITrackerEndcapHits_u_b, &b_ITrackerEndcapHits_u_b);
   fChain->SetBranchAddress("ITrackerEndcapHits.v.a", ITrackerEndcapHits_v_a, &b_ITrackerEndcapHits_v_a);
   fChain->SetBranchAddress("ITrackerEndcapHits.v.b", ITrackerEndcapHits_v_b, &b_ITrackerEndcapHits_v_b);
   fChain->SetBranchAddress("ITrackerEndcapHits.du", ITrackerEndcapHits_du, &b_ITrackerEndcapHits_du);
   fChain->SetBranchAddress("ITrackerEndcapHits.dv", ITrackerEndcapHits_dv, &b_ITrackerEndcapHits_dv);
   fChain->SetBranchAddress("ITrackerEndcapHits.position.x", ITrackerEndcapHits_position_x, &b_ITrackerEndcapHits_position_x);
   fChain->SetBranchAddress("ITrackerEndcapHits.position.y", ITrackerEndcapHits_position_y, &b_ITrackerEndcapHits_position_y);
   fChain->SetBranchAddress("ITrackerEndcapHits.position.z", ITrackerEndcapHits_position_z, &b_ITrackerEndcapHits_position_z);
   fChain->SetBranchAddress("ITrackerEndcapHits.covMatrix[6]", ITrackerEndcapHits_covMatrix, &b_ITrackerEndcapHits_covMatrix);
   fChain->SetBranchAddress("ITrackerHits", &ITrackerHits_, &b_ITrackerHits_);
   fChain->SetBranchAddress("ITrackerHits.cellID", ITrackerHits_cellID, &b_ITrackerHits_cellID);
   fChain->SetBranchAddress("ITrackerHits.type", ITrackerHits_type, &b_ITrackerHits_type);
   fChain->SetBranchAddress("ITrackerHits.quality", ITrackerHits_quality, &b_ITrackerHits_quality);
   fChain->SetBranchAddress("ITrackerHits.time", ITrackerHits_time, &b_ITrackerHits_time);
   fChain->SetBranchAddress("ITrackerHits.eDep", ITrackerHits_eDep, &b_ITrackerHits_eDep);
   fChain->SetBranchAddress("ITrackerHits.eDepError", ITrackerHits_eDepError, &b_ITrackerHits_eDepError);
   fChain->SetBranchAddress("ITrackerHits.u.a", ITrackerHits_u_a, &b_ITrackerHits_u_a);
   fChain->SetBranchAddress("ITrackerHits.u.b", ITrackerHits_u_b, &b_ITrackerHits_u_b);
   fChain->SetBranchAddress("ITrackerHits.v.a", ITrackerHits_v_a, &b_ITrackerHits_v_a);
   fChain->SetBranchAddress("ITrackerHits.v.b", ITrackerHits_v_b, &b_ITrackerHits_v_b);
   fChain->SetBranchAddress("ITrackerHits.du", ITrackerHits_du, &b_ITrackerHits_du);
   fChain->SetBranchAddress("ITrackerHits.dv", ITrackerHits_dv, &b_ITrackerHits_dv);
   fChain->SetBranchAddress("ITrackerHits.position.x", ITrackerHits_position_x, &b_ITrackerHits_position_x);
   fChain->SetBranchAddress("ITrackerHits.position.y", ITrackerHits_position_y, &b_ITrackerHits_position_y);
   fChain->SetBranchAddress("ITrackerHits.position.z", ITrackerHits_position_z, &b_ITrackerHits_position_z);
   fChain->SetBranchAddress("ITrackerHits.covMatrix[6]", ITrackerHits_covMatrix, &b_ITrackerHits_covMatrix);
   fChain->SetBranchAddress("LooseSelectedPandoraPFOs_objIdx", &LooseSelectedPandoraPFOs_objIdx_, &b_LooseSelectedPandoraPFOs_objIdx_);
   fChain->SetBranchAddress("LooseSelectedPandoraPFOs_objIdx.index", LooseSelectedPandoraPFOs_objIdx_index, &b_LooseSelectedPandoraPFOs_objIdx_index);
   fChain->SetBranchAddress("LooseSelectedPandoraPFOs_objIdx.collectionID", LooseSelectedPandoraPFOs_objIdx_collectionID, &b_LooseSelectedPandoraPFOs_objIdx_collectionID);
   fChain->SetBranchAddress("LumiCalClusters", &LumiCalClusters_, &b_LumiCalClusters_);
   fChain->SetBranchAddress("LumiCalClusters.type", LumiCalClusters_type, &b_LumiCalClusters_type);
   fChain->SetBranchAddress("LumiCalClusters.energy", LumiCalClusters_energy, &b_LumiCalClusters_energy);
   fChain->SetBranchAddress("LumiCalClusters.energyError", LumiCalClusters_energyError, &b_LumiCalClusters_energyError);
   fChain->SetBranchAddress("LumiCalClusters.position.x", LumiCalClusters_position_x, &b_LumiCalClusters_position_x);
   fChain->SetBranchAddress("LumiCalClusters.position.y", LumiCalClusters_position_y, &b_LumiCalClusters_position_y);
   fChain->SetBranchAddress("LumiCalClusters.position.z", LumiCalClusters_position_z, &b_LumiCalClusters_position_z);
   fChain->SetBranchAddress("LumiCalClusters.positionError[6]", LumiCalClusters_positionError, &b_LumiCalClusters_positionError);
   fChain->SetBranchAddress("LumiCalClusters.iTheta", LumiCalClusters_iTheta, &b_LumiCalClusters_iTheta);
   fChain->SetBranchAddress("LumiCalClusters.phi", LumiCalClusters_phi, &b_LumiCalClusters_phi);
   fChain->SetBranchAddress("LumiCalClusters.directionError.x", LumiCalClusters_directionError_x, &b_LumiCalClusters_directionError_x);
   fChain->SetBranchAddress("LumiCalClusters.directionError.y", LumiCalClusters_directionError_y, &b_LumiCalClusters_directionError_y);
   fChain->SetBranchAddress("LumiCalClusters.directionError.z", LumiCalClusters_directionError_z, &b_LumiCalClusters_directionError_z);
   fChain->SetBranchAddress("LumiCalClusters.shapeParameters_begin", LumiCalClusters_shapeParameters_begin, &b_LumiCalClusters_shapeParameters_begin);
   fChain->SetBranchAddress("LumiCalClusters.shapeParameters_end", LumiCalClusters_shapeParameters_end, &b_LumiCalClusters_shapeParameters_end);
   fChain->SetBranchAddress("LumiCalClusters.subdetectorEnergies_begin", LumiCalClusters_subdetectorEnergies_begin, &b_LumiCalClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("LumiCalClusters.subdetectorEnergies_end", LumiCalClusters_subdetectorEnergies_end, &b_LumiCalClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("LumiCalClusters.clusters_begin", LumiCalClusters_clusters_begin, &b_LumiCalClusters_clusters_begin);
   fChain->SetBranchAddress("LumiCalClusters.clusters_end", LumiCalClusters_clusters_end, &b_LumiCalClusters_clusters_end);
   fChain->SetBranchAddress("LumiCalClusters.hits_begin", LumiCalClusters_hits_begin, &b_LumiCalClusters_hits_begin);
   fChain->SetBranchAddress("LumiCalClusters.hits_end", LumiCalClusters_hits_end, &b_LumiCalClusters_hits_end);
   fChain->SetBranchAddress("LumiCalClusters.particleIDs_begin", LumiCalClusters_particleIDs_begin, &b_LumiCalClusters_particleIDs_begin);
   fChain->SetBranchAddress("LumiCalClusters.particleIDs_end", LumiCalClusters_particleIDs_end, &b_LumiCalClusters_particleIDs_end);
   fChain->SetBranchAddress("_LumiCalClusters_clusters", &_LumiCalClusters_clusters_, &b__LumiCalClusters_clusters_);
   fChain->SetBranchAddress("_LumiCalClusters_clusters.index", &_LumiCalClusters_clusters_index, &b__LumiCalClusters_clusters_index);
   fChain->SetBranchAddress("_LumiCalClusters_clusters.collectionID", &_LumiCalClusters_clusters_collectionID, &b__LumiCalClusters_clusters_collectionID);
   fChain->SetBranchAddress("_LumiCalClusters_hits", &_LumiCalClusters_hits_, &b__LumiCalClusters_hits_);
   fChain->SetBranchAddress("_LumiCalClusters_hits.index", _LumiCalClusters_hits_index, &b__LumiCalClusters_hits_index);
   fChain->SetBranchAddress("_LumiCalClusters_hits.collectionID", _LumiCalClusters_hits_collectionID, &b__LumiCalClusters_hits_collectionID);
   fChain->SetBranchAddress("_LumiCalClusters_particleIDs", &_LumiCalClusters_particleIDs_, &b__LumiCalClusters_particleIDs_);
   fChain->SetBranchAddress("_LumiCalClusters_particleIDs.index", &_LumiCalClusters_particleIDs_index, &b__LumiCalClusters_particleIDs_index);
   fChain->SetBranchAddress("_LumiCalClusters_particleIDs.collectionID", &_LumiCalClusters_particleIDs_collectionID, &b__LumiCalClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_LumiCalClusters_shapeParameters", &_LumiCalClusters_shapeParameters, &b__LumiCalClusters_shapeParameters);
   fChain->SetBranchAddress("_LumiCalClusters_subdetectorEnergies", &_LumiCalClusters_subdetectorEnergies, &b__LumiCalClusters_subdetectorEnergies);
   fChain->SetBranchAddress("LumiCalClusters_particleIDs", &LumiCalClusters_particleIDs_, &b_LumiCalClusters_particleIDs_);
   fChain->SetBranchAddress("LumiCalClusters_particleIDs.type", &LumiCalClusters_particleIDs_type, &b_LumiCalClusters_particleIDs_type);
   fChain->SetBranchAddress("LumiCalClusters_particleIDs.PDG", &LumiCalClusters_particleIDs_PDG, &b_LumiCalClusters_particleIDs_PDG);
   fChain->SetBranchAddress("LumiCalClusters_particleIDs.algorithmType", &LumiCalClusters_particleIDs_algorithmType, &b_LumiCalClusters_particleIDs_algorithmType);
   fChain->SetBranchAddress("LumiCalClusters_particleIDs.likelihood", &LumiCalClusters_particleIDs_likelihood, &b_LumiCalClusters_particleIDs_likelihood);
   fChain->SetBranchAddress("LumiCalClusters_particleIDs.parameters_begin", &LumiCalClusters_particleIDs_parameters_begin, &b_LumiCalClusters_particleIDs_parameters_begin);
   fChain->SetBranchAddress("LumiCalClusters_particleIDs.parameters_end", &LumiCalClusters_particleIDs_parameters_end, &b_LumiCalClusters_particleIDs_parameters_end);
   fChain->SetBranchAddress("_LumiCalClusters_particleIDs_parameters", &_LumiCalClusters_particleIDs_parameters, &b__LumiCalClusters_particleIDs_parameters);
   fChain->SetBranchAddress("LumiCalCollection", &LumiCalCollection_, &b_LumiCalCollection_);
   fChain->SetBranchAddress("LumiCalCollection.cellID", LumiCalCollection_cellID, &b_LumiCalCollection_cellID);
   fChain->SetBranchAddress("LumiCalCollection.energy", LumiCalCollection_energy, &b_LumiCalCollection_energy);
   fChain->SetBranchAddress("LumiCalCollection.position.x", LumiCalCollection_position_x, &b_LumiCalCollection_position_x);
   fChain->SetBranchAddress("LumiCalCollection.position.y", LumiCalCollection_position_y, &b_LumiCalCollection_position_y);
   fChain->SetBranchAddress("LumiCalCollection.position.z", LumiCalCollection_position_z, &b_LumiCalCollection_position_z);
   fChain->SetBranchAddress("LumiCalCollection.contributions_begin", LumiCalCollection_contributions_begin, &b_LumiCalCollection_contributions_begin);
   fChain->SetBranchAddress("LumiCalCollection.contributions_end", LumiCalCollection_contributions_end, &b_LumiCalCollection_contributions_end);
   fChain->SetBranchAddress("_LumiCalCollection_contributions", &_LumiCalCollection_contributions_, &b__LumiCalCollection_contributions_);
   fChain->SetBranchAddress("_LumiCalCollection_contributions.index", _LumiCalCollection_contributions_index, &b__LumiCalCollection_contributions_index);
   fChain->SetBranchAddress("_LumiCalCollection_contributions.collectionID", _LumiCalCollection_contributions_collectionID, &b__LumiCalCollection_contributions_collectionID);
   fChain->SetBranchAddress("LumiCalCollectionContributions", &LumiCalCollectionContributions_, &b_LumiCalCollectionContributions_);
   fChain->SetBranchAddress("LumiCalCollectionContributions.PDG", LumiCalCollectionContributions_PDG, &b_LumiCalCollectionContributions_PDG);
   fChain->SetBranchAddress("LumiCalCollectionContributions.energy", LumiCalCollectionContributions_energy, &b_LumiCalCollectionContributions_energy);
   fChain->SetBranchAddress("LumiCalCollectionContributions.time", LumiCalCollectionContributions_time, &b_LumiCalCollectionContributions_time);
   fChain->SetBranchAddress("LumiCalCollectionContributions.stepPosition.x", LumiCalCollectionContributions_stepPosition_x, &b_LumiCalCollectionContributions_stepPosition_x);
   fChain->SetBranchAddress("LumiCalCollectionContributions.stepPosition.y", LumiCalCollectionContributions_stepPosition_y, &b_LumiCalCollectionContributions_stepPosition_y);
   fChain->SetBranchAddress("LumiCalCollectionContributions.stepPosition.z", LumiCalCollectionContributions_stepPosition_z, &b_LumiCalCollectionContributions_stepPosition_z);
   fChain->SetBranchAddress("_LumiCalCollectionContributions_particle", &_LumiCalCollectionContributions_particle_, &b__LumiCalCollectionContributions_particle_);
   fChain->SetBranchAddress("_LumiCalCollectionContributions_particle.index", _LumiCalCollectionContributions_particle_index, &b__LumiCalCollectionContributions_particle_index);
   fChain->SetBranchAddress("_LumiCalCollectionContributions_particle.collectionID", _LumiCalCollectionContributions_particle_collectionID, &b__LumiCalCollectionContributions_particle_collectionID);
   fChain->SetBranchAddress("LumiCalHits", &LumiCalHits_, &b_LumiCalHits_);
   fChain->SetBranchAddress("LumiCalHits.cellID", LumiCalHits_cellID, &b_LumiCalHits_cellID);
   fChain->SetBranchAddress("LumiCalHits.energy", LumiCalHits_energy, &b_LumiCalHits_energy);
   fChain->SetBranchAddress("LumiCalHits.energyError", LumiCalHits_energyError, &b_LumiCalHits_energyError);
   fChain->SetBranchAddress("LumiCalHits.time", LumiCalHits_time, &b_LumiCalHits_time);
   fChain->SetBranchAddress("LumiCalHits.position.x", LumiCalHits_position_x, &b_LumiCalHits_position_x);
   fChain->SetBranchAddress("LumiCalHits.position.y", LumiCalHits_position_y, &b_LumiCalHits_position_y);
   fChain->SetBranchAddress("LumiCalHits.position.z", LumiCalHits_position_z, &b_LumiCalHits_position_z);
   fChain->SetBranchAddress("LumiCalHits.type", LumiCalHits_type, &b_LumiCalHits_type);
   fChain->SetBranchAddress("LumiCalRecoParticles", &LumiCalRecoParticles_, &b_LumiCalRecoParticles_);
   fChain->SetBranchAddress("LumiCalRecoParticles.PDG", LumiCalRecoParticles_PDG, &b_LumiCalRecoParticles_PDG);
   fChain->SetBranchAddress("LumiCalRecoParticles.energy", LumiCalRecoParticles_energy, &b_LumiCalRecoParticles_energy);
   fChain->SetBranchAddress("LumiCalRecoParticles.momentum.x", LumiCalRecoParticles_momentum_x, &b_LumiCalRecoParticles_momentum_x);
   fChain->SetBranchAddress("LumiCalRecoParticles.momentum.y", LumiCalRecoParticles_momentum_y, &b_LumiCalRecoParticles_momentum_y);
   fChain->SetBranchAddress("LumiCalRecoParticles.momentum.z", LumiCalRecoParticles_momentum_z, &b_LumiCalRecoParticles_momentum_z);
   fChain->SetBranchAddress("LumiCalRecoParticles.referencePoint.x", LumiCalRecoParticles_referencePoint_x, &b_LumiCalRecoParticles_referencePoint_x);
   fChain->SetBranchAddress("LumiCalRecoParticles.referencePoint.y", LumiCalRecoParticles_referencePoint_y, &b_LumiCalRecoParticles_referencePoint_y);
   fChain->SetBranchAddress("LumiCalRecoParticles.referencePoint.z", LumiCalRecoParticles_referencePoint_z, &b_LumiCalRecoParticles_referencePoint_z);
   fChain->SetBranchAddress("LumiCalRecoParticles.charge", LumiCalRecoParticles_charge, &b_LumiCalRecoParticles_charge);
   fChain->SetBranchAddress("LumiCalRecoParticles.mass", LumiCalRecoParticles_mass, &b_LumiCalRecoParticles_mass);
   fChain->SetBranchAddress("LumiCalRecoParticles.goodnessOfPID", LumiCalRecoParticles_goodnessOfPID, &b_LumiCalRecoParticles_goodnessOfPID);
   fChain->SetBranchAddress("LumiCalRecoParticles.covMatrix[10]", LumiCalRecoParticles_covMatrix, &b_LumiCalRecoParticles_covMatrix);
   fChain->SetBranchAddress("LumiCalRecoParticles.clusters_begin", LumiCalRecoParticles_clusters_begin, &b_LumiCalRecoParticles_clusters_begin);
   fChain->SetBranchAddress("LumiCalRecoParticles.clusters_end", LumiCalRecoParticles_clusters_end, &b_LumiCalRecoParticles_clusters_end);
   fChain->SetBranchAddress("LumiCalRecoParticles.tracks_begin", LumiCalRecoParticles_tracks_begin, &b_LumiCalRecoParticles_tracks_begin);
   fChain->SetBranchAddress("LumiCalRecoParticles.tracks_end", LumiCalRecoParticles_tracks_end, &b_LumiCalRecoParticles_tracks_end);
   fChain->SetBranchAddress("LumiCalRecoParticles.particles_begin", LumiCalRecoParticles_particles_begin, &b_LumiCalRecoParticles_particles_begin);
   fChain->SetBranchAddress("LumiCalRecoParticles.particles_end", LumiCalRecoParticles_particles_end, &b_LumiCalRecoParticles_particles_end);
   fChain->SetBranchAddress("LumiCalRecoParticles.particleIDs_begin", LumiCalRecoParticles_particleIDs_begin, &b_LumiCalRecoParticles_particleIDs_begin);
   fChain->SetBranchAddress("LumiCalRecoParticles.particleIDs_end", LumiCalRecoParticles_particleIDs_end, &b_LumiCalRecoParticles_particleIDs_end);
   fChain->SetBranchAddress("_LumiCalRecoParticles_clusters", &_LumiCalRecoParticles_clusters_, &b__LumiCalRecoParticles_clusters_);
   fChain->SetBranchAddress("_LumiCalRecoParticles_clusters.index", _LumiCalRecoParticles_clusters_index, &b__LumiCalRecoParticles_clusters_index);
   fChain->SetBranchAddress("_LumiCalRecoParticles_clusters.collectionID", _LumiCalRecoParticles_clusters_collectionID, &b__LumiCalRecoParticles_clusters_collectionID);
   fChain->SetBranchAddress("_LumiCalRecoParticles_tracks", &_LumiCalRecoParticles_tracks_, &b__LumiCalRecoParticles_tracks_);
   fChain->SetBranchAddress("_LumiCalRecoParticles_tracks.index", &_LumiCalRecoParticles_tracks_index, &b__LumiCalRecoParticles_tracks_index);
   fChain->SetBranchAddress("_LumiCalRecoParticles_tracks.collectionID", &_LumiCalRecoParticles_tracks_collectionID, &b__LumiCalRecoParticles_tracks_collectionID);
   fChain->SetBranchAddress("_LumiCalRecoParticles_particles", &_LumiCalRecoParticles_particles_, &b__LumiCalRecoParticles_particles_);
   fChain->SetBranchAddress("_LumiCalRecoParticles_particles.index", &_LumiCalRecoParticles_particles_index, &b__LumiCalRecoParticles_particles_index);
   fChain->SetBranchAddress("_LumiCalRecoParticles_particles.collectionID", &_LumiCalRecoParticles_particles_collectionID, &b__LumiCalRecoParticles_particles_collectionID);
   fChain->SetBranchAddress("_LumiCalRecoParticles_particleIDs", &_LumiCalRecoParticles_particleIDs_, &b__LumiCalRecoParticles_particleIDs_);
   fChain->SetBranchAddress("_LumiCalRecoParticles_particleIDs.index", &_LumiCalRecoParticles_particleIDs_index, &b__LumiCalRecoParticles_particleIDs_index);
   fChain->SetBranchAddress("_LumiCalRecoParticles_particleIDs.collectionID", &_LumiCalRecoParticles_particleIDs_collectionID, &b__LumiCalRecoParticles_particleIDs_collectionID);
   fChain->SetBranchAddress("_LumiCalRecoParticles_startVertex", &_LumiCalRecoParticles_startVertex_, &b__LumiCalRecoParticles_startVertex_);
   fChain->SetBranchAddress("_LumiCalRecoParticles_startVertex.index", _LumiCalRecoParticles_startVertex_index, &b__LumiCalRecoParticles_startVertex_index);
   fChain->SetBranchAddress("_LumiCalRecoParticles_startVertex.collectionID", _LumiCalRecoParticles_startVertex_collectionID, &b__LumiCalRecoParticles_startVertex_collectionID);
   fChain->SetBranchAddress("_LumiCalRecoParticles_particleIDUsed", &_LumiCalRecoParticles_particleIDUsed_, &b__LumiCalRecoParticles_particleIDUsed_);
   fChain->SetBranchAddress("_LumiCalRecoParticles_particleIDUsed.index", _LumiCalRecoParticles_particleIDUsed_index, &b__LumiCalRecoParticles_particleIDUsed_index);
   fChain->SetBranchAddress("_LumiCalRecoParticles_particleIDUsed.collectionID", _LumiCalRecoParticles_particleIDUsed_collectionID, &b__LumiCalRecoParticles_particleIDUsed_collectionID);
   fChain->SetBranchAddress("LumiCalRecoParticles_particleIDs", &LumiCalRecoParticles_particleIDs_, &b_LumiCalRecoParticles_particleIDs_);
   fChain->SetBranchAddress("LumiCalRecoParticles_particleIDs.type", &LumiCalRecoParticles_particleIDs_type, &b_LumiCalRecoParticles_particleIDs_type);
   fChain->SetBranchAddress("LumiCalRecoParticles_particleIDs.PDG", &LumiCalRecoParticles_particleIDs_PDG, &b_LumiCalRecoParticles_particleIDs_PDG);
   fChain->SetBranchAddress("LumiCalRecoParticles_particleIDs.algorithmType", &LumiCalRecoParticles_particleIDs_algorithmType, &b_LumiCalRecoParticles_particleIDs_algorithmType);
   fChain->SetBranchAddress("LumiCalRecoParticles_particleIDs.likelihood", &LumiCalRecoParticles_particleIDs_likelihood, &b_LumiCalRecoParticles_particleIDs_likelihood);
   fChain->SetBranchAddress("LumiCalRecoParticles_particleIDs.parameters_begin", &LumiCalRecoParticles_particleIDs_parameters_begin, &b_LumiCalRecoParticles_particleIDs_parameters_begin);
   fChain->SetBranchAddress("LumiCalRecoParticles_particleIDs.parameters_end", &LumiCalRecoParticles_particleIDs_parameters_end, &b_LumiCalRecoParticles_particleIDs_parameters_end);
   fChain->SetBranchAddress("_LumiCalRecoParticles_particleIDs_parameters", &_LumiCalRecoParticles_particleIDs_parameters, &b__LumiCalRecoParticles_particleIDs_parameters);
   fChain->SetBranchAddress("MCParticles", &MCParticles_, &b_MCParticles_);
   fChain->SetBranchAddress("MCParticles.PDG", MCParticles_PDG, &b_MCParticles_PDG);
   fChain->SetBranchAddress("MCParticles.generatorStatus", MCParticles_generatorStatus, &b_MCParticles_generatorStatus);
   fChain->SetBranchAddress("MCParticles.simulatorStatus", MCParticles_simulatorStatus, &b_MCParticles_simulatorStatus);
   fChain->SetBranchAddress("MCParticles.charge", MCParticles_charge, &b_MCParticles_charge);
   fChain->SetBranchAddress("MCParticles.time", MCParticles_time, &b_MCParticles_time);
   fChain->SetBranchAddress("MCParticles.mass", MCParticles_mass, &b_MCParticles_mass);
   fChain->SetBranchAddress("MCParticles.vertex.x", MCParticles_vertex_x, &b_MCParticles_vertex_x);
   fChain->SetBranchAddress("MCParticles.vertex.y", MCParticles_vertex_y, &b_MCParticles_vertex_y);
   fChain->SetBranchAddress("MCParticles.vertex.z", MCParticles_vertex_z, &b_MCParticles_vertex_z);
   fChain->SetBranchAddress("MCParticles.endpoint.x", MCParticles_endpoint_x, &b_MCParticles_endpoint_x);
   fChain->SetBranchAddress("MCParticles.endpoint.y", MCParticles_endpoint_y, &b_MCParticles_endpoint_y);
   fChain->SetBranchAddress("MCParticles.endpoint.z", MCParticles_endpoint_z, &b_MCParticles_endpoint_z);
   fChain->SetBranchAddress("MCParticles.momentum.x", MCParticles_momentum_x, &b_MCParticles_momentum_x);
   fChain->SetBranchAddress("MCParticles.momentum.y", MCParticles_momentum_y, &b_MCParticles_momentum_y);
   fChain->SetBranchAddress("MCParticles.momentum.z", MCParticles_momentum_z, &b_MCParticles_momentum_z);
   fChain->SetBranchAddress("MCParticles.momentumAtEndpoint.x", MCParticles_momentumAtEndpoint_x, &b_MCParticles_momentumAtEndpoint_x);
   fChain->SetBranchAddress("MCParticles.momentumAtEndpoint.y", MCParticles_momentumAtEndpoint_y, &b_MCParticles_momentumAtEndpoint_y);
   fChain->SetBranchAddress("MCParticles.momentumAtEndpoint.z", MCParticles_momentumAtEndpoint_z, &b_MCParticles_momentumAtEndpoint_z);
   fChain->SetBranchAddress("MCParticles.spin.x", MCParticles_spin_x, &b_MCParticles_spin_x);
   fChain->SetBranchAddress("MCParticles.spin.y", MCParticles_spin_y, &b_MCParticles_spin_y);
   fChain->SetBranchAddress("MCParticles.spin.z", MCParticles_spin_z, &b_MCParticles_spin_z);
   fChain->SetBranchAddress("MCParticles.colorFlow.a", MCParticles_colorFlow_a, &b_MCParticles_colorFlow_a);
   fChain->SetBranchAddress("MCParticles.colorFlow.b", MCParticles_colorFlow_b, &b_MCParticles_colorFlow_b);
   fChain->SetBranchAddress("MCParticles.parents_begin", MCParticles_parents_begin, &b_MCParticles_parents_begin);
   fChain->SetBranchAddress("MCParticles.parents_end", MCParticles_parents_end, &b_MCParticles_parents_end);
   fChain->SetBranchAddress("MCParticles.daughters_begin", MCParticles_daughters_begin, &b_MCParticles_daughters_begin);
   fChain->SetBranchAddress("MCParticles.daughters_end", MCParticles_daughters_end, &b_MCParticles_daughters_end);
   fChain->SetBranchAddress("_MCParticles_parents", &_MCParticles_parents_, &b__MCParticles_parents_);
   fChain->SetBranchAddress("_MCParticles_parents.index", _MCParticles_parents_index, &b__MCParticles_parents_index);
   fChain->SetBranchAddress("_MCParticles_parents.collectionID", _MCParticles_parents_collectionID, &b__MCParticles_parents_collectionID);
   fChain->SetBranchAddress("_MCParticles_daughters", &_MCParticles_daughters_, &b__MCParticles_daughters_);
   fChain->SetBranchAddress("_MCParticles_daughters.index", _MCParticles_daughters_index, &b__MCParticles_daughters_index);
   fChain->SetBranchAddress("_MCParticles_daughters.collectionID", _MCParticles_daughters_collectionID, &b__MCParticles_daughters_collectionID);
   fChain->SetBranchAddress("MCParticlesSkimmed_objIdx", &MCParticlesSkimmed_objIdx_, &b_MCParticlesSkimmed_objIdx_);
   fChain->SetBranchAddress("MCParticlesSkimmed_objIdx.index", MCParticlesSkimmed_objIdx_index, &b_MCParticlesSkimmed_objIdx_index);
   fChain->SetBranchAddress("MCParticlesSkimmed_objIdx.collectionID", MCParticlesSkimmed_objIdx_collectionID, &b_MCParticlesSkimmed_objIdx_collectionID);
   fChain->SetBranchAddress("MCPhysicsParticles_objIdx", &MCPhysicsParticles_objIdx_, &b_MCPhysicsParticles_objIdx_);
   fChain->SetBranchAddress("MCPhysicsParticles_objIdx.index", MCPhysicsParticles_objIdx_index, &b_MCPhysicsParticles_objIdx_index);
   fChain->SetBranchAddress("MCPhysicsParticles_objIdx.collectionID", MCPhysicsParticles_objIdx_collectionID, &b_MCPhysicsParticles_objIdx_collectionID);
   fChain->SetBranchAddress("MCTruthClusterLink", &MCTruthClusterLink_, &b_MCTruthClusterLink_);
   fChain->SetBranchAddress("MCTruthClusterLink.weight", MCTruthClusterLink_weight, &b_MCTruthClusterLink_weight);
   fChain->SetBranchAddress("_MCTruthClusterLink_rec", &_MCTruthClusterLink_rec_, &b__MCTruthClusterLink_rec_);
   fChain->SetBranchAddress("_MCTruthClusterLink_rec.index", _MCTruthClusterLink_rec_index, &b__MCTruthClusterLink_rec_index);
   fChain->SetBranchAddress("_MCTruthClusterLink_rec.collectionID", _MCTruthClusterLink_rec_collectionID, &b__MCTruthClusterLink_rec_collectionID);
   fChain->SetBranchAddress("_MCTruthClusterLink_sim", &_MCTruthClusterLink_sim_, &b__MCTruthClusterLink_sim_);
   fChain->SetBranchAddress("_MCTruthClusterLink_sim.index", _MCTruthClusterLink_sim_index, &b__MCTruthClusterLink_sim_index);
   fChain->SetBranchAddress("_MCTruthClusterLink_sim.collectionID", _MCTruthClusterLink_sim_collectionID, &b__MCTruthClusterLink_sim_collectionID);
   fChain->SetBranchAddress("MCTruthRecoLink", &MCTruthRecoLink_, &b_MCTruthRecoLink_);
   fChain->SetBranchAddress("MCTruthRecoLink.weight", MCTruthRecoLink_weight, &b_MCTruthRecoLink_weight);
   fChain->SetBranchAddress("_MCTruthRecoLink_rec", &_MCTruthRecoLink_rec_, &b__MCTruthRecoLink_rec_);
   fChain->SetBranchAddress("_MCTruthRecoLink_rec.index", _MCTruthRecoLink_rec_index, &b__MCTruthRecoLink_rec_index);
   fChain->SetBranchAddress("_MCTruthRecoLink_rec.collectionID", _MCTruthRecoLink_rec_collectionID, &b__MCTruthRecoLink_rec_collectionID);
   fChain->SetBranchAddress("_MCTruthRecoLink_sim", &_MCTruthRecoLink_sim_, &b__MCTruthRecoLink_sim_);
   fChain->SetBranchAddress("_MCTruthRecoLink_sim.index", _MCTruthRecoLink_sim_index, &b__MCTruthRecoLink_sim_index);
   fChain->SetBranchAddress("_MCTruthRecoLink_sim.collectionID", _MCTruthRecoLink_sim_collectionID, &b__MCTruthRecoLink_sim_collectionID);
   fChain->SetBranchAddress("MCTruthSiTracksLink", &MCTruthSiTracksLink_, &b_MCTruthSiTracksLink_);
   fChain->SetBranchAddress("MCTruthSiTracksLink.weight", MCTruthSiTracksLink_weight, &b_MCTruthSiTracksLink_weight);
   fChain->SetBranchAddress("_MCTruthSiTracksLink_rec", &_MCTruthSiTracksLink_rec_, &b__MCTruthSiTracksLink_rec_);
   fChain->SetBranchAddress("_MCTruthSiTracksLink_rec.index", _MCTruthSiTracksLink_rec_index, &b__MCTruthSiTracksLink_rec_index);
   fChain->SetBranchAddress("_MCTruthSiTracksLink_rec.collectionID", _MCTruthSiTracksLink_rec_collectionID, &b__MCTruthSiTracksLink_rec_collectionID);
   fChain->SetBranchAddress("_MCTruthSiTracksLink_sim", &_MCTruthSiTracksLink_sim_, &b__MCTruthSiTracksLink_sim_);
   fChain->SetBranchAddress("_MCTruthSiTracksLink_sim.index", _MCTruthSiTracksLink_sim_index, &b__MCTruthSiTracksLink_sim_index);
   fChain->SetBranchAddress("_MCTruthSiTracksLink_sim.collectionID", _MCTruthSiTracksLink_sim_collectionID, &b__MCTruthSiTracksLink_sim_collectionID);
   fChain->SetBranchAddress("MUON", &MUON_, &b_MUON_);
   fChain->SetBranchAddress("MUON.cellID", MUON_cellID, &b_MUON_cellID);
   fChain->SetBranchAddress("MUON.energy", MUON_energy, &b_MUON_energy);
   fChain->SetBranchAddress("MUON.energyError", MUON_energyError, &b_MUON_energyError);
   fChain->SetBranchAddress("MUON.time", MUON_time, &b_MUON_time);
   fChain->SetBranchAddress("MUON.position.x", MUON_position_x, &b_MUON_position_x);
   fChain->SetBranchAddress("MUON.position.y", MUON_position_y, &b_MUON_position_y);
   fChain->SetBranchAddress("MUON.position.z", MUON_position_z, &b_MUON_position_z);
   fChain->SetBranchAddress("MUON.type", MUON_type, &b_MUON_type);
   fChain->SetBranchAddress("OTrackerEndcapHits", &OTrackerEndcapHits_, &b_OTrackerEndcapHits_);
   fChain->SetBranchAddress("OTrackerEndcapHits.cellID", OTrackerEndcapHits_cellID, &b_OTrackerEndcapHits_cellID);
   fChain->SetBranchAddress("OTrackerEndcapHits.type", OTrackerEndcapHits_type, &b_OTrackerEndcapHits_type);
   fChain->SetBranchAddress("OTrackerEndcapHits.quality", OTrackerEndcapHits_quality, &b_OTrackerEndcapHits_quality);
   fChain->SetBranchAddress("OTrackerEndcapHits.time", OTrackerEndcapHits_time, &b_OTrackerEndcapHits_time);
   fChain->SetBranchAddress("OTrackerEndcapHits.eDep", OTrackerEndcapHits_eDep, &b_OTrackerEndcapHits_eDep);
   fChain->SetBranchAddress("OTrackerEndcapHits.eDepError", OTrackerEndcapHits_eDepError, &b_OTrackerEndcapHits_eDepError);
   fChain->SetBranchAddress("OTrackerEndcapHits.u.a", OTrackerEndcapHits_u_a, &b_OTrackerEndcapHits_u_a);
   fChain->SetBranchAddress("OTrackerEndcapHits.u.b", OTrackerEndcapHits_u_b, &b_OTrackerEndcapHits_u_b);
   fChain->SetBranchAddress("OTrackerEndcapHits.v.a", OTrackerEndcapHits_v_a, &b_OTrackerEndcapHits_v_a);
   fChain->SetBranchAddress("OTrackerEndcapHits.v.b", OTrackerEndcapHits_v_b, &b_OTrackerEndcapHits_v_b);
   fChain->SetBranchAddress("OTrackerEndcapHits.du", OTrackerEndcapHits_du, &b_OTrackerEndcapHits_du);
   fChain->SetBranchAddress("OTrackerEndcapHits.dv", OTrackerEndcapHits_dv, &b_OTrackerEndcapHits_dv);
   fChain->SetBranchAddress("OTrackerEndcapHits.position.x", OTrackerEndcapHits_position_x, &b_OTrackerEndcapHits_position_x);
   fChain->SetBranchAddress("OTrackerEndcapHits.position.y", OTrackerEndcapHits_position_y, &b_OTrackerEndcapHits_position_y);
   fChain->SetBranchAddress("OTrackerEndcapHits.position.z", OTrackerEndcapHits_position_z, &b_OTrackerEndcapHits_position_z);
   fChain->SetBranchAddress("OTrackerEndcapHits.covMatrix[6]", OTrackerEndcapHits_covMatrix, &b_OTrackerEndcapHits_covMatrix);
   fChain->SetBranchAddress("OTrackerHits", &OTrackerHits_, &b_OTrackerHits_);
   fChain->SetBranchAddress("OTrackerHits.cellID", OTrackerHits_cellID, &b_OTrackerHits_cellID);
   fChain->SetBranchAddress("OTrackerHits.type", OTrackerHits_type, &b_OTrackerHits_type);
   fChain->SetBranchAddress("OTrackerHits.quality", OTrackerHits_quality, &b_OTrackerHits_quality);
   fChain->SetBranchAddress("OTrackerHits.time", OTrackerHits_time, &b_OTrackerHits_time);
   fChain->SetBranchAddress("OTrackerHits.eDep", OTrackerHits_eDep, &b_OTrackerHits_eDep);
   fChain->SetBranchAddress("OTrackerHits.eDepError", OTrackerHits_eDepError, &b_OTrackerHits_eDepError);
   fChain->SetBranchAddress("OTrackerHits.u.a", OTrackerHits_u_a, &b_OTrackerHits_u_a);
   fChain->SetBranchAddress("OTrackerHits.u.b", OTrackerHits_u_b, &b_OTrackerHits_u_b);
   fChain->SetBranchAddress("OTrackerHits.v.a", OTrackerHits_v_a, &b_OTrackerHits_v_a);
   fChain->SetBranchAddress("OTrackerHits.v.b", OTrackerHits_v_b, &b_OTrackerHits_v_b);
   fChain->SetBranchAddress("OTrackerHits.du", OTrackerHits_du, &b_OTrackerHits_du);
   fChain->SetBranchAddress("OTrackerHits.dv", OTrackerHits_dv, &b_OTrackerHits_dv);
   fChain->SetBranchAddress("OTrackerHits.position.x", OTrackerHits_position_x, &b_OTrackerHits_position_x);
   fChain->SetBranchAddress("OTrackerHits.position.y", OTrackerHits_position_y, &b_OTrackerHits_position_y);
   fChain->SetBranchAddress("OTrackerHits.position.z", OTrackerHits_position_z, &b_OTrackerHits_position_z);
   fChain->SetBranchAddress("OTrackerHits.covMatrix[6]", OTrackerHits_covMatrix, &b_OTrackerHits_covMatrix);
   fChain->SetBranchAddress("OuterTrackerBarrelCollection", &OuterTrackerBarrelCollection_, &b_OuterTrackerBarrelCollection_);
   fChain->SetBranchAddress("OuterTrackerBarrelCollection.cellID", OuterTrackerBarrelCollection_cellID, &b_OuterTrackerBarrelCollection_cellID);
   fChain->SetBranchAddress("OuterTrackerBarrelCollection.eDep", OuterTrackerBarrelCollection_eDep, &b_OuterTrackerBarrelCollection_eDep);
   fChain->SetBranchAddress("OuterTrackerBarrelCollection.time", OuterTrackerBarrelCollection_time, &b_OuterTrackerBarrelCollection_time);
   fChain->SetBranchAddress("OuterTrackerBarrelCollection.pathLength", OuterTrackerBarrelCollection_pathLength, &b_OuterTrackerBarrelCollection_pathLength);
   fChain->SetBranchAddress("OuterTrackerBarrelCollection.quality", OuterTrackerBarrelCollection_quality, &b_OuterTrackerBarrelCollection_quality);
   fChain->SetBranchAddress("OuterTrackerBarrelCollection.position.x", OuterTrackerBarrelCollection_position_x, &b_OuterTrackerBarrelCollection_position_x);
   fChain->SetBranchAddress("OuterTrackerBarrelCollection.position.y", OuterTrackerBarrelCollection_position_y, &b_OuterTrackerBarrelCollection_position_y);
   fChain->SetBranchAddress("OuterTrackerBarrelCollection.position.z", OuterTrackerBarrelCollection_position_z, &b_OuterTrackerBarrelCollection_position_z);
   fChain->SetBranchAddress("OuterTrackerBarrelCollection.momentum.x", OuterTrackerBarrelCollection_momentum_x, &b_OuterTrackerBarrelCollection_momentum_x);
   fChain->SetBranchAddress("OuterTrackerBarrelCollection.momentum.y", OuterTrackerBarrelCollection_momentum_y, &b_OuterTrackerBarrelCollection_momentum_y);
   fChain->SetBranchAddress("OuterTrackerBarrelCollection.momentum.z", OuterTrackerBarrelCollection_momentum_z, &b_OuterTrackerBarrelCollection_momentum_z);
   fChain->SetBranchAddress("_OuterTrackerBarrelCollection_particle", &_OuterTrackerBarrelCollection_particle_, &b__OuterTrackerBarrelCollection_particle_);
   fChain->SetBranchAddress("_OuterTrackerBarrelCollection_particle.index", _OuterTrackerBarrelCollection_particle_index, &b__OuterTrackerBarrelCollection_particle_index);
   fChain->SetBranchAddress("_OuterTrackerBarrelCollection_particle.collectionID", _OuterTrackerBarrelCollection_particle_collectionID, &b__OuterTrackerBarrelCollection_particle_collectionID);
   fChain->SetBranchAddress("OuterTrackerBarrelHitsRelations", &OuterTrackerBarrelHitsRelations_, &b_OuterTrackerBarrelHitsRelations_);
   fChain->SetBranchAddress("OuterTrackerBarrelHitsRelations.weight", OuterTrackerBarrelHitsRelations_weight, &b_OuterTrackerBarrelHitsRelations_weight);
   fChain->SetBranchAddress("_OuterTrackerBarrelHitsRelations_rec", &_OuterTrackerBarrelHitsRelations_rec_, &b__OuterTrackerBarrelHitsRelations_rec_);
   fChain->SetBranchAddress("_OuterTrackerBarrelHitsRelations_rec.index", _OuterTrackerBarrelHitsRelations_rec_index, &b__OuterTrackerBarrelHitsRelations_rec_index);
   fChain->SetBranchAddress("_OuterTrackerBarrelHitsRelations_rec.collectionID", _OuterTrackerBarrelHitsRelations_rec_collectionID, &b__OuterTrackerBarrelHitsRelations_rec_collectionID);
   fChain->SetBranchAddress("_OuterTrackerBarrelHitsRelations_sim", &_OuterTrackerBarrelHitsRelations_sim_, &b__OuterTrackerBarrelHitsRelations_sim_);
   fChain->SetBranchAddress("_OuterTrackerBarrelHitsRelations_sim.index", _OuterTrackerBarrelHitsRelations_sim_index, &b__OuterTrackerBarrelHitsRelations_sim_index);
   fChain->SetBranchAddress("_OuterTrackerBarrelHitsRelations_sim.collectionID", _OuterTrackerBarrelHitsRelations_sim_collectionID, &b__OuterTrackerBarrelHitsRelations_sim_collectionID);
   fChain->SetBranchAddress("OuterTrackerEndcapCollection", &OuterTrackerEndcapCollection_, &b_OuterTrackerEndcapCollection_);
   fChain->SetBranchAddress("OuterTrackerEndcapCollection.cellID", OuterTrackerEndcapCollection_cellID, &b_OuterTrackerEndcapCollection_cellID);
   fChain->SetBranchAddress("OuterTrackerEndcapCollection.eDep", OuterTrackerEndcapCollection_eDep, &b_OuterTrackerEndcapCollection_eDep);
   fChain->SetBranchAddress("OuterTrackerEndcapCollection.time", OuterTrackerEndcapCollection_time, &b_OuterTrackerEndcapCollection_time);
   fChain->SetBranchAddress("OuterTrackerEndcapCollection.pathLength", OuterTrackerEndcapCollection_pathLength, &b_OuterTrackerEndcapCollection_pathLength);
   fChain->SetBranchAddress("OuterTrackerEndcapCollection.quality", OuterTrackerEndcapCollection_quality, &b_OuterTrackerEndcapCollection_quality);
   fChain->SetBranchAddress("OuterTrackerEndcapCollection.position.x", OuterTrackerEndcapCollection_position_x, &b_OuterTrackerEndcapCollection_position_x);
   fChain->SetBranchAddress("OuterTrackerEndcapCollection.position.y", OuterTrackerEndcapCollection_position_y, &b_OuterTrackerEndcapCollection_position_y);
   fChain->SetBranchAddress("OuterTrackerEndcapCollection.position.z", OuterTrackerEndcapCollection_position_z, &b_OuterTrackerEndcapCollection_position_z);
   fChain->SetBranchAddress("OuterTrackerEndcapCollection.momentum.x", OuterTrackerEndcapCollection_momentum_x, &b_OuterTrackerEndcapCollection_momentum_x);
   fChain->SetBranchAddress("OuterTrackerEndcapCollection.momentum.y", OuterTrackerEndcapCollection_momentum_y, &b_OuterTrackerEndcapCollection_momentum_y);
   fChain->SetBranchAddress("OuterTrackerEndcapCollection.momentum.z", OuterTrackerEndcapCollection_momentum_z, &b_OuterTrackerEndcapCollection_momentum_z);
   fChain->SetBranchAddress("_OuterTrackerEndcapCollection_particle", &_OuterTrackerEndcapCollection_particle_, &b__OuterTrackerEndcapCollection_particle_);
   fChain->SetBranchAddress("_OuterTrackerEndcapCollection_particle.index", _OuterTrackerEndcapCollection_particle_index, &b__OuterTrackerEndcapCollection_particle_index);
   fChain->SetBranchAddress("_OuterTrackerEndcapCollection_particle.collectionID", _OuterTrackerEndcapCollection_particle_collectionID, &b__OuterTrackerEndcapCollection_particle_collectionID);
   fChain->SetBranchAddress("OuterTrackerEndcapHitsRelations", &OuterTrackerEndcapHitsRelations_, &b_OuterTrackerEndcapHitsRelations_);
   fChain->SetBranchAddress("OuterTrackerEndcapHitsRelations.weight", OuterTrackerEndcapHitsRelations_weight, &b_OuterTrackerEndcapHitsRelations_weight);
   fChain->SetBranchAddress("_OuterTrackerEndcapHitsRelations_rec", &_OuterTrackerEndcapHitsRelations_rec_, &b__OuterTrackerEndcapHitsRelations_rec_);
   fChain->SetBranchAddress("_OuterTrackerEndcapHitsRelations_rec.index", _OuterTrackerEndcapHitsRelations_rec_index, &b__OuterTrackerEndcapHitsRelations_rec_index);
   fChain->SetBranchAddress("_OuterTrackerEndcapHitsRelations_rec.collectionID", _OuterTrackerEndcapHitsRelations_rec_collectionID, &b__OuterTrackerEndcapHitsRelations_rec_collectionID);
   fChain->SetBranchAddress("_OuterTrackerEndcapHitsRelations_sim", &_OuterTrackerEndcapHitsRelations_sim_, &b__OuterTrackerEndcapHitsRelations_sim_);
   fChain->SetBranchAddress("_OuterTrackerEndcapHitsRelations_sim.index", _OuterTrackerEndcapHitsRelations_sim_index, &b__OuterTrackerEndcapHitsRelations_sim_index);
   fChain->SetBranchAddress("_OuterTrackerEndcapHitsRelations_sim.collectionID", _OuterTrackerEndcapHitsRelations_sim_collectionID, &b__OuterTrackerEndcapHitsRelations_sim_collectionID);
   fChain->SetBranchAddress("PandoraClusters", &PandoraClusters_, &b_PandoraClusters_);
   fChain->SetBranchAddress("PandoraClusters.type", PandoraClusters_type, &b_PandoraClusters_type);
   fChain->SetBranchAddress("PandoraClusters.energy", PandoraClusters_energy, &b_PandoraClusters_energy);
   fChain->SetBranchAddress("PandoraClusters.energyError", PandoraClusters_energyError, &b_PandoraClusters_energyError);
   fChain->SetBranchAddress("PandoraClusters.position.x", PandoraClusters_position_x, &b_PandoraClusters_position_x);
   fChain->SetBranchAddress("PandoraClusters.position.y", PandoraClusters_position_y, &b_PandoraClusters_position_y);
   fChain->SetBranchAddress("PandoraClusters.position.z", PandoraClusters_position_z, &b_PandoraClusters_position_z);
   fChain->SetBranchAddress("PandoraClusters.positionError[6]", PandoraClusters_positionError, &b_PandoraClusters_positionError);
   fChain->SetBranchAddress("PandoraClusters.iTheta", PandoraClusters_iTheta, &b_PandoraClusters_iTheta);
   fChain->SetBranchAddress("PandoraClusters.phi", PandoraClusters_phi, &b_PandoraClusters_phi);
   fChain->SetBranchAddress("PandoraClusters.directionError.x", PandoraClusters_directionError_x, &b_PandoraClusters_directionError_x);
   fChain->SetBranchAddress("PandoraClusters.directionError.y", PandoraClusters_directionError_y, &b_PandoraClusters_directionError_y);
   fChain->SetBranchAddress("PandoraClusters.directionError.z", PandoraClusters_directionError_z, &b_PandoraClusters_directionError_z);
   fChain->SetBranchAddress("PandoraClusters.shapeParameters_begin", PandoraClusters_shapeParameters_begin, &b_PandoraClusters_shapeParameters_begin);
   fChain->SetBranchAddress("PandoraClusters.shapeParameters_end", PandoraClusters_shapeParameters_end, &b_PandoraClusters_shapeParameters_end);
   fChain->SetBranchAddress("PandoraClusters.subdetectorEnergies_begin", PandoraClusters_subdetectorEnergies_begin, &b_PandoraClusters_subdetectorEnergies_begin);
   fChain->SetBranchAddress("PandoraClusters.subdetectorEnergies_end", PandoraClusters_subdetectorEnergies_end, &b_PandoraClusters_subdetectorEnergies_end);
   fChain->SetBranchAddress("PandoraClusters.clusters_begin", PandoraClusters_clusters_begin, &b_PandoraClusters_clusters_begin);
   fChain->SetBranchAddress("PandoraClusters.clusters_end", PandoraClusters_clusters_end, &b_PandoraClusters_clusters_end);
   fChain->SetBranchAddress("PandoraClusters.hits_begin", PandoraClusters_hits_begin, &b_PandoraClusters_hits_begin);
   fChain->SetBranchAddress("PandoraClusters.hits_end", PandoraClusters_hits_end, &b_PandoraClusters_hits_end);
   fChain->SetBranchAddress("PandoraClusters.particleIDs_begin", PandoraClusters_particleIDs_begin, &b_PandoraClusters_particleIDs_begin);
   fChain->SetBranchAddress("PandoraClusters.particleIDs_end", PandoraClusters_particleIDs_end, &b_PandoraClusters_particleIDs_end);
   fChain->SetBranchAddress("_PandoraClusters_clusters", &_PandoraClusters_clusters_, &b__PandoraClusters_clusters_);
   fChain->SetBranchAddress("_PandoraClusters_clusters.index", &_PandoraClusters_clusters_index, &b__PandoraClusters_clusters_index);
   fChain->SetBranchAddress("_PandoraClusters_clusters.collectionID", &_PandoraClusters_clusters_collectionID, &b__PandoraClusters_clusters_collectionID);
   fChain->SetBranchAddress("_PandoraClusters_hits", &_PandoraClusters_hits_, &b__PandoraClusters_hits_);
   fChain->SetBranchAddress("_PandoraClusters_hits.index", _PandoraClusters_hits_index, &b__PandoraClusters_hits_index);
   fChain->SetBranchAddress("_PandoraClusters_hits.collectionID", _PandoraClusters_hits_collectionID, &b__PandoraClusters_hits_collectionID);
   fChain->SetBranchAddress("_PandoraClusters_particleIDs", &_PandoraClusters_particleIDs_, &b__PandoraClusters_particleIDs_);
   fChain->SetBranchAddress("_PandoraClusters_particleIDs.index", &_PandoraClusters_particleIDs_index, &b__PandoraClusters_particleIDs_index);
   fChain->SetBranchAddress("_PandoraClusters_particleIDs.collectionID", &_PandoraClusters_particleIDs_collectionID, &b__PandoraClusters_particleIDs_collectionID);
   fChain->SetBranchAddress("_PandoraClusters_shapeParameters", &_PandoraClusters_shapeParameters, &b__PandoraClusters_shapeParameters);
   fChain->SetBranchAddress("_PandoraClusters_subdetectorEnergies", &_PandoraClusters_subdetectorEnergies, &b__PandoraClusters_subdetectorEnergies);
   fChain->SetBranchAddress("PandoraClusters_particleIDs", &PandoraClusters_particleIDs_, &b_PandoraClusters_particleIDs_);
   fChain->SetBranchAddress("PandoraClusters_particleIDs.type", &PandoraClusters_particleIDs_type, &b_PandoraClusters_particleIDs_type);
   fChain->SetBranchAddress("PandoraClusters_particleIDs.PDG", &PandoraClusters_particleIDs_PDG, &b_PandoraClusters_particleIDs_PDG);
   fChain->SetBranchAddress("PandoraClusters_particleIDs.algorithmType", &PandoraClusters_particleIDs_algorithmType, &b_PandoraClusters_particleIDs_algorithmType);
   fChain->SetBranchAddress("PandoraClusters_particleIDs.likelihood", &PandoraClusters_particleIDs_likelihood, &b_PandoraClusters_particleIDs_likelihood);
   fChain->SetBranchAddress("PandoraClusters_particleIDs.parameters_begin", &PandoraClusters_particleIDs_parameters_begin, &b_PandoraClusters_particleIDs_parameters_begin);
   fChain->SetBranchAddress("PandoraClusters_particleIDs.parameters_end", &PandoraClusters_particleIDs_parameters_end, &b_PandoraClusters_particleIDs_parameters_end);
   fChain->SetBranchAddress("_PandoraClusters_particleIDs_parameters", &_PandoraClusters_particleIDs_parameters, &b__PandoraClusters_particleIDs_parameters);
   fChain->SetBranchAddress("PandoraPFOs", &PandoraPFOs_, &b_PandoraPFOs_);
   fChain->SetBranchAddress("PandoraPFOs.PDG", PandoraPFOs_PDG, &b_PandoraPFOs_PDG);
   fChain->SetBranchAddress("PandoraPFOs.energy", PandoraPFOs_energy, &b_PandoraPFOs_energy);
   fChain->SetBranchAddress("PandoraPFOs.momentum.x", PandoraPFOs_momentum_x, &b_PandoraPFOs_momentum_x);
   fChain->SetBranchAddress("PandoraPFOs.momentum.y", PandoraPFOs_momentum_y, &b_PandoraPFOs_momentum_y);
   fChain->SetBranchAddress("PandoraPFOs.momentum.z", PandoraPFOs_momentum_z, &b_PandoraPFOs_momentum_z);
   fChain->SetBranchAddress("PandoraPFOs.referencePoint.x", PandoraPFOs_referencePoint_x, &b_PandoraPFOs_referencePoint_x);
   fChain->SetBranchAddress("PandoraPFOs.referencePoint.y", PandoraPFOs_referencePoint_y, &b_PandoraPFOs_referencePoint_y);
   fChain->SetBranchAddress("PandoraPFOs.referencePoint.z", PandoraPFOs_referencePoint_z, &b_PandoraPFOs_referencePoint_z);
   fChain->SetBranchAddress("PandoraPFOs.charge", PandoraPFOs_charge, &b_PandoraPFOs_charge);
   fChain->SetBranchAddress("PandoraPFOs.mass", PandoraPFOs_mass, &b_PandoraPFOs_mass);
   fChain->SetBranchAddress("PandoraPFOs.goodnessOfPID", PandoraPFOs_goodnessOfPID, &b_PandoraPFOs_goodnessOfPID);
   fChain->SetBranchAddress("PandoraPFOs.covMatrix[10]", PandoraPFOs_covMatrix, &b_PandoraPFOs_covMatrix);
   fChain->SetBranchAddress("PandoraPFOs.clusters_begin", PandoraPFOs_clusters_begin, &b_PandoraPFOs_clusters_begin);
   fChain->SetBranchAddress("PandoraPFOs.clusters_end", PandoraPFOs_clusters_end, &b_PandoraPFOs_clusters_end);
   fChain->SetBranchAddress("PandoraPFOs.tracks_begin", PandoraPFOs_tracks_begin, &b_PandoraPFOs_tracks_begin);
   fChain->SetBranchAddress("PandoraPFOs.tracks_end", PandoraPFOs_tracks_end, &b_PandoraPFOs_tracks_end);
   fChain->SetBranchAddress("PandoraPFOs.particles_begin", PandoraPFOs_particles_begin, &b_PandoraPFOs_particles_begin);
   fChain->SetBranchAddress("PandoraPFOs.particles_end", PandoraPFOs_particles_end, &b_PandoraPFOs_particles_end);
   fChain->SetBranchAddress("PandoraPFOs.particleIDs_begin", PandoraPFOs_particleIDs_begin, &b_PandoraPFOs_particleIDs_begin);
   fChain->SetBranchAddress("PandoraPFOs.particleIDs_end", PandoraPFOs_particleIDs_end, &b_PandoraPFOs_particleIDs_end);
   fChain->SetBranchAddress("_PandoraPFOs_clusters", &_PandoraPFOs_clusters_, &b__PandoraPFOs_clusters_);
   fChain->SetBranchAddress("_PandoraPFOs_clusters.index", _PandoraPFOs_clusters_index, &b__PandoraPFOs_clusters_index);
   fChain->SetBranchAddress("_PandoraPFOs_clusters.collectionID", _PandoraPFOs_clusters_collectionID, &b__PandoraPFOs_clusters_collectionID);
   fChain->SetBranchAddress("_PandoraPFOs_tracks", &_PandoraPFOs_tracks_, &b__PandoraPFOs_tracks_);
   fChain->SetBranchAddress("_PandoraPFOs_tracks.index", _PandoraPFOs_tracks_index, &b__PandoraPFOs_tracks_index);
   fChain->SetBranchAddress("_PandoraPFOs_tracks.collectionID", _PandoraPFOs_tracks_collectionID, &b__PandoraPFOs_tracks_collectionID);
   fChain->SetBranchAddress("_PandoraPFOs_particles", &_PandoraPFOs_particles_, &b__PandoraPFOs_particles_);
   fChain->SetBranchAddress("_PandoraPFOs_particles.index", &_PandoraPFOs_particles_index, &b__PandoraPFOs_particles_index);
   fChain->SetBranchAddress("_PandoraPFOs_particles.collectionID", &_PandoraPFOs_particles_collectionID, &b__PandoraPFOs_particles_collectionID);
   fChain->SetBranchAddress("_PandoraPFOs_particleIDs", &_PandoraPFOs_particleIDs_, &b__PandoraPFOs_particleIDs_);
   fChain->SetBranchAddress("_PandoraPFOs_particleIDs.index", &_PandoraPFOs_particleIDs_index, &b__PandoraPFOs_particleIDs_index);
   fChain->SetBranchAddress("_PandoraPFOs_particleIDs.collectionID", &_PandoraPFOs_particleIDs_collectionID, &b__PandoraPFOs_particleIDs_collectionID);
   fChain->SetBranchAddress("_PandoraPFOs_startVertex", &_PandoraPFOs_startVertex_, &b__PandoraPFOs_startVertex_);
   fChain->SetBranchAddress("_PandoraPFOs_startVertex.index", _PandoraPFOs_startVertex_index, &b__PandoraPFOs_startVertex_index);
   fChain->SetBranchAddress("_PandoraPFOs_startVertex.collectionID", _PandoraPFOs_startVertex_collectionID, &b__PandoraPFOs_startVertex_collectionID);
   fChain->SetBranchAddress("_PandoraPFOs_particleIDUsed", &_PandoraPFOs_particleIDUsed_, &b__PandoraPFOs_particleIDUsed_);
   fChain->SetBranchAddress("_PandoraPFOs_particleIDUsed.index", _PandoraPFOs_particleIDUsed_index, &b__PandoraPFOs_particleIDUsed_index);
   fChain->SetBranchAddress("_PandoraPFOs_particleIDUsed.collectionID", _PandoraPFOs_particleIDUsed_collectionID, &b__PandoraPFOs_particleIDUsed_collectionID);
   fChain->SetBranchAddress("PandoraPFOs_particleIDs", &PandoraPFOs_particleIDs_, &b_PandoraPFOs_particleIDs_);
   fChain->SetBranchAddress("PandoraPFOs_particleIDs.type", &PandoraPFOs_particleIDs_type, &b_PandoraPFOs_particleIDs_type);
   fChain->SetBranchAddress("PandoraPFOs_particleIDs.PDG", &PandoraPFOs_particleIDs_PDG, &b_PandoraPFOs_particleIDs_PDG);
   fChain->SetBranchAddress("PandoraPFOs_particleIDs.algorithmType", &PandoraPFOs_particleIDs_algorithmType, &b_PandoraPFOs_particleIDs_algorithmType);
   fChain->SetBranchAddress("PandoraPFOs_particleIDs.likelihood", &PandoraPFOs_particleIDs_likelihood, &b_PandoraPFOs_particleIDs_likelihood);
   fChain->SetBranchAddress("PandoraPFOs_particleIDs.parameters_begin", &PandoraPFOs_particleIDs_parameters_begin, &b_PandoraPFOs_particleIDs_parameters_begin);
   fChain->SetBranchAddress("PandoraPFOs_particleIDs.parameters_end", &PandoraPFOs_particleIDs_parameters_end, &b_PandoraPFOs_particleIDs_parameters_end);
   fChain->SetBranchAddress("_PandoraPFOs_particleIDs_parameters", &_PandoraPFOs_particleIDs_parameters, &b__PandoraPFOs_particleIDs_parameters);
   fChain->SetBranchAddress("PandoraStartVertices", &PandoraStartVertices_, &b_PandoraStartVertices_);
   fChain->SetBranchAddress("PandoraStartVertices.primary", PandoraStartVertices_primary, &b_PandoraStartVertices_primary);
   fChain->SetBranchAddress("PandoraStartVertices.chi2", PandoraStartVertices_chi2, &b_PandoraStartVertices_chi2);
   fChain->SetBranchAddress("PandoraStartVertices.probability", PandoraStartVertices_probability, &b_PandoraStartVertices_probability);
   fChain->SetBranchAddress("PandoraStartVertices.position.x", PandoraStartVertices_position_x, &b_PandoraStartVertices_position_x);
   fChain->SetBranchAddress("PandoraStartVertices.position.y", PandoraStartVertices_position_y, &b_PandoraStartVertices_position_y);
   fChain->SetBranchAddress("PandoraStartVertices.position.z", PandoraStartVertices_position_z, &b_PandoraStartVertices_position_z);
   fChain->SetBranchAddress("PandoraStartVertices.covMatrix[6]", PandoraStartVertices_covMatrix, &b_PandoraStartVertices_covMatrix);
   fChain->SetBranchAddress("PandoraStartVertices.algorithmType", PandoraStartVertices_algorithmType, &b_PandoraStartVertices_algorithmType);
   fChain->SetBranchAddress("PandoraStartVertices.parameters_begin", PandoraStartVertices_parameters_begin, &b_PandoraStartVertices_parameters_begin);
   fChain->SetBranchAddress("PandoraStartVertices.parameters_end", PandoraStartVertices_parameters_end, &b_PandoraStartVertices_parameters_end);
   fChain->SetBranchAddress("_PandoraStartVertices_associatedParticle", &_PandoraStartVertices_associatedParticle_, &b__PandoraStartVertices_associatedParticle_);
   fChain->SetBranchAddress("_PandoraStartVertices_associatedParticle.index", _PandoraStartVertices_associatedParticle_index, &b__PandoraStartVertices_associatedParticle_index);
   fChain->SetBranchAddress("_PandoraStartVertices_associatedParticle.collectionID", _PandoraStartVertices_associatedParticle_collectionID, &b__PandoraStartVertices_associatedParticle_collectionID);
   fChain->SetBranchAddress("_PandoraStartVertices_parameters", &_PandoraStartVertices_parameters, &b__PandoraStartVertices_parameters);
   fChain->SetBranchAddress("PFOsFromJets_objIdx", &PFOsFromJets_objIdx_, &b_PFOsFromJets_objIdx_);
   fChain->SetBranchAddress("PFOsFromJets_objIdx.index", PFOsFromJets_objIdx_index, &b_PFOsFromJets_objIdx_index);
   fChain->SetBranchAddress("PFOsFromJets_objIdx.collectionID", PFOsFromJets_objIdx_collectionID, &b_PFOsFromJets_objIdx_collectionID);
   fChain->SetBranchAddress("PrimaryVertices", &PrimaryVertices_, &b_PrimaryVertices_);
   fChain->SetBranchAddress("PrimaryVertices.primary", PrimaryVertices_primary, &b_PrimaryVertices_primary);
   fChain->SetBranchAddress("PrimaryVertices.chi2", PrimaryVertices_chi2, &b_PrimaryVertices_chi2);
   fChain->SetBranchAddress("PrimaryVertices.probability", PrimaryVertices_probability, &b_PrimaryVertices_probability);
   fChain->SetBranchAddress("PrimaryVertices.position.x", PrimaryVertices_position_x, &b_PrimaryVertices_position_x);
   fChain->SetBranchAddress("PrimaryVertices.position.y", PrimaryVertices_position_y, &b_PrimaryVertices_position_y);
   fChain->SetBranchAddress("PrimaryVertices.position.z", PrimaryVertices_position_z, &b_PrimaryVertices_position_z);
   fChain->SetBranchAddress("PrimaryVertices.covMatrix[6]", PrimaryVertices_covMatrix, &b_PrimaryVertices_covMatrix);
   fChain->SetBranchAddress("PrimaryVertices.algorithmType", PrimaryVertices_algorithmType, &b_PrimaryVertices_algorithmType);
   fChain->SetBranchAddress("PrimaryVertices.parameters_begin", PrimaryVertices_parameters_begin, &b_PrimaryVertices_parameters_begin);
   fChain->SetBranchAddress("PrimaryVertices.parameters_end", PrimaryVertices_parameters_end, &b_PrimaryVertices_parameters_end);
   fChain->SetBranchAddress("_PrimaryVertices_associatedParticle", &_PrimaryVertices_associatedParticle_, &b__PrimaryVertices_associatedParticle_);
   fChain->SetBranchAddress("_PrimaryVertices_associatedParticle.index", _PrimaryVertices_associatedParticle_index, &b__PrimaryVertices_associatedParticle_index);
   fChain->SetBranchAddress("_PrimaryVertices_associatedParticle.collectionID", _PrimaryVertices_associatedParticle_collectionID, &b__PrimaryVertices_associatedParticle_collectionID);
   fChain->SetBranchAddress("_PrimaryVertices_parameters", &_PrimaryVertices_parameters, &b__PrimaryVertices_parameters);
   fChain->SetBranchAddress("PrimaryVertices_RP", &PrimaryVertices_RP_, &b_PrimaryVertices_RP_);
   fChain->SetBranchAddress("PrimaryVertices_RP.PDG", PrimaryVertices_RP_PDG, &b_PrimaryVertices_RP_PDG);
   fChain->SetBranchAddress("PrimaryVertices_RP.energy", PrimaryVertices_RP_energy, &b_PrimaryVertices_RP_energy);
   fChain->SetBranchAddress("PrimaryVertices_RP.momentum.x", PrimaryVertices_RP_momentum_x, &b_PrimaryVertices_RP_momentum_x);
   fChain->SetBranchAddress("PrimaryVertices_RP.momentum.y", PrimaryVertices_RP_momentum_y, &b_PrimaryVertices_RP_momentum_y);
   fChain->SetBranchAddress("PrimaryVertices_RP.momentum.z", PrimaryVertices_RP_momentum_z, &b_PrimaryVertices_RP_momentum_z);
   fChain->SetBranchAddress("PrimaryVertices_RP.referencePoint.x", PrimaryVertices_RP_referencePoint_x, &b_PrimaryVertices_RP_referencePoint_x);
   fChain->SetBranchAddress("PrimaryVertices_RP.referencePoint.y", PrimaryVertices_RP_referencePoint_y, &b_PrimaryVertices_RP_referencePoint_y);
   fChain->SetBranchAddress("PrimaryVertices_RP.referencePoint.z", PrimaryVertices_RP_referencePoint_z, &b_PrimaryVertices_RP_referencePoint_z);
   fChain->SetBranchAddress("PrimaryVertices_RP.charge", PrimaryVertices_RP_charge, &b_PrimaryVertices_RP_charge);
   fChain->SetBranchAddress("PrimaryVertices_RP.mass", PrimaryVertices_RP_mass, &b_PrimaryVertices_RP_mass);
   fChain->SetBranchAddress("PrimaryVertices_RP.goodnessOfPID", PrimaryVertices_RP_goodnessOfPID, &b_PrimaryVertices_RP_goodnessOfPID);
   fChain->SetBranchAddress("PrimaryVertices_RP.covMatrix[10]", PrimaryVertices_RP_covMatrix, &b_PrimaryVertices_RP_covMatrix);
   fChain->SetBranchAddress("PrimaryVertices_RP.clusters_begin", PrimaryVertices_RP_clusters_begin, &b_PrimaryVertices_RP_clusters_begin);
   fChain->SetBranchAddress("PrimaryVertices_RP.clusters_end", PrimaryVertices_RP_clusters_end, &b_PrimaryVertices_RP_clusters_end);
   fChain->SetBranchAddress("PrimaryVertices_RP.tracks_begin", PrimaryVertices_RP_tracks_begin, &b_PrimaryVertices_RP_tracks_begin);
   fChain->SetBranchAddress("PrimaryVertices_RP.tracks_end", PrimaryVertices_RP_tracks_end, &b_PrimaryVertices_RP_tracks_end);
   fChain->SetBranchAddress("PrimaryVertices_RP.particles_begin", PrimaryVertices_RP_particles_begin, &b_PrimaryVertices_RP_particles_begin);
   fChain->SetBranchAddress("PrimaryVertices_RP.particles_end", PrimaryVertices_RP_particles_end, &b_PrimaryVertices_RP_particles_end);
   fChain->SetBranchAddress("PrimaryVertices_RP.particleIDs_begin", PrimaryVertices_RP_particleIDs_begin, &b_PrimaryVertices_RP_particleIDs_begin);
   fChain->SetBranchAddress("PrimaryVertices_RP.particleIDs_end", PrimaryVertices_RP_particleIDs_end, &b_PrimaryVertices_RP_particleIDs_end);
   fChain->SetBranchAddress("_PrimaryVertices_RP_clusters", &_PrimaryVertices_RP_clusters_, &b__PrimaryVertices_RP_clusters_);
   fChain->SetBranchAddress("_PrimaryVertices_RP_clusters.index", &_PrimaryVertices_RP_clusters_index, &b__PrimaryVertices_RP_clusters_index);
   fChain->SetBranchAddress("_PrimaryVertices_RP_clusters.collectionID", &_PrimaryVertices_RP_clusters_collectionID, &b__PrimaryVertices_RP_clusters_collectionID);
   fChain->SetBranchAddress("_PrimaryVertices_RP_tracks", &_PrimaryVertices_RP_tracks_, &b__PrimaryVertices_RP_tracks_);
   fChain->SetBranchAddress("_PrimaryVertices_RP_tracks.index", &_PrimaryVertices_RP_tracks_index, &b__PrimaryVertices_RP_tracks_index);
   fChain->SetBranchAddress("_PrimaryVertices_RP_tracks.collectionID", &_PrimaryVertices_RP_tracks_collectionID, &b__PrimaryVertices_RP_tracks_collectionID);
   fChain->SetBranchAddress("_PrimaryVertices_RP_particles", &_PrimaryVertices_RP_particles_, &b__PrimaryVertices_RP_particles_);
   fChain->SetBranchAddress("_PrimaryVertices_RP_particles.index", _PrimaryVertices_RP_particles_index, &b__PrimaryVertices_RP_particles_index);
   fChain->SetBranchAddress("_PrimaryVertices_RP_particles.collectionID", _PrimaryVertices_RP_particles_collectionID, &b__PrimaryVertices_RP_particles_collectionID);
   fChain->SetBranchAddress("_PrimaryVertices_RP_particleIDs", &_PrimaryVertices_RP_particleIDs_, &b__PrimaryVertices_RP_particleIDs_);
   fChain->SetBranchAddress("_PrimaryVertices_RP_particleIDs.index", &_PrimaryVertices_RP_particleIDs_index, &b__PrimaryVertices_RP_particleIDs_index);
   fChain->SetBranchAddress("_PrimaryVertices_RP_particleIDs.collectionID", &_PrimaryVertices_RP_particleIDs_collectionID, &b__PrimaryVertices_RP_particleIDs_collectionID);
   fChain->SetBranchAddress("_PrimaryVertices_RP_startVertex", &_PrimaryVertices_RP_startVertex_, &b__PrimaryVertices_RP_startVertex_);
   fChain->SetBranchAddress("_PrimaryVertices_RP_startVertex.index", _PrimaryVertices_RP_startVertex_index, &b__PrimaryVertices_RP_startVertex_index);
   fChain->SetBranchAddress("_PrimaryVertices_RP_startVertex.collectionID", _PrimaryVertices_RP_startVertex_collectionID, &b__PrimaryVertices_RP_startVertex_collectionID);
   fChain->SetBranchAddress("_PrimaryVertices_RP_particleIDUsed", &_PrimaryVertices_RP_particleIDUsed_, &b__PrimaryVertices_RP_particleIDUsed_);
   fChain->SetBranchAddress("_PrimaryVertices_RP_particleIDUsed.index", _PrimaryVertices_RP_particleIDUsed_index, &b__PrimaryVertices_RP_particleIDUsed_index);
   fChain->SetBranchAddress("_PrimaryVertices_RP_particleIDUsed.collectionID", _PrimaryVertices_RP_particleIDUsed_collectionID, &b__PrimaryVertices_RP_particleIDUsed_collectionID);
   fChain->SetBranchAddress("PrimaryVertices_RP_particleIDs", &PrimaryVertices_RP_particleIDs_, &b_PrimaryVertices_RP_particleIDs_);
   fChain->SetBranchAddress("PrimaryVertices_RP_particleIDs.type", &PrimaryVertices_RP_particleIDs_type, &b_PrimaryVertices_RP_particleIDs_type);
   fChain->SetBranchAddress("PrimaryVertices_RP_particleIDs.PDG", &PrimaryVertices_RP_particleIDs_PDG, &b_PrimaryVertices_RP_particleIDs_PDG);
   fChain->SetBranchAddress("PrimaryVertices_RP_particleIDs.algorithmType", &PrimaryVertices_RP_particleIDs_algorithmType, &b_PrimaryVertices_RP_particleIDs_algorithmType);
   fChain->SetBranchAddress("PrimaryVertices_RP_particleIDs.likelihood", &PrimaryVertices_RP_particleIDs_likelihood, &b_PrimaryVertices_RP_particleIDs_likelihood);
   fChain->SetBranchAddress("PrimaryVertices_RP_particleIDs.parameters_begin", &PrimaryVertices_RP_particleIDs_parameters_begin, &b_PrimaryVertices_RP_particleIDs_parameters_begin);
   fChain->SetBranchAddress("PrimaryVertices_RP_particleIDs.parameters_end", &PrimaryVertices_RP_particleIDs_parameters_end, &b_PrimaryVertices_RP_particleIDs_parameters_end);
   fChain->SetBranchAddress("_PrimaryVertices_RP_particleIDs_parameters", &_PrimaryVertices_RP_particleIDs_parameters, &b__PrimaryVertices_RP_particleIDs_parameters);
   fChain->SetBranchAddress("RecoMCTruthLink", &RecoMCTruthLink_, &b_RecoMCTruthLink_);
   fChain->SetBranchAddress("RecoMCTruthLink.weight", RecoMCTruthLink_weight, &b_RecoMCTruthLink_weight);
   fChain->SetBranchAddress("_RecoMCTruthLink_rec", &_RecoMCTruthLink_rec_, &b__RecoMCTruthLink_rec_);
   fChain->SetBranchAddress("_RecoMCTruthLink_rec.index", _RecoMCTruthLink_rec_index, &b__RecoMCTruthLink_rec_index);
   fChain->SetBranchAddress("_RecoMCTruthLink_rec.collectionID", _RecoMCTruthLink_rec_collectionID, &b__RecoMCTruthLink_rec_collectionID);
   fChain->SetBranchAddress("_RecoMCTruthLink_sim", &_RecoMCTruthLink_sim_, &b__RecoMCTruthLink_sim_);
   fChain->SetBranchAddress("_RecoMCTruthLink_sim.index", _RecoMCTruthLink_sim_index, &b__RecoMCTruthLink_sim_index);
   fChain->SetBranchAddress("_RecoMCTruthLink_sim.collectionID", _RecoMCTruthLink_sim_collectionID, &b__RecoMCTruthLink_sim_collectionID);
   fChain->SetBranchAddress("RefinedVertexJets", &RefinedVertexJets_, &b_RefinedVertexJets_);
   fChain->SetBranchAddress("RefinedVertexJets.PDG", RefinedVertexJets_PDG, &b_RefinedVertexJets_PDG);
   fChain->SetBranchAddress("RefinedVertexJets.energy", RefinedVertexJets_energy, &b_RefinedVertexJets_energy);
   fChain->SetBranchAddress("RefinedVertexJets.momentum.x", RefinedVertexJets_momentum_x, &b_RefinedVertexJets_momentum_x);
   fChain->SetBranchAddress("RefinedVertexJets.momentum.y", RefinedVertexJets_momentum_y, &b_RefinedVertexJets_momentum_y);
   fChain->SetBranchAddress("RefinedVertexJets.momentum.z", RefinedVertexJets_momentum_z, &b_RefinedVertexJets_momentum_z);
   fChain->SetBranchAddress("RefinedVertexJets.referencePoint.x", RefinedVertexJets_referencePoint_x, &b_RefinedVertexJets_referencePoint_x);
   fChain->SetBranchAddress("RefinedVertexJets.referencePoint.y", RefinedVertexJets_referencePoint_y, &b_RefinedVertexJets_referencePoint_y);
   fChain->SetBranchAddress("RefinedVertexJets.referencePoint.z", RefinedVertexJets_referencePoint_z, &b_RefinedVertexJets_referencePoint_z);
   fChain->SetBranchAddress("RefinedVertexJets.charge", RefinedVertexJets_charge, &b_RefinedVertexJets_charge);
   fChain->SetBranchAddress("RefinedVertexJets.mass", RefinedVertexJets_mass, &b_RefinedVertexJets_mass);
   fChain->SetBranchAddress("RefinedVertexJets.goodnessOfPID", RefinedVertexJets_goodnessOfPID, &b_RefinedVertexJets_goodnessOfPID);
   fChain->SetBranchAddress("RefinedVertexJets.covMatrix[10]", RefinedVertexJets_covMatrix, &b_RefinedVertexJets_covMatrix);
   fChain->SetBranchAddress("RefinedVertexJets.clusters_begin", RefinedVertexJets_clusters_begin, &b_RefinedVertexJets_clusters_begin);
   fChain->SetBranchAddress("RefinedVertexJets.clusters_end", RefinedVertexJets_clusters_end, &b_RefinedVertexJets_clusters_end);
   fChain->SetBranchAddress("RefinedVertexJets.tracks_begin", RefinedVertexJets_tracks_begin, &b_RefinedVertexJets_tracks_begin);
   fChain->SetBranchAddress("RefinedVertexJets.tracks_end", RefinedVertexJets_tracks_end, &b_RefinedVertexJets_tracks_end);
   fChain->SetBranchAddress("RefinedVertexJets.particles_begin", RefinedVertexJets_particles_begin, &b_RefinedVertexJets_particles_begin);
   fChain->SetBranchAddress("RefinedVertexJets.particles_end", RefinedVertexJets_particles_end, &b_RefinedVertexJets_particles_end);
   fChain->SetBranchAddress("RefinedVertexJets.particleIDs_begin", RefinedVertexJets_particleIDs_begin, &b_RefinedVertexJets_particleIDs_begin);
   fChain->SetBranchAddress("RefinedVertexJets.particleIDs_end", RefinedVertexJets_particleIDs_end, &b_RefinedVertexJets_particleIDs_end);
   fChain->SetBranchAddress("_RefinedVertexJets_clusters", &_RefinedVertexJets_clusters_, &b__RefinedVertexJets_clusters_);
   fChain->SetBranchAddress("_RefinedVertexJets_clusters.index", &_RefinedVertexJets_clusters_index, &b__RefinedVertexJets_clusters_index);
   fChain->SetBranchAddress("_RefinedVertexJets_clusters.collectionID", &_RefinedVertexJets_clusters_collectionID, &b__RefinedVertexJets_clusters_collectionID);
   fChain->SetBranchAddress("_RefinedVertexJets_tracks", &_RefinedVertexJets_tracks_, &b__RefinedVertexJets_tracks_);
   fChain->SetBranchAddress("_RefinedVertexJets_tracks.index", &_RefinedVertexJets_tracks_index, &b__RefinedVertexJets_tracks_index);
   fChain->SetBranchAddress("_RefinedVertexJets_tracks.collectionID", &_RefinedVertexJets_tracks_collectionID, &b__RefinedVertexJets_tracks_collectionID);
   fChain->SetBranchAddress("_RefinedVertexJets_particles", &_RefinedVertexJets_particles_, &b__RefinedVertexJets_particles_);
   fChain->SetBranchAddress("_RefinedVertexJets_particles.index", _RefinedVertexJets_particles_index, &b__RefinedVertexJets_particles_index);
   fChain->SetBranchAddress("_RefinedVertexJets_particles.collectionID", _RefinedVertexJets_particles_collectionID, &b__RefinedVertexJets_particles_collectionID);
   fChain->SetBranchAddress("_RefinedVertexJets_particleIDs", &_RefinedVertexJets_particleIDs_, &b__RefinedVertexJets_particleIDs_);
   fChain->SetBranchAddress("_RefinedVertexJets_particleIDs.index", _RefinedVertexJets_particleIDs_index, &b__RefinedVertexJets_particleIDs_index);
   fChain->SetBranchAddress("_RefinedVertexJets_particleIDs.collectionID", _RefinedVertexJets_particleIDs_collectionID, &b__RefinedVertexJets_particleIDs_collectionID);
   fChain->SetBranchAddress("_RefinedVertexJets_startVertex", &_RefinedVertexJets_startVertex_, &b__RefinedVertexJets_startVertex_);
   fChain->SetBranchAddress("_RefinedVertexJets_startVertex.index", _RefinedVertexJets_startVertex_index, &b__RefinedVertexJets_startVertex_index);
   fChain->SetBranchAddress("_RefinedVertexJets_startVertex.collectionID", _RefinedVertexJets_startVertex_collectionID, &b__RefinedVertexJets_startVertex_collectionID);
   fChain->SetBranchAddress("_RefinedVertexJets_particleIDUsed", &_RefinedVertexJets_particleIDUsed_, &b__RefinedVertexJets_particleIDUsed_);
   fChain->SetBranchAddress("_RefinedVertexJets_particleIDUsed.index", _RefinedVertexJets_particleIDUsed_index, &b__RefinedVertexJets_particleIDUsed_index);
   fChain->SetBranchAddress("_RefinedVertexJets_particleIDUsed.collectionID", _RefinedVertexJets_particleIDUsed_collectionID, &b__RefinedVertexJets_particleIDUsed_collectionID);
   fChain->SetBranchAddress("RefinedVertexJets_particleIDs", &RefinedVertexJets_particleIDs_, &b_RefinedVertexJets_particleIDs_);
   fChain->SetBranchAddress("RefinedVertexJets_particleIDs.type", RefinedVertexJets_particleIDs_type, &b_RefinedVertexJets_particleIDs_type);
   fChain->SetBranchAddress("RefinedVertexJets_particleIDs.PDG", RefinedVertexJets_particleIDs_PDG, &b_RefinedVertexJets_particleIDs_PDG);
   fChain->SetBranchAddress("RefinedVertexJets_particleIDs.algorithmType", RefinedVertexJets_particleIDs_algorithmType, &b_RefinedVertexJets_particleIDs_algorithmType);
   fChain->SetBranchAddress("RefinedVertexJets_particleIDs.likelihood", RefinedVertexJets_particleIDs_likelihood, &b_RefinedVertexJets_particleIDs_likelihood);
   fChain->SetBranchAddress("RefinedVertexJets_particleIDs.parameters_begin", RefinedVertexJets_particleIDs_parameters_begin, &b_RefinedVertexJets_particleIDs_parameters_begin);
   fChain->SetBranchAddress("RefinedVertexJets_particleIDs.parameters_end", RefinedVertexJets_particleIDs_parameters_end, &b_RefinedVertexJets_particleIDs_parameters_end);
   fChain->SetBranchAddress("_RefinedVertexJets_particleIDs_parameters", &_RefinedVertexJets_particleIDs_parameters, &b__RefinedVertexJets_particleIDs_parameters);
   fChain->SetBranchAddress("RefinedVertexJets_rel", &RefinedVertexJets_rel_, &b_RefinedVertexJets_rel_);
   fChain->SetBranchAddress("RefinedVertexJets_rel.weight", RefinedVertexJets_rel_weight, &b_RefinedVertexJets_rel_weight);
   fChain->SetBranchAddress("_RefinedVertexJets_rel_rec", &_RefinedVertexJets_rel_rec_, &b__RefinedVertexJets_rel_rec_);
   fChain->SetBranchAddress("_RefinedVertexJets_rel_rec.index", _RefinedVertexJets_rel_rec_index, &b__RefinedVertexJets_rel_rec_index);
   fChain->SetBranchAddress("_RefinedVertexJets_rel_rec.collectionID", _RefinedVertexJets_rel_rec_collectionID, &b__RefinedVertexJets_rel_rec_collectionID);
   fChain->SetBranchAddress("_RefinedVertexJets_rel_vertex", &_RefinedVertexJets_rel_vertex_, &b__RefinedVertexJets_rel_vertex_);
   fChain->SetBranchAddress("_RefinedVertexJets_rel_vertex.index", _RefinedVertexJets_rel_vertex_index, &b__RefinedVertexJets_rel_vertex_index);
   fChain->SetBranchAddress("_RefinedVertexJets_rel_vertex.collectionID", _RefinedVertexJets_rel_vertex_collectionID, &b__RefinedVertexJets_rel_vertex_collectionID);
   fChain->SetBranchAddress("RefinedVertexJets_vtx", &RefinedVertexJets_vtx_, &b_RefinedVertexJets_vtx_);
   fChain->SetBranchAddress("RefinedVertexJets_vtx.primary", RefinedVertexJets_vtx_primary, &b_RefinedVertexJets_vtx_primary);
   fChain->SetBranchAddress("RefinedVertexJets_vtx.chi2", RefinedVertexJets_vtx_chi2, &b_RefinedVertexJets_vtx_chi2);
   fChain->SetBranchAddress("RefinedVertexJets_vtx.probability", RefinedVertexJets_vtx_probability, &b_RefinedVertexJets_vtx_probability);
   fChain->SetBranchAddress("RefinedVertexJets_vtx.position.x", RefinedVertexJets_vtx_position_x, &b_RefinedVertexJets_vtx_position_x);
   fChain->SetBranchAddress("RefinedVertexJets_vtx.position.y", RefinedVertexJets_vtx_position_y, &b_RefinedVertexJets_vtx_position_y);
   fChain->SetBranchAddress("RefinedVertexJets_vtx.position.z", RefinedVertexJets_vtx_position_z, &b_RefinedVertexJets_vtx_position_z);
   fChain->SetBranchAddress("RefinedVertexJets_vtx.covMatrix[6]", RefinedVertexJets_vtx_covMatrix, &b_RefinedVertexJets_vtx_covMatrix);
   fChain->SetBranchAddress("RefinedVertexJets_vtx.algorithmType", RefinedVertexJets_vtx_algorithmType, &b_RefinedVertexJets_vtx_algorithmType);
   fChain->SetBranchAddress("RefinedVertexJets_vtx.parameters_begin", RefinedVertexJets_vtx_parameters_begin, &b_RefinedVertexJets_vtx_parameters_begin);
   fChain->SetBranchAddress("RefinedVertexJets_vtx.parameters_end", RefinedVertexJets_vtx_parameters_end, &b_RefinedVertexJets_vtx_parameters_end);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_associatedParticle", &_RefinedVertexJets_vtx_associatedParticle_, &b__RefinedVertexJets_vtx_associatedParticle_);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_associatedParticle.index", _RefinedVertexJets_vtx_associatedParticle_index, &b__RefinedVertexJets_vtx_associatedParticle_index);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_associatedParticle.collectionID", _RefinedVertexJets_vtx_associatedParticle_collectionID, &b__RefinedVertexJets_vtx_associatedParticle_collectionID);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_parameters", &_RefinedVertexJets_vtx_parameters, &b__RefinedVertexJets_vtx_parameters);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP", &RefinedVertexJets_vtx_RP_, &b_RefinedVertexJets_vtx_RP_);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.PDG", RefinedVertexJets_vtx_RP_PDG, &b_RefinedVertexJets_vtx_RP_PDG);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.energy", RefinedVertexJets_vtx_RP_energy, &b_RefinedVertexJets_vtx_RP_energy);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.momentum.x", RefinedVertexJets_vtx_RP_momentum_x, &b_RefinedVertexJets_vtx_RP_momentum_x);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.momentum.y", RefinedVertexJets_vtx_RP_momentum_y, &b_RefinedVertexJets_vtx_RP_momentum_y);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.momentum.z", RefinedVertexJets_vtx_RP_momentum_z, &b_RefinedVertexJets_vtx_RP_momentum_z);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.referencePoint.x", RefinedVertexJets_vtx_RP_referencePoint_x, &b_RefinedVertexJets_vtx_RP_referencePoint_x);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.referencePoint.y", RefinedVertexJets_vtx_RP_referencePoint_y, &b_RefinedVertexJets_vtx_RP_referencePoint_y);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.referencePoint.z", RefinedVertexJets_vtx_RP_referencePoint_z, &b_RefinedVertexJets_vtx_RP_referencePoint_z);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.charge", RefinedVertexJets_vtx_RP_charge, &b_RefinedVertexJets_vtx_RP_charge);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.mass", RefinedVertexJets_vtx_RP_mass, &b_RefinedVertexJets_vtx_RP_mass);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.goodnessOfPID", RefinedVertexJets_vtx_RP_goodnessOfPID, &b_RefinedVertexJets_vtx_RP_goodnessOfPID);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.covMatrix[10]", RefinedVertexJets_vtx_RP_covMatrix, &b_RefinedVertexJets_vtx_RP_covMatrix);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.clusters_begin", RefinedVertexJets_vtx_RP_clusters_begin, &b_RefinedVertexJets_vtx_RP_clusters_begin);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.clusters_end", RefinedVertexJets_vtx_RP_clusters_end, &b_RefinedVertexJets_vtx_RP_clusters_end);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.tracks_begin", RefinedVertexJets_vtx_RP_tracks_begin, &b_RefinedVertexJets_vtx_RP_tracks_begin);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.tracks_end", RefinedVertexJets_vtx_RP_tracks_end, &b_RefinedVertexJets_vtx_RP_tracks_end);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.particles_begin", RefinedVertexJets_vtx_RP_particles_begin, &b_RefinedVertexJets_vtx_RP_particles_begin);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.particles_end", RefinedVertexJets_vtx_RP_particles_end, &b_RefinedVertexJets_vtx_RP_particles_end);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.particleIDs_begin", RefinedVertexJets_vtx_RP_particleIDs_begin, &b_RefinedVertexJets_vtx_RP_particleIDs_begin);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP.particleIDs_end", RefinedVertexJets_vtx_RP_particleIDs_end, &b_RefinedVertexJets_vtx_RP_particleIDs_end);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_clusters", &_RefinedVertexJets_vtx_RP_clusters_, &b__RefinedVertexJets_vtx_RP_clusters_);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_clusters.index", &_RefinedVertexJets_vtx_RP_clusters_index, &b__RefinedVertexJets_vtx_RP_clusters_index);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_clusters.collectionID", &_RefinedVertexJets_vtx_RP_clusters_collectionID, &b__RefinedVertexJets_vtx_RP_clusters_collectionID);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_tracks", &_RefinedVertexJets_vtx_RP_tracks_, &b__RefinedVertexJets_vtx_RP_tracks_);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_tracks.index", &_RefinedVertexJets_vtx_RP_tracks_index, &b__RefinedVertexJets_vtx_RP_tracks_index);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_tracks.collectionID", &_RefinedVertexJets_vtx_RP_tracks_collectionID, &b__RefinedVertexJets_vtx_RP_tracks_collectionID);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_particles", &_RefinedVertexJets_vtx_RP_particles_, &b__RefinedVertexJets_vtx_RP_particles_);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_particles.index", _RefinedVertexJets_vtx_RP_particles_index, &b__RefinedVertexJets_vtx_RP_particles_index);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_particles.collectionID", _RefinedVertexJets_vtx_RP_particles_collectionID, &b__RefinedVertexJets_vtx_RP_particles_collectionID);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_particleIDs", &_RefinedVertexJets_vtx_RP_particleIDs_, &b__RefinedVertexJets_vtx_RP_particleIDs_);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_particleIDs.index", &_RefinedVertexJets_vtx_RP_particleIDs_index, &b__RefinedVertexJets_vtx_RP_particleIDs_index);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_particleIDs.collectionID", &_RefinedVertexJets_vtx_RP_particleIDs_collectionID, &b__RefinedVertexJets_vtx_RP_particleIDs_collectionID);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_startVertex", &_RefinedVertexJets_vtx_RP_startVertex_, &b__RefinedVertexJets_vtx_RP_startVertex_);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_startVertex.index", _RefinedVertexJets_vtx_RP_startVertex_index, &b__RefinedVertexJets_vtx_RP_startVertex_index);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_startVertex.collectionID", _RefinedVertexJets_vtx_RP_startVertex_collectionID, &b__RefinedVertexJets_vtx_RP_startVertex_collectionID);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_particleIDUsed", &_RefinedVertexJets_vtx_RP_particleIDUsed_, &b__RefinedVertexJets_vtx_RP_particleIDUsed_);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_particleIDUsed.index", _RefinedVertexJets_vtx_RP_particleIDUsed_index, &b__RefinedVertexJets_vtx_RP_particleIDUsed_index);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_particleIDUsed.collectionID", _RefinedVertexJets_vtx_RP_particleIDUsed_collectionID, &b__RefinedVertexJets_vtx_RP_particleIDUsed_collectionID);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP_particleIDs", &RefinedVertexJets_vtx_RP_particleIDs_, &b_RefinedVertexJets_vtx_RP_particleIDs_);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP_particleIDs.type", &RefinedVertexJets_vtx_RP_particleIDs_type, &b_RefinedVertexJets_vtx_RP_particleIDs_type);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP_particleIDs.PDG", &RefinedVertexJets_vtx_RP_particleIDs_PDG, &b_RefinedVertexJets_vtx_RP_particleIDs_PDG);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP_particleIDs.algorithmType", &RefinedVertexJets_vtx_RP_particleIDs_algorithmType, &b_RefinedVertexJets_vtx_RP_particleIDs_algorithmType);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP_particleIDs.likelihood", &RefinedVertexJets_vtx_RP_particleIDs_likelihood, &b_RefinedVertexJets_vtx_RP_particleIDs_likelihood);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP_particleIDs.parameters_begin", &RefinedVertexJets_vtx_RP_particleIDs_parameters_begin, &b_RefinedVertexJets_vtx_RP_particleIDs_parameters_begin);
   fChain->SetBranchAddress("RefinedVertexJets_vtx_RP_particleIDs.parameters_end", &RefinedVertexJets_vtx_RP_particleIDs_parameters_end, &b_RefinedVertexJets_vtx_RP_particleIDs_parameters_end);
   fChain->SetBranchAddress("_RefinedVertexJets_vtx_RP_particleIDs_parameters", &_RefinedVertexJets_vtx_RP_particleIDs_parameters, &b__RefinedVertexJets_vtx_RP_particleIDs_parameters);
   fChain->SetBranchAddress("RefinedVertices", &RefinedVertices_, &b_RefinedVertices_);
   fChain->SetBranchAddress("RefinedVertices.primary", RefinedVertices_primary, &b_RefinedVertices_primary);
   fChain->SetBranchAddress("RefinedVertices.chi2", RefinedVertices_chi2, &b_RefinedVertices_chi2);
   fChain->SetBranchAddress("RefinedVertices.probability", RefinedVertices_probability, &b_RefinedVertices_probability);
   fChain->SetBranchAddress("RefinedVertices.position.x", RefinedVertices_position_x, &b_RefinedVertices_position_x);
   fChain->SetBranchAddress("RefinedVertices.position.y", RefinedVertices_position_y, &b_RefinedVertices_position_y);
   fChain->SetBranchAddress("RefinedVertices.position.z", RefinedVertices_position_z, &b_RefinedVertices_position_z);
   fChain->SetBranchAddress("RefinedVertices.covMatrix[6]", RefinedVertices_covMatrix, &b_RefinedVertices_covMatrix);
   fChain->SetBranchAddress("RefinedVertices.algorithmType", RefinedVertices_algorithmType, &b_RefinedVertices_algorithmType);
   fChain->SetBranchAddress("RefinedVertices.parameters_begin", RefinedVertices_parameters_begin, &b_RefinedVertices_parameters_begin);
   fChain->SetBranchAddress("RefinedVertices.parameters_end", RefinedVertices_parameters_end, &b_RefinedVertices_parameters_end);
   fChain->SetBranchAddress("_RefinedVertices_associatedParticle", &_RefinedVertices_associatedParticle_, &b__RefinedVertices_associatedParticle_);
   fChain->SetBranchAddress("_RefinedVertices_associatedParticle.index", _RefinedVertices_associatedParticle_index, &b__RefinedVertices_associatedParticle_index);
   fChain->SetBranchAddress("_RefinedVertices_associatedParticle.collectionID", _RefinedVertices_associatedParticle_collectionID, &b__RefinedVertices_associatedParticle_collectionID);
   fChain->SetBranchAddress("_RefinedVertices_parameters", &_RefinedVertices_parameters, &b__RefinedVertices_parameters);
   fChain->SetBranchAddress("RefinedVertices_RP", &RefinedVertices_RP_, &b_RefinedVertices_RP_);
   fChain->SetBranchAddress("RefinedVertices_RP.PDG", RefinedVertices_RP_PDG, &b_RefinedVertices_RP_PDG);
   fChain->SetBranchAddress("RefinedVertices_RP.energy", RefinedVertices_RP_energy, &b_RefinedVertices_RP_energy);
   fChain->SetBranchAddress("RefinedVertices_RP.momentum.x", RefinedVertices_RP_momentum_x, &b_RefinedVertices_RP_momentum_x);
   fChain->SetBranchAddress("RefinedVertices_RP.momentum.y", RefinedVertices_RP_momentum_y, &b_RefinedVertices_RP_momentum_y);
   fChain->SetBranchAddress("RefinedVertices_RP.momentum.z", RefinedVertices_RP_momentum_z, &b_RefinedVertices_RP_momentum_z);
   fChain->SetBranchAddress("RefinedVertices_RP.referencePoint.x", RefinedVertices_RP_referencePoint_x, &b_RefinedVertices_RP_referencePoint_x);
   fChain->SetBranchAddress("RefinedVertices_RP.referencePoint.y", RefinedVertices_RP_referencePoint_y, &b_RefinedVertices_RP_referencePoint_y);
   fChain->SetBranchAddress("RefinedVertices_RP.referencePoint.z", RefinedVertices_RP_referencePoint_z, &b_RefinedVertices_RP_referencePoint_z);
   fChain->SetBranchAddress("RefinedVertices_RP.charge", RefinedVertices_RP_charge, &b_RefinedVertices_RP_charge);
   fChain->SetBranchAddress("RefinedVertices_RP.mass", RefinedVertices_RP_mass, &b_RefinedVertices_RP_mass);
   fChain->SetBranchAddress("RefinedVertices_RP.goodnessOfPID", RefinedVertices_RP_goodnessOfPID, &b_RefinedVertices_RP_goodnessOfPID);
   fChain->SetBranchAddress("RefinedVertices_RP.covMatrix[10]", RefinedVertices_RP_covMatrix, &b_RefinedVertices_RP_covMatrix);
   fChain->SetBranchAddress("RefinedVertices_RP.clusters_begin", RefinedVertices_RP_clusters_begin, &b_RefinedVertices_RP_clusters_begin);
   fChain->SetBranchAddress("RefinedVertices_RP.clusters_end", RefinedVertices_RP_clusters_end, &b_RefinedVertices_RP_clusters_end);
   fChain->SetBranchAddress("RefinedVertices_RP.tracks_begin", RefinedVertices_RP_tracks_begin, &b_RefinedVertices_RP_tracks_begin);
   fChain->SetBranchAddress("RefinedVertices_RP.tracks_end", RefinedVertices_RP_tracks_end, &b_RefinedVertices_RP_tracks_end);
   fChain->SetBranchAddress("RefinedVertices_RP.particles_begin", RefinedVertices_RP_particles_begin, &b_RefinedVertices_RP_particles_begin);
   fChain->SetBranchAddress("RefinedVertices_RP.particles_end", RefinedVertices_RP_particles_end, &b_RefinedVertices_RP_particles_end);
   fChain->SetBranchAddress("RefinedVertices_RP.particleIDs_begin", RefinedVertices_RP_particleIDs_begin, &b_RefinedVertices_RP_particleIDs_begin);
   fChain->SetBranchAddress("RefinedVertices_RP.particleIDs_end", RefinedVertices_RP_particleIDs_end, &b_RefinedVertices_RP_particleIDs_end);
   fChain->SetBranchAddress("_RefinedVertices_RP_clusters", &_RefinedVertices_RP_clusters_, &b__RefinedVertices_RP_clusters_);
   fChain->SetBranchAddress("_RefinedVertices_RP_clusters.index", &_RefinedVertices_RP_clusters_index, &b__RefinedVertices_RP_clusters_index);
   fChain->SetBranchAddress("_RefinedVertices_RP_clusters.collectionID", &_RefinedVertices_RP_clusters_collectionID, &b__RefinedVertices_RP_clusters_collectionID);
   fChain->SetBranchAddress("_RefinedVertices_RP_tracks", &_RefinedVertices_RP_tracks_, &b__RefinedVertices_RP_tracks_);
   fChain->SetBranchAddress("_RefinedVertices_RP_tracks.index", &_RefinedVertices_RP_tracks_index, &b__RefinedVertices_RP_tracks_index);
   fChain->SetBranchAddress("_RefinedVertices_RP_tracks.collectionID", &_RefinedVertices_RP_tracks_collectionID, &b__RefinedVertices_RP_tracks_collectionID);
   fChain->SetBranchAddress("_RefinedVertices_RP_particles", &_RefinedVertices_RP_particles_, &b__RefinedVertices_RP_particles_);
   fChain->SetBranchAddress("_RefinedVertices_RP_particles.index", _RefinedVertices_RP_particles_index, &b__RefinedVertices_RP_particles_index);
   fChain->SetBranchAddress("_RefinedVertices_RP_particles.collectionID", _RefinedVertices_RP_particles_collectionID, &b__RefinedVertices_RP_particles_collectionID);
   fChain->SetBranchAddress("_RefinedVertices_RP_particleIDs", &_RefinedVertices_RP_particleIDs_, &b__RefinedVertices_RP_particleIDs_);
   fChain->SetBranchAddress("_RefinedVertices_RP_particleIDs.index", &_RefinedVertices_RP_particleIDs_index, &b__RefinedVertices_RP_particleIDs_index);
   fChain->SetBranchAddress("_RefinedVertices_RP_particleIDs.collectionID", &_RefinedVertices_RP_particleIDs_collectionID, &b__RefinedVertices_RP_particleIDs_collectionID);
   fChain->SetBranchAddress("_RefinedVertices_RP_startVertex", &_RefinedVertices_RP_startVertex_, &b__RefinedVertices_RP_startVertex_);
   fChain->SetBranchAddress("_RefinedVertices_RP_startVertex.index", _RefinedVertices_RP_startVertex_index, &b__RefinedVertices_RP_startVertex_index);
   fChain->SetBranchAddress("_RefinedVertices_RP_startVertex.collectionID", _RefinedVertices_RP_startVertex_collectionID, &b__RefinedVertices_RP_startVertex_collectionID);
   fChain->SetBranchAddress("_RefinedVertices_RP_particleIDUsed", &_RefinedVertices_RP_particleIDUsed_, &b__RefinedVertices_RP_particleIDUsed_);
   fChain->SetBranchAddress("_RefinedVertices_RP_particleIDUsed.index", _RefinedVertices_RP_particleIDUsed_index, &b__RefinedVertices_RP_particleIDUsed_index);
   fChain->SetBranchAddress("_RefinedVertices_RP_particleIDUsed.collectionID", _RefinedVertices_RP_particleIDUsed_collectionID, &b__RefinedVertices_RP_particleIDUsed_collectionID);
   fChain->SetBranchAddress("RefinedVertices_RP_particleIDs", &RefinedVertices_RP_particleIDs_, &b_RefinedVertices_RP_particleIDs_);
   fChain->SetBranchAddress("RefinedVertices_RP_particleIDs.type", &RefinedVertices_RP_particleIDs_type, &b_RefinedVertices_RP_particleIDs_type);
   fChain->SetBranchAddress("RefinedVertices_RP_particleIDs.PDG", &RefinedVertices_RP_particleIDs_PDG, &b_RefinedVertices_RP_particleIDs_PDG);
   fChain->SetBranchAddress("RefinedVertices_RP_particleIDs.algorithmType", &RefinedVertices_RP_particleIDs_algorithmType, &b_RefinedVertices_RP_particleIDs_algorithmType);
   fChain->SetBranchAddress("RefinedVertices_RP_particleIDs.likelihood", &RefinedVertices_RP_particleIDs_likelihood, &b_RefinedVertices_RP_particleIDs_likelihood);
   fChain->SetBranchAddress("RefinedVertices_RP_particleIDs.parameters_begin", &RefinedVertices_RP_particleIDs_parameters_begin, &b_RefinedVertices_RP_particleIDs_parameters_begin);
   fChain->SetBranchAddress("RefinedVertices_RP_particleIDs.parameters_end", &RefinedVertices_RP_particleIDs_parameters_end, &b_RefinedVertices_RP_particleIDs_parameters_end);
   fChain->SetBranchAddress("_RefinedVertices_RP_particleIDs_parameters", &_RefinedVertices_RP_particleIDs_parameters, &b__RefinedVertices_RP_particleIDs_parameters);
   fChain->SetBranchAddress("RelationCaloHit", &RelationCaloHit_, &b_RelationCaloHit_);
   fChain->SetBranchAddress("RelationCaloHit.weight", RelationCaloHit_weight, &b_RelationCaloHit_weight);
   fChain->SetBranchAddress("_RelationCaloHit_rec", &_RelationCaloHit_rec_, &b__RelationCaloHit_rec_);
   fChain->SetBranchAddress("_RelationCaloHit_rec.index", _RelationCaloHit_rec_index, &b__RelationCaloHit_rec_index);
   fChain->SetBranchAddress("_RelationCaloHit_rec.collectionID", _RelationCaloHit_rec_collectionID, &b__RelationCaloHit_rec_collectionID);
   fChain->SetBranchAddress("_RelationCaloHit_sim", &_RelationCaloHit_sim_, &b__RelationCaloHit_sim_);
   fChain->SetBranchAddress("_RelationCaloHit_sim.index", _RelationCaloHit_sim_index, &b__RelationCaloHit_sim_index);
   fChain->SetBranchAddress("_RelationCaloHit_sim.collectionID", _RelationCaloHit_sim_collectionID, &b__RelationCaloHit_sim_collectionID);
   fChain->SetBranchAddress("RelationMuonHit", &RelationMuonHit_, &b_RelationMuonHit_);
   fChain->SetBranchAddress("RelationMuonHit.weight", RelationMuonHit_weight, &b_RelationMuonHit_weight);
   fChain->SetBranchAddress("_RelationMuonHit_rec", &_RelationMuonHit_rec_, &b__RelationMuonHit_rec_);
   fChain->SetBranchAddress("_RelationMuonHit_rec.index", _RelationMuonHit_rec_index, &b__RelationMuonHit_rec_index);
   fChain->SetBranchAddress("_RelationMuonHit_rec.collectionID", _RelationMuonHit_rec_collectionID, &b__RelationMuonHit_rec_collectionID);
   fChain->SetBranchAddress("_RelationMuonHit_sim", &_RelationMuonHit_sim_, &b__RelationMuonHit_sim_);
   fChain->SetBranchAddress("_RelationMuonHit_sim.index", _RelationMuonHit_sim_index, &b__RelationMuonHit_sim_index);
   fChain->SetBranchAddress("_RelationMuonHit_sim.collectionID", _RelationMuonHit_sim_collectionID, &b__RelationMuonHit_sim_collectionID);
   fChain->SetBranchAddress("SelectedPandoraPFOs_objIdx", &SelectedPandoraPFOs_objIdx_, &b_SelectedPandoraPFOs_objIdx_);
   fChain->SetBranchAddress("SelectedPandoraPFOs_objIdx.index", SelectedPandoraPFOs_objIdx_index, &b_SelectedPandoraPFOs_objIdx_index);
   fChain->SetBranchAddress("SelectedPandoraPFOs_objIdx.collectionID", SelectedPandoraPFOs_objIdx_collectionID, &b_SelectedPandoraPFOs_objIdx_collectionID);
   fChain->SetBranchAddress("SiTracks", &SiTracks_, &b_SiTracks_);
   fChain->SetBranchAddress("SiTracks.type", SiTracks_type, &b_SiTracks_type);
   fChain->SetBranchAddress("SiTracks.chi2", SiTracks_chi2, &b_SiTracks_chi2);
   fChain->SetBranchAddress("SiTracks.ndf", SiTracks_ndf, &b_SiTracks_ndf);
   fChain->SetBranchAddress("SiTracks.dEdx", SiTracks_dEdx, &b_SiTracks_dEdx);
   fChain->SetBranchAddress("SiTracks.dEdxError", SiTracks_dEdxError, &b_SiTracks_dEdxError);
   fChain->SetBranchAddress("SiTracks.radiusOfInnermostHit", SiTracks_radiusOfInnermostHit, &b_SiTracks_radiusOfInnermostHit);
   fChain->SetBranchAddress("SiTracks.subdetectorHitNumbers_begin", SiTracks_subdetectorHitNumbers_begin, &b_SiTracks_subdetectorHitNumbers_begin);
   fChain->SetBranchAddress("SiTracks.subdetectorHitNumbers_end", SiTracks_subdetectorHitNumbers_end, &b_SiTracks_subdetectorHitNumbers_end);
   fChain->SetBranchAddress("SiTracks.trackStates_begin", SiTracks_trackStates_begin, &b_SiTracks_trackStates_begin);
   fChain->SetBranchAddress("SiTracks.trackStates_end", SiTracks_trackStates_end, &b_SiTracks_trackStates_end);
   fChain->SetBranchAddress("SiTracks.dxQuantities_begin", SiTracks_dxQuantities_begin, &b_SiTracks_dxQuantities_begin);
   fChain->SetBranchAddress("SiTracks.dxQuantities_end", SiTracks_dxQuantities_end, &b_SiTracks_dxQuantities_end);
   fChain->SetBranchAddress("SiTracks.trackerHits_begin", SiTracks_trackerHits_begin, &b_SiTracks_trackerHits_begin);
   fChain->SetBranchAddress("SiTracks.trackerHits_end", SiTracks_trackerHits_end, &b_SiTracks_trackerHits_end);
   fChain->SetBranchAddress("SiTracks.tracks_begin", SiTracks_tracks_begin, &b_SiTracks_tracks_begin);
   fChain->SetBranchAddress("SiTracks.tracks_end", SiTracks_tracks_end, &b_SiTracks_tracks_end);
   fChain->SetBranchAddress("_SiTracks_trackerHits", &_SiTracks_trackerHits_, &b__SiTracks_trackerHits_);
   fChain->SetBranchAddress("_SiTracks_trackerHits.index", _SiTracks_trackerHits_index, &b__SiTracks_trackerHits_index);
   fChain->SetBranchAddress("_SiTracks_trackerHits.collectionID", _SiTracks_trackerHits_collectionID, &b__SiTracks_trackerHits_collectionID);
   fChain->SetBranchAddress("_SiTracks_tracks", &_SiTracks_tracks_, &b__SiTracks_tracks_);
   fChain->SetBranchAddress("_SiTracks_tracks.index", &_SiTracks_tracks_index, &b__SiTracks_tracks_index);
   fChain->SetBranchAddress("_SiTracks_tracks.collectionID", &_SiTracks_tracks_collectionID, &b__SiTracks_tracks_collectionID);
   fChain->SetBranchAddress("_SiTracks_subdetectorHitNumbers", &_SiTracks_subdetectorHitNumbers, &b__SiTracks_subdetectorHitNumbers);
   fChain->SetBranchAddress("_SiTracks_trackStates", &_SiTracks_trackStates_, &b__SiTracks_trackStates_);
   fChain->SetBranchAddress("_SiTracks_trackStates.location", _SiTracks_trackStates_location, &b__SiTracks_trackStates_location);
   fChain->SetBranchAddress("_SiTracks_trackStates.D0", _SiTracks_trackStates_D0, &b__SiTracks_trackStates_D0);
   fChain->SetBranchAddress("_SiTracks_trackStates.phi", _SiTracks_trackStates_phi, &b__SiTracks_trackStates_phi);
   fChain->SetBranchAddress("_SiTracks_trackStates.omega", _SiTracks_trackStates_omega, &b__SiTracks_trackStates_omega);
   fChain->SetBranchAddress("_SiTracks_trackStates.Z0", _SiTracks_trackStates_Z0, &b__SiTracks_trackStates_Z0);
   fChain->SetBranchAddress("_SiTracks_trackStates.tanLambda", _SiTracks_trackStates_tanLambda, &b__SiTracks_trackStates_tanLambda);
   fChain->SetBranchAddress("_SiTracks_trackStates.time", _SiTracks_trackStates_time, &b__SiTracks_trackStates_time);
   fChain->SetBranchAddress("_SiTracks_trackStates.referencePoint.x", _SiTracks_trackStates_referencePoint_x, &b__SiTracks_trackStates_referencePoint_x);
   fChain->SetBranchAddress("_SiTracks_trackStates.referencePoint.y", _SiTracks_trackStates_referencePoint_y, &b__SiTracks_trackStates_referencePoint_y);
   fChain->SetBranchAddress("_SiTracks_trackStates.referencePoint.z", _SiTracks_trackStates_referencePoint_z, &b__SiTracks_trackStates_referencePoint_z);
   fChain->SetBranchAddress("_SiTracks_trackStates.covMatrix[21]", _SiTracks_trackStates_covMatrix, &b__SiTracks_trackStates_covMatrix);
   fChain->SetBranchAddress("_SiTracks_dxQuantities", &_SiTracks_dxQuantities_, &b__SiTracks_dxQuantities_);
   fChain->SetBranchAddress("_SiTracks_dxQuantities.type", _SiTracks_dxQuantities_type, &b__SiTracks_dxQuantities_type);
   fChain->SetBranchAddress("_SiTracks_dxQuantities.value", _SiTracks_dxQuantities_value, &b__SiTracks_dxQuantities_value);
   fChain->SetBranchAddress("_SiTracks_dxQuantities.error", _SiTracks_dxQuantities_error, &b__SiTracks_dxQuantities_error);
   fChain->SetBranchAddress("SiTracks_Refitted", &SiTracks_Refitted_, &b_SiTracks_Refitted_);
   fChain->SetBranchAddress("SiTracks_Refitted.type", SiTracks_Refitted_type, &b_SiTracks_Refitted_type);
   fChain->SetBranchAddress("SiTracks_Refitted.chi2", SiTracks_Refitted_chi2, &b_SiTracks_Refitted_chi2);
   fChain->SetBranchAddress("SiTracks_Refitted.ndf", SiTracks_Refitted_ndf, &b_SiTracks_Refitted_ndf);
   fChain->SetBranchAddress("SiTracks_Refitted.dEdx", SiTracks_Refitted_dEdx, &b_SiTracks_Refitted_dEdx);
   fChain->SetBranchAddress("SiTracks_Refitted.dEdxError", SiTracks_Refitted_dEdxError, &b_SiTracks_Refitted_dEdxError);
   fChain->SetBranchAddress("SiTracks_Refitted.radiusOfInnermostHit", SiTracks_Refitted_radiusOfInnermostHit, &b_SiTracks_Refitted_radiusOfInnermostHit);
   fChain->SetBranchAddress("SiTracks_Refitted.subdetectorHitNumbers_begin", SiTracks_Refitted_subdetectorHitNumbers_begin, &b_SiTracks_Refitted_subdetectorHitNumbers_begin);
   fChain->SetBranchAddress("SiTracks_Refitted.subdetectorHitNumbers_end", SiTracks_Refitted_subdetectorHitNumbers_end, &b_SiTracks_Refitted_subdetectorHitNumbers_end);
   fChain->SetBranchAddress("SiTracks_Refitted.trackStates_begin", SiTracks_Refitted_trackStates_begin, &b_SiTracks_Refitted_trackStates_begin);
   fChain->SetBranchAddress("SiTracks_Refitted.trackStates_end", SiTracks_Refitted_trackStates_end, &b_SiTracks_Refitted_trackStates_end);
   fChain->SetBranchAddress("SiTracks_Refitted.dxQuantities_begin", SiTracks_Refitted_dxQuantities_begin, &b_SiTracks_Refitted_dxQuantities_begin);
   fChain->SetBranchAddress("SiTracks_Refitted.dxQuantities_end", SiTracks_Refitted_dxQuantities_end, &b_SiTracks_Refitted_dxQuantities_end);
   fChain->SetBranchAddress("SiTracks_Refitted.trackerHits_begin", SiTracks_Refitted_trackerHits_begin, &b_SiTracks_Refitted_trackerHits_begin);
   fChain->SetBranchAddress("SiTracks_Refitted.trackerHits_end", SiTracks_Refitted_trackerHits_end, &b_SiTracks_Refitted_trackerHits_end);
   fChain->SetBranchAddress("SiTracks_Refitted.tracks_begin", SiTracks_Refitted_tracks_begin, &b_SiTracks_Refitted_tracks_begin);
   fChain->SetBranchAddress("SiTracks_Refitted.tracks_end", SiTracks_Refitted_tracks_end, &b_SiTracks_Refitted_tracks_end);
   fChain->SetBranchAddress("_SiTracks_Refitted_trackerHits", &_SiTracks_Refitted_trackerHits_, &b__SiTracks_Refitted_trackerHits_);
   fChain->SetBranchAddress("_SiTracks_Refitted_trackerHits.index", _SiTracks_Refitted_trackerHits_index, &b__SiTracks_Refitted_trackerHits_index);
   fChain->SetBranchAddress("_SiTracks_Refitted_trackerHits.collectionID", _SiTracks_Refitted_trackerHits_collectionID, &b__SiTracks_Refitted_trackerHits_collectionID);
   fChain->SetBranchAddress("_SiTracks_Refitted_tracks", &_SiTracks_Refitted_tracks_, &b__SiTracks_Refitted_tracks_);
   fChain->SetBranchAddress("_SiTracks_Refitted_tracks.index", &_SiTracks_Refitted_tracks_index, &b__SiTracks_Refitted_tracks_index);
   fChain->SetBranchAddress("_SiTracks_Refitted_tracks.collectionID", &_SiTracks_Refitted_tracks_collectionID, &b__SiTracks_Refitted_tracks_collectionID);
   fChain->SetBranchAddress("_SiTracks_Refitted_subdetectorHitNumbers", &_SiTracks_Refitted_subdetectorHitNumbers, &b__SiTracks_Refitted_subdetectorHitNumbers);
   fChain->SetBranchAddress("_SiTracks_Refitted_trackStates", &_SiTracks_Refitted_trackStates_, &b__SiTracks_Refitted_trackStates_);
   fChain->SetBranchAddress("_SiTracks_Refitted_trackStates.location", _SiTracks_Refitted_trackStates_location, &b__SiTracks_Refitted_trackStates_location);
   fChain->SetBranchAddress("_SiTracks_Refitted_trackStates.D0", _SiTracks_Refitted_trackStates_D0, &b__SiTracks_Refitted_trackStates_D0);
   fChain->SetBranchAddress("_SiTracks_Refitted_trackStates.phi", _SiTracks_Refitted_trackStates_phi, &b__SiTracks_Refitted_trackStates_phi);
   fChain->SetBranchAddress("_SiTracks_Refitted_trackStates.omega", _SiTracks_Refitted_trackStates_omega, &b__SiTracks_Refitted_trackStates_omega);
   fChain->SetBranchAddress("_SiTracks_Refitted_trackStates.Z0", _SiTracks_Refitted_trackStates_Z0, &b__SiTracks_Refitted_trackStates_Z0);
   fChain->SetBranchAddress("_SiTracks_Refitted_trackStates.tanLambda", _SiTracks_Refitted_trackStates_tanLambda, &b__SiTracks_Refitted_trackStates_tanLambda);
   fChain->SetBranchAddress("_SiTracks_Refitted_trackStates.time", _SiTracks_Refitted_trackStates_time, &b__SiTracks_Refitted_trackStates_time);
   fChain->SetBranchAddress("_SiTracks_Refitted_trackStates.referencePoint.x", _SiTracks_Refitted_trackStates_referencePoint_x, &b__SiTracks_Refitted_trackStates_referencePoint_x);
   fChain->SetBranchAddress("_SiTracks_Refitted_trackStates.referencePoint.y", _SiTracks_Refitted_trackStates_referencePoint_y, &b__SiTracks_Refitted_trackStates_referencePoint_y);
   fChain->SetBranchAddress("_SiTracks_Refitted_trackStates.referencePoint.z", _SiTracks_Refitted_trackStates_referencePoint_z, &b__SiTracks_Refitted_trackStates_referencePoint_z);
   fChain->SetBranchAddress("_SiTracks_Refitted_trackStates.covMatrix[21]", _SiTracks_Refitted_trackStates_covMatrix, &b__SiTracks_Refitted_trackStates_covMatrix);
   fChain->SetBranchAddress("_SiTracks_Refitted_dxQuantities", &_SiTracks_Refitted_dxQuantities_, &b__SiTracks_Refitted_dxQuantities_);
   fChain->SetBranchAddress("_SiTracks_Refitted_dxQuantities.type", _SiTracks_Refitted_dxQuantities_type, &b__SiTracks_Refitted_dxQuantities_type);
   fChain->SetBranchAddress("_SiTracks_Refitted_dxQuantities.value", _SiTracks_Refitted_dxQuantities_value, &b__SiTracks_Refitted_dxQuantities_value);
   fChain->SetBranchAddress("_SiTracks_Refitted_dxQuantities.error", _SiTracks_Refitted_dxQuantities_error, &b__SiTracks_Refitted_dxQuantities_error);
   fChain->SetBranchAddress("SiTracksCT", &SiTracksCT_, &b_SiTracksCT_);
   fChain->SetBranchAddress("SiTracksCT.type", SiTracksCT_type, &b_SiTracksCT_type);
   fChain->SetBranchAddress("SiTracksCT.chi2", SiTracksCT_chi2, &b_SiTracksCT_chi2);
   fChain->SetBranchAddress("SiTracksCT.ndf", SiTracksCT_ndf, &b_SiTracksCT_ndf);
   fChain->SetBranchAddress("SiTracksCT.dEdx", SiTracksCT_dEdx, &b_SiTracksCT_dEdx);
   fChain->SetBranchAddress("SiTracksCT.dEdxError", SiTracksCT_dEdxError, &b_SiTracksCT_dEdxError);
   fChain->SetBranchAddress("SiTracksCT.radiusOfInnermostHit", SiTracksCT_radiusOfInnermostHit, &b_SiTracksCT_radiusOfInnermostHit);
   fChain->SetBranchAddress("SiTracksCT.subdetectorHitNumbers_begin", SiTracksCT_subdetectorHitNumbers_begin, &b_SiTracksCT_subdetectorHitNumbers_begin);
   fChain->SetBranchAddress("SiTracksCT.subdetectorHitNumbers_end", SiTracksCT_subdetectorHitNumbers_end, &b_SiTracksCT_subdetectorHitNumbers_end);
   fChain->SetBranchAddress("SiTracksCT.trackStates_begin", SiTracksCT_trackStates_begin, &b_SiTracksCT_trackStates_begin);
   fChain->SetBranchAddress("SiTracksCT.trackStates_end", SiTracksCT_trackStates_end, &b_SiTracksCT_trackStates_end);
   fChain->SetBranchAddress("SiTracksCT.dxQuantities_begin", SiTracksCT_dxQuantities_begin, &b_SiTracksCT_dxQuantities_begin);
   fChain->SetBranchAddress("SiTracksCT.dxQuantities_end", SiTracksCT_dxQuantities_end, &b_SiTracksCT_dxQuantities_end);
   fChain->SetBranchAddress("SiTracksCT.trackerHits_begin", SiTracksCT_trackerHits_begin, &b_SiTracksCT_trackerHits_begin);
   fChain->SetBranchAddress("SiTracksCT.trackerHits_end", SiTracksCT_trackerHits_end, &b_SiTracksCT_trackerHits_end);
   fChain->SetBranchAddress("SiTracksCT.tracks_begin", SiTracksCT_tracks_begin, &b_SiTracksCT_tracks_begin);
   fChain->SetBranchAddress("SiTracksCT.tracks_end", SiTracksCT_tracks_end, &b_SiTracksCT_tracks_end);
   fChain->SetBranchAddress("_SiTracksCT_trackerHits", &_SiTracksCT_trackerHits_, &b__SiTracksCT_trackerHits_);
   fChain->SetBranchAddress("_SiTracksCT_trackerHits.index", _SiTracksCT_trackerHits_index, &b__SiTracksCT_trackerHits_index);
   fChain->SetBranchAddress("_SiTracksCT_trackerHits.collectionID", _SiTracksCT_trackerHits_collectionID, &b__SiTracksCT_trackerHits_collectionID);
   fChain->SetBranchAddress("_SiTracksCT_tracks", &_SiTracksCT_tracks_, &b__SiTracksCT_tracks_);
   fChain->SetBranchAddress("_SiTracksCT_tracks.index", &_SiTracksCT_tracks_index, &b__SiTracksCT_tracks_index);
   fChain->SetBranchAddress("_SiTracksCT_tracks.collectionID", &_SiTracksCT_tracks_collectionID, &b__SiTracksCT_tracks_collectionID);
   fChain->SetBranchAddress("_SiTracksCT_subdetectorHitNumbers", &_SiTracksCT_subdetectorHitNumbers, &b__SiTracksCT_subdetectorHitNumbers);
   fChain->SetBranchAddress("_SiTracksCT_trackStates", &_SiTracksCT_trackStates_, &b__SiTracksCT_trackStates_);
   fChain->SetBranchAddress("_SiTracksCT_trackStates.location", _SiTracksCT_trackStates_location, &b__SiTracksCT_trackStates_location);
   fChain->SetBranchAddress("_SiTracksCT_trackStates.D0", _SiTracksCT_trackStates_D0, &b__SiTracksCT_trackStates_D0);
   fChain->SetBranchAddress("_SiTracksCT_trackStates.phi", _SiTracksCT_trackStates_phi, &b__SiTracksCT_trackStates_phi);
   fChain->SetBranchAddress("_SiTracksCT_trackStates.omega", _SiTracksCT_trackStates_omega, &b__SiTracksCT_trackStates_omega);
   fChain->SetBranchAddress("_SiTracksCT_trackStates.Z0", _SiTracksCT_trackStates_Z0, &b__SiTracksCT_trackStates_Z0);
   fChain->SetBranchAddress("_SiTracksCT_trackStates.tanLambda", _SiTracksCT_trackStates_tanLambda, &b__SiTracksCT_trackStates_tanLambda);
   fChain->SetBranchAddress("_SiTracksCT_trackStates.time", _SiTracksCT_trackStates_time, &b__SiTracksCT_trackStates_time);
   fChain->SetBranchAddress("_SiTracksCT_trackStates.referencePoint.x", _SiTracksCT_trackStates_referencePoint_x, &b__SiTracksCT_trackStates_referencePoint_x);
   fChain->SetBranchAddress("_SiTracksCT_trackStates.referencePoint.y", _SiTracksCT_trackStates_referencePoint_y, &b__SiTracksCT_trackStates_referencePoint_y);
   fChain->SetBranchAddress("_SiTracksCT_trackStates.referencePoint.z", _SiTracksCT_trackStates_referencePoint_z, &b__SiTracksCT_trackStates_referencePoint_z);
   fChain->SetBranchAddress("_SiTracksCT_trackStates.covMatrix[21]", _SiTracksCT_trackStates_covMatrix, &b__SiTracksCT_trackStates_covMatrix);
   fChain->SetBranchAddress("_SiTracksCT_dxQuantities", &_SiTracksCT_dxQuantities_, &b__SiTracksCT_dxQuantities_);
   fChain->SetBranchAddress("_SiTracksCT_dxQuantities.type", _SiTracksCT_dxQuantities_type, &b__SiTracksCT_dxQuantities_type);
   fChain->SetBranchAddress("_SiTracksCT_dxQuantities.value", _SiTracksCT_dxQuantities_value, &b__SiTracksCT_dxQuantities_value);
   fChain->SetBranchAddress("_SiTracksCT_dxQuantities.error", _SiTracksCT_dxQuantities_error, &b__SiTracksCT_dxQuantities_error);
   fChain->SetBranchAddress("SiTracksMCTruthLink", &SiTracksMCTruthLink_, &b_SiTracksMCTruthLink_);
   fChain->SetBranchAddress("SiTracksMCTruthLink.weight", SiTracksMCTruthLink_weight, &b_SiTracksMCTruthLink_weight);
   fChain->SetBranchAddress("_SiTracksMCTruthLink_rec", &_SiTracksMCTruthLink_rec_, &b__SiTracksMCTruthLink_rec_);
   fChain->SetBranchAddress("_SiTracksMCTruthLink_rec.index", _SiTracksMCTruthLink_rec_index, &b__SiTracksMCTruthLink_rec_index);
   fChain->SetBranchAddress("_SiTracksMCTruthLink_rec.collectionID", _SiTracksMCTruthLink_rec_collectionID, &b__SiTracksMCTruthLink_rec_collectionID);
   fChain->SetBranchAddress("_SiTracksMCTruthLink_sim", &_SiTracksMCTruthLink_sim_, &b__SiTracksMCTruthLink_sim_);
   fChain->SetBranchAddress("_SiTracksMCTruthLink_sim.index", _SiTracksMCTruthLink_sim_index, &b__SiTracksMCTruthLink_sim_index);
   fChain->SetBranchAddress("_SiTracksMCTruthLink_sim.collectionID", _SiTracksMCTruthLink_sim_collectionID, &b__SiTracksMCTruthLink_sim_collectionID);
   fChain->SetBranchAddress("TightSelectedPandoraPFOs_objIdx", &TightSelectedPandoraPFOs_objIdx_, &b_TightSelectedPandoraPFOs_objIdx_);
   fChain->SetBranchAddress("TightSelectedPandoraPFOs_objIdx.index", TightSelectedPandoraPFOs_objIdx_index, &b_TightSelectedPandoraPFOs_objIdx_index);
   fChain->SetBranchAddress("TightSelectedPandoraPFOs_objIdx.collectionID", TightSelectedPandoraPFOs_objIdx_collectionID, &b_TightSelectedPandoraPFOs_objIdx_collectionID);
   fChain->SetBranchAddress("VertexBarrelCollection", &VertexBarrelCollection_, &b_VertexBarrelCollection_);
   fChain->SetBranchAddress("VertexBarrelCollection.cellID", VertexBarrelCollection_cellID, &b_VertexBarrelCollection_cellID);
   fChain->SetBranchAddress("VertexBarrelCollection.eDep", VertexBarrelCollection_eDep, &b_VertexBarrelCollection_eDep);
   fChain->SetBranchAddress("VertexBarrelCollection.time", VertexBarrelCollection_time, &b_VertexBarrelCollection_time);
   fChain->SetBranchAddress("VertexBarrelCollection.pathLength", VertexBarrelCollection_pathLength, &b_VertexBarrelCollection_pathLength);
   fChain->SetBranchAddress("VertexBarrelCollection.quality", VertexBarrelCollection_quality, &b_VertexBarrelCollection_quality);
   fChain->SetBranchAddress("VertexBarrelCollection.position.x", VertexBarrelCollection_position_x, &b_VertexBarrelCollection_position_x);
   fChain->SetBranchAddress("VertexBarrelCollection.position.y", VertexBarrelCollection_position_y, &b_VertexBarrelCollection_position_y);
   fChain->SetBranchAddress("VertexBarrelCollection.position.z", VertexBarrelCollection_position_z, &b_VertexBarrelCollection_position_z);
   fChain->SetBranchAddress("VertexBarrelCollection.momentum.x", VertexBarrelCollection_momentum_x, &b_VertexBarrelCollection_momentum_x);
   fChain->SetBranchAddress("VertexBarrelCollection.momentum.y", VertexBarrelCollection_momentum_y, &b_VertexBarrelCollection_momentum_y);
   fChain->SetBranchAddress("VertexBarrelCollection.momentum.z", VertexBarrelCollection_momentum_z, &b_VertexBarrelCollection_momentum_z);
   fChain->SetBranchAddress("_VertexBarrelCollection_particle", &_VertexBarrelCollection_particle_, &b__VertexBarrelCollection_particle_);
   fChain->SetBranchAddress("_VertexBarrelCollection_particle.index", _VertexBarrelCollection_particle_index, &b__VertexBarrelCollection_particle_index);
   fChain->SetBranchAddress("_VertexBarrelCollection_particle.collectionID", _VertexBarrelCollection_particle_collectionID, &b__VertexBarrelCollection_particle_collectionID);
   fChain->SetBranchAddress("VertexEndcapCollection", &VertexEndcapCollection_, &b_VertexEndcapCollection_);
   fChain->SetBranchAddress("VertexEndcapCollection.cellID", VertexEndcapCollection_cellID, &b_VertexEndcapCollection_cellID);
   fChain->SetBranchAddress("VertexEndcapCollection.eDep", VertexEndcapCollection_eDep, &b_VertexEndcapCollection_eDep);
   fChain->SetBranchAddress("VertexEndcapCollection.time", VertexEndcapCollection_time, &b_VertexEndcapCollection_time);
   fChain->SetBranchAddress("VertexEndcapCollection.pathLength", VertexEndcapCollection_pathLength, &b_VertexEndcapCollection_pathLength);
   fChain->SetBranchAddress("VertexEndcapCollection.quality", VertexEndcapCollection_quality, &b_VertexEndcapCollection_quality);
   fChain->SetBranchAddress("VertexEndcapCollection.position.x", VertexEndcapCollection_position_x, &b_VertexEndcapCollection_position_x);
   fChain->SetBranchAddress("VertexEndcapCollection.position.y", VertexEndcapCollection_position_y, &b_VertexEndcapCollection_position_y);
   fChain->SetBranchAddress("VertexEndcapCollection.position.z", VertexEndcapCollection_position_z, &b_VertexEndcapCollection_position_z);
   fChain->SetBranchAddress("VertexEndcapCollection.momentum.x", VertexEndcapCollection_momentum_x, &b_VertexEndcapCollection_momentum_x);
   fChain->SetBranchAddress("VertexEndcapCollection.momentum.y", VertexEndcapCollection_momentum_y, &b_VertexEndcapCollection_momentum_y);
   fChain->SetBranchAddress("VertexEndcapCollection.momentum.z", VertexEndcapCollection_momentum_z, &b_VertexEndcapCollection_momentum_z);
   fChain->SetBranchAddress("_VertexEndcapCollection_particle", &_VertexEndcapCollection_particle_, &b__VertexEndcapCollection_particle_);
   fChain->SetBranchAddress("_VertexEndcapCollection_particle.index", _VertexEndcapCollection_particle_index, &b__VertexEndcapCollection_particle_index);
   fChain->SetBranchAddress("_VertexEndcapCollection_particle.collectionID", _VertexEndcapCollection_particle_collectionID, &b__VertexEndcapCollection_particle_collectionID);
   fChain->SetBranchAddress("VertexJets", &VertexJets_, &b_VertexJets_);
   fChain->SetBranchAddress("VertexJets.PDG", VertexJets_PDG, &b_VertexJets_PDG);
   fChain->SetBranchAddress("VertexJets.energy", VertexJets_energy, &b_VertexJets_energy);
   fChain->SetBranchAddress("VertexJets.momentum.x", VertexJets_momentum_x, &b_VertexJets_momentum_x);
   fChain->SetBranchAddress("VertexJets.momentum.y", VertexJets_momentum_y, &b_VertexJets_momentum_y);
   fChain->SetBranchAddress("VertexJets.momentum.z", VertexJets_momentum_z, &b_VertexJets_momentum_z);
   fChain->SetBranchAddress("VertexJets.referencePoint.x", VertexJets_referencePoint_x, &b_VertexJets_referencePoint_x);
   fChain->SetBranchAddress("VertexJets.referencePoint.y", VertexJets_referencePoint_y, &b_VertexJets_referencePoint_y);
   fChain->SetBranchAddress("VertexJets.referencePoint.z", VertexJets_referencePoint_z, &b_VertexJets_referencePoint_z);
   fChain->SetBranchAddress("VertexJets.charge", VertexJets_charge, &b_VertexJets_charge);
   fChain->SetBranchAddress("VertexJets.mass", VertexJets_mass, &b_VertexJets_mass);
   fChain->SetBranchAddress("VertexJets.goodnessOfPID", VertexJets_goodnessOfPID, &b_VertexJets_goodnessOfPID);
   fChain->SetBranchAddress("VertexJets.covMatrix[10]", VertexJets_covMatrix, &b_VertexJets_covMatrix);
   fChain->SetBranchAddress("VertexJets.clusters_begin", VertexJets_clusters_begin, &b_VertexJets_clusters_begin);
   fChain->SetBranchAddress("VertexJets.clusters_end", VertexJets_clusters_end, &b_VertexJets_clusters_end);
   fChain->SetBranchAddress("VertexJets.tracks_begin", VertexJets_tracks_begin, &b_VertexJets_tracks_begin);
   fChain->SetBranchAddress("VertexJets.tracks_end", VertexJets_tracks_end, &b_VertexJets_tracks_end);
   fChain->SetBranchAddress("VertexJets.particles_begin", VertexJets_particles_begin, &b_VertexJets_particles_begin);
   fChain->SetBranchAddress("VertexJets.particles_end", VertexJets_particles_end, &b_VertexJets_particles_end);
   fChain->SetBranchAddress("VertexJets.particleIDs_begin", VertexJets_particleIDs_begin, &b_VertexJets_particleIDs_begin);
   fChain->SetBranchAddress("VertexJets.particleIDs_end", VertexJets_particleIDs_end, &b_VertexJets_particleIDs_end);
   fChain->SetBranchAddress("_VertexJets_clusters", &_VertexJets_clusters_, &b__VertexJets_clusters_);
   fChain->SetBranchAddress("_VertexJets_clusters.index", &_VertexJets_clusters_index, &b__VertexJets_clusters_index);
   fChain->SetBranchAddress("_VertexJets_clusters.collectionID", &_VertexJets_clusters_collectionID, &b__VertexJets_clusters_collectionID);
   fChain->SetBranchAddress("_VertexJets_tracks", &_VertexJets_tracks_, &b__VertexJets_tracks_);
   fChain->SetBranchAddress("_VertexJets_tracks.index", &_VertexJets_tracks_index, &b__VertexJets_tracks_index);
   fChain->SetBranchAddress("_VertexJets_tracks.collectionID", &_VertexJets_tracks_collectionID, &b__VertexJets_tracks_collectionID);
   fChain->SetBranchAddress("_VertexJets_particles", &_VertexJets_particles_, &b__VertexJets_particles_);
   fChain->SetBranchAddress("_VertexJets_particles.index", _VertexJets_particles_index, &b__VertexJets_particles_index);
   fChain->SetBranchAddress("_VertexJets_particles.collectionID", _VertexJets_particles_collectionID, &b__VertexJets_particles_collectionID);
   fChain->SetBranchAddress("_VertexJets_particleIDs", &_VertexJets_particleIDs_, &b__VertexJets_particleIDs_);
   fChain->SetBranchAddress("_VertexJets_particleIDs.index", _VertexJets_particleIDs_index, &b__VertexJets_particleIDs_index);
   fChain->SetBranchAddress("_VertexJets_particleIDs.collectionID", _VertexJets_particleIDs_collectionID, &b__VertexJets_particleIDs_collectionID);
   fChain->SetBranchAddress("_VertexJets_startVertex", &_VertexJets_startVertex_, &b__VertexJets_startVertex_);
   fChain->SetBranchAddress("_VertexJets_startVertex.index", _VertexJets_startVertex_index, &b__VertexJets_startVertex_index);
   fChain->SetBranchAddress("_VertexJets_startVertex.collectionID", _VertexJets_startVertex_collectionID, &b__VertexJets_startVertex_collectionID);
   fChain->SetBranchAddress("_VertexJets_particleIDUsed", &_VertexJets_particleIDUsed_, &b__VertexJets_particleIDUsed_);
   fChain->SetBranchAddress("_VertexJets_particleIDUsed.index", _VertexJets_particleIDUsed_index, &b__VertexJets_particleIDUsed_index);
   fChain->SetBranchAddress("_VertexJets_particleIDUsed.collectionID", _VertexJets_particleIDUsed_collectionID, &b__VertexJets_particleIDUsed_collectionID);
   fChain->SetBranchAddress("VertexJets_particleIDs", &VertexJets_particleIDs_, &b_VertexJets_particleIDs_);
   fChain->SetBranchAddress("VertexJets_particleIDs.type", VertexJets_particleIDs_type, &b_VertexJets_particleIDs_type);
   fChain->SetBranchAddress("VertexJets_particleIDs.PDG", VertexJets_particleIDs_PDG, &b_VertexJets_particleIDs_PDG);
   fChain->SetBranchAddress("VertexJets_particleIDs.algorithmType", VertexJets_particleIDs_algorithmType, &b_VertexJets_particleIDs_algorithmType);
   fChain->SetBranchAddress("VertexJets_particleIDs.likelihood", VertexJets_particleIDs_likelihood, &b_VertexJets_particleIDs_likelihood);
   fChain->SetBranchAddress("VertexJets_particleIDs.parameters_begin", VertexJets_particleIDs_parameters_begin, &b_VertexJets_particleIDs_parameters_begin);
   fChain->SetBranchAddress("VertexJets_particleIDs.parameters_end", VertexJets_particleIDs_parameters_end, &b_VertexJets_particleIDs_parameters_end);
   fChain->SetBranchAddress("_VertexJets_particleIDs_parameters", &_VertexJets_particleIDs_parameters, &b__VertexJets_particleIDs_parameters);
   fChain->SetBranchAddress("VXDEndcapTrackerHitRelations", &VXDEndcapTrackerHitRelations_, &b_VXDEndcapTrackerHitRelations_);
   fChain->SetBranchAddress("VXDEndcapTrackerHitRelations.weight", VXDEndcapTrackerHitRelations_weight, &b_VXDEndcapTrackerHitRelations_weight);
   fChain->SetBranchAddress("_VXDEndcapTrackerHitRelations_rec", &_VXDEndcapTrackerHitRelations_rec_, &b__VXDEndcapTrackerHitRelations_rec_);
   fChain->SetBranchAddress("_VXDEndcapTrackerHitRelations_rec.index", _VXDEndcapTrackerHitRelations_rec_index, &b__VXDEndcapTrackerHitRelations_rec_index);
   fChain->SetBranchAddress("_VXDEndcapTrackerHitRelations_rec.collectionID", _VXDEndcapTrackerHitRelations_rec_collectionID, &b__VXDEndcapTrackerHitRelations_rec_collectionID);
   fChain->SetBranchAddress("_VXDEndcapTrackerHitRelations_sim", &_VXDEndcapTrackerHitRelations_sim_, &b__VXDEndcapTrackerHitRelations_sim_);
   fChain->SetBranchAddress("_VXDEndcapTrackerHitRelations_sim.index", _VXDEndcapTrackerHitRelations_sim_index, &b__VXDEndcapTrackerHitRelations_sim_index);
   fChain->SetBranchAddress("_VXDEndcapTrackerHitRelations_sim.collectionID", _VXDEndcapTrackerHitRelations_sim_collectionID, &b__VXDEndcapTrackerHitRelations_sim_collectionID);
   fChain->SetBranchAddress("VXDEndcapTrackerHits", &VXDEndcapTrackerHits_, &b_VXDEndcapTrackerHits_);
   fChain->SetBranchAddress("VXDEndcapTrackerHits.cellID", VXDEndcapTrackerHits_cellID, &b_VXDEndcapTrackerHits_cellID);
   fChain->SetBranchAddress("VXDEndcapTrackerHits.type", VXDEndcapTrackerHits_type, &b_VXDEndcapTrackerHits_type);
   fChain->SetBranchAddress("VXDEndcapTrackerHits.quality", VXDEndcapTrackerHits_quality, &b_VXDEndcapTrackerHits_quality);
   fChain->SetBranchAddress("VXDEndcapTrackerHits.time", VXDEndcapTrackerHits_time, &b_VXDEndcapTrackerHits_time);
   fChain->SetBranchAddress("VXDEndcapTrackerHits.eDep", VXDEndcapTrackerHits_eDep, &b_VXDEndcapTrackerHits_eDep);
   fChain->SetBranchAddress("VXDEndcapTrackerHits.eDepError", VXDEndcapTrackerHits_eDepError, &b_VXDEndcapTrackerHits_eDepError);
   fChain->SetBranchAddress("VXDEndcapTrackerHits.u.a", VXDEndcapTrackerHits_u_a, &b_VXDEndcapTrackerHits_u_a);
   fChain->SetBranchAddress("VXDEndcapTrackerHits.u.b", VXDEndcapTrackerHits_u_b, &b_VXDEndcapTrackerHits_u_b);
   fChain->SetBranchAddress("VXDEndcapTrackerHits.v.a", VXDEndcapTrackerHits_v_a, &b_VXDEndcapTrackerHits_v_a);
   fChain->SetBranchAddress("VXDEndcapTrackerHits.v.b", VXDEndcapTrackerHits_v_b, &b_VXDEndcapTrackerHits_v_b);
   fChain->SetBranchAddress("VXDEndcapTrackerHits.du", VXDEndcapTrackerHits_du, &b_VXDEndcapTrackerHits_du);
   fChain->SetBranchAddress("VXDEndcapTrackerHits.dv", VXDEndcapTrackerHits_dv, &b_VXDEndcapTrackerHits_dv);
   fChain->SetBranchAddress("VXDEndcapTrackerHits.position.x", VXDEndcapTrackerHits_position_x, &b_VXDEndcapTrackerHits_position_x);
   fChain->SetBranchAddress("VXDEndcapTrackerHits.position.y", VXDEndcapTrackerHits_position_y, &b_VXDEndcapTrackerHits_position_y);
   fChain->SetBranchAddress("VXDEndcapTrackerHits.position.z", VXDEndcapTrackerHits_position_z, &b_VXDEndcapTrackerHits_position_z);
   fChain->SetBranchAddress("VXDEndcapTrackerHits.covMatrix[6]", VXDEndcapTrackerHits_covMatrix, &b_VXDEndcapTrackerHits_covMatrix);
   fChain->SetBranchAddress("VXDTrackerHitRelations", &VXDTrackerHitRelations_, &b_VXDTrackerHitRelations_);
   fChain->SetBranchAddress("VXDTrackerHitRelations.weight", VXDTrackerHitRelations_weight, &b_VXDTrackerHitRelations_weight);
   fChain->SetBranchAddress("_VXDTrackerHitRelations_rec", &_VXDTrackerHitRelations_rec_, &b__VXDTrackerHitRelations_rec_);
   fChain->SetBranchAddress("_VXDTrackerHitRelations_rec.index", _VXDTrackerHitRelations_rec_index, &b__VXDTrackerHitRelations_rec_index);
   fChain->SetBranchAddress("_VXDTrackerHitRelations_rec.collectionID", _VXDTrackerHitRelations_rec_collectionID, &b__VXDTrackerHitRelations_rec_collectionID);
   fChain->SetBranchAddress("_VXDTrackerHitRelations_sim", &_VXDTrackerHitRelations_sim_, &b__VXDTrackerHitRelations_sim_);
   fChain->SetBranchAddress("_VXDTrackerHitRelations_sim.index", _VXDTrackerHitRelations_sim_index, &b__VXDTrackerHitRelations_sim_index);
   fChain->SetBranchAddress("_VXDTrackerHitRelations_sim.collectionID", _VXDTrackerHitRelations_sim_collectionID, &b__VXDTrackerHitRelations_sim_collectionID);
   fChain->SetBranchAddress("VXDTrackerHits", &VXDTrackerHits_, &b_VXDTrackerHits_);
   fChain->SetBranchAddress("VXDTrackerHits.cellID", VXDTrackerHits_cellID, &b_VXDTrackerHits_cellID);
   fChain->SetBranchAddress("VXDTrackerHits.type", VXDTrackerHits_type, &b_VXDTrackerHits_type);
   fChain->SetBranchAddress("VXDTrackerHits.quality", VXDTrackerHits_quality, &b_VXDTrackerHits_quality);
   fChain->SetBranchAddress("VXDTrackerHits.time", VXDTrackerHits_time, &b_VXDTrackerHits_time);
   fChain->SetBranchAddress("VXDTrackerHits.eDep", VXDTrackerHits_eDep, &b_VXDTrackerHits_eDep);
   fChain->SetBranchAddress("VXDTrackerHits.eDepError", VXDTrackerHits_eDepError, &b_VXDTrackerHits_eDepError);
   fChain->SetBranchAddress("VXDTrackerHits.u.a", VXDTrackerHits_u_a, &b_VXDTrackerHits_u_a);
   fChain->SetBranchAddress("VXDTrackerHits.u.b", VXDTrackerHits_u_b, &b_VXDTrackerHits_u_b);
   fChain->SetBranchAddress("VXDTrackerHits.v.a", VXDTrackerHits_v_a, &b_VXDTrackerHits_v_a);
   fChain->SetBranchAddress("VXDTrackerHits.v.b", VXDTrackerHits_v_b, &b_VXDTrackerHits_v_b);
   fChain->SetBranchAddress("VXDTrackerHits.du", VXDTrackerHits_du, &b_VXDTrackerHits_du);
   fChain->SetBranchAddress("VXDTrackerHits.dv", VXDTrackerHits_dv, &b_VXDTrackerHits_dv);
   fChain->SetBranchAddress("VXDTrackerHits.position.x", VXDTrackerHits_position_x, &b_VXDTrackerHits_position_x);
   fChain->SetBranchAddress("VXDTrackerHits.position.y", VXDTrackerHits_position_y, &b_VXDTrackerHits_position_y);
   fChain->SetBranchAddress("VXDTrackerHits.position.z", VXDTrackerHits_position_z, &b_VXDTrackerHits_position_z);
   fChain->SetBranchAddress("VXDTrackerHits.covMatrix[6]", VXDTrackerHits_covMatrix, &b_VXDTrackerHits_covMatrix);
   fChain->SetBranchAddress("YokeBarrelCollection", &YokeBarrelCollection_, &b_YokeBarrelCollection_);
   fChain->SetBranchAddress("YokeBarrelCollection.cellID", YokeBarrelCollection_cellID, &b_YokeBarrelCollection_cellID);
   fChain->SetBranchAddress("YokeBarrelCollection.energy", YokeBarrelCollection_energy, &b_YokeBarrelCollection_energy);
   fChain->SetBranchAddress("YokeBarrelCollection.position.x", YokeBarrelCollection_position_x, &b_YokeBarrelCollection_position_x);
   fChain->SetBranchAddress("YokeBarrelCollection.position.y", YokeBarrelCollection_position_y, &b_YokeBarrelCollection_position_y);
   fChain->SetBranchAddress("YokeBarrelCollection.position.z", YokeBarrelCollection_position_z, &b_YokeBarrelCollection_position_z);
   fChain->SetBranchAddress("YokeBarrelCollection.contributions_begin", YokeBarrelCollection_contributions_begin, &b_YokeBarrelCollection_contributions_begin);
   fChain->SetBranchAddress("YokeBarrelCollection.contributions_end", YokeBarrelCollection_contributions_end, &b_YokeBarrelCollection_contributions_end);
   fChain->SetBranchAddress("_YokeBarrelCollection_contributions", &_YokeBarrelCollection_contributions_, &b__YokeBarrelCollection_contributions_);
   fChain->SetBranchAddress("_YokeBarrelCollection_contributions.index", _YokeBarrelCollection_contributions_index, &b__YokeBarrelCollection_contributions_index);
   fChain->SetBranchAddress("_YokeBarrelCollection_contributions.collectionID", _YokeBarrelCollection_contributions_collectionID, &b__YokeBarrelCollection_contributions_collectionID);
   fChain->SetBranchAddress("YokeBarrelCollectionContributions", &YokeBarrelCollectionContributions_, &b_YokeBarrelCollectionContributions_);
   fChain->SetBranchAddress("YokeBarrelCollectionContributions.PDG", YokeBarrelCollectionContributions_PDG, &b_YokeBarrelCollectionContributions_PDG);
   fChain->SetBranchAddress("YokeBarrelCollectionContributions.energy", YokeBarrelCollectionContributions_energy, &b_YokeBarrelCollectionContributions_energy);
   fChain->SetBranchAddress("YokeBarrelCollectionContributions.time", YokeBarrelCollectionContributions_time, &b_YokeBarrelCollectionContributions_time);
   fChain->SetBranchAddress("YokeBarrelCollectionContributions.stepPosition.x", YokeBarrelCollectionContributions_stepPosition_x, &b_YokeBarrelCollectionContributions_stepPosition_x);
   fChain->SetBranchAddress("YokeBarrelCollectionContributions.stepPosition.y", YokeBarrelCollectionContributions_stepPosition_y, &b_YokeBarrelCollectionContributions_stepPosition_y);
   fChain->SetBranchAddress("YokeBarrelCollectionContributions.stepPosition.z", YokeBarrelCollectionContributions_stepPosition_z, &b_YokeBarrelCollectionContributions_stepPosition_z);
   fChain->SetBranchAddress("_YokeBarrelCollectionContributions_particle", &_YokeBarrelCollectionContributions_particle_, &b__YokeBarrelCollectionContributions_particle_);
   fChain->SetBranchAddress("_YokeBarrelCollectionContributions_particle.index", _YokeBarrelCollectionContributions_particle_index, &b__YokeBarrelCollectionContributions_particle_index);
   fChain->SetBranchAddress("_YokeBarrelCollectionContributions_particle.collectionID", _YokeBarrelCollectionContributions_particle_collectionID, &b__YokeBarrelCollectionContributions_particle_collectionID);
   fChain->SetBranchAddress("YokeEndcapCollection", &YokeEndcapCollection_, &b_YokeEndcapCollection_);
   fChain->SetBranchAddress("YokeEndcapCollection.cellID", YokeEndcapCollection_cellID, &b_YokeEndcapCollection_cellID);
   fChain->SetBranchAddress("YokeEndcapCollection.energy", YokeEndcapCollection_energy, &b_YokeEndcapCollection_energy);
   fChain->SetBranchAddress("YokeEndcapCollection.position.x", YokeEndcapCollection_position_x, &b_YokeEndcapCollection_position_x);
   fChain->SetBranchAddress("YokeEndcapCollection.position.y", YokeEndcapCollection_position_y, &b_YokeEndcapCollection_position_y);
   fChain->SetBranchAddress("YokeEndcapCollection.position.z", YokeEndcapCollection_position_z, &b_YokeEndcapCollection_position_z);
   fChain->SetBranchAddress("YokeEndcapCollection.contributions_begin", YokeEndcapCollection_contributions_begin, &b_YokeEndcapCollection_contributions_begin);
   fChain->SetBranchAddress("YokeEndcapCollection.contributions_end", YokeEndcapCollection_contributions_end, &b_YokeEndcapCollection_contributions_end);
   fChain->SetBranchAddress("_YokeEndcapCollection_contributions", &_YokeEndcapCollection_contributions_, &b__YokeEndcapCollection_contributions_);
   fChain->SetBranchAddress("_YokeEndcapCollection_contributions.index", _YokeEndcapCollection_contributions_index, &b__YokeEndcapCollection_contributions_index);
   fChain->SetBranchAddress("_YokeEndcapCollection_contributions.collectionID", _YokeEndcapCollection_contributions_collectionID, &b__YokeEndcapCollection_contributions_collectionID);
   fChain->SetBranchAddress("YokeEndcapCollectionContributions", &YokeEndcapCollectionContributions_, &b_YokeEndcapCollectionContributions_);
   fChain->SetBranchAddress("YokeEndcapCollectionContributions.PDG", YokeEndcapCollectionContributions_PDG, &b_YokeEndcapCollectionContributions_PDG);
   fChain->SetBranchAddress("YokeEndcapCollectionContributions.energy", YokeEndcapCollectionContributions_energy, &b_YokeEndcapCollectionContributions_energy);
   fChain->SetBranchAddress("YokeEndcapCollectionContributions.time", YokeEndcapCollectionContributions_time, &b_YokeEndcapCollectionContributions_time);
   fChain->SetBranchAddress("YokeEndcapCollectionContributions.stepPosition.x", YokeEndcapCollectionContributions_stepPosition_x, &b_YokeEndcapCollectionContributions_stepPosition_x);
   fChain->SetBranchAddress("YokeEndcapCollectionContributions.stepPosition.y", YokeEndcapCollectionContributions_stepPosition_y, &b_YokeEndcapCollectionContributions_stepPosition_y);
   fChain->SetBranchAddress("YokeEndcapCollectionContributions.stepPosition.z", YokeEndcapCollectionContributions_stepPosition_z, &b_YokeEndcapCollectionContributions_stepPosition_z);
   fChain->SetBranchAddress("_YokeEndcapCollectionContributions_particle", &_YokeEndcapCollectionContributions_particle_, &b__YokeEndcapCollectionContributions_particle_);
   fChain->SetBranchAddress("_YokeEndcapCollectionContributions_particle.index", _YokeEndcapCollectionContributions_particle_index, &b__YokeEndcapCollectionContributions_particle_index);
   fChain->SetBranchAddress("_YokeEndcapCollectionContributions_particle.collectionID", _YokeEndcapCollectionContributions_particle_collectionID, &b__YokeEndcapCollectionContributions_particle_collectionID);
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
