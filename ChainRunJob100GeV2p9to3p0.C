void ChainRunJob100GeV2p9to3p0()
{
TChain chain("ana/hgc");
chain.Add("/data/users/karagozm/fire3_data/11.1.0.pre8/PartGunFixedEnergy/electrons/100GeV/singleeE100n2000_ntuple.root");






chain.Process("My100GeV2p9to3p0.C");
}
