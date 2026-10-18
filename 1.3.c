
#include <stdio.h>
#include <math.h>

/**
 * @brief Вычисляет израсходованное количество теплоты от данной массы, конечной и начальной температуры
 * @param HeatCapacity удельная теплоёмкость
 * @param Mass Масса стальной детали
 * @param StartTemperature Начальная температура
 * @param EndTemperature Конечная температура
 * @return Рассчитанное значение
 */
double Q(const double HeatCapacity, const double Mass, const double StartTemperature, const double EndTemperature);

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main() {
    double HeatCapacity = 500.0;
	double Mass = getDouble();
    double StartTemperature = getDouble();
    double EndTemperature = getDouble();
    printf("The amount of heat is %lf",Q(HeatCapacity,Mass,StartTemperature,EndTemperature));
    return 0;

}

double Q(const double HeatCapacity, const double Mass, const double StartTemperature, const double EndTemperature)
{
    return HeatCapacity*Mass*(EndTemperature-StartTemperature);
}

double getDouble()
{
    double a = 0.0;
    scanf("%lf",&a);
    return a;
}
