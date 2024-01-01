#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i;
    printf("x log(x)\n");
    for (i = 1; i < 10; i++)
    {
        printf("%d %.6f\n", i, log(i));
    }
    return 0;
}