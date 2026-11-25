
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>


double getValue(const char* message);
void checkStep(const double step);
void checkSegment(const double x_begin,const double x_end);
bool isOOF(const double x);
double getY(const double x);

int main()
{
    double x_begin = getValue("Enter segment start: ");
    double x_end = getValue("Enter segment end: ");
    double step = getValue("Enter step: ");
    checkStep(step);
    checkSegment(x_begin,x_end);
     double x = x_begin;
     while (x < x_end + DBL_EPSILON)
     {
        if (isOOF(x))
        {
            printf("x = %lf, y = %lf\n", x, getY(x));
        }
        else
        {
            printf("y is not define\n");
        }
        x+=step;
    }
    return 0;
}

double getValue(const char* message)
{
    if (message != NULL)
    {
        printf("%s\n",message);
    }
    double value = 0;
    if (scanf("%lf", &value)!= 1)
    {
        printf("Error");
        exit(1);
    }
    return value;
}

void checkStep(const double step)
{
    if (step<=0)
    {
        printf("Error, step have to be positive");
        exit(1);
    }
}

void checkSegment(const double x_begin,const double x_end)
{
    if (x_begin > x_end)
    {
        printf("Error, beginning of segment have to be "
        "less or equal to the end of segment");
        exit(1);
    }
}

bool isOOF(const double x)
{
    return (1.0-x>=0)&&(fabs(cos(x))>=DBL_EPSILON);
}

double getY(const double x)
{
    return sqrt(1.0-x) - tan(x);
}
