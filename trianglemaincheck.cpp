bool trianglemaincheck(double firstValue, double secondValue, double thirdValue)
{

    bool triangle_flag = false;
    triangle_flag = (firstValue + secondValue > thirdValue) && \
                    (secondValue + thirdValue > firstValue) && \
                    (thirdValue + firstValue > secondValue) ?    true : false;
    return triangle_flag;
}
