//#include <iostream>
//#include <QWidget>

bool trianglemaincheck(double firstValue, double secondValue, double thirdValue)
{

    bool triangle_flag = false;
    triangle_flag = (firstValue + secondValue > thirdValue) && \
                    (secondValue + thirdValue > firstValue) && \
                    (thirdValue + firstValue > secondValue) ?    true : false;
    return triangle_flag;
}

/*bool is_number(const QString& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}*/
