/***   p05ex04.c   ***/
/***   ps20      ***/

#include <stdio.h>

double average(int array[], int size)
{
    double ans = 0.0;
    int i;
    for (i = 0; i < size; i++)
    {
        ans += array[i];
    }
    ans = ans / size;
    return ans;
}

int main()
{
    int data1[] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int data2[] = {
        4, 5, 0, 2, 3, 7};
    double ave;
    ave = average(data1, 10);
    printf("%5.1f\n", ave);
    ave = average(data2, 6);
    printf("%5.1f\n", ave);
    return 0;
}

/*** 結果 ***

  5.5
  3.5

*************/
