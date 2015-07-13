#include <stdio.h>
#include <math.h>

int main() {
	unsigned int line,i,r=5,j;
for (i=0;i<=r;i++){
	line=sqrt((r*r)-((r-i)*(r-i)));
for (j=0; j<line ; j++){
	printf (" ");
}
printf ("*\n");
}
}
