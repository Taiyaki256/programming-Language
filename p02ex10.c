﻿/***   p02ex10.c ***/
/***   ps20      ***/

#include <stdio.h>

int main()
{
	int n, i, j, h;
	printf("n= ");
	scanf("%d", &n);
	h = n / 2;
	for (i = 0; i < h + 1; i++)
	{
		for (j = 0; j < h - i; j++)
		{
			printf("-");
		}
		for (j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}
		for (j = 0; j < h - i; j++)
		{
			printf("-");
		}
		printf("\n");
	}
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("-");
		}
		for (j = 0; j < n - (i * 2 + 2); j++)
		{
			printf("*");
		}
		for (j = 0; j < i + 1; j++)
		{
			printf("-");
		}
		printf("\n");
	}

	return 0;
}

/*** 結果 ***

n= 1
*

n= 3
-*-
***
-*-

n= 5
--*--
-***-
*****
-***-
--*--

n= 7
---*---
--***--
-*****-
*******
-*****-
--***--
---*---

n= 9
----*----
---***---
--*****--
-*******-
*********
-*******-
--*****--
---***---
----*----

n= 79
---------------------------------------*---------------------------------------
--------------------------------------***--------------------------------------
-------------------------------------*****-------------------------------------
------------------------------------*******------------------------------------
-----------------------------------*********-----------------------------------
----------------------------------***********----------------------------------
---------------------------------*************---------------------------------
--------------------------------***************--------------------------------
-------------------------------*****************-------------------------------
------------------------------*******************------------------------------
-----------------------------*********************-----------------------------
----------------------------***********************----------------------------
---------------------------*************************---------------------------
--------------------------***************************--------------------------
-------------------------*****************************-------------------------
------------------------*******************************------------------------
-----------------------*********************************-----------------------
----------------------***********************************----------------------
---------------------*************************************---------------------
--------------------***************************************--------------------
-------------------*****************************************-------------------
------------------*******************************************------------------
-----------------*********************************************-----------------
----------------***********************************************----------------
---------------*************************************************---------------
--------------***************************************************--------------
-------------*****************************************************-------------
------------*******************************************************------------
-----------*********************************************************-----------
----------***********************************************************----------
---------*************************************************************---------
--------***************************************************************--------
-------*****************************************************************-------
------*******************************************************************------
-----*********************************************************************-----
----***********************************************************************----
---*************************************************************************---
--***************************************************************************--
-*****************************************************************************-
*******************************************************************************
-*****************************************************************************-
--***************************************************************************--
---*************************************************************************---
----***********************************************************************----
-----*********************************************************************-----
------*******************************************************************------
-------*****************************************************************-------
--------***************************************************************--------
---------*************************************************************---------
----------***********************************************************----------
-----------*********************************************************-----------
------------*******************************************************------------
-------------*****************************************************-------------
--------------***************************************************--------------
---------------*************************************************---------------
----------------***********************************************----------------
-----------------*********************************************-----------------
------------------*******************************************------------------
-------------------*****************************************-------------------
--------------------***************************************--------------------
---------------------*************************************---------------------
----------------------***********************************----------------------
-----------------------*********************************-----------------------
------------------------*******************************------------------------
-------------------------*****************************-------------------------
--------------------------***************************--------------------------
---------------------------*************************---------------------------
----------------------------***********************----------------------------
-----------------------------*********************-----------------------------
------------------------------*******************------------------------------
-------------------------------*****************-------------------------------
--------------------------------***************--------------------------------
---------------------------------*************---------------------------------
----------------------------------***********----------------------------------
-----------------------------------*********-----------------------------------
------------------------------------*******------------------------------------
-------------------------------------*****-------------------------------------
--------------------------------------***--------------------------------------
---------------------------------------*---------------------------------------

*************/
