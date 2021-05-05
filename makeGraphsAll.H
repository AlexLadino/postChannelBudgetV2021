
const scalarField& y = channelIndexing.y();

makeGraph(y, UMeanXvalues, "Uf", path, gFormat);   
makeGraph(y, urmsValues, "urms", path, gFormat);
makeGraph(y, vrmsValues, "vrms", path, gFormat);
makeGraph(y, wrmsValues, "wrms", path, gFormat);
makeGraph(y, kValues, "k", path, gFormat);    

makeGraph(y, vorticityMeanZvalues, "wz", path, gFormat);    
makeGraph(y, vorticityxrmsValues, "wxrms", path, gFormat);
makeGraph(y, vorticityyrmsValues, "wyrms", path, gFormat);
makeGraph(y, vorticityzrmsValues, "wzrms", path, gFormat);

makeGraph(y, pMeanValues, "p", path, gFormat);

// ----------------------------------------------------------------------------
makeGraph(y, dissipationTKEMeanValues, "Ek", path, gFormat);
makeGraph(y, pressureDiffusionTKEMeanValues, "PIDk", path, gFormat);
makeGraph(y, pressureStrainTKEMeanValues, "PISk", path, gFormat);
makeGraph(y, prodTKEMeanValues, "Pk", path, gFormat);
makeGraph(y, turbulenceTransportTKEMeanValues, "Tk", path, gFormat);
makeGraph(y, viscousDiffusionTKEMeanValues, "Dk", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, dissipationNumericalMeanValues, "Enum", path, gFormat);
makeGraph(y, nuNumericalMeanValues, "nuNum", path, gFormat);
makeGraph(y, QDNSIndexMeanValues, "QDNSInd", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, RMeanxxValues, "Rxx", path, gFormat);
makeGraph(y, RMeanxyValues, "Ryy", path, gFormat);
makeGraph(y, RMeanzzValues, "Rzz", path, gFormat);
makeGraph(y, RMeanxyValues, "Rxy", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, DDtReynoldsStressMeanxxValues, "DDtRxx", path, gFormat);
makeGraph(y, DDtReynoldsStressMeanxyValues, "DDtRyy", path, gFormat);
makeGraph(y, DDtReynoldsStressMeanzzValues, "DDtRzz", path, gFormat);
makeGraph(y, DDtReynoldsStressMeanxyValues, "DDtRxy", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, dissipationMeanxxValues, "Exx", path, gFormat);
makeGraph(y, dissipationMeanxyValues, "Eyy", path, gFormat);
makeGraph(y, dissipationMeanzzValues, "Ezz", path, gFormat);
makeGraph(y, dissipationMeanxyValues, "Exy", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, molDiffMeanxxValues, "Dxx", path, gFormat);
makeGraph(y, molDiffMeanxyValues, "Dyy", path, gFormat);
makeGraph(y, molDiffMeanzzValues, "Dzz", path, gFormat);
makeGraph(y, molDiffMeanxyValues, "Dxy", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, pDiffMeanxxValues, "PIDxx", path, gFormat);
makeGraph(y, pDiffMeanxyValues, "PIDyy", path, gFormat);
makeGraph(y, pDiffMeanzzValues, "PIDzz", path, gFormat);
makeGraph(y, pDiffMeanxyValues, "PIDxy", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, prodMeanxxValues, "Pxx", path, gFormat);
makeGraph(y, prodMeanxyValues, "Pyy", path, gFormat);
makeGraph(y, prodMeanzzValues, "Pzz", path, gFormat);
makeGraph(y, prodMeanxyValues, "Pxy", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, pStrainMeanxxValues, "PISxx", path, gFormat);
makeGraph(y, pStrainMeanxyValues, "PISyy", path, gFormat);
makeGraph(y, pStrainMeanzzValues, "PISzz", path, gFormat);
makeGraph(y, pStrainMeanxyValues, "PISxy", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, turbTransMeanxxValues, "Txx", path, gFormat);
makeGraph(y, turbTransMeanxyValues, "Tyy", path, gFormat);
makeGraph(y, turbTransMeanzzValues, "Tzz", path, gFormat);
makeGraph(y, turbTransMeanxyValues, "Txy", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, kolmogorovLengthScaleValues, "nuK", path, gFormat);
makeGraph(y, kolmogorovTimeScaleValues, "tauK", path, gFormat);



/*
makeGraph(y, epsilonValues, "epsilon", path, gFormat);
makeGraph(y, nuMeanValues, "nu", path, gFormat);
makeGraph(y, nuPrimeValues, "nuPrime", path, gFormat);
makeGraph(y, gammaDotMeanValues, "gammaDot", path, gFormat);
makeGraph(y, gammaDotPrimeValues, "gammaDotPrime", path, gFormat);
*/
