
#include <stdio.h>
#include <math.h>

/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief вычисляет значение функции по заданной подходящей под условие формулы
 * @param x вводимое с клавиатуры значение числа x
 * @param a значение переменной a
 * @return Рассчитанное значение
 */
double y(const double x, const double a);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    double a = 1.36;
    printf("Enter x: ");
    double x = getDouble();
    printf("%lf\n",x);
    printf("y = %lf",y(x,a));
    return 0;
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf",&value) != 1)
        {
            printf("Error");
            exit(1);
        }
    return value;
}

double y(const double x, const double a)
{
    if (x<0.5)
    {
        return (M_PI/2.0)+(x*a)-exp(a*x);
    }
    else
    {
        return pow(x,3)*a+28.0;
    }
}
