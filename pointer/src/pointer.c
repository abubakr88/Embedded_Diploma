/*
 ============================================================================
 Name        : pointer.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void swap (int *p1,int *p2);
int main(void) {
int x=10,y=11;
swap(&x,&y);
printf("x= %d , y= %d", x , y);

}

void swap (int *p1,int *p2)
{
	int x;
	x =*p1;
	*p1=*p2;
	*p2=x;

}
