/***   p04ex17.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int testdata[20];
	int i;
	for (i = 0; i < 20; i++)
	{
		testdata[i] = 0;
	}
	for (i = 2 * 2; i < 20; i = i + 2)
	{
		testdata[i] = 1;
	}
	for (i = 3 * 2; i < 20; i = i + 3)
	{
		testdata[i] = 1;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d", testdata[i]);
	}
	printf("\n");

	return 0;
}

/*** 結果 ***

00001010111010111010

*************/
