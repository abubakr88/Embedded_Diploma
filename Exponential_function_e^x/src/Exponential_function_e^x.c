/*
 ============================================================================
 Name        : Exponential_function_e^x.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
//#include "source1.h"
#include "source2.h"

int main(void) {
	int x, n;
	float result;
	printf("Enter the Base x= \n");
	scanf("%d", &x);
	printf("Enter the number of elements n= \n");
	scanf("%d", &n);
	result = get_exp(x, n);
	printf("e^%d = %f \n", x, result);
	return 0;
}
