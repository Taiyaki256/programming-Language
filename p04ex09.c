/***   p04ex09.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	char x[1024];
	char y[1024];
	int flag = 0;
	int i;
	printf("str1 = ");
	gets(x);
	printf("str2 = ");
	gets(y);
	for (i = 0; i < 3; i++)
	{
		if (x[i] != y[i])
		{
			flag = 1;
		}
	}
	if (flag == 0)
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
str2 = root
robot root => not equal

str1 = speaker
str2 = speech
speaker speech => equal

str1 = time
str2 = game
time game => not equal

*************/
