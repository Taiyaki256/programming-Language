/***   p01ex08.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	double upper, lower, height;
	printf("��`�́u���v�u����v�u�����v�����-->");
	scanf("%lf %lf %lf", &upper, &lower, &height);
	printf("��`�̖ʐς� %.3f �ł�\n", (upper + lower) * height / 2);
	return 0;
}

/*** ���� ***

2�������--> 17 7
17��7=2...3

2�������-->23 7
23��7=3...2

*************/
