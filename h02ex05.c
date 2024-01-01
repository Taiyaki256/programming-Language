#include <stdio.h>
#include <stdlib.h>

void Slim(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == 'o')
        {
            if (i != 0)
            {
                s[i - 1] = 'o';
            }
            while (s[i + 1] == 'o')
            {
                i++;
            }
            if (s[i + 1] != '\0')
            {
                s[i + 1] = 'o';
            }
            i++;
        }
        i++;
    }
}

int main()
{
    char s[] = "***oo***o****o";
    Slim(s);
    printf("%s\n", s);
    return 0;
}