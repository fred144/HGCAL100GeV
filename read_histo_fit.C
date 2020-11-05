{
 // also attempt at fiddling with stats box
 gStyle->SetOptFit(1111);
 
 TFile *a = TFile::Open("histo100GeV2930eres.root");
 //TFile *f=new TFile("histo.root"); 
 //f->cd();
 TH1F *b=(TH1F*)a->Get("h1");
 peak=b->GetMean() ;
 sig=b->GetStdDev();
 cout << peak << "  " << sig << endl;
 b->Fit("gaus", "","",82,94);
 b->SetFillColorAlpha(38, 1);
 b->SetXTitle("Energy (Gev)");
 b->SetYTitle("Number of Entries / 2 GeV");
 TPaveStats *ptstats = new TPaveStats(0.8,0.7,0.98,0.935,"brNDC");
    ptstats->SetName("stats");
    ptstats->SetBorderSize(1);
    ptstats->SetFillColor(0);
    ptstats->SetTextAlign(12);
    ptstats->SetTextFont(42);
    ptstats->SetTextSize(0.02736842);
    ptstats->SetOptStat(1110);
    ptstats->SetOptFit(1111);
    ptstats->Draw();
    b->GetListOfFunctions()->Add(ptstats);
    ptstats->SetParent(b);
}
 
