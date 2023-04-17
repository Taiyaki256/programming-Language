/***   p01ex06.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int a, b;
	printf("2数を入力-->");
	scanf("%d %d", &a, &b);
	printf("%d+%d=%d\n", a, b, a + b);
	printf("%d-%d=%d\n", a, b, a - b);
	printf("%d*%d=%d\n", a, b, a * b);
	printf("%d/%d=%d\n", a, b, a / b);
	printf("%d%%%d=%d\n", a, b, a % b);
	return 0;
}

/*** 結果 ***

2数を入力-->12 5
12+5=17
12-5=7
12*5=60
12/5=2
12%5=2

2数を入力-->17 7
17+7=24
17-7=10
17*7=119
17/7=2
17%7=3

*************/
