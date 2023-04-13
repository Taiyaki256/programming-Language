/***   p02ex10.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int n;
	printf("Šï”‚ð“ü—Í>>");
	scanf("%d", &n);
	int h = n / 2;
	for (int i = 0; i < h + 1; i++)
	{
		for (int j = 0; j < h - i; j++)
		{
			printf("-");
		}
		for (int j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}
		for (int j = 0; j < h - i; j++)
		{
			printf("-");
		}
		printf("\n");
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("-");
		}
		for (int j = 0; j < h - i * 2 + 2; j++)
		{
			printf("*");
		}
		for (int j = 0; j < i + 1; j++)
		{
			printf("-");
		}
		printf("\n");
	}

	return 0;
}

/*** Œ‹‰Ê ***



*************/
