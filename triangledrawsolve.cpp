#include <math.h>
#include <QWidget>
#include <iostream>
#include "supportmathfuncs.h"

auto triangledrawsolve(double a, double b, double c) -> std::vector<double>
{
    std::vector<double> A(2, 0.0);
    std::vector<double> B = {0.0, c};
    double cosB = cosCalculate(a, b, c);
    double sinB = sqrt(1 - cosB * cosB);
    std::vector<double> C(2, 0);
    C[0] = c * sinB;
    C[1] = c * cosB;
    C[0] = (C[0] < 0) ? -C[0] : C[0];
    C[1] = (C[1] < 0) ? (-C[1]) + a : C[1];
    return C;
}
