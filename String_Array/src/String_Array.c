/*
 ============================================================================
 Name        : String_Array.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
char s[11];
char s2[11];
printf("Enter String ");
gets(s);
strcpy(s2,s);
printf("\n%s",s);
printf("\n%s",s2);
printf("\n%d",strlen(s));

gets(s2);
printf("\n%s",s2);
printf("\n%d",strlen(s2));
}
