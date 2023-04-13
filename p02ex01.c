/***   p02ex01.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int x, x2, x3;
	printf("  x   x^2     x^3\n");
	for (x = 1; x <= 100; x++)
	{
		x2 = x * x;
		x3 = x2 * x;
		printf("%3d %5d %7d\n", x, x2, x3);
	}
	return 0;
}

/*** Œ‹‰Ê ***



*************/
