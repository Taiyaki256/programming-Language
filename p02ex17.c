/***   p02ex17.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int p, q, r;
	printf("p, q>>");
	scanf("%d %d", &p, &q);
	r = p % q;
	printf("p%%q=r  %d%%%d=%d\n", p, q, r);
	while (r != 0)
	{
		p = q;
		q = r;
		r = p % q;
		printf("p%%q=r  %d%%%d=%d\n", p, q, r);
	}
	printf("�ő���񐔂�%d�ł��B", q);
	return 0;
}

/*** ���� ***



*************/
