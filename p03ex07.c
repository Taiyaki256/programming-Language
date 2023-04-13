/***   p03ex07.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int x, y1, y2, y3, y4;
	printf("   x   y1   y2   y3     y4\n");
	for (x = 1; x <= 100; x++)
	{
		y1 = 10 - 5 * (x % 2);
		y2 = x;
		if (x % 4 == 3)
		{
			y2 = x + 1;
		}
		else if (x % 4 == 0)
		{
			y2 = x - 1;
		}
		y3 = (x % 4);
		if (y3 == 0)
		{
			y3 = 2;
		}
		y4 = 5 * x * (x % 2);
		printf("%4d %4d %4d %4d %6d\n", x, y1, y2, y3, y4);
	}

	return 0;
}

/*** Œ‹‰Ê ***



*************/
