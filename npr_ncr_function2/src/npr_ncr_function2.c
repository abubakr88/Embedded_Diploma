/*
 ============================================================================
 Name        : npr_ncr_function2.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : npr_ncr_function2.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int n,r,nr,npr=1,ncr=1;
	do
	   {
	printf("n = ");
	scanf("%d",&n);
	printf("\nr= ");
	scanf("%d",&r);
	   }
	while ( n < r);
	nr=n-r;
	npr= get_npr(n,nr);
	ncr=get_ncr(npr,r);
	printf("npr = %d \n",npr);
	printf("ncr = %d \n",ncr);

}

int get_npr(int a,int b)
		{
	int npr=1,factn=1,factnr=1;
	factn =  get_fact(a);
	factnr = get_fact(b);
	npr=factn/factnr;
	 return npr;
		}

int get_ncr(int c,int d)
		{
	int i=1,factr=1,ncr=1;
	factr =  get_fact(d);
    ncr = c/factr;
	 return ncr;
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