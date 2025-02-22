﻿/***   p05ex05.c   ***/
/***   ps20      ***/

#include <stdio.h>

void reverse(int array[], int size)
{
    int i;
    int tmp;
    for (i = 0; i < size / 2; ++i)
    {
        tmp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = tmp;
    }
}

int main()
{
    int i;
    int array[] = {100, 2, 3, 11, 12, 13, 21, 22, 23, 100};
    reverse(array, 10);
    for (i = 0; i < 10; ++i)
        printf("%d ", array[i]);
    printf("\n");
    reverse(array, 4);
    for (i = 0; i < 4; ++i)
        printf("%d ", array[i]);
    printf("\n");
    return 0;
}

/*** 結果 ***

100 23 22 21 13 12 11 3 2 100
21 22 23 100

*************/
