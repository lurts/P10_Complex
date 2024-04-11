//
// Created by larse on 2024-04-03.
//

#ifndef P10_COMPLEX_IMPEDANCE_H
#define P10_COMPLEX_IMPEDANCE_H

#endif //P10_COMPLEX_IMPEDANCE_H

#include <complex>
#include <vector>

std::complex<double> impedanceInductive(double inductance, double frequency);

std::complex<double> impedanceCapacitive(double capacitance, double frequency);

std::vector<double> toPolar(std::complex<double> compNum);