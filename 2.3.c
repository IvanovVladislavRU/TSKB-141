
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/**
 * @brief Проверяет значение на отрицательность. Если это так, то завершает программу и выводит сообщение.
 * @param a - считанное значение
 */
void CheckNegative(const double a);

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
 * @return True, если могут вместиться, иначе false
 */
bool CheckIfFit(double const a, double const b, double const c);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main() {
	printf("Введите длину и ширину участка:\n");
	double a = getDouble();
	double b = getDouble();
	CheckNegativeOrZero(a);
	CheckNegativeOrZero(b);
	printf("\n");
	printf("Введите длину и ширину первого дома:\n");
	double p = getDouble();
	double q = getDouble();
	CheckNegativeOrZero(p);
	CheckNegativeOrZero(q);
	printf("\n");
	printf("Введите длину и ширину второго дома:\n");
	double r = getDouble();
	double s = getDouble();
	CheckNegativeOrZero(r);
	CheckNegativeOrZero(s);
	printf("\n");
    if (CheckIfFit(a,p,r)&&CheckIfFit(b,q,s))
        {
        printf("Дома можно разместить на данном участке!");
        }
    else
        {
        printf("Дома нельзя разместить на данном участке!");
        }
    return 0;
}

void CheckNegativeOrZero(const double a)
{
    if (a<=0.0)
		{
			printf("Длина/ширина дома/участка не может быть отрицательной/равнятся нулю");
			exit(1);
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

bool CheckIfFit(double const a,double const b, double const c)
{
    return a >= b+c;
}
