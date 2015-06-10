#include <stdio.h>

int main(void) {
	int a,x;
	scanf("%d",&a);
	while(a>=1)
	{
    x=a%10;
	printf ("\n x=%d\n",x);
    a=a/10;
	}
}
