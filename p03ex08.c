/***   p03ex08.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int n;
	printf("n= ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0)
			{
				printf("*");
			}
			else if (i == n - 1)
			{
				printf("*");
			}
			else if (j == 0)
			{
				printf("*");
			}
			else if (j == n - 1)
			{
				printf("*");
			}
			else
			{
				printf("-");
			}
		}
		printf("\n");
	}
	return 0;
}

/*** ���� ***



*************/
