/***   p02ex08.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int row, colunm;
	printf("row, colunm>>");
	scanf("%d %d", &row, &colunm);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colunm; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

/*** Œ‹‰Ê ***



*************/
