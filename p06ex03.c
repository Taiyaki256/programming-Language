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

x=     0 y=      0.00
x=     1 y=      0.25
x=     2 y=      0.75
x=     3 y=      1.50
x=     4 y=      2.50
x=     5 y=      3.50
x=     6 y=      4.50
x=     7 y=      5.50
x=     8 y=      6.50
x=     9 y=      7.50
x=    10 y=      8.50
x=    11 y=      9.25
x=    12 y=      9.75
x=    13 y=     10.00
x=    14 y=     10.00
x=    15 y=     10.00
x=    16 y=     10.00
x=    17 y=     10.00
x=    18 y=     10.00
x=    19 y=     10.00

*************/
