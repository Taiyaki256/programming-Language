#include <stdio.h>
#include <stdlib.h>

void AlphaSort(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
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
    char s[] = "bacedgf";
    AlphaSort(s);
    printf("%s\n", s);
    return 0;
}