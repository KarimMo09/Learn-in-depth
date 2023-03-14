/*
 * main.c
 *
 *  Created on: 14 Mar 2023
 *      Author: Karim
 */

#include <stdio.h>
int main ()
{
	float a,b;

	printf("Enter value of a : \n");
	scanf("%f",&a);
	printf("Enter value of b : \n");
	scanf("%f",&b);
	/*----This valid if two numbers are integer----*/
	/*a^=b;
	b^=a;
	a^=b;*/
	
	a=a-b;
	b=a+b;
	a=b-a;
	
	printf("After Swapping, value of a = %.2f\n"
			"After Swapping, value of b = %.2f\n",a,b);
	return 0;
}


