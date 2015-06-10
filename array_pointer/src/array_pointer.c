/*
 ============================================================================
 Name        : array_pointer.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
char x[5];
printf("%d \n",sizeof(x));
myfunc(x);
}
void myfunc(int x[])
{
	printf ("%d",sizeof(x));
}
