﻿/***   p07ex02.c   ***/
/* s22087 2J20 Shimazaki Taiga */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int point[100][5];
    int sum[5];
    double average[5];
    int i, j, number;
    sum[0] = 0;
    sum[1] = 0;
    sum[2] = 0;
    sum[3] = 0;
    fp = fopen("marks.txt", "r");
    if (fp == NULL)
    {
        printf("can't open a file\n");
        exit(1);
    }
    i = 0;
    point[i][0] = 0;
    while (fscanf(fp, "%d,%d,%d,%d", &point[i][0], &point[i][1], &point[i][2], &point[i][3]) == 4)
    {
        i++;
    }
    fclose(fp);
    number = i;
    for (i = 0; i < number; i++)
    {
        point[i][4] = point[i][0] + point[i][1] + point[i][2] + point[i][3];
        for (j = 0; j < 4; j++)
        {
            sum[j] += point[i][j];
        }
    }
    sum[4] = sum[0] + sum[1] + sum[2] + sum[3];
    for (j = 0; j < 5; j++)
    {
        average[j] = (double)(sum[j]) / (double)(number);
    }
    printf("学籍番号 英語 数学 理科 国語  合計\n");
    for (i = 0; i < number; i++)
    {
        printf("%5d    %3d   %3d  %3d  %3d   %3d\n", i, point[i][0], point[i][1], point[i][2], point[i][3], point[i][4]);
    }
    printf(" 平均     %.1f  %.1f %.1f %.1f %.1f\n", average[0], average[1], average[2], average[3], average[4]);
    return 0;
}

/*** 結果 ***

学籍番号 英語 数学 理科 国語  合計
    0     70    59   56   66   251
    1    100   100  100  100   400
    2     68    90   96   94   348
    3     79    92   85   75   331
    4     64    66   72   50   252
    5    100   100  100  100   400
    6     81    92   86   97   356
    7     95    88   88   79   350
    8     78    74   75   74   301
    9     75    80   92   75   322
   10     87    76   77   63   303
   11     90    90   99  100   379
   12     68    68   67   75   278
   13     66    66   69   71   272
   14     71    69   73   80   293
   15     98    81   98   97   374
   16    100   100  100  100   400
   17     91   100   94   92   377
   18     89    87   73   68   317
   19     89   100  100   94   383
   20     21    27   26   25    99
   21    100   100  100  100   400
   22     36    53   32   31   152
   23     97    74   72   85   328
   24     86    85   81   79   331
   25     75    71   63   72   281
   26     88    94   87   84   353
   27     62    68   72   60   262
   28     62    68   62   70   262
   29     92    88   86   70   336
   30     57    64   69   64   254
   31     55    77   51   73   256
   32     58    74   80   71   283
   33     97    91   79  100   367
   34     69    58   72   69   268
   35     38    54   35   19   146
   36     31    23   34   37   125
   37     94    85   71   63   313
   38     64    90   71   73   298
   39     55    51   50   48   204
   40     97   100  100  100   397
   41     87    83  100   85   355
 平均     75.7  77.5 76.0 74.5 303.7

*************/
