/***   p04ex06.c ***/
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

/*** Œ‹‰Ê ***



*************/
