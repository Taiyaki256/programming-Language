#include <stdio.h>
#include <stdlib.h>

void AlphaSort(char s[])
{
    int b = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            b = i;
            while (s[b] != '\0')
            {
                if (b != i)
                {
                    s[b - 1] = s[b];
                }
                b++;
            }
            if (b != i)
                s[b - 1] = '\0';
        }
        i++;
    }
    printf("%d\n", i);
    int j, k;
    char temp;
    for (j = 0; j < i; j++)
    {
        for (k = j + 1; k < i; k++)
        {
            if (s[j] > s[k])
            {
                temp = s[j];
                s[j] = s[k];
                s[k] = temp;
            }
        }
    }
}

int main()
{
    char s[] = "bacedgf ihkj";
    AlphaSort(s);
    printf("%s\n", s);
    return 0;
}