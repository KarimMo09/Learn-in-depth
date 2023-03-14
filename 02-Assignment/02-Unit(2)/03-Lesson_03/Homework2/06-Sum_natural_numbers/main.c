/*
 * main.c
 *
 *  Created on: 14 Mar 2023
 *      Author: Karim
 */

#include <stdio.h>
int main ()
{
	int num,i,sum=0;
	printf("Enter an integer : ");
	scanf("%d",&num);
	if(num<0)
	{
		printf("Invalid input");
	}
	else 
	{
		for(i=1;i<=num;i++)
		{
			sum+=i;
		}
		printf("Sum = %d",sum);
	}

	return 0;
}


