/*
 ============================================================================
 Name        : factorial.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int a, n, fact=1;
	    printf("Enter a number to get it's factorial: ");
	    scanf("%d",&a);
	    if ( a< 0)
	          printf("Please Enter a Positive Number !!!!!");
	      else
	      {
	    for (n=1;n<=a;n++)
	    	{
	    	fact *= n;
	    	}
	    printf("Fact = %d",fact);
	      }
}
