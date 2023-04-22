#include <stdio.h>

int main()
{
	int arry1[5];
	int arry2[5];
	int arry3[5];
	int i;
	for (i = 0; i < 5; i++)
	{ /*arry1,2,3に同じ値を代入*/
		arry1[i] = arry2[i] = arry3[i] = i;
	}
	for (i = 0; i < 5; i++)
	{ /*arry1,3を表示*/
		printf("arry1[%d],arry3[%d]=%d %d\n", i, i, arry1[i], arry3[i]);
	}
	for (i = 0; i < 5; i++)
	{ /*array2の値を変更　要素数を無視している*/
		arry2[i] = 100 + i;
		printf("i=%d arry2[%d]=%d\n", i, i, arry2[i]);
	}
	for (i = 0; i < 5; i++)
	{ /*arry1,3を表示　arry1,3は値を変更していないので変化するはずはないのだが*/
		printf("arry1[%d],arry3[%d]=%d %d\n", i, i, arry1[i], arry3[i]);
	}
	return 0;
}