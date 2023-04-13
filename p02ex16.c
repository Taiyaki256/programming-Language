/***   p02ex16.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int x, devide, count = 1;
	printf("key in an integer : ");
	scanf("%d", &x);
	while (0 <= x)
	{
		// key in an integer : 5
		// 5 : 1 (digits)
		while (devide > 9)
		{
			devide = x / 10;
			count++;
		}
		printf("%d : %d (digits)\n", x, count);
		printf("x= ");
		scanf("%d", &x);
	}
	return 0;
}

/*** Œ‹‰Ê ***



*************/
