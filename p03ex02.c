/***   p03ex02.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int x;
	printf("x= ");
	scanf("%d", &x);
	if (x % 2 == 0)
	{
		printf("even number\n");
	}
	else
	{
		printf("odd number\n");
	}
	return 0;
}

/*** 結果 ***

x= 1
odd number

x= 2
even number

x= 3
odd number

x= 4
even number

x= 5
odd number

*************/
