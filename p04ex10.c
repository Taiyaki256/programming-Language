/***   p04ex10.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	char x[1024];
	char y[1024];
	int flag = 0;
	int i, j;
	printf("str1 = ");
	gets(x);
	printf("str2 = ");
	gets(y);
	j = 0;
	while (x[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i++)
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
str2 = robit
robot robit => not equal

str1 = robot
str2 = robot
robot robot => equal

*************/
