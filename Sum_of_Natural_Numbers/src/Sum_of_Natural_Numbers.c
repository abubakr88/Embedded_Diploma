#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
int ncycle=0, h=1 ,i=0;
		puts("insert the number of cycles: \n");
    scanf("%d", &ncycle);

    for (i=0;i<ncycle/2;i++)
        {
        h = 2*h ;
        h = h +1;
    }

    if (ncycle%2==1)
       {
       	h = 2*h;
       }

	printf("%d\n",h);

    return 0;
}
