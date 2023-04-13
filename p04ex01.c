/***   p04ex01.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int score[10] = {15, 8, 12, 18, 20, 20, 9, 16, 20, 17};
	int count;
	int i;
	for (count = 0; count < 10; count++)
	{
		printf("%2d %3d :", count, score[count]);
		for (i = 1; i <= score[count]; i++)
		{
			if (i % 5 == 0)
			{
				printf("|");
			}
			else
			{
				printf("*");
			}
		}
	}

	return 0;
}

/*** Œ‹‰Ê ***



*************/
