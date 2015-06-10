#include <stdio.h>
#include <ctype.h>
main() {
char name[80];
int loop;
printf ("Please type in your name\n");
gets(name);
for (loop=0; name[loop] !=0; loop++)
name[loop] = toupper(name[loop]);
printf ("You are %s\n",name);
}
