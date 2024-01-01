#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int IsDeptSymbol(char c)
{
    char symbol = toupper(c);
    if (symbol == 'M' || symbol == 'E' || symbol == 'D' || symbol == 'J' || symbol == 'C')
        return 1;
    return 0;
}