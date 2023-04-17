/***   p02ex08.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int row, colunm, i, j;
	printf("row, colunm>>");
	scanf("%d %d", &row, &colunm);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < colunm; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

/*** Œ‹‰Ê ***



*************/
