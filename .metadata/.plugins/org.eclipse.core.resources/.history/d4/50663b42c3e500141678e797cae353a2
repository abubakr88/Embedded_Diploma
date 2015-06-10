/*
 ============================================================================
 Name        : sort_array_algo.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int temp,i,j,x[5]={21,0,1,43,4};

	for(i=1;i<5;i++)
	{
		temp = x[i];
		j=i-1;
		while(temp<x[j] && j>=0)
		{
			x[j+1] = x[j];
			--j;
		}
		x[j+1]=temp;
	}

for (i=0;i<5;i++)
{
printf("\n a[%d]= %d \n", i, x[i]);
}
}
