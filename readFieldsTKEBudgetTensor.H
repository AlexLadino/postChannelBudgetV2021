    volSymmTensorField RMean
    (
        IOobject
        (
            "RMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField RMeanxx(RMean.component(symmTensor::XX));
    volScalarField RMeanyy(RMean.component(symmTensor::YY));
    volScalarField RMeanzz(RMean.component(symmTensor::ZZ));
    volScalarField RMeanxy(RMean.component(symmTensor::XY));
    
// -----------------------------------------------------------------------------------------

    volSymmTensorField DDtReynoldsStressMean
    (
        IOobject
        (
            "DDtReynoldsStressMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField DDtReynoldsStressMeanxx(DDtReynoldsStressMean.component(symmTensor::XX));
    volScalarField DDtReynoldsStressMeanyy(DDtReynoldsStressMean.component(symmTensor::YY));
    volScalarField DDtReynoldsStressMeanzz(DDtReynoldsStressMean.component(symmTensor::ZZ));
    volScalarField DDtReynoldsStressMeanxy(DDtReynoldsStressMean.component(symmTensor::XY));
    
// -----------------------------------------------------------------------------------------

    volSymmTensorField dissipationMean
    (
        IOobject
        (
            "dissipationMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField dissipationMeanxx(dissipationMean.component(symmTensor::XX));
    volScalarField dissipationMeanyy(dissipationMean.component(symmTensor::YY));
    volScalarField dissipationMeanzz(dissipationMean.component(symmTensor::ZZ));
    volScalarField dissipationMeanxy(dissipationMean.component(symmTensor::XY));
    
// --------------------------------------------------------------------------------

    volSymmTensorField molDiffMean
    (
        IOobject
        (
            "molDiffMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField molDiffMeanxx(molDiffMean.component(symmTensor::XX));
    volScalarField molDiffMeanyy(molDiffMean.component(symmTensor::YY));
    volScalarField molDiffMeanzz(molDiffMean.component(symmTensor::ZZ));
    volScalarField molDiffMeanxy(molDiffMean.component(symmTensor::XY));        

// -------------------------------------------------------------------------------------

    volSymmTensorField pDiffMean
    (
        IOobject
        (
            "pDiffMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField pDiffMeanxx(pDiffMean.component(symmTensor::XX));
    volScalarField pDiffMeanyy(pDiffMean.component(symmTensor::YY));
    volScalarField pDiffMeanzz(pDiffMean.component(symmTensor::ZZ));
    volScalarField pDiffMeanxy(pDiffMean.component(symmTensor::XY));
    
// -----------------------------------------------------------------------------------------

    volSymmTensorField prodMean
    (
        IOobject
        (
            "prodMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField prodMeanxx(prodMean.component(symmTensor::XX));
    volScalarField prodMeanyy(prodMean.component(symmTensor::YY));
    volScalarField prodMeanzz(prodMean.component(symmTensor::ZZ));
    volScalarField prodMeanxy(prodMean.component(symmTensor::XY));
    
// -----------------------------------------------------------------------------------------
    volSymmTensorField pStrainMean
    (
        IOobject
        (
            "pStrainMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField pStrainMeanxx(pStrainMean.component(symmTensor::XX));
    volScalarField pStrainMeanyy(pStrainMean.component(symmTensor::YY));
    volScalarField pStrainMeanzz(pStrainMean.component(symmTensor::ZZ));
    volScalarField pStrainMeanxy(pStrainMean.component(symmTensor::XY));
    
// -----------------------------------------------------------------------------------------
 
    volSymmTensorField turbTransMean
    (
        IOobject
        (
            "turbTransMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField turbTransMeanxx(turbTransMean.component(symmTensor::XX));
    volScalarField turbTransMeanyy(turbTransMean.component(symmTensor::YY));
    volScalarField turbTransMeanzz(turbTransMean.component(symmTensor::ZZ));
    volScalarField turbTransMeanxy(turbTransMean.component(symmTensor::XY));
    
// -----------------------------------------------------------------------------------------

 
    