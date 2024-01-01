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
    int i;
    return 0;
}