/*
 ============================================================================
 Name        : factorial2.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
    long int i,n,fact=1; /*variable declaration */
    printf("Enter the value of n \n");
    scanf("%ld", &n);
    /* do loop start */
    i=1;
    do
    {
       fact*=i;
       i++;
    }
    while(i<=n);

    printf("Factorial = %ld\n",fact);

}
