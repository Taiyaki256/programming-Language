#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

double SinAdd(double x, double y)
{
    double PI = M_PI;
    return sin(x / 180 * PI) * cos(y / 180 * PI) + cos(x / 180 * PI) * sin(y / 180 * PI);
}
int main()
{

    return 0;
}