fileName path(UMean.rootPath()/UMean.caseName()/"graphs"/UMean.instance());
mkDir(path);

scalarField UMeanXvalues
(
  channelIndexing.collapse(UMean.component(vector::X)())
);

scalarField UMeanYvalues
(
  channelIndexing.collapse(UMean.component(vector::Y)())
);

scalarField UMeanZvalues
(
  channelIndexing.collapse(UMean.component(vector::Z)())
);

scalarField pMeanValues(channelIndexing.collapse(pMean));
// ---------------------------------------------------------------------------
scalarField vorticityMeanXvalues
(
  channelIndexing.collapse(vorticityMean.component(vector::X)())
);

scalarField vorticityMeanYvalues
(
  channelIndexing.collapse(vorticityMean.component(vector::Y)())
);

scalarField vorticityMeanZvalues
(
  channelIndexing.collapse(vorticityMean.component(vector::Z)())
);

scalarField vorticity2PrimeMeanxxValues(channelIndexing.collapse(vorticity2PrimeMeanxx));
scalarField vorticity2PrimeMeanyyValues(channelIndexing.collapse(vorticity2PrimeMeanyy));
scalarField vorticity2PrimeMeanzzValues(channelIndexing.collapse(vorticity2PrimeMeanzz));
scalarField vorticity2PrimeMeanxyValues(channelIndexing.collapse(vorticity2PrimeMeanxy, true));
//  --------------------------------------------------------------------------
scalarField dissipationTKEMeanValues(channelIndexing.collapse(dissipationTKEMean));
scalarField pressureDiffusionTKEMeanValues(channelIndexing.collapse(pressureDiffusionTKEMean));
scalarField pressureStrainTKEMeanValues(channelIndexing.collapse(pressureStrainTKEMean));
scalarField prodTKEMeanValues(channelIndexing.collapse(prodTKEMean));
scalarField turbulenceTransportTKEMeanValues(channelIndexing.collapse(turbulenceTransportTKEMean));
scalarField viscousDiffusionTKEMeanValues(channelIndexing.collapse(viscousDiffusionTKEMean));
// ----------------------------------------------------------------------------
scalarField dissipationNumericalMeanValues(channelIndexing.collapse(dissipationNumericalMean));
scalarField nuNumericalMeanValues(channelIndexing.collapse(nuNumericalMean));
scalarField QDNSIndexMeanValues(channelIndexing.collapse(QDNSIndexMean));  
// ----------------------------------------------------------------------------
scalarField RMeanxxValues(channelIndexing.collapse(RMeanxx));
scalarField RMeanyyValues(channelIndexing.collapse(RMeanyy));
scalarField RMeanzzValues(channelIndexing.collapse(RMeanzz));
scalarField RMeanxyValues(channelIndexing.collapse(RMeanxy, true));
// ----------------------------------------------------------------------------
scalarField DDtReynoldsStressMeanxxValues(channelIndexing.collapse(DDtReynoldsStressMeanxx));
scalarField DDtReynoldsStressMeanyyValues(channelIndexing.collapse(DDtReynoldsStressMeanyy));
scalarField DDtReynoldsStressMeanzzValues(channelIndexing.collapse(DDtReynoldsStressMeanzz));
scalarField DDtReynoldsStressMeanxyValues(channelIndexing.collapse(DDtReynoldsStressMeanxy, true));
// ----------------------------------------------------------------------------
scalarField dissipationMeanxxValues(channelIndexing.collapse(dissipationMeanxx));
scalarField dissipationMeanyyValues(channelIndexing.collapse(dissipationMeanyy));
scalarField dissipationMeanzzValues(channelIndexing.collapse(dissipationMeanzz));
scalarField dissipationMeanxyValues(channelIndexing.collapse(dissipationMeanxy, true));
// ----------------------------------------------------------------------------
scalarField molDiffMeanxxValues(channelIndexing.collapse(molDiffMeanxx));
scalarField molDiffMeanyyValues(channelIndexing.collapse(molDiffMeanyy));
scalarField molDiffMeanzzValues(channelIndexing.collapse(molDiffMeanzz));
scalarField molDiffMeanxyValues(channelIndexing.collapse(molDiffMeanxy, true));
// ----------------------------------------------------------------------------
scalarField pDiffMeanxxValues(channelIndexing.collapse(pDiffMeanxx));
scalarField pDiffMeanyyValues(channelIndexing.collapse(pDiffMeanyy));
scalarField pDiffMeanzzValues(channelIndexing.collapse(pDiffMeanzz));
scalarField pDiffMeanxyValues(channelIndexing.collapse(pDiffMeanxy, true));
// ----------------------------------------------------------------------------
scalarField prodMeanxxValues(channelIndexing.collapse(prodMeanxx));
scalarField prodMeanyyValues(channelIndexing.collapse(prodMeanyy));
scalarField prodMeanzzValues(channelIndexing.collapse(prodMeanzz));
scalarField prodMeanxyValues(channelIndexing.collapse(prodMeanxy, true));
// ----------------------------------------------------------------------------
scalarField pStrainMeanxxValues(channelIndexing.collapse(pStrainMeanxx));
scalarField pStrainMeanyyValues(channelIndexing.collapse(pStrainMeanyy));
scalarField pStrainMeanzzValues(channelIndexing.collapse(pStrainMeanzz));
scalarField pStrainMeanxyValues(channelIndexing.collapse(pStrainMeanxy, true));
// ----------------------------------------------------------------------------
scalarField turbTransMeanxxValues(channelIndexing.collapse(turbTransMeanxx));
scalarField turbTransMeanyyValues(channelIndexing.collapse(turbTransMeanyy));
scalarField turbTransMeanzzValues(channelIndexing.collapse(turbTransMeanzz));
scalarField turbTransMeanxyValues(channelIndexing.collapse(turbTransMeanxy, true));    

/*
scalarField epsilonValues(channelIndexing.collapse(epsilonMean));

scalarField nuMeanValues(channelIndexing.collapse(nuMean));
scalarField nuPrimeValues(channelIndexing.collapse(nuPrime));

scalarField gammaDotMeanValues(channelIndexing.collapse(gammaDotMean));
scalarField gammaDotPrimeValues(channelIndexing.collapse(gammaDotPrime));
*/

scalarField urmsValues(sqrt(mag(RMeanxxValues)));
scalarField vrmsValues(sqrt(mag(RMeanyyValues)));
scalarField wrmsValues(sqrt(mag(RMeanzzValues)));

scalarField kValues
(
      0.5*(sqr(urmsValues) + sqr(vrmsValues) + sqr(wrmsValues))
);

scalarField vorticityxrmsValues(sqrt(mag(vorticity2PrimeMeanxxValues)));
scalarField vorticityyrmsValues(sqrt(mag(vorticity2PrimeMeanyyValues)));
scalarField vorticityzrmsValues(sqrt(mag(vorticity2PrimeMeanzzValues)));

// scalarField kolmogorovLengthScaleValues(channelIndexing.collapse(kolmogorovLengthScale));
// scalarField kolmogorovTimeScaleValues(channelIndexing.collapse(kolmogorovTimeScale));

