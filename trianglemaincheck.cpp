bool trianglemaincheck(double firstValue, double secondValue, double thirdValue)
{

    bool triangle_flag = false;
    triangle_flag = (firstValue + secondValue < thirdValue) && \
                    (secondValue + secondValue < thirdValue) && \
                    (thirdValue + secondValue < thirdValue) ?    true : false;
    return triangle_flag;
}
