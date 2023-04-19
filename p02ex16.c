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
		devide = x;
		count = 1;
		while (devide > 9)
		{
			devide = devide / 10;
			count++;
		}
		printf("%d : %d (digits)\n", x, count);
		printf("key in an integer : ");
		scanf("%d", &x);
	}
	printf("\nPushing any key leads the exit.");
	return 0;
}

/*** 結果 ***

key in an integer : 5
5 : 1 (digits)
key in an integer : 33
33 : 2 (digits)
key in an integer : 222
222 : 3 (digits)
key in an integer : 4444
4444 : 4 (digits)
key in an integer : 66666
66666 : 5 (digits)
key in an integer : 333333
333333 : 6 (digits)
key in an integer : 2222222
2222222 : 7 (digits)
key in an integer : 67777655
67777655 : 8 (digits)
key in an integer : -1

Pushing any key leads the exit.

*************/
