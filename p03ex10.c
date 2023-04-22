/***   p03ex10.c ***/
/***   ps20      ***/

#include <stdio.h>
#include <math.h>
#include <stdio.h>

int main()
{
	double b, c;
	double d;
	double x1, x2, xx, xr, xi;
	printf("b,c‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ >>");
	scanf("%lf, %lf", &b, &c);
	printf("b= %f, c= %f\n", b, c);
	d = b * b - 4.0 * c;
	if (0.0 < d)
	{
		x1 = (-b + sqrt(d)) / 2.0;
		x2 = (-b - sqrt(d)) / 2.0;
		printf("real roots: %f, %f\n", x1, x2);
	}
	else if (d == 0.0)
	{
		xx = -b / 2.0;
		printf("double root: %f\n", xx);
	}
	else
	{
		xr = -b / 2.0;
		xi = sqrt(-d) / 2.0;
		printf("complex roots: Real %f, Imaginary %f\n", xr, xi);
	}
	return 0;
}

/*** Œ‹‰Ê ***

b,c‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ >>4, 3
b= 4.000000, c= 3.000000
real roots: -1.000000, -3.000000

b,c‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ >>4, 4
b= 4.000000, c= 4.000000
double root: -2.000000

b,c‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ >>4, 5
b= 4.000000, c= 5.000000
complex roots: Real -2.000000, Imaginary 1.000000

*************/
