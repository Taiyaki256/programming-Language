/***   p02ex02.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int x, y, y2, y3, y4;
	printf("  x     y      y^2        y^3          y^4\n");
	for (x = 1; x <= 100; x++)
	{
		y = 5 * x;
		y2 = y * y;
		y3 = y2 * y;
		y4 = y3 * y;
		printf("%3d %3d %6d %9d %12d\n", x, y, y2, y3, y4);
	}
	return 0;
}

/*** Œ‹‰Ê ***



*************/

/*lŽ@


*/