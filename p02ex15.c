/***   p02ex15.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int x;
	int sum = 0;
	int num = 0;
	printf("x= ");
	scanf("%d", &x);
	while (0 <= x)
	{
		sum += x;
		num++;
		printf("x= ");
		scanf("%d", &x);
	}
	printf("sum= %d\n", sum);
	double average = sum / 10.0;
	printf("average= %.1f\n", average);

	return 0;
}

/*** ���� ***



*************/
