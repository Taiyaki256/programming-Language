/***   p02ex14.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int x, count;
	int sum = 0;
	for (count = 0; count < 10; count++)
	{
		printf("x= ");
		scanf("%d", &x);
		sum += x;
	}
	printf("sum= %d\n", sum);
	double average = sum / 10.0;
	printf("average= %.1f\n", average);

	return 0;
}

/*** Œ‹‰Ê ***



*************/
