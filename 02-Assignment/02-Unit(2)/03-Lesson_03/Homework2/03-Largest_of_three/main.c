/*
 * main.c
 *
 *  Created on: 14 Mar 2023
 *      Author: Karim
 */

#include <stdio.h>
int main ()
{
	float a,b,c;
	printf("Enter three nnumbers : ");
	scanf("%f%f%f",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("Largest number = %.2f",a);
		}
		else
		{
			printf("Largest number = %.2f",c);
		}
	}
	else if(b>a)
	{
		if(b>c)
		{
			printf("Largest number = %.2f",b);
		}
		else
		{
			printf("Largest number = %.2f",c);
		}
	}
	else //a=b
	{
		if(b>c)//or (a>c0
		{
			printf("Largest number = %.2f",b);
		}
		else
		{
			printf("Three numbers are equal and = %.2f",b);
		}
	}
		
			
	return 0;
}


