/***   p05ex12.c   ***/
/***   ps20      ***/

#include <stdio.h>

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

int main()
{
    char s0[] = "1234";
    char s1[] = "9387", s2[] = "9807", s3[] = "0391", s4[] = "4213", s5[] = "4312";
    printf("%-4s %-4s => %d\n", s0, s1, countBlow(s0, s1));
    printf("%-4s %-4s => %d\n", s0, s2, countBlow(s0, s2));
    printf("%-4s %-4s => %d\n", s0, s3, countBlow(s0, s3));
    printf("%-4s %-4s => %d\n", s0, s4, countBlow(s0, s4));
    printf("%-4s %-4s => %d\n", s0, s5, countBlow(s0, s5));

    return 0;
}

/*** 結果 ***

1234 9387 => 1
1234 9807 => 0
1234 0391 => 2
1234 4213 => 3
1234 4312 => 4

*************/
