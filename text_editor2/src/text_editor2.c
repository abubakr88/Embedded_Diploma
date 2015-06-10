#include <stdlib.h>
#include <stdio.h>

int main(){
	FILE *pfile = NULL;
	char *filename = "/home/abubakr/test.txt";
	int a,b,c,x,y,z,get;
	printf("Entre 3 grades: ");
	scanf("%d%d%d", &a,&b,&c);

	if (!(pfile= fopen(filename, "w"))){
		perror("can't open file for writing");
		exit(1);
	}

	fprintf(pfile, "%d %d %d", a , b, c);

	fclose(pfile);

	if (!(pfile= fopen(filename, "r"))){
		perror("can't open file for reading");
		exit(1);
	}
	fscanf(pfile, "%d%d%d \n %d", &x , &y, &z);
	fclose(pfile);
	printf("%d \n %d \n %d", x , y, z);
	return 0;
}
