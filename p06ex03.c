/***   p06ex03.c   ***/
/***   ps20      ***/

#include <stdio.h>

double movingAverage(int var)
{
    static int list[4] = {0, 0, 0, 0};
    static int move = 0;
    double average = 0;
    double sum = 0;
    int i;
    list[move] = var;
    move = (move + 1) % 4;
    for (i = 0; i < 4; i++)
    {
        sum += list[i];
    }
    average = sum / 4.0;
    return average;
}

int main()
{
    int x;
    double y;
    for (x = 0; x < 10; x++)
    {
        y = movingAverage(x);
        printf("x=%6d y=%10.2f\n", x, y);
    }
    for (; x < 20; x++)
    {
        y = movingAverage(10);
        printf("x=%6d y=%10.2f\n", x, y);
    }
    return 0;
}

/*** 結果 ***

*************/
