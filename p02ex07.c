/***   p02ex07.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int n;
	printf("®”‚ð“ü—Í>>");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j + i < n; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

/*** Œ‹‰Ê ***



*************/
