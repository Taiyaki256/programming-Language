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

       0 x= 31934 y=     0
       1 x= 28303 y=     0
       2 x=  9980 y=     0
       3 x=  6165 y=     0
       4 x= 10666 y=     0
       5 x= 10827 y=     0
       6 x= 23624 y=     0
       7 x= 11953 y=     0
       8 x= 29270 y=     0
       9 x=  6855 y=     0
      10 x= 23380 y=     0
      11 x= 12301 y=     0
      12 x=  8898 y=     0
      13 x= 23555 y=     0
      14 x= 20512 y=     0
      15 x=  6185 y=     0
      16 x= 18158 y=     0
      17 x= 18943 y=     0
      18 x=  9900 y=     0
      19 x=  8965 y=     0
      20 x= 10970 y= 31934
      21 x=   187 y= 28303
      22 x=  2808 y=  9980
      23 x= 19617 y=  6165
      24 x= 23174 y= 10666

*************/
