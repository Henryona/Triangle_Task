#include <math.h>
#include <QWidget>
#include <iostream>
#include "trianglescale.h"
#include "supportmathfuncs.h"

auto trianglescale(double a, double b, double c) -> std::vector<double>
{
    double koeff = 300 / maxOfThree(a, b, c);
    std::vector<double> C = {a * koeff, b * koeff, c * koeff};
    return C;
}
