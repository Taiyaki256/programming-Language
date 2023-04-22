/***   p03ex04.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int x, i;
	printf("n= ");
	scanf("%d", &x);
	for (i = 1; i <= x; i++)
	{
		if (i % 5 == 0)
		{
			printf("-");
		}
		else
		{
			printf("*");
		}
	}

	return 0;
}

/*** 結果 ***

n= 23
****-****-****-****-***

n= 38
****-****-****-****-****-****-****-***

*************/
