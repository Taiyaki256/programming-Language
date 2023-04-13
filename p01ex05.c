/***   p01ex05.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	double temperature; /*温度をあらわす変数[℃]*/
	double velocity;	/*音速をあらわす変数[m/s]*/
	scanf("%lf", &temperature);
	velocity = 331.5 + 0.6 * temperature;
	printf("temperature=%.1f\n", temperature);
	printf("velocity   =%.1f\n", velocity);
	return 0;
}

/*** 結果 ***


*************/
