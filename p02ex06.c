/***   p02ex06.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int n;
	printf("整数を入力>>");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

/*** 結果 ***



*************/
