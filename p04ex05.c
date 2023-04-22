/***   p04ex05.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	char x;
	int count = 0;
	for (x = 0x30; x <= 0x39; x++)
	{
		count++;
		printf(" %c [%2x]", x, x);
		if (count % 4 == 0)
		{
			printf("\n");
		}
	}
	return 0;
}

/*** 結果 ***

 0 [30] 1 [31] 2 [32] 3 [33]
 4 [34] 5 [35] 6 [36] 7 [37]
 8 [38] 9 [39]

*************/
