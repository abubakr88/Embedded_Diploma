/*
 ============================================================================
 Name        : Leap_Year.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
int year;
printf("insert the year to check if it's a leap year or not\n");
scanf("%d",&year);
if(year%4==0)
{
	if( year%100 == 0)
	{
	              if ( year%400 == 0)
	                 printf("%d is a leap year.", year);
	              else
	                 printf("%d is not a leap year.", year);
	          }
	else
	printf("\n %d is a Leap Year", year);
	}
else
{
	printf("\n %d is not a Leap Year", year);
}
}
