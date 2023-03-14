/*
 * main.c
 *
 *  Created on: 14 Mar 2023
 *      Author: Karim
 */

#include <stdio.h>
int main ()
{
	float num;
	printf("Enter a number :");
	scanf("%f",&num);
	
	if(num > 0)
	{
		printf("%.2f is positive",num);
	}
	else if(num < 0)
	{
		printf("%.2f is negative",num);
	}
	else
	{
		printf("You entered zero");
	}
		
	return 0;
}


