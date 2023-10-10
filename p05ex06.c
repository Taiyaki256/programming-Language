/***   p05ex06.c   ***/
/***   ps20      ***/

#include <stdio.h>

void left(char d[], char s[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        d[i] = s[i];
    }
    d[i] = '\0';
}

int main()
{
    char str1[] = "exercises";
    char str2[32] = "abcdefghijklmn";
    char str3[32] = "abcdefghijklmn";
    left(str2, str1, 5);
    printf("--!%s!--\n", str2); /*--!exerc!--が表示されるはず*/
    left(str3, str1, 10);
    printf("--!%s!--\n", str3); /*--!exercises!--が表示されるはず*/
    return 0;
}

/*** 結果 ***

--!exerc!--
--!exercises!--

*************/
