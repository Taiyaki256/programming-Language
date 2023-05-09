/***   p05ex11.c   ***/
/***   ps20      ***/

#include <stdio.h>

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

int main()
{
    char s0[] = "1234";
    char s1[] = "9837", s2[] = "9817", s3[] = "1837", s4[] = "1834", s5[] = "1234";
    printf("%-4s %-4s => %d\n", s0, s1, countHit(s0, s1));
    printf("%-4s %-4s => %d\n", s0, s2, countHit(s0, s2));
    printf("%-4s %-4s => %d\n", s0, s3, countHit(s0, s3));
    printf("%-4s %-4s => %d\n", s0, s4, countHit(s0, s4));
    printf("%-4s %-4s => %d\n", s0, s5, countHit(s0, s5));
    return 0;
}

/*** 結果 ***

1234 9837 => 1
1234 9817 => 0
1234 1837 => 2
1234 1834 => 3
1234 1234 => 4

*************/
