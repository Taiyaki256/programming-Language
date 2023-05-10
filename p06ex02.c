/***   p06ex02.c   ***/
/***   ps20      ***/

#include <stdio.h>

int delay20(int var)
{
    static int list[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    static int delay = 0;
    int tmp;
    tmp = list[delay];
    list[delay] = var;
    delay = (delay + 1) % 20;
    return tmp;
}

int myrand(void)
{
    static unsigned int rnd = 12345;
    rnd = 18397 * rnd + 35977;
    rnd %= 32768;
    return (int)rnd;
}

int main()
{
    int i;
    int x, y;
    for (i = 0; i < 25; i++)
    {
        x = myrand();
        y = delay20(x);
        printf("%8d x=%6d y=%6d\n", i, x, y);
    }
    return 0;
}

/*** 結果 ***

*************/
