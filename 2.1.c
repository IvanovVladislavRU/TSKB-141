
#include <stdio.h>
#include <math.h>

/**
 * @brief Находит отрицательно число или положительно
 * @param Number вводимое число
 * @return 1 при отрицательном числе, 0 при положительном
 */
double CountIfNegative(const double Number);

/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
 
int main() {
    int Counter=0;
    double a=getDouble();
    double b=getDouble();
    double c=getDouble();
    double sumofNumbers=a+b+c;
    Counter=CountIfNegative(a)+CountIfNegative(b)+CountIfNegative(c);
    printf("The amount of negative numbers is %d\n",Counter);
    printf("The absolute amount is %lf",fabs(sumofNumbers));
}

double CountIfNegative(const double Number)
{
    if (Number<0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

double getDouble()
{
    double a = 0.0;
    scanf("%lf",&a);
    return a;
}
