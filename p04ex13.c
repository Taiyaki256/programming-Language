/***   p04ex13.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	char x[1024];
	int i, j, k;
	int a_num, i_num, u_num, e_num, o_num;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
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
	printf("“ü—Í‚³‚ê‚½•¶š—ñ‚ÍŸ‚Ì‚à‚Ì‚Å‚·B\n");
	printf("%s", x);
	printf("WŒvŒ‹‰Ê\n");
	printf("number of vowels A,a= %d\n", a_num);
	printf("number of vowels I,i= %d\n", i_num);
	printf("number of vowels U,u= %d\n", u_num);
	printf("number of vowels E,e= %d\n", e_num);
	printf("number of vowels O,o= %d\n", o_num);

	return 0;
}

/*** Œ‹‰Ê ***



*************/
