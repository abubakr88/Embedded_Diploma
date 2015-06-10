/*
 ============================================================================
 Name        : Largest_Number.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int a,b,c;
	printf("\nEnter the Values of a : ");
	scanf("%d", &a);
	printf("\nEnter the Values of b : ");
	scanf("%d", &b);
	printf("\nEnter the Values of c : ");
	scanf("%d", &c);
	   if ((a > b) && (a > c))
	      printf("\na is greatest");

	   if ((b > c) && (b > a))
	      printf("\nb is greatest");

	   if ((c > a) && (c > b))
	      printf("\nc is greatest");

}
