/***   p04ex13.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	char x[1024];
	int i, j, k;
	int a_num = 0, i_num = 0, u_num = 0, e_num = 0, o_num = 0;
	printf("文字列を入力してください\n");
	gets(x);
	i = 0;
	while (x[i] != '\0')
	{
		if (x[i] == 'a' || x[i] == 'A')
		{
			a_num++;
		}
		else if (x[i] == 'i' || x[i] == 'I')
		{
			i_num++;
		}
		else if (x[i] == 'u' || x[i] == 'U')
		{
			u_num++;
		}
		else if (x[i] == 'e' || x[i] == 'E')
		{
			e_num++;
		}
		else if (x[i] == 'o' || x[i] == 'O')
		{
			o_num++;
		}
		i++;
	}
	printf("入力された文字列は次のものです。\n");
	printf("%s\n", x);
	printf("集計結果\n");
	printf("number of vowels A,a= %d\n", a_num);
	printf("number of vowels E,e= %d\n", e_num);
	printf("number of vowels I,i= %d\n", i_num);
	printf("number of vowels O,o= %d\n", o_num);
	printf("number of vowels U,u= %d\n", u_num);

	return 0;
}

/*** 結果 ***

文字列を入力してください
hello!
入力された文字列は次のものです。
hello!
集計結果
number of vowels A,a= 0
number of vowels E,e= 1
number of vowels I,i= 0
number of vowels O,o= 1
number of vowels U,u= 0

文字列を入力してください
Over this year, I have seen many Japanese entertainment show on television that are obviously supposed to make people laugh and have a good time. However, some of these shows are not funny at all.
入力された文字列は次のものです。
Over this year, I have seen many Japanese entertainment show on television that are obviously supposed to make people laugh and have a good time. However, some of these shows are not funny at all.
集計結果
number of vowels A,a= 16
number of vowels E,e= 25
number of vowels I,i= 7
number of vowels O,o= 16
number of vowels U,u= 4

*************/
