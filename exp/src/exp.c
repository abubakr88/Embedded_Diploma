/*
 ============================================================================
 Name        : exp.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

float get_fact(int a);
float get_exp(int x,int n);
float get_power(int x,int y);

int main(void) {
	  int x,n;
	  float result;
	  printf("Enter the Base x= \n");
	  scanf("%d", &x);
	  printf("Enter the number of elements n= \n");
	  scanf("%d", &n);
	  result = get_exp(x,n);
	  printf("e^%d = %f \n", x , result);
}

float get_power(int x,int y)
{
    int i,powr=1;

    for (i=1;i<=y;i++)
    	{
    	powr *= x;
    	}
    printf ("%d ^ %d = %d\n",x , y, powr);
    return powr;

}

float get_fact(int a)
{
    int n,fact=1;

    for (n=1;n<=a;n++)
    	{
    	fact *= n;
    	}
    printf ("!%d = %d\n",a, fact);
    return fact;
}

float get_exp(int x,int n)
{
    int i;
    float result=0;

    for (i=1;i<=n;i++)
    	{
    	result += get_power(x,i)/get_fact(i);
    	}
    return result+1.0;

}
