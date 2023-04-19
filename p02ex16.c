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
	return 0;
}

/*** 結果 ***

key in an integer : 5
5 : 1 (digits)
key in an integer : 66
66 : 2 (digits)
key in an integer : 777
777 : 3 (digits)
key in an integer : 1111
1111 : 4 (digits)
key in an integer : 22334
22334 : 5 (digits)
key in an integer : 112233
112233 : 6 (digits)
key in an integer : 5556667
5556667 : 7 (digits)
key in an integer : 99990000
99990000 : 8 (digits)
key in an integer : -1

*************/
