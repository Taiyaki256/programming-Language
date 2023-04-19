/***   p02ex13.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int x, count;
	int sum = 0;
	for (count = 0; count < 10; count++)
	{
		printf("x= ");
		scanf("%d", &x);
		sum += x;
	}
	printf("sum= %d\n", sum);

	return 0;
}

/*** 結果 ***

x= 1
x= 2
x= 3
x= 4
x= 5
x= 6
x= 7
x= 8
x= 9
x= 10
sum= 55

x= 11
x= 12
x= 13
x= 14
x= 15
x= 16
x= 17
x= 18
x= 19
x= 20
sum= 155

x= 123
x= 321
x= 234
x= 432
x= 345
x= 543
x= 456
x= 654
x= 567
x= 765
sum= 4440

*************/
