/***   p05ex07.c   ***/
/***   ps20      ***/

#include <stdio.h>

void right(char d[], char s[], int n)
{
    int len = 0;
    int i;
    int j = 0;
    while (s[len] != '\0')
    {
        ++len;
    }
    for (i = len - n; i < len; i++)
    {
        if (i < 0)
        {
            i = 0;
        }
        d[j] = s[i];
        ++j;
    }
    d[j] = '\0';
}

int main()
{
    char str1[] = "exercises";
    char str2[32] = "abcdefghijklmn";
    char str3[32] = "abcdefghijklmn";
    char str4[] = "Tokyo";
    char str5[32] = "abcdefghijklmn";
    char str6[32] = "abcdefghijklmn";
    right(str2, str1, 5);
    printf("--!%s!--\n", str2); /*--!cises!--が表示されるはず*/
    right(str3, str1, 10);
    printf("--!%s!--\n", str3); /*--!exercises!--が表示されるはず*/
    right(str5, str4, 3);
    printf("--!%s!--\n", str5); /*--!kyo!--が表示されるはず*/
    right(str6, str4, 10);
    printf("--!%s!--\n", str6); /*--!Tokyo!--が表示されるはず*/
    return 0;
}

/*** 結果 ***

--!cises!--
--!exercises!--
--!kyo!--
--!Tokyo!--

*************/
