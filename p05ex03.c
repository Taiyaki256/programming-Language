/***   p05ex03.c   ***/
/* s22087 2J20 Shimazaki Taiga */

#include <stdio.h>
#include <math.h>

double heronformula(double a, double b, double c)
{
    double s, area, p;
    s = (a + b + c) / 2.0;
    p = s * (s - a) * (s - b) * (s - c);
    if (p < 0.0)
    {
        return 0.0;
    }
    area = sqrt(p);
    return area;
}

int main()
{
    double a, b, c, area;
    a = 3.0;
    b = 4.0;
    c = 5.0;
    area = heronformula(a, b, c);
    printf("a,b,c,area=%f, %f, %f, %f\n", a, b, c, area);
    a = 5.0;
    b = 12.0;
    c = 13.0;
    area = heronformula(a, b, c);
    printf("a,b,c,area=%f, %f, %f, %f\n", a, b, c, area);
    a = 3.0;
    b = 4.0;
    c = 8.0;
    area = heronformula(a, b, c);
    printf("a,b,c,area=%f, %f, %f, %f\n", a, b, c, area);
    a = 8.0;
    b = 4.0;
    c = 3.0;
    area = heronformula(a, b, c);
    printf("a,b,c,area=%f, %f, %f, %f\n", a, b, c, area);
    a = 3.0;
    b = 8.0;
    c = 4.0;
    area = heronformula(a, b, c);
    printf("a,b,c,area=%f, %f, %f, %f\n", a, b, c, area);
    return 0;
}

/*** 結果 ***

a,b,c,area=3.000000, 4.000000, 5.000000, 6.000000
a,b,c,area=5.000000, 12.000000, 13.000000, 30.000000
a,b,c,area=3.000000, 4.000000, 8.000000, 0.000000
a,b,c,area=8.000000, 4.000000, 3.000000, 0.000000
a,b,c,area=3.000000, 8.000000, 4.000000, 0.000000

*************/
