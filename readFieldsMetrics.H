    volScalarField dissipationNumericalMean
    (
        IOobject
        (
            "dissipationNumericalMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );

// ----------------------------------------------------------------------------

    volScalarField nuNumericalMean
    (
        IOobject
        (
            "nuNumericalMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
        
// ----------------------------------------------------------------------------

    volScalarField QDNSIndexMean
    (
        IOobject
        (
            "QDNSIndexMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    