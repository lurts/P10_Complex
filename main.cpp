/***********************************************************************
Datei: P10_Complex
Inhalt: 
Autor: Lars Ebbeke
Datum: 2024-04-03
To Do:
- 
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <complex>
#include "impedance.h"


int main() {

    const double R = 10.0;
    const double L = 0.100;
    const double C = 0.000001;
    double f = 100.0;

    std::ofstream file;
    file.open("Koordinaten.csv");


    while (f <= 1000) {

        std::complex<double> impedanceTotal = R + impedanceInductive(L, f) + impedanceCapacitive(C, f);

        std::vector<double> polarCoordinates = toPolar(impedanceTotal);

        std::cout << std::setw(7) << f << " Hz -> Polarkoordinaten: (" << polarCoordinates[0] << ", " << polarCoordinates[1] << ")\n";
        file << f << ";" << polarCoordinates[0] << "\n";

        f *= 1.05;
    }

    file.close();

    return 0;
}