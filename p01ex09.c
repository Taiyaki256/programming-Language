/***   p01ex09.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	double radius;
	double pi = 3.14159265358979;
	printf("���a�����-->");
	scanf("%lf", &radius);
	printf("�̐� %f\n", 4.0 / 3.0 * pi * radius * radius * radius);
	printf("�\�ʐ� %f\n", 4.0 * pi * radius * radius);
	return 0;
}

/*** ���� ***

2�������--> 17 7
17��7=2...3

2�������-->23 7
23��7=3...2

*************/
