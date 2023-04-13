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
		printf("%c [%2x]", x, x);
		if (count % 4 == 0)
		{
			printf("\n");
		}
	}
	return 0;
}

/*** Œ‹‰Ê ***



*************/
