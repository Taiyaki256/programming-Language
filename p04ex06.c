/***   p04ex06.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	char x;
	int count = 0;
	for (x = 0x20; x <= 0x7e; x++)
	{
		count++;
		printf("%c [%2x]", x, x);
		if (count % 8 == 0)
		{
			printf("\n");
		}
	}
	return 0;
}

/*** Œ‹‰Ê ***



*************/
