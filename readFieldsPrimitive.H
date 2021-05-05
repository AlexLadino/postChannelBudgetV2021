    IOobject UHeader
    (
        "U",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ
    );

    if (!UHeader.typeHeaderOk<volVectorField>(true))
    {
        Info<< "    No U field" << endl;
        continue;
    }

    volVectorField U
    (
        UHeader,
        mesh
    );
    
 
#include      "createPhi.H"
singlePhaseTransportModel laminarTransport(U, phi);

autoPtr<incompressible::turbulenceModel> turbulence
(
    incompressible::turbulenceModel::New(U, phi, laminarTransport)
);    

dimensionedScalar eps2("VSMALL", dimensionSet(0, 2, -3, 0, 0, 0, 0), VSMALL);

volScalarField kolmogorovLengthScale
(
      IOobject
      (
            "kolmogorovLengthScale",
            runTime.timeName(),
            mesh,
            IOobject::NO_READ,
            IOobject::NO_WRITE
      ),
      mesh,
      dimensionedScalar("zero", dimensionSet(0, 1, 0, 0, 0, 0, 0), 0.0)
);          
    
volScalarField kolmogorovTimeScale
(
      IOobject
      (
            "kolmogorovTimeScale",
            runTime.timeName(),
            mesh,
            IOobject::NO_READ,
            IOobject::NO_WRITE
      ),
      mesh,
      dimensionedScalar("zero", dimensionSet(0, 0, 1, 0, 0, 0, 0), 0.0)
); 

    
// ----------------------------------------------------------------------------
    
    
    IOobject UMeanHeader
    (
        "UMean",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ
    );

    if (!UMeanHeader.typeHeaderOk<volVectorField>(true))
    {
        Info<< "    No UMean field" << endl;
        continue;
    }

    volVectorField UMean
    (
        UMeanHeader,
        mesh
    );

// ----------------------------------------------------------------------------
      
    volScalarField pMean
    (
        IOobject
        (
            "pMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );

// ----------------------------------------------------------------------------

    IOobject vorticityMeanHeader
    (
        "vorticityMean",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ
    );

    if (!vorticityMeanHeader.typeHeaderOk<volVectorField>(true))
    {
        Info<< "    No vorticityMean field" << endl;
        continue;
    }

    volVectorField vorticityMean
    (
        vorticityMeanHeader,
        mesh
    );
    
        
    volSymmTensorField vorticity2PrimeMean
    (
        IOobject
        (
            "vorticity2PrimeMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField vorticity2PrimeMeanxx(vorticity2PrimeMean.component(symmTensor::XX));
    volScalarField vorticity2PrimeMeanyy(vorticity2PrimeMean.component(symmTensor::YY));
    volScalarField vorticity2PrimeMeanzz(vorticity2PrimeMean.component(symmTensor::ZZ));
    volScalarField vorticity2PrimeMeanxy(vorticity2PrimeMean.component(symmTensor::XY));
    
    
    


    /*
    volScalarField epsilonMean
    (
        IOobject
        (
            "epsilonMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );

    volScalarField nUMean
    (
        IOobject
        (
            "nUMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );

    volScalarField gammaDotMean
    (
        IOobject
        (
            "gammaDotMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );

    volScalarField nuPrime2
    (
        IOobject
        (
            "nuPrime",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField nuPrime = sqrt(mag(nuPrime2 - sqr(nUMean)));


    volScalarField gammaDotPrime2
    (
        IOobject
        (
            "gammaDotPrime",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField gammaDotPrime = sqrt(mag(gammaDotPrime2 -sqr(gammaDotMean)));
    */
