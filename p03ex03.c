/***   p03ex03.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int x, y;
	printf("2数を入力--> ");
	scanf("%d %d", &x, &y);
	if (x > y)
	{
		printf("%d > %d", x, y);
	}
	else if (x < y)
	{
		printf("%d < %d", x, y);
	}
	else
	{
		printf("%d = %d", x, y);
	}

	return 0;
}

/*** 結果 ***

2数を入力--> 17 7
17 > 7

2数を入力--> -17 7
-17 < 7

2数を入力--> 100 100
100 = 100

*************/
