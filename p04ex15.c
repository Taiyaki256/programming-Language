/***   p04ex15.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int num[50];
	for (int i = 0; i < 50; i++)
	{
		num[i] = (i + 1) * (i + 1);
	}
	for (int i = 0; i < 50; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", num[i]);
		}
	}
	return 0;
}

/*** Œ‹‰Ê ***



*************/
