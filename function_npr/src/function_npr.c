/*
 ============================================================================
 Name        : function_npr.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int get_fact(int x);
int main(void) {
	int n,r,nr,factn=1,factr=1,factnr=1,npr=1,ncr=1;
	do
	   {
	printf("n = ");
	scanf("%d",&n);
	printf("\nr= ");
	scanf("%d",&r);
	   }
	while ( n < r);
	factn =  get_fact(n);
	factr =  get_fact(r);
	factnr = get_fact(n-r);

	npr=(factn/factnr);
	ncr=factn/(factnr * factr);
	printf("npr = %d \n",npr);
	printf("ncr = %d \n",ncr);

}

int get_fact(int x)
		{
	int i=1,fact=1;
	 for (i=1;i<=x;i++)
	 		    	{
	 		    	fact *= i;
	 		    	}
	 return fact;
		}
