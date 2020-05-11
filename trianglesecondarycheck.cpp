#include <QWidget>
#include "supportmathfuncs.h"


QString trianglesecondarycheck(double firstValue, double secondValue, double thirdValue)
{
    QString triangleShape = "";

    if (firstValue == secondValue && secondValue == thirdValue) {
        triangleShape = "равносторонний";
    } else if (firstValue == secondValue || secondValue == thirdValue || firstValue == thirdValue) {
        triangleShape = "равнобедренный";
    } else {
        triangleShape = "разносторонний";
    }

    double h = maxOfThree(firstValue, secondValue, thirdValue);
    double k = 0;
    double l = 0;
    if (h == firstValue) {
        k = secondValue;
        l = thirdValue;
    } else if (h == secondValue){
        k = firstValue;
        l = thirdValue;
    } else {
        k = firstValue;
        l = secondValue;
    }

    if (h*h == k*k + l*l)
        triangleShape = triangleShape + " и прямоугольный";
    else if (h*h < k*k + l*l)
        triangleShape = triangleShape + " и остроугольный";
    else
        triangleShape = triangleShape + " и тупоугольный";


    return triangleShape;
}
