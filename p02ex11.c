/***   p02ex11.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int n = 9;
	printf("   ");
	for (int i = 0; i < n; i++)
	{
		printf("%4d", i + 1);
	}
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("%3d", i + 1);
		for (int j = 0; j < n; j++)
		{
			printf("%4d", (i + 1) * (j + 1));
		}
		printf("\n");
	}

	return 0;
}

/*** Œ‹‰Ê ***



*************/
