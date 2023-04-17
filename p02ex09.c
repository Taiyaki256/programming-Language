/***   p02ex09.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int n, h, i, j;
	printf("Šï”‚ð“ü—Í>>");
	scanf("%d", &n);
	h = n / 2;
	for (i = 0; i < h + 1; i++)
	{
		for (j = 0; j < h; j++)
		{
			printf("-");
		}
		for (j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}
		for (j = 0; j < h; j++)
		{
			printf("-");
		}
		printf("\n");
	}

	return 0;
}

/*** Œ‹‰Ê ***



*************/
