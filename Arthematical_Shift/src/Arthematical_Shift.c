
/*rotate right*/
#include <stdio.h>

int main(void) {
unsigned char a,x,y;
int n=3;
printf("insert a hexa number\n");
scanf("%x",&a);
x=a>>n;
y=a<<(8-n);
a= x|y;
printf ("\n hexa=%x\n",a);
}
