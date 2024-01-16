#include <stdio.h>
#include <stdlib.h>

void MatMulti(int a[][10], int b[][10], int c[][10], int n)
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                c[i][j] = c[i][j] + a[k][j] * b[i][k];
            }
        }
    }
}

int main()
{
    int a[10][10] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    int b[10][10] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    int c[10][10];
    MatMulti(a, b, c, 3);
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}