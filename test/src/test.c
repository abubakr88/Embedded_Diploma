/*
 ============================================================================
 Name        : test.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <time.h>
int main() {
time_t biggest = 0x7FFFFFFF;
printf("biggest = %s \n", asctime(gmtime(&biggest)) );
return 0;
}
