/*
 ============================================================================
 Name        : system.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main ()
{
   char command[50];

   strcpy( command, "df -h" );
   system(command);

   return(0);
}
