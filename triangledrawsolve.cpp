#include <math.h>
#include <QWidget>
#include <iostream>

auto triangledrawsolve(double a, double b, double c) -> std::vector<double>
{
    //double a = 6;
    //double b = 9;
    //double c = 5;
    std::vector<double> A(2, 0.0);
    std::vector<double> B = {0.0, c};
    double cosA = (b * b + c * c - a * a) / (2 * b * c);
    double sinA = sqrt(1 - cosA * cosA);
    std::vector<double> C(2, 0);
    C[0] = A[0] + b * cosA;
    C[1] = A[1] + b * sinA;
    return C;
}
