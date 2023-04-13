/***   p03ex11.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int a, b, c, count = 0;
	for (a = 500; a <= 1000; a++)
	{
		for (b = a + 1; b <= 1000; b++)
		{
			for (c = b + 1; c <= 1000; c++)
			{
				if (a * a == b * b + c * c)
				{
					count++;
					printf("%2d: %3d %3d %3d\n", count, a, b, c);
				}
			}
		}
	}
	printf("Total number of right triangles found = %d\n", count);

	return 0;
}

/*** Œ‹‰Ê ***



*************/
