/*
 ============================================================================
 Name        : NPR_NCR.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
int n,r,nr,factn=1,factr=1,factnr=1,i,npr=1,ncr=1;
while(1)
{
do
   {
printf("n = ");
scanf("%d",&n);
printf("\nr= ");
scanf("%d",&r);
   }
while ( n < r);
		    	factn *= i;
nr=n-r;
	 for (i=1;i<=n;i++)
		    	{
		    	}
	 for (i=1;i<=r;i++)
	 		    	{
	 		    	factr *= i;
	 		    	}
	 for (i=1;i<=nr;i++)
	 	 		    	{
	 	 		    	factnr *= i;
	 	 		    	}
npr=(factn/factnr);
ncr=factn/(factnr * factr);
printf("npr = %d \n",npr);
printf("ncr = %d \n",ncr);
}
}
