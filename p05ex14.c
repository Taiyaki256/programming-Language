/***   p05ex14.c   ***/
/* s22087 2J20 Shimazaki Taiga */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int countBlow(char s1[], char s2[])
{
    int blow = 0;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (s1[i] == s2[j] && i != j)
            {
                blow++;
            }
        }
    }
    return blow;
}

int countHit(char s1[], char s2[])
{
    int hit = 0;
    int i;
    for (i = 0; i < 4; i++)
    {
        if (s1[i] == s2[i])
        {
            hit++;
        }
    }
    return hit;
}

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
    char theNumber[5];
    char guess[5];
    int hit, blow;
    int i;
    int count = 0;
    srand(time(NULL));
    generateNumber(theNumber);
    do
    {
        printf("number: ");
        gets(guess);
        if (checkString(guess) == 0)
        {
            printf("input error.\n");
            continue;
        }
        hit = countHit(theNumber, guess);
        blow = countBlow(theNumber, guess);
        printf(" Hit: %d, Blow: %d\n", hit, blow);
        count++;
    } while (hit != 4);
    printf("あなたは %d 回の試行で勝利しました\n", count);
    return 0;
}

/*** 結果 ***

number: 1234
 Hit: 1, Blow: 0
number: 4561
 Hit: 0, Blow: 1
number: 1789
 Hit: 0, Blow: 2
number: 7805
 Hit: 0, Blow: 1
number: 7298
 Hit: 2, Blow: 1
number: 2798
 Hit: 1, Blow: 2
number: 7489
 Hit: 0, Blow: 2
number: 9258
 Hit: 1, Blow: 1
number: 9257
 Hit: 2, Blow: 1
number: 6927
 Hit: 2, Blow: 2
number: 2697
 Hit: 2, Blow: 2
number: 2967
 Hit: 1, Blow: 3
number: 6297
 Hit: 4, Blow: 0
あなたは 13 回の試行で勝利しました

*************/
