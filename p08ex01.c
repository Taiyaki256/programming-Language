/***   p08ex01.c   ***/
/* s22087 2J20 Shimazaki Taiga */

#include <stdio.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
} point_t;

point_t rotatePoint(point_t point, double theta)
{
    int x = point.x * cos(theta) - point.y * sin(theta);
    int y = point.x * cos(theta) + point.y * sin(theta);
    point_t p = {x, y};
    return p;
}

int main()
{
    point_t p1 = {100, 100};
    point_t newp1 = rotatePoint(p1, 0.785);
    printf("(%d,%d)\n", newp1.x, newp1.y);
    point_t p2 = {100, 100};
    point_t newp2 = rotatePoint(p2, -0.785);
    printf("(%d,%d)\n", newp2.x, newp2.y);
    return 0;
}

/*** 結果 ***

(0,141)
(141,0)

*************/
