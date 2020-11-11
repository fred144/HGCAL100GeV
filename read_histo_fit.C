{
 // also attempt at fiddling with stats box
 gStyle->SetOptFit(1111);
 
 TFile *f = TFile::Open("histo100GeV1516eres.root");
 //TFile *f=new TFile("histo.root"); 
 //f->cd();
 TH1F *h=(TH1F*)f->Get("h1");
 peak=h->GetMean() ;
 sig=h->GetStdDev();
 cout << peak << "  " << sig << endl;
 h->Fit("gaus", "","",96,108);
 h->SetFillColorAlpha(38, 1);
 h->SetXTitle("Energy (Gev)");
 h->SetYTitle("Number of Entries / 2 GeV");
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
    h->GetListOfFunctions()->Add(ptstats);
    ptstats->SetParent(h);
}
 
