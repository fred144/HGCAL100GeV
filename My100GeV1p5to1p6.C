#define My100GeV1p5to1p6_cxx
// The class definition in My100GeV1p5to1p6.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.


// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// root> T->Process("My100GeV1p5to1p6.C")
// root> T->Process("My100GeV1p5to1p6.C","some options")
// root> T->Process("My100GeV1p5to1p6.C+")
//


#include "My100GeV1p5to1p6.h"
#include <TH2.h>
#include <TStyle.h>
#include <TH1.h>
#include <iostream>

void My100GeV1p5to1p6::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();
}

void My100GeV1p5to1p6::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();


   h1 = new TH1F("h1", "Reconstructed Energy 100 GeV (eta = 1.5 - 1.6)", (140-60)/2 , 60, 140);
   GetOutputList() -> Add (h1);
   h1->SetXTitle("Energy (Gev)");
   h1->SetYTitle("Number of Entries");


}

Bool_t My100GeV1p5to1p6::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // When processing keyed objects with PROOF, the object is already loaded
   // and is available via the fObject pointer.
   //
   // This function should contain the \"body\" of the analysis. It can contain
   // simple or elaborate selection criteria, run algorithms on the data
   // of the event and typically fill histograms.
   //
   // The processing can be stopped by calling Abort().
   //
   // Use fStatus to set the return value of TTree::Process().
   //
   // The return value is currently not used.

   fReader.SetLocalEntry(entry);


// Loop over electrons
      for (int igen = 0, ngen =  gen_energy.GetSize(); igen < ngen; ++igen)
       {
        const double electronmass = 0.000511;
        TLorentzVector TLVElectron; TLVElectron.SetPtEtaPhiM(gen_pt[igen],gen_eta[igen],gen_phi[igen],electronmass);

        // Loop over HGCRecHits
        double SumE=0.;

        for (int irc = 0, nrc =  rechit_energy.GetSize(); irc < nrc; ++irc)
        {
	  if ( ( ( (gen_eta[igen])  > 1.5) && ( (gen_eta[igen])  < 1.6) ) ||  ( ( (gen_eta[igen])  > -1.6) && ( (gen_eta[igen])  < -1.5) ) )
	    
	  {
         
	    if (rechit_layer[irc] < 29)

	      {
	      TLorentzVector TLVRecHit;
	      double rechit_pt = rechit_energy[irc]/cosh(rechit_eta[irc]); //p=E for rechits
	      TLVRecHit.SetPtEtaPhiE(rechit_pt,rechit_eta[irc],rechit_phi[irc],rechit_energy[irc]);
	      double dR = TLVRecHit.DeltaR(TLVElectron);
	      if (dR < 0.3) SumE += TLVRecHit.E();
	      }
	       
	    }
       
       }
	h1 -> Fill(SumE);    
       }







   return kTRUE;
}

void My100GeV1p5to1p6::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void My100GeV1p5to1p6::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.

  // h1 -> Draw();
   TFile file_out("histo100GeV1516eres.root","RECREATE");
   h1->Write();
   file_out.ls();
   file_out.Close();
}
