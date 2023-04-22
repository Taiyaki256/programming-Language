/***   p03ex01.c ***/
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
	return 0;
}

/*** 結果 ***

x= 1

x= 2
even number

x= 3

x= 4
even number

x= 5

*************/
