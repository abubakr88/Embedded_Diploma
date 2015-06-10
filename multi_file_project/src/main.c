/*
 ============================================================================
 Name        : multi_file_project.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(void)
{
    int a, b;
    printf("Insert two numbers: ");
    if(scanf("%d  %d", &a, &b)!=2)
    {
        fputs("Invalid input", stderr);
        return 1;
    }
    printf("%d + %d = %d", a, b, Sum(a, b));
    return 0;
}
