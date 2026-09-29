#include <stdio.h>
#include <math.h>

/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - значение переменной х
 * @param y - значение переменной y
 * @param z - значение переменной z
 * @return рассчитанное значение
 */
double A(const double x, const double y,const double z);

/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - значение переменной х
 * @param y - значение переменной y
 * @param z - значение переменной z
 * @return рассчитанное значение
 */
double B(const double x, const double y, double const z);

/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    const double x =0.3;
    const double y = 2.9;
    const double z = 0.5;
    printf("A = %lf\n",A(x,y,z));
    printf("B = %lf",B(x,y,z));

    return 0;
}

double A(const double x, const double y, const double z)
{
    return (pow(z,2)*x+exp(-1*x)*cos(y*x))/(y*x-exp(-x)*sin(y*x)+1);
}

double B(const double x, const double y, const double z)
{
    return exp(x*2)*log(z+x)-pow(y,x*3)*log(y-x);
}
