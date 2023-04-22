/***   p04ex08.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	char x[1024];
	char y[1024];
	printf("str1 = ");
	gets(x);
	printf("str2 = ");
	gets(y);
	if (x[0] == y[0])
	{
		printf("%s %s => equal", x, y);
	}
	else
	{
		printf("%s %s => not equal", x, y);
	}

	return 0;
}

/*** 結果 ***

str1 = robot
str2 = atom
robot atom => not equal

str1 = robot
str2 = rocket
robot rocket => equal

*************/
