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
	printf("最大公約数は%dです。", q);
	return 0;
}

/*** 結果 ***

p, q>>72 42
p%q=r  72%42=30
p%q=r  42%30=12
p%q=r  30%12=6
p%q=r  12%6=0
最大公約数は6です。

p, q>>256 72
p%q=r  256%72=40
p%q=r  72%40=32
p%q=r  40%32=8
p%q=r  32%8=0
最大公約数は8です。

*************/
