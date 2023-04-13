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
	printf("b,c‚ð“ü—Í--> ");
	scanf("%lf %lf", &b, &c);
	printf("b= %f, c= %f\n", b, c);
	d = b * b - 4.0 * c;
	if (0.0 < d)
	{
		x1 = (-b + sqrt(d)) / 2.0;
		x2 = (-b - sqrt(d)) / 2.0;
		printf("x1=%f x2=%f\n", x1, x2);
	}
	else if (d == 0.0)
	{
		xx = -b / 2.0;
		printf("xx=%f\n", xx);
	}
	else
	{
		xr = -b / 2.0;
		xi = sqrt(-d) / 2.0;
		printf("x1=%f+%f*i x2=%f-%f*i\n", xr, xi, xr, xi);
	}
	return 0;
}

/*** Œ‹‰Ê ***



*************/
