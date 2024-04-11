//
// Created by larse on 2024-04-03.
//

#include "impedance.h"
#include <complex>
#include <vector>

//Z = R + jwL + 1/(jwC)
//w = 2(pi)f

const std::complex<double> j(0,1);

std::complex<double> impedanceInductive(double inductance, double frequency) {

    double w = 2 * M_PI * frequency;

    std::complex<double> impedance = j * w * inductance;

    return impedance;
}

std::complex<double> impedanceCapacitive(double capacitance, double frequency) {

    double w = 2 * M_PI * frequency;

    std::complex<double> impedance = 1./(j * w * capacitance);

    return impedance;
}

std::vector<double> toPolar(std::complex<double> compNum) {

    std::vector<double> coordinates;

    double magnitude = std::abs(compNum);
    double phase = std::arg(compNum);

    //RAD to DEG
    phase = phase * (180/M_PI);

    coordinates.push_back(magnitude);
    coordinates.push_back(phase);

    return coordinates;
}