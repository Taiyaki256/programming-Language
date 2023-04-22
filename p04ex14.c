/***   p04ex14.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int i;
	char dayofweek[7][20] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	printf("number= ");
	scanf("%d", &i);
	printf("%d: %s\n", i, dayofweek[i - 1]);
	return 0;
}

/*** 結果 ***

number= 1
1: Sunday

number= 3
3: Tuesday

*************/
