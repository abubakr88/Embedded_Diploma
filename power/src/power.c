/*
 ============================================================================
 Name        : power.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
  int a,b,n,powr=1;
  long long int value=1;
  printf("Enter base number and exponent respectively: ");
  scanf("%d%d", &a, &b);

  for (n=1;n<=b;n++)
  	{
  	powr *= a;
  	}

  printf("Answer = %d", powr);
}

