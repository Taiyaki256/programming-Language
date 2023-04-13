/***   p02ex04.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int x, y1, y2, y3;
	printf("   x    y1    y2     y3\n");
	for (x = 1; x <= 100; x++)
	{
		y1 = x % 2;
		y2 = x % 3;
		y3 = x % 4;
		printf("%4d %6d %6d %6d\n", x, y1, y2, y3);
	}
	return 0;
}

/*** Œ‹‰Ê ***



*************/
