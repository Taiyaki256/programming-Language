/***   p03ex06.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int n;
	printf("n= ");
	scanf("%d", &n);
	if (n % 6 == 0)
	{
		printf("%d: a multiple of 6\n", n);
	}
	else if (n % 3 == 0)
	{
		printf("%d: a multiple of 3 but not a multiple of 2\n", n);
	}
	else if (n % 2 == 0)
	{
		printf("%d: a multiple of 2 but not a multiple of 3\n", n);
	}
	else
	{
		printf("%d: not a multiple of 2 or a multiple of 3\n", n);
	}

	return 0;
}

/*** Œ‹‰Ê ***



*************/
