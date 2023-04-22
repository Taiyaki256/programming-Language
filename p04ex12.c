/***   p04ex12.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	char x[1024];
	char str[16] = "2J";
	int i;
	int num;
	int flg = 0;
	while (flg == 0)
	{
		printf("２Ｊの出席番号を入力してください>> ");
		gets(x);
		if (x[0] == 'z' && x[1] == 'z' && x[2] == 'z' && x[3] == 'z' && x[4] == '\0')
		{
			flg = 1;
		}
		else
		{
			i = 0;
			while (x[i] != '\0')
			{
				i++;
			}
			num = (x[2] - '0') * 10 + (x[3] - '0');
			if (i != 4)
			{
				printf("%s => incorrect\n", x);
			}
			else if (0 < num && num < 50)
			{
				if (x[0] == str[0] && x[1] == str[1])
				{
					printf("%s => correct\n", x);
				}
				else
				{
					printf("%s => incorrect\n", x);
				}
			}
			else
			{
				printf("%s => incorrect\n", x);
			}
		}
	}

	return 0;
}

/*** 結果 ***

２Ｊの出席番号を入力してください>> 2J01
2J01 => correct
２Ｊの出席番号を入力してください>> 2J13
2J13 => correct
２Ｊの出席番号を入力してください>> 2J29
2J29 => correct
２Ｊの出席番号を入力してください>> 2J30
2J30 => correct
２Ｊの出席番号を入力してください>> 2J49
2J49 => correct
２Ｊの出席番号を入力してください>> 2J1
2J1 => incorrect
２Ｊの出席番号を入力してください>> 2J9
2J9 => incorrect
２Ｊの出席番号を入力してください>> 2J50
2J50 => incorrect
２Ｊの出席番号を入力してください>> 2J123
2J123 => incorrect
２Ｊの出席番号を入力してください>> 2J00
2J00 => incorrect
２Ｊの出席番号を入力してください>> 2J
2J => incorrect
２Ｊの出席番号を入力してください>> zzzz

*************/
