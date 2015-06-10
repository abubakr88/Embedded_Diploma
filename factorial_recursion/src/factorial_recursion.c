/*
 ============================================================================
 Name        : factorial_recursion.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int get_fact(int x);

int main(void) {
    int a,fact=1; /*variable declaration */
	printf("a = ");
	scanf("%d",&a);
	fact=get_fact(a);
	printf("factor=%d",fact);
}

int get_fact(int n)
		{
	 if(n==1)
	 return n;
	 else
	 return n*get_fact(n-1);
		}
