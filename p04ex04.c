/***   p04ex04.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	char x;
	for (x = 0x41; x <= 0x4a; x++)
	{
		printf("%c [%2x]\n", x, x);
	}
	return 0;
}

/*** 結果 ***

A [41]
B [42]
C [43]
D [44]
E [45]
F [46]
G [47]
H [48]
I [49]
J [4a]

*************/
