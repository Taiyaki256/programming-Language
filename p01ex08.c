/***   p01ex08.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	double upper, lower, height;
	printf("台形の「上底」「下底」「高さ」を入力-->");
	scanf("%lf %lf %lf", &upper, &lower, &height);
	printf("台形の面積は %.3f です\n", (upper + lower) * height / 2);
	return 0;
}

/*** 結果 ***

2数を入力--> 17 7
17÷7=2...3

2数を入力-->23 7
23÷7=3...2

*************/
