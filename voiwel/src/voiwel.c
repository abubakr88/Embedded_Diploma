/*
 ============================================================================
 Name        : voiwel.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char a;
	printf ("insert a letter\n");
	scanf("%c",&a);
	switch(a)
	{
	case 'a':
	case 'e':
	case 'o':
	case 'i':
	case 'u':
		printf ("the letter %c is a voiwel letter\n", a);
		break;
	default:
		printf ("the letter %c isn't a voiwel letter\n", a);
	}
}
