/*
 ============================================================================
 Name        : odd_even.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int a,b;
	printf("\nEnter the Values of a : ");
	scanf("%d", &a);
	if(a%2==0)
	{
		printf("\n a is an even number ");
	}
	else
	{
		printf("\n a is an odd number ");
	}
}
