/***   p03ex05.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int x;
	int sum = 0;
	int num = 0;
	double average = 0.0;
	printf("x= ");
	scanf("%d", &x);
	while (0 <= x)
	{
		sum += x;
		num++;
		printf("x= ");
		scanf("%d", &x);
	}
	if (num == 0)
	{
		printf("no data");
		return 0;
	}

	printf("sum= %d\n", sum);
	average = sum / (double)num;
	printf("average= %.1f\n", average);

	return 0;
}

/*** 結果 ***

x= 1
x= 2
x= 3
x= 4
x= 5
x= 6
x= 7
x= 8
x= 9
x= 10
x= -1
sum= 55
average= 5.5

x= 2
x= 4
x= 8
x= 16
x= 32
x= -1
sum= 62
average= 12.4

x= -1
no data

*************/
