/*
 ============================================================================
 Name        : npr_ncr2.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,r,nr,factn=1,factr=1,factnr=1,i,npr,ncr;
	printf("n = ");
	scanf("%d",&n);
	printf("\nr= ");
	scanf("%d",&r);
	nr=n-r;
	if (n>r){
	i=1;
    do
    {
       factn*=i;
       i++;
    }
    while(i<=n);

    i=1;
    do
    {
       factr*=i;
       i++;
    }
    while(i<=r);

    i=1;
    do
    {
       factnr*=i;
       i++;
    }
    while(i<=nr);

    npr=(factn/factnr);
    ncr=factn/(factnr * factr);
    printf("npr = %d \n",npr);
    printf("ncr = %d \n",ncr);
    }
    else
    {
    	printf("error n shoud be greater than r");
    }

}
