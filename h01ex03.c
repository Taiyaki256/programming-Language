#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double TanAdd(double x, double y)
{
    double PI = 3.141592;
    if (fmod(x + y, 90) == 0)
    {
        return INFINITY;
    }
    return tan((x + y) / 180 * PI);
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