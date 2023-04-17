/***   p01ex07.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int a, b;
	printf("2数を入力-->");
	scanf("%d %d", &a, &b);
	printf("%d÷%d=%d...%d\n", a, b, a / b, a % b);
	return 0;
}

/*** 結果 ***

2数を入力--> 17 7
17÷7=2...3

2数を入力-->23 7
23÷7=3...2

*************/
