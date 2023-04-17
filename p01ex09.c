/***   p01ex09.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	double radius;
	double pi = 3.14159265358979;
	printf("radius-->");
	scanf("%lf", &radius);
	printf("volume %f\n", 4.0 / 3.0 * pi * radius * radius * radius);
	printf("area %f\n", 4.0 * pi * radius * radius);
	return 0;
}

/*** 結果 ***

radius-->0.1
volume 0.004189
area 0.125664

radius-->0.3
volume 0.113097
area 1.130973

radius-->1.0
volume 4.188790
area 12.566371

radius-->3.0
volume 113.097336
area 113.097336

radius-->10.0
volume 4188.790205
area 1256.637061

*************/
