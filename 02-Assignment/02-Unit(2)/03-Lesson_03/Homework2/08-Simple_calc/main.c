/*
 * main.c
 *
 *  Created on: 14 Mar 2023
 *      Author: Karim
 */

#include <stdio.h>

int main ()
{
	char op;
	float a,b;
	printf("Enter an operator either + or - or * or / : ");
	scanf("%c",&op);
	
	printf("Enter two operands : ");
	scanf("%f%f",&a,&b);
	
	switch(op)
	{
		case '+':
				printf("%.2f %c %.2f = %.2f",a,op,b,a+b);
				break;
		case '-':
				printf("%.2f %c %.2f = %.2f",a,op,b,a-b);
				break;
		case '*':
				printf("%.2f %c %.2f = %.2f",a,op,b,a*b);
				break;
		case '/':
		case '\\':
				if(b==0)
				{
					printf("Error Division by zero!");
				}
				else
				{
					printf("%.2f %c %.2f = %.2f",a,op,b,a/b);
				}
				break;
				
		default:		
			    printf("%c is invaled input",op);
				break;
	}
	return 0;
}


