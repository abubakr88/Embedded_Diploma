/*
 ============================================================================
 Name        : pointer_test.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
int x=10,y=11;
int *p1,*p2;

p1=&x;
p2=&y;
*p1=*p2+x;
*p2=*p1-y;
x=*p1-*p2;
printf("x= %d , y= %d", x , y);

}
