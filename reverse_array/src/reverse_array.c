/*
 ============================================================================
 Name        : reverse_array.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
int x [5]={3,4,6,2,1};
int a,i,j=3;
for (i=0;i<3;i++)
{
a=x[i];
x[i]=x[4-i];
x[4-i]=a;
}
for (i=0;i<5;i++)
{
printf("a[%d]= %d \n", i, x[i]);
}
}
