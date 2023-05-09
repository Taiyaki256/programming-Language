/***   p05ex09.c   ***/
/***   ps20      ***/

#include <stdio.h>

void reverseString(char s[])
{
    int len = 0;
    int i;
    int j = 0;
    char tmp[30];
    while (s[len] != '\0')
    {
        ++len;
    }
    for (i = len - 1; i >= 0; i--)
    {
        tmp[j] = s[i];
        ++j;
    }
    tmp[j] = '\0';
    for (i = 0; i < len; i++)
    {
        s[i] = tmp[i];
    }
}

int main()
{
    char str[30] = "exercises";
    char str2[30] = "java";
    printf("--!%s!--\n", str);
    reverseString(str);
    printf("--!%s!--\n", str);
    printf("--!%s!--\n", str2);
    reverseString(str2);
    printf("--!%s!--\n", str2);
    return 0;
}

/*** 結果 ***

--!exercises!--
--!sesicrexe!--
--!java!--
--!avaj!--

*************/
