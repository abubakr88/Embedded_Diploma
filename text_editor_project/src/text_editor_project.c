/*
 ============================================================================
 Name        : text_editor_project.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>
#define MAX_LEN 100

void do_op(FILE* ,char );
//void find(FILE* , char );
//void delete_str(char phrase[]);
//void insert_str(char phrase[]);
//void find_str(char phrase[]);
//int get_index(char d[], char phrase[]);

int main(void) {
	FILE *pfile = NULL;
	char *filename = "/home/abubakr/test.txt";
	char command;
	int a,b,c,x,y,z;

	printf("Entre 3 grades: ");
	scanf("%d%d%d", &a,&b,&c);

	if (!(pfile= fopen(filename, "w"))){
		perror("can't open file for writing");
		exit(1);
	}

	do {
		printf("Enter Command (D: delete , I: insert , F: find , Q: quit. \n");
		scanf("%c", &command);
		if (command == 'q')
			continue;
		do_op(pfile, command);
	}while(tolower(command) != 'q');

	fprintf(pfile, "%d %d %d", a , b, c);
	fclose(pfile);

	return EXIT_SUCCESS;
}


void do_op(FILE *pfile,char command){
	char search_string[]="12";
	switch (tolower(command)){
	case 'f':
		puts("search for:");
		scanf ("%s", search_string);
		find(pfile , search_string);
//	case 'd':
//		 delete_str(phrase);
//		 printf("\n the pharase after deletion operation : %s",phrase);
//		 printf("\n the pharase after deletion operation\n");
//		 break;

//	case 'i':
//		insert_str(phrase);
//		printf("\n the pharase afer insertation operation : %s",phrase);
//		printf("\n the pharase afer insertation operation \n ");
//		 break;

//	case 'f':
//		find_str(phrase);
//		break;

	default:
		printf("the operation is not valid");
	}
}

void find(FILE* pfile , char search_string[] ){
	char line[200];
    while ( fgets ( line, 200, pfile ) != NULL ) /* read a line */
    {
            if(strstr(line,search_string))
            fputs ( line, stdout ); /* write the line */

    }
}

