#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

double TanAdd(double x, double y)
{
    double PI = M_PI;
    if (fmod(x + y, 90.0) == 0)
    {
        return INFINITY;
    }
    return (tan(x / 180 * PI) + tan(y / 180 * PI)) / (1 - tan(x / 180 * PI) * tan(y / 180 * PI));
}
int main()
{
    double x, y;
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);
    printf("tan(x+y) = %f\n", TanAdd(x, y));
    // isinf
    if (isinf(TanAdd(x, y)))
    {
        printf("tan(x+y) is infinity\n");
    }
    return 0;
}