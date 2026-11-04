
#include <stdio.h>
#include <math.h>

/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Находит вместиться ли длина/ширина двух домов в длину/ширину участка соответственно
 * @param a Длина/Ширина участка
 * @param b Длина/Ширина первого дома
 * @param c Длина/Ширина второго дома
 * @return 1, если могут вместиться, иначе 0
 */
int CheckIfFit(double const a, double const b, double const c);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main() {
	printf("Введите длину и ширину участка:");
	double a = getDouble();
	double b = getDouble();
	printf("\n");
	printf("Введите длину и ширину первого дома:");
	double p = getDouble();
	double q = getDouble();
	printf("\n");
	printf("Введите длину и ширину второго дома:");
	double r = getDouble();
	double s = getDouble();
	printf("\n");
    if (CheckIfFit(a,p,r)*CheckIfFit(b,q,s)==1)
        {
        printf("Дома можно разместить на данном участке!");
        return 0;
        }
    if (CheckIfFit(a,p,r)*CheckIfFit(b,q,s)==0)
        {
        printf("Дома нельзя разместить на данном участке!");
        return 0;
        }
}

double getDouble()
{
    double a = 0.0;
    if (scanf("%lf",&a) != 1)
        {
            printf("Error");
            exit(1);
        }
    return a;
}

int CheckIfFit(double const a,double const b, double const c)
{
    if (a >= (b+c))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
