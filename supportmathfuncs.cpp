double maxOfThree(double a, double b, double c)
{
    double max = a;
    max = (b > max) ? b : max;
    max = (c > max) ? c : max;
    return max;
}

double cosCalculate(double a, double b, double c)
{
    return (a * a + c * c - b * b) / (2 * a * c);
    // рассчитать cosB
}
