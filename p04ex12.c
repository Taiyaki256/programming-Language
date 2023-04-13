/***   p04ex12.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	char x[1024];
	char str[16] = "2J";
	int i, j, k;
	printf("str1 = ");
	gets(x);
	int num;
	num = (x[2] - '0') * 10 + (x[3] - '0');
	if (0 < num && num < 50)
	{
		if (x[0] == str[0] && x[1] == str[1])
		{
			printf("%s => correct", x);
		}
		else
		{
			printf("%s => incorrect", x);
		}
	}
	else
	{
		printf("%s => incorrect", x);
	}

	return 0;
}

/*** Œ‹‰Ê ***



*************/
