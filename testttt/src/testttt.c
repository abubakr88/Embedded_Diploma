/*
 ============================================================================
 Name        : testttt.c
 Author      : awdda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int a,first,second,third;
	scanf("%d",&a);
	printf ("\n a=%d\n",a);
	first=a/100;
	second=a/10;
    second=second%10;
    third=a%10;
	printf ("\n first=%d\n",first);
	printf ("\n second=%d\n",second);
	printf ("\n third=%d\n",third);

}
