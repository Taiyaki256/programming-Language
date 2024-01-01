#include <stdio.h>
#include <stdlib.h>

void DecPart(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (i != 0)
        {
            s[i - 1] = s[i];
        }
        i++;
    }
    if (i != 0)
        s[i - 1] = '\0';
}