/*
 ============================================================================
 Name        : file_processing_editor.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_LEN 100
void do_op(char phrase[],char command);
void delete_str(char phrase[]);
void insert_str(char phrase[]);
void find_str(char phrase[]);
int get_index(char d[], char phrase[]);

int main(void) {
	char phrase[MAX_LEN];
	char command;
	printf("enter the phrase to edit : \n");
	fgets(phrase, MAX_LEN , stdin);

	do {
		printf("Enter Command (D: delete , I: insert , F: find , Q: quit. \n");
		scanf("%c", &command);
		if (command == 'q')
			continue;
		do_op(phrase, command);
	}while(tolower(command) != 'q');
return 0;
}

void do_op(char phrase[],char command)
{
	switch (tolower(command)){
	case 'd':
		 delete_str(phrase);
		 printf("\n the pharase afer deletion operation : %s",phrase);
		 break;

	case 'i':
		insert_str(phrase);
		 printf("\n the pharase afer insertation operation : %s",phrase);
		 break;

	case 'f':
		find_str(phrase);
		break;

	default:
		printf("the operation is not valid");
	}
}

void delete_str(char phrase[])
{
	char d[MAX_LEN];
	int index,n;
	printf("\n enter the string you want to delete ");
	scanf("%s", d);
	n = strlen(d);
	if (index = get_index(d,phrase))
		if(strlen(phrase) == index+n)
			phrase[index]= '\0';
		else
			strcpy(&phrase[index], &phrase[index+n]);
	else
		printf("\n nothing found to be deleted");
}


void insert_str(char phrase[]){
	char i[MAX_LEN], rest_str[MAX_LEN];
	int index,n;
	printf("\n enter the string you want to insert ");
	scanf("%s", i);
	printf("\n enter the index to insert at :");
	scanf("%s", &index);
	n= strlen(i);
	strcpy(rest_str, &phrase[index]);
	strcpy(&phrase[index], i);
	strcpy(&phrase[index+n], rest_str);
}


void find_str(char phrase[]){
	char i[MAX_LEN];
	printf("\n enter the string to find : ");
	scanf("%s", i);
	if(get_index(i,phrase))
		printf("string at index %d\n", get_index(i,phrase));
	else
		printf("\n not found !!\n");
}

int get_index(char d[], char phrase[]){
	int index;
	char *found = strstr(phrase, d);
	if (found != NULL){
		index = found -phrase;
		return index;
	}
	else
		return 0;
}
