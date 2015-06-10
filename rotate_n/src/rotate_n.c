/*rotate right*/
#include <stdio.h>

int main(void) {
unsigned char a,x,y;
int n=3;
printf("insert a hexa number\n");
scanf("%x",&a);
a= (a>>n)|(a<<(8-n));
printf ("\n hexa=%x\n",a);
}
