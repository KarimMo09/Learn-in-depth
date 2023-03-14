/*
 * main.c
 *
 *  Created on: 14 Mar 2023
 *      Author: Karim
 */

#include <stdio.h>
int main ()
{
	char c;
	printf("Enter a character : ");
	scanf("%c",&c);
	
	switch(c)
	{
		case 'a'...'z':
		case 'A'...'Z':
				printf("%c is an alphabet",c);
				break;
		default:		
			    printf("%c is not an alphabet",c);
				break;
	}
	return 0;
}


