/*
 ============================================================================
 Name        : equation.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
int main(void) {
float a,b,c,x,y,z;
printf("this application will solve a second order quadratic equation like this\n aX^2+bX+C=0\n");
printf("\nEnter the Values of a : ");
scanf("%f", &a);
printf("\nEnter the Values of b : ");
scanf("%f", &b);
printf("\nEnter the Values of c : ");
scanf("%f", &c);
z = sqrt(b * b - 4 * a * c);
x= (-b + z) / (2.0 * a);
y= (-b - z) / (2.0 * a);
printf("\nFirst Root : %f", x);
printf("\nSecond Root : %f", y);
}
