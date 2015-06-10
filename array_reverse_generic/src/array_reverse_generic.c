/*
 ============================================================================
 Name        : array_reverse_generic.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int a,i,n,x[100],l =sizeof(x)/sizeof(int);

	   printf("Enter the number of elements in array\n");
	   scanf("%d", &n);

	   printf("Enter the array elements\n");

	   for (i = 0; i < n ; i++)
	      scanf("%d", &x[i]);

	   	for (i=0;i<(n/2);i++)
	   	{
	   	a=x[i];
	   	x[i]=x[n-1-i];
	   	x[n-1-i]=a;
	   	}

for (i=0;i<n;i++)
{
printf("a[%d]= %d \n", i, x[i]);
}

}
