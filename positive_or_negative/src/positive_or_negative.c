/*
 ============================================================================
 Name        : positive_or_negative.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int a;
	printf("insert a number\n");
	scanf("%d",&a);
	if (a>0)
	{
		printf("this is a positive number");
	}
	else if (a<0)
	{
		printf("this is a negative number");
	}
	else if (a==0)
	{
		printf("this is Zero");
	}
	else
	{
		printf("Are you sure you have insert a number?");
	}
	}
