/***   p04ex02.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int numberofdays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int count;
	int sum = 0;
	int m, d;
	printf("month day = ");
	scanf("%d %d", &m, &d);
	for (count = 0; count < m - 1; count++)
	{
		sum += numberofdays[count];
	}
	sum += d;
	printf("%d\n", sum);
	return 0;
}

/*** 結果 ***

month day = 1 25
25

month day = 3 2
61

month day = 4 10
100

month day = 12 31
365

*************/
