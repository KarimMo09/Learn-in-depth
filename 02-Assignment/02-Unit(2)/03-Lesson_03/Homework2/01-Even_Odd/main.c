/*
 * main.c
 *
 *  Created on: 14 Mar 2023
 *      Author: Karim
 */

#include <stdio.h>
int main ()
{
	int num;
	printf("Enter an integer you want to check: ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d is even.",num);
	}
	else
	{
		printf("%d is odd.",num);
	}
	
	return 0;
}


