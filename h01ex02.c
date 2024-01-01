#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double SinAdd(double x, double y)
{
    double PI = 3.141592;
    return sin(x / 180 * PI) * cos(y / 180 * PI) + cos(x / 180 * PI) * sin(y / 180 * PI);
}
int main()
{

    return 0;
}