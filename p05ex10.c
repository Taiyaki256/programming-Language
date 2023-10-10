/***   p05ex10.c   ***/
/***   ps20      ***/

#include <stdio.h>
#include <ctype.h>

int checkString(char s[])
{
    int i, j;
    int len = 0;
    while (s[len] != '\0')
    {
        ++len;
    }
    if (len != 4)
    {
        return 0;
    }
    for (i = 0; i < len; i++)
    {
        if (!isdigit(s[i]))
        {
            return 0;
        }
    }
    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (s[i] == s[j])
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    char s1[] = "1234";
    char s2[] = "123";
    char s3[] = "12345";
    char s4[] = "A123";
    char s5[] = "123#";
    char s6[] = "1231";
    printf("%-5s => %d\n", s1, checkString(s1));
    printf("%-5s => %d\n", s2, checkString(s2));
    printf("%-5s => %d\n", s3, checkString(s3));
    printf("%-5s => %d\n", s4, checkString(s4));
    printf("%-5s => %d\n", s5, checkString(s5));
    printf("%-5s => %d\n", s6, checkString(s6));
    return 0;
}

/*** 結果 ***

1234  => 1
123   => 0
12345 => 0
A123  => 0
123#  => 0
1231  => 0

*************/
