/***   p02ex15.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int x;
	int sum = 0;
	int num = 0;
	double average;
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
	average = sum / 10.0;
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

x= 1
x= 2
x= 3
x= 4
x= 5
x= -1
sum= 15
average= 1.5

*************/
