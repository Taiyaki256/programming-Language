/***   p05ex08.c   ***/
/* s22087 2J20 Shimazaki Taiga */

#include <stdio.h>

void mid(char d[], char s[], int m, int n)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        d[i] = s[m + i - 1];
    }
    d[i] = '\0';
}

int main()
{
    char str1[] = "exercises";
    char str2[32] = "abcdefghijklmn";
    char str3[32] = "abcdefghijklmn";
    char str4[32] = "abcdefghijklmn";
    char str5[] = "Tokyo";
    char str6[32] = "abcdefghijklmn";
    char str7[32] = "abcdefghijklmn";
    puts(str1);
    mid(str2, str1, 2, 5);
    printf("--!%s!--\n", str2); /*--!xerci!--が表示されるはず*/
    mid(str3, str1, 2, 10);
    printf("--!%s!--\n", str3); /*--!xercises!--が表示されるはず*/
    mid(str4, str1, 12, 3);
    printf("--!%s!--\n", str4); /*--!!--が表示されるはず*/
    mid(str6, str5, 2, 1);
    printf("--!%s!--\n", str6); /*--!o!--が表示されるはず*/
    mid(str7, str5, 2, 10);
    printf("--!%s!--\n", str7); /*--!okyo!--が表示されるはず*/
    return 0;
}

/*** 結果 ***

exercises
--!xerci!--
--!xercises!--
--!!--
--!o!--
--!okyo!--

*************/
