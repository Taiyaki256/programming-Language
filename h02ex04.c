#include <stdio.h>
#include <stdlib.h>

double Median(int data[])
{
    int i = 0;
    int j, k;
    while (data[i] != -1)
    {
        j = i + 1;
        while (data[j] != -1)
        {
            if (data[i] > data[j])
            {
                k = data[i];
                data[i] = data[j];
                data[j] = k;
            }
            j++;
        }
        i++;
    }
    if (i % 2 == 0)
    {
        return (double)(data[i / 2] + data[i / 2 - 1]) / 2.0;
    }
    else
    {
        return (double)data[i / 2];
    }
}

int main()
{
    int data[] = {1, 2, 3, 4, 5, 6, 7, -1};
    printf("%lf\n", Median(data));
    return 0;
}