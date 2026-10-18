
#include <stdio.h>
#include <math.h>

/**
 * @brief Вычисляет расстояние из заданной скорости лодки, скорости течения и времени
 * @param SpeedOfBoat скорость лодки
 * @param SpeedOfRiver скорость течения
 * @param Time время
 * @return Рассчитанное значение
 */
double S(const double SpeedOfBoat, const double SpeedOfRiver, const double Time);

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
	double SpeedOfBoat = getDouble();
    double SpeedOfRiver = getDouble();
    double Time = getDouble();
    printf("The distance is %lf",S(SpeedOfBoat,SpeedOfRiver,Time));
    return 0;

}

double S(const double SpeedOfBoat, const double SpeedOfRiver, const double Time)
{
    return (SpeedOfBoat+SpeedOfRiver)/Time;
}

double getDouble()
{
    double a = 0.0;
    scanf("%lf",&a);
    return a;
}
