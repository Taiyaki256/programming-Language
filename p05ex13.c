/***   p05ex13.c   ***/
/***   ps20      ***/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

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

void generateNumber(char theNumber[])
{
    int i;
    int j = 0;
    char tmp[30];

    do
    {
        for (i = 0; i < 10; i++)
        {
            tmp[j] = i + '0';
            ++j;
        }
        tmp[j] = '\0';
        for (i = 0; i < 4; i++)
        {
            theNumber[i] = tmp[rand() % 10];
        }
        theNumber[i] = '\0';
    } while (checkString(theNumber) == 0);
}

int main()
{
    char aNumber[10] = "abcdefg"; /*検証のために意味のない文字列を初期値とする*/
    int count;
    srand((unsigned)time(NULL)); /*乱数列生成の初期化*/
    for (count = 0; count < 10; count++)
    {
        generateNumber(aNumber);
        puts(aNumber);
    }
    return 0;
}

/*** 結果 ***

2046
4893
2431
1329
8357
6985
0145
4189
3826
4381

*************/
