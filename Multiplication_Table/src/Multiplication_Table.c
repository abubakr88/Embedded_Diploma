/*
 ============================================================================
 Name        : Multiplication_Table.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
int a,i;
printf ("insert a number to get it's Multiplication Table\n");
scanf ("%d" , &a);
for (i=1;i<=10;++i)
{
printf("%d * %d = %d \n", a , i , a*i);
}
}
