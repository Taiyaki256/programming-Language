/***   p03ex04.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int x, i;
	printf("数を入力--> ");
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



*************/
