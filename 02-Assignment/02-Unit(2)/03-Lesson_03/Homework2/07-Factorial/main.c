/*
 * main.c
 *
 *  Created on: 14 Mar 2023
 *      Author: Karim
 */

#include <stdio.h>
int main ()
{
	int num,i,factorial=1;
	printf("Enter an integer : ");
	scanf("%d",&num);
	if(num < 0)
	{
		printf("Factorial of negative number doesn't exist.");
	}
	else 
	{
		for(i=1;i<=num;i++)
		{
			factorial*=i;
		}
		printf("factorial = %d",factorial);
	}

	return 0;
}


