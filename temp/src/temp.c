/*
 ============================================================================
 Name        : temp.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char label[] = "Single";
	char label2[10] = "Married";
	char *labelPtr;
	labelPtr = label;

printf ("%c",labelPtr[3]);
	return EXIT_SUCCESS;
}
