#include <stdio.h>

int main()
{
	int arry1[5];
	int arry2[5];
	int arry3[5];
	int i;
	for (i = 0; i < 5; i++)
	{ /*arry1,2,3�ɓ����l����*/
		arry1[i] = arry2[i] = arry3[i] = i;
	}
	for (i = 0; i < 5; i++)
	{ /*arry1,3��\��*/
		printf("arry1[%d],arry3[%d]=%d %d\n", i, i, arry1[i], arry3[i]);
	}
	for (i = 0; i < 5; i++)
	{ /*array2�̒l��ύX�@�v�f���𖳎����Ă���*/
		arry2[i] = 100 + i;
		printf("i=%d arry2[%d]=%d\n", i, i, arry2[i]);
	}
	for (i = 0; i < 5; i++)
	{ /*arry1,3��\���@arry1,3�͒l��ύX���Ă��Ȃ��̂ŕω�����͂��͂Ȃ��̂���*/
		printf("arry1[%d],arry3[%d]=%d %d\n", i, i, arry1[i], arry3[i]);
	}
	return 0;
}