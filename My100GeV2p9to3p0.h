//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Oct 30 18:32:35 2020 by ROOT version 6.14/09
// from TTree hgc/hgc
// found on file: /data/users/karagozm/fire3_data/11.1.0.pre8/PartGunFixedEnergy/electrons/100GeV/singleeE100n2000_ntuple.root
//////////////////////////////////////////////////////////

#ifndef My100GeV2p9to3p0_h
#define My100GeV2p9to3p0_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>
#include <string>
// Headers needed by this particular selector
#include <vector>

#include "Math/GenVector/PositionVector3D.h"



class My100GeV2p9to3p0 : public TSelector {
public :
   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain
   TH1F *h1;
   TH2F *h2;
   // Readers to access the data (delete the ones you do not need).
   TTreeReaderValue<ULong64_t> event = {fReader, "event"};
   TTreeReaderValue<UInt_t> lumi = {fReader, "lumi"};
   TTreeReaderValue<UInt_t> run = {fReader, "run"};
   TTreeReaderValue<Float_t> vtx_x = {fReader, "vtx_x"};
   TTreeReaderValue<Float_t> vtx_y = {fReader, "vtx_y"};
   TTreeReaderValue<Float_t> vtx_z = {fReader, "vtx_z"};
   TTreeReaderArray<float> genpart_eta = {fReader, "genpart_eta"};
   TTreeReaderArray<float> genpart_phi = {fReader, "genpart_phi"};
   TTreeReaderArray<float> genpart_pt = {fReader, "genpart_pt"};
   TTreeReaderArray<float> genpart_energy = {fReader, "genpart_energy"};
   TTreeReaderArray<float> genpart_dvx = {fReader, "genpart_dvx"};
   TTreeReaderArray<float> genpart_dvy = {fReader, "genpart_dvy"};
   TTreeReaderArray<float> genpart_dvz = {fReader, "genpart_dvz"};
   TTreeReaderArray<float> genpart_ovx = {fReader, "genpart_ovx"};
   TTreeReaderArray<float> genpart_ovy = {fReader, "genpart_ovy"};
   TTreeReaderArray<float> genpart_ovz = {fReader, "genpart_ovz"};
   TTreeReaderArray<int> genpart_mother = {fReader, "genpart_mother"};
   TTreeReaderArray<float> genpart_exphi = {fReader, "genpart_exphi"};
   TTreeReaderArray<float> genpart_exeta = {fReader, "genpart_exeta"};
   TTreeReaderArray<float> genpart_exx = {fReader, "genpart_exx"};
   TTreeReaderArray<float> genpart_exy = {fReader, "genpart_exy"};
   TTreeReaderArray<float> genpart_fbrem = {fReader, "genpart_fbrem"};
   TTreeReaderArray<int> genpart_pid = {fReader, "genpart_pid"};
   TTreeReaderArray<int> genpart_gen = {fReader, "genpart_gen"};
   TTreeReaderArray<int> genpart_reachedEE = {fReader, "genpart_reachedEE"};
   TTreeReaderValue<vector<bool>> genpart_fromBeamPipe = {fReader, "genpart_fromBeamPipe"};
   TTreeReaderArray<vector<float>> genpart_posx = {fReader, "genpart_posx"};
   TTreeReaderArray<vector<float>> genpart_posy = {fReader, "genpart_posy"};
   TTreeReaderArray<vector<float>> genpart_posz = {fReader, "genpart_posz"};
   TTreeReaderArray<float> gen_eta = {fReader, "gen_eta"};
   TTreeReaderArray<float> gen_phi = {fReader, "gen_phi"};
   TTreeReaderArray<float> gen_pt = {fReader, "gen_pt"};
   TTreeReaderArray<float> gen_energy = {fReader, "gen_energy"};
   TTreeReaderArray<int> gen_charge = {fReader, "gen_charge"};
   TTreeReaderArray<int> gen_pdgid = {fReader, "gen_pdgid"};
   TTreeReaderArray<int> gen_status = {fReader, "gen_status"};
   TTreeReaderArray<vector<int>> gen_daughters = {fReader, "gen_daughters"};
   TTreeReaderArray<float> rechit_eta = {fReader, "rechit_eta"};
   TTreeReaderArray<float> rechit_phi = {fReader, "rechit_phi"};
   TTreeReaderArray<float> rechit_pt = {fReader, "rechit_pt"};
   TTreeReaderArray<float> rechit_energy = {fReader, "rechit_energy"};
   TTreeReaderArray<float> rechit_x = {fReader, "rechit_x"};
   TTreeReaderArray<float> rechit_y = {fReader, "rechit_y"};
   TTreeReaderArray<float> rechit_z = {fReader, "rechit_z"};
   TTreeReaderArray<float> rechit_time = {fReader, "rechit_time"};
   TTreeReaderArray<float> rechit_thickness = {fReader, "rechit_thickness"};
   TTreeReaderArray<int> rechit_layer = {fReader, "rechit_layer"};
   TTreeReaderArray<int> rechit_wafer_u = {fReader, "rechit_wafer_u"};
   TTreeReaderArray<int> rechit_wafer_v = {fReader, "rechit_wafer_v"};
   TTreeReaderArray<int> rechit_cell_u = {fReader, "rechit_cell_u"};
   TTreeReaderArray<int> rechit_cell_v = {fReader, "rechit_cell_v"};
   TTreeReaderArray<unsigned int> rechit_detid = {fReader, "rechit_detid"};
   TTreeReaderValue<vector<bool>> rechit_isHalf = {fReader, "rechit_isHalf"};
   TTreeReaderArray<int> rechit_flags = {fReader, "rechit_flags"};
   TTreeReaderArray<int> rechit_cluster2d = {fReader, "rechit_cluster2d"};
   TTreeReaderArray<float> rechit_radius = {fReader, "rechit_radius"};
   TTreeReaderArray<float> cluster2d_eta = {fReader, "cluster2d_eta"};
   TTreeReaderArray<float> cluster2d_phi = {fReader, "cluster2d_phi"};
   TTreeReaderArray<float> cluster2d_pt = {fReader, "cluster2d_pt"};
   TTreeReaderArray<float> cluster2d_energy = {fReader, "cluster2d_energy"};
   TTreeReaderArray<float> cluster2d_x = {fReader, "cluster2d_x"};
   TTreeReaderArray<float> cluster2d_y = {fReader, "cluster2d_y"};
   TTreeReaderArray<float> cluster2d_z = {fReader, "cluster2d_z"};
   TTreeReaderArray<int> cluster2d_layer = {fReader, "cluster2d_layer"};
   TTreeReaderArray<int> cluster2d_nhitCore = {fReader, "cluster2d_nhitCore"};
   TTreeReaderArray<int> cluster2d_nhitAll = {fReader, "cluster2d_nhitAll"};
   TTreeReaderArray<int> cluster2d_multicluster = {fReader, "cluster2d_multicluster"};
   TTreeReaderArray<vector<unsigned int>> cluster2d_rechits = {fReader, "cluster2d_rechits"};
   TTreeReaderArray<int> cluster2d_rechitSeed = {fReader, "cluster2d_rechitSeed"};
   TTreeReaderArray<float> multiclus_eta = {fReader, "multiclus_eta"};
   TTreeReaderArray<float> multiclus_phi = {fReader, "multiclus_phi"};
   TTreeReaderArray<float> multiclus_pt = {fReader, "multiclus_pt"};
   TTreeReaderArray<float> multiclus_energy = {fReader, "multiclus_energy"};
   TTreeReaderArray<float> multiclus_z = {fReader, "multiclus_z"};
   TTreeReaderArray<float> multiclus_slopeX = {fReader, "multiclus_slopeX"};
   TTreeReaderArray<float> multiclus_slopeY = {fReader, "multiclus_slopeY"};
   TTreeReaderArray<vector<unsigned int>> multiclus_cluster2d = {fReader, "multiclus_cluster2d"};
   TTreeReaderArray<int> multiclus_cl2dSeed = {fReader, "multiclus_cl2dSeed"};
   TTreeReaderArray<int> multiclus_firstLay = {fReader, "multiclus_firstLay"};
   TTreeReaderArray<int> multiclus_lastLay = {fReader, "multiclus_lastLay"};
   TTreeReaderArray<int> multiclus_NLay = {fReader, "multiclus_NLay"};
   TTreeReaderArray<float> simcluster_eta = {fReader, "simcluster_eta"};
   TTreeReaderArray<float> simcluster_phi = {fReader, "simcluster_phi"};
   TTreeReaderArray<float> simcluster_pt = {fReader, "simcluster_pt"};
   TTreeReaderArray<float> simcluster_energy = {fReader, "simcluster_energy"};
   TTreeReaderArray<float> simcluster_simEnergy = {fReader, "simcluster_simEnergy"};
   TTreeReaderArray<vector<unsigned int>> simcluster_hits = {fReader, "simcluster_hits"};
   TTreeReaderArray<vector<int>> simcluster_hits_indices = {fReader, "simcluster_hits_indices"};
   TTreeReaderArray<vector<float>> simcluster_fractions = {fReader, "simcluster_fractions"};
   TTreeReaderArray<vector<unsigned int>> simcluster_layers = {fReader, "simcluster_layers"};
   TTreeReaderArray<vector<int>> simcluster_wafers_u = {fReader, "simcluster_wafers_u"};
   TTreeReaderArray<vector<int>> simcluster_wafers_v = {fReader, "simcluster_wafers_v"};
   TTreeReaderArray<vector<int>> simcluster_cells_u = {fReader, "simcluster_cells_u"};
   TTreeReaderArray<vector<int>> simcluster_cells_v = {fReader, "simcluster_cells_v"};
   TTreeReaderArray<float> pfcluster_eta = {fReader, "pfcluster_eta"};
   TTreeReaderArray<float> pfcluster_phi = {fReader, "pfcluster_phi"};
   TTreeReaderArray<float> pfcluster_pt = {fReader, "pfcluster_pt"};
   TTreeReaderArray<float> pfcluster_energy = {fReader, "pfcluster_energy"};
   TTreeReaderArray<float> pfcluster_correctedEnergy = {fReader, "pfcluster_correctedEnergy"};
   TTreeReaderArray<vector<unsigned int>> pfcluster_hits = {fReader, "pfcluster_hits"};
   TTreeReaderArray<vector<float>> pfcluster_fractions = {fReader, "pfcluster_fractions"};
   TTreeReaderArray<Double_t> pfclusterFromMultiCl_pos_fCoordinates_fX = {fReader, "pfclusterFromMultiCl_pos.fCoordinates.fX"};
   TTreeReaderArray<Double_t> pfclusterFromMultiCl_pos_fCoordinates_fY = {fReader, "pfclusterFromMultiCl_pos.fCoordinates.fY"};
   TTreeReaderArray<Double_t> pfclusterFromMultiCl_pos_fCoordinates_fZ = {fReader, "pfclusterFromMultiCl_pos.fCoordinates.fZ"};
   TTreeReaderArray<float> pfclusterFromMultiCl_eta = {fReader, "pfclusterFromMultiCl_eta"};
   TTreeReaderArray<float> pfclusterFromMultiCl_phi = {fReader, "pfclusterFromMultiCl_phi"};
   TTreeReaderArray<float> pfclusterFromMultiCl_pt = {fReader, "pfclusterFromMultiCl_pt"};
   TTreeReaderArray<float> pfclusterFromMultiCl_energy = {fReader, "pfclusterFromMultiCl_energy"};
   TTreeReaderArray<float> pfclusterFromMultiCl_energyEE = {fReader, "pfclusterFromMultiCl_energyEE"};
   TTreeReaderArray<float> pfclusterFromMultiCl_energyFH = {fReader, "pfclusterFromMultiCl_energyFH"};
   TTreeReaderArray<float> pfclusterFromMultiCl_energyBH = {fReader, "pfclusterFromMultiCl_energyBH"};
   TTreeReaderArray<float> pfclusterFromMultiCl_correctedEnergy = {fReader, "pfclusterFromMultiCl_correctedEnergy"};
   TTreeReaderArray<vector<unsigned int>> pfclusterFromMultiCl_hits = {fReader, "pfclusterFromMultiCl_hits"};
   TTreeReaderArray<vector<float>> pfclusterFromMultiCl_fractions = {fReader, "pfclusterFromMultiCl_fractions"};
   TTreeReaderArray<vector<unsigned int>> pfclusterFromMultiCl_rechits = {fReader, "pfclusterFromMultiCl_rechits"};
   TTreeReaderArray<float> ecalDrivenGsfele_charge = {fReader, "ecalDrivenGsfele_charge"};
   TTreeReaderArray<float> ecalDrivenGsfele_eta = {fReader, "ecalDrivenGsfele_eta"};
   TTreeReaderArray<float> ecalDrivenGsfele_phi = {fReader, "ecalDrivenGsfele_phi"};
   TTreeReaderArray<float> ecalDrivenGsfele_pt = {fReader, "ecalDrivenGsfele_pt"};
   TTreeReaderArray<Double_t> ecalDrivenGsfele_scpos_fCoordinates_fX = {fReader, "ecalDrivenGsfele_scpos.fCoordinates.fX"};
   TTreeReaderArray<Double_t> ecalDrivenGsfele_scpos_fCoordinates_fY = {fReader, "ecalDrivenGsfele_scpos.fCoordinates.fY"};
   TTreeReaderArray<Double_t> ecalDrivenGsfele_scpos_fCoordinates_fZ = {fReader, "ecalDrivenGsfele_scpos.fCoordinates.fZ"};
   TTreeReaderArray<float> ecalDrivenGsfele_sceta = {fReader, "ecalDrivenGsfele_sceta"};
   TTreeReaderArray<float> ecalDrivenGsfele_scphi = {fReader, "ecalDrivenGsfele_scphi"};
   TTreeReaderArray<unsigned int> ecalDrivenGsfele_seedlayer = {fReader, "ecalDrivenGsfele_seedlayer"};
   TTreeReaderArray<Double_t> ecalDrivenGsfele_seedpos_fCoordinates_fX = {fReader, "ecalDrivenGsfele_seedpos.fCoordinates.fX"};
   TTreeReaderArray<Double_t> ecalDrivenGsfele_seedpos_fCoordinates_fY = {fReader, "ecalDrivenGsfele_seedpos.fCoordinates.fY"};
   TTreeReaderArray<Double_t> ecalDrivenGsfele_seedpos_fCoordinates_fZ = {fReader, "ecalDrivenGsfele_seedpos.fCoordinates.fZ"};
   TTreeReaderArray<float> ecalDrivenGsfele_seedeta = {fReader, "ecalDrivenGsfele_seedeta"};
   TTreeReaderArray<float> ecalDrivenGsfele_seedphi = {fReader, "ecalDrivenGsfele_seedphi"};
   TTreeReaderArray<float> ecalDrivenGsfele_seedenergy = {fReader, "ecalDrivenGsfele_seedenergy"};
   TTreeReaderArray<float> ecalDrivenGsfele_energy = {fReader, "ecalDrivenGsfele_energy"};
   TTreeReaderArray<float> ecalDrivenGsfele_energyEE = {fReader, "ecalDrivenGsfele_energyEE"};
   TTreeReaderArray<float> ecalDrivenGsfele_energyFH = {fReader, "ecalDrivenGsfele_energyFH"};
   TTreeReaderArray<float> ecalDrivenGsfele_energyBH = {fReader, "ecalDrivenGsfele_energyBH"};
   TTreeReaderArray<float> ecalDrivenGsfele_isEB = {fReader, "ecalDrivenGsfele_isEB"};
   TTreeReaderArray<float> ecalDrivenGsfele_hoe = {fReader, "ecalDrivenGsfele_hoe"};
   TTreeReaderArray<float> ecalDrivenGsfele_numClinSC = {fReader, "ecalDrivenGsfele_numClinSC"};
   TTreeReaderArray<float> ecalDrivenGsfele_track_dxy = {fReader, "ecalDrivenGsfele_track_dxy"};
   TTreeReaderArray<float> ecalDrivenGsfele_track_dz = {fReader, "ecalDrivenGsfele_track_dz"};
   TTreeReaderArray<float> ecalDrivenGsfele_track_simdxy = {fReader, "ecalDrivenGsfele_track_simdxy"};
   TTreeReaderArray<float> ecalDrivenGsfele_track_simdz = {fReader, "ecalDrivenGsfele_track_simdz"};
   TTreeReaderArray<float> ecalDrivenGsfele_deltaEtaSuperClusterTrackAtVtx = {fReader, "ecalDrivenGsfele_deltaEtaSuperClusterTrackAtVtx"};
   TTreeReaderArray<float> ecalDrivenGsfele_deltaPhiSuperClusterTrackAtVtx = {fReader, "ecalDrivenGsfele_deltaPhiSuperClusterTrackAtVtx"};
   TTreeReaderArray<float> ecalDrivenGsfele_deltaEtaEleClusterTrackAtCalo = {fReader, "ecalDrivenGsfele_deltaEtaEleClusterTrackAtCalo"};
   TTreeReaderArray<float> ecalDrivenGsfele_deltaPhiEleClusterTrackAtCalo = {fReader, "ecalDrivenGsfele_deltaPhiEleClusterTrackAtCalo"};
   TTreeReaderArray<float> ecalDrivenGsfele_deltaEtaSeedClusterTrackAtCalo = {fReader, "ecalDrivenGsfele_deltaEtaSeedClusterTrackAtCalo"};
   TTreeReaderArray<float> ecalDrivenGsfele_deltaPhiSeedClusterTrackAtCalo = {fReader, "ecalDrivenGsfele_deltaPhiSeedClusterTrackAtCalo"};
   TTreeReaderArray<float> ecalDrivenGsfele_eSuperClusterOverP = {fReader, "ecalDrivenGsfele_eSuperClusterOverP"};
   TTreeReaderArray<float> ecalDrivenGsfele_eSeedClusterOverP = {fReader, "ecalDrivenGsfele_eSeedClusterOverP"};
   TTreeReaderArray<float> ecalDrivenGsfele_eSeedClusterOverPout = {fReader, "ecalDrivenGsfele_eSeedClusterOverPout"};
   TTreeReaderArray<float> ecalDrivenGsfele_eEleClusterOverPout = {fReader, "ecalDrivenGsfele_eEleClusterOverPout"};
   TTreeReaderArray<vector<unsigned int>> ecalDrivenGsfele_pfClusterIndex = {fReader, "ecalDrivenGsfele_pfClusterIndex"};
   TTreeReaderArray<float> calopart_eta = {fReader, "calopart_eta"};
   TTreeReaderArray<float> calopart_phi = {fReader, "calopart_phi"};
   TTreeReaderArray<float> calopart_pt = {fReader, "calopart_pt"};
   TTreeReaderArray<float> calopart_energy = {fReader, "calopart_energy"};
   TTreeReaderArray<float> calopart_simEnergy = {fReader, "calopart_simEnergy"};
   TTreeReaderArray<vector<unsigned int>> calopart_simClusterIndex = {fReader, "calopart_simClusterIndex"};
   TTreeReaderArray<float> track_eta = {fReader, "track_eta"};
   TTreeReaderArray<float> track_phi = {fReader, "track_phi"};
   TTreeReaderArray<float> track_pt = {fReader, "track_pt"};
   TTreeReaderArray<float> track_energy = {fReader, "track_energy"};
   TTreeReaderArray<int> track_charge = {fReader, "track_charge"};
   TTreeReaderArray<vector<float>> track_posx = {fReader, "track_posx"};
   TTreeReaderArray<vector<float>> track_posy = {fReader, "track_posy"};
   TTreeReaderArray<vector<float>> track_posz = {fReader, "track_posz"};
   TTreeReaderArray<float> pfcandidate_eta = {fReader, "pfcandidate_eta"};
   TTreeReaderArray<float> pfcandidate_phi = {fReader, "pfcandidate_phi"};
   TTreeReaderArray<float> pfcandidate_pt = {fReader, "pfcandidate_pt"};
   TTreeReaderArray<float> pfcandidate_energy = {fReader, "pfcandidate_energy"};
   TTreeReaderArray<int> pfcandidate_pdgid = {fReader, "pfcandidate_pdgid"};
   TTreeReaderArray<vector<int>> gunparticle_id = {fReader, "gunparticle_id"};
   TTreeReaderArray<vector<float>> gunparticle_energy = {fReader, "gunparticle_energy"};
   TTreeReaderArray<vector<float>> gunparticle_pt = {fReader, "gunparticle_pt"};
   TTreeReaderArray<vector<float>> gunparticle_eta = {fReader, "gunparticle_eta"};
   TTreeReaderArray<vector<float>> gunparticle_phi = {fReader, "gunparticle_phi"};


   My100GeV2p9to3p0(TTree * /*tree*/ =0) { }
   virtual ~My100GeV2p9to3p0() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(My100GeV2p9to3p0,0);

};

#endif

#ifdef My100GeV2p9to3p0_cxx
void My100GeV2p9to3p0::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);
}

Bool_t My100GeV2p9to3p0::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef My100GeV2p9to3p0_cxx
