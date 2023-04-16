/***   p01ex04.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int x = 17528;
	int y = 1482;

	printf("%d * %d = %8d\n", x, y, x * y);
	printf("%d / %d = %8d\n", x, y, x / y);
	printf("%d + %d = %8d\n", x, y, x + y);
	printf("%d - %d = %8d\n", x, y, x - y);
	printf("%d %% %d = %8d\n", x, y, x % y);

	return 0;
}

/*** 結果 ***

17528 * 1482 = 25976496
17528 / 1482 =       11
17528 + 1482 =    19010
17528 - 1482 =    16046
17528 % 1482 =     1226

*************/
