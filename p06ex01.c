/***   p06ex01.c   ***/
/***   ps20      ***/

#include <stdio.h>

int delay2(int var)
{
    static int list[2] = {0, 0};
    static int delay = 0;
    int tmp;
    tmp = list[delay];
    list[delay] = var;
    delay = (delay + 1) % 2;
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
    for (i = 0; i < 100000; i++)
    {
        x = myrand();
        y = delay2(x);
        if (i < 10 || 99990 < i)
            printf("%8d x=%6d y=%6d\n", i, x, y);
    }
    return 0;
}

/*** 結果 ***

       0 x= 31934 y=     0
       1 x= 28303 y=     0
       2 x=  9980 y= 31934
       3 x=  6165 y= 28303
       4 x= 10666 y=  9980
       5 x= 10827 y=  6165
       6 x= 23624 y= 10666
       7 x= 11953 y= 10827
       8 x= 29270 y= 23624
       9 x=  6855 y= 11953
   99991 x= 26145 y=  3643
   99992 x= 24070 y= 12920
   99993 x= 25015 y= 26145
   99994 x= 10372 y= 24070
   99995 x=  8829 y= 25015
   99996 x= 32114 y= 10372
   99997 x= 30195 y=  8829
   99998 x= 17488 y= 32114
   99999 x= 13721 y= 30195

*************/
