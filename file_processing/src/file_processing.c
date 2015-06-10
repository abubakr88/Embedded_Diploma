/*
 ============================================================================
 Name        : file_processing.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main ()
{
   FILE *fp;
   int c;
   int n = 0;

   fp = fopen("/home/abubakr/test.txt","r");
   if(fp == NULL)
   {
      perror("Error in opening file");
      return(-1);
   }
   do
   {
      c = fgetc(fp);
      if( feof(fp) )
      {
         break ;
      }
      printf("%c", c);
   }while(1);

   fclose(fp);
   return(0);
}
