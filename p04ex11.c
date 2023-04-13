/***   p04ex11.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	char x[1024];
	char y[1024];
	int flag = 0;
	int i, j, k;
	printf("str1 = ");
	gets(x);
	printf("str2 = ");
	gets(y);
	j = 0;
	k = 0;
	while (x[j] != '\0')
	{
		j++;
	}
	while (y[j] != '\0')
	{
		k++;
	}
	if (j != k)
	{
		printf("%s %s => not equal", x, y);
		return 0;
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

/*** Œ‹‰Ê ***



*************/
