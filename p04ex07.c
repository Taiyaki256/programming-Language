/***   p04ex07.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	char x[1024];
	int i;
	int count = 0;
	printf("keyin string => ");
	gets(x);
	i = 0;
	while (x[i] != '\0')
	{
		if (x[i] == 'e')
		{
			count++;
		}
		i++;
	}
	printf("%s => %d", x, count);

	return 0;
}

/*** 結果 ***

keyin string => abcdefg
abcdefg => 1

keyin string => eabcdefg
eabcdefg => 2

keyin string => abcdefge
abcdefge => 2

keyin string => I'm getting closer to my home.
I'm getting closer to my home. => 3

keyin string => Tokyo Japan
Tokyo Japan => 0

*************/
