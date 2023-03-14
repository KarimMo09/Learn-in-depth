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
	printf("Enter an alphabet: ");
	scanf("%c",&c);
	switch(c)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
				  printf("%c is a vowel\n",c);
				  break;
		default : printf("%c is a consonat\n",c);
				  break;
		
		
		
	}

	
	return 0;
}

