/***   p01ex05.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	double temperature; /*温度をあらわす変数[℃]*/
	double velocity;	/*音速をあらわす変数[m/s]*/
	printf("temperature=>");
	scanf("%lf", &temperature);
	velocity = 331.5 + 0.6 * temperature;
	printf("temperature=%.1f\n", temperature);
	printf("velocity   =%.1f\n", velocity);
	return 0;
}

/*** 結果 ***

temperature=>15.0
temperature=15.0
velocity   =340.5

temperature=>20.0
temperature=20.0
velocity   =343.5

temperature=>25.0
temperature=25.0
velocity   =346.5

temperature=>30.0
temperature=30.0
velocity   =349.5

*************/
