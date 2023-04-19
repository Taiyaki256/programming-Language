﻿/***   p02ex04.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int x, y1, y2, y3;
	printf("   x    y1    y2     y3\n");
	for (x = 1; x <= 100; x++)
	{
		y1 = x % 2;
		y2 = x % 3;
		y3 = x % 4;
		printf("%4d %6d %6d %6d\n", x, y1, y2, y3);
	}
	return 0;
}

/*** 結果 ***

   x    y1    y2     y3
   1      1      1      1
   2      0      2      2
   3      1      0      3
   4      0      1      0
   5      1      2      1
   6      0      0      2
   7      1      1      3
   8      0      2      0
   9      1      0      1
  10      0      1      2
  11      1      2      3
  12      0      0      0
  13      1      1      1
  14      0      2      2
  15      1      0      3
  16      0      1      0
  17      1      2      1
  18      0      0      2
  19      1      1      3
  20      0      2      0
  21      1      0      1
  22      0      1      2
  23      1      2      3
  24      0      0      0
  25      1      1      1
  26      0      2      2
  27      1      0      3
  28      0      1      0
  29      1      2      1
  30      0      0      2
  31      1      1      3
  32      0      2      0
  33      1      0      1
  34      0      1      2
  35      1      2      3
  36      0      0      0
  37      1      1      1
  38      0      2      2
  39      1      0      3
  40      0      1      0
  41      1      2      1
  42      0      0      2
  43      1      1      3
  44      0      2      0
  45      1      0      1
  46      0      1      2
  47      1      2      3
  48      0      0      0
  49      1      1      1
  50      0      2      2
  51      1      0      3
  52      0      1      0
  53      1      2      1
  54      0      0      2
  55      1      1      3
  56      0      2      0
  57      1      0      1
  58      0      1      2
  59      1      2      3
  60      0      0      0
  61      1      1      1
  62      0      2      2
  63      1      0      3
  64      0      1      0
  65      1      2      1
  66      0      0      2
  67      1      1      3
  68      0      2      0
  69      1      0      1
  70      0      1      2
  71      1      2      3
  72      0      0      0
  73      1      1      1
  74      0      2      2
  75      1      0      3
  76      0      1      0
  77      1      2      1
  78      0      0      2
  79      1      1      3
  80      0      2      0
  81      1      0      1
  82      0      1      2
  83      1      2      3
  84      0      0      0
  85      1      1      1
  86      0      2      2
  87      1      0      3
  88      0      1      0
  89      1      2      1
  90      0      0      2
  91      1      1      3
  92      0      2      0
  93      1      0      1
  94      0      1      2
  95      1      2      3
  96      0      0      0
  97      1      1      1
  98      0      2      2
  99      1      0      3
 100      0      1      0

*************/
