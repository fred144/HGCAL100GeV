void ChainRunJob100GeV1p5to1p6()
{
TChain chain("ana/hgc");
chain.Add("/data/users/karagozm/fire3_data/11.1.0.pre8/PartGunFixedEnergy/electrons/100GeV/singleeE100n2000_ntuple.root");






chain.Process("My100GeV1p5to1p6.C");
}
