/***   p01ex07.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int a, b;
	printf("2�������-->");
	scanf("%d %d", &a, &b);
	printf("%d��%d=%d...%d\n", a, b, a / b, a % b);
	return 0;
}

/*** ���� ***

2�������--> 17 7
17��7=2...3

2�������-->23 7
23��7=3...2

*************/
