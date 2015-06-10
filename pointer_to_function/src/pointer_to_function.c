/*
 ============================================================================
 Name        : pointer_to_function.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>

int add(int, int);
int sub(int, int);
int mult(int, int);
int apply(int(*p)(int, int), int, int);

int main(void)
{
	int(*fun_ptr_arry[])(int, int) = { &add, &sub, &mult };
	char ops[] = { '+', '-', '*' };


	int i, j, k;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			for (k = 0; k < sizeof(fun_ptr_arry) / sizeof(fun_ptr_arry[0]); k++)
			{
				printf("The result of %d %c %d is: %d\n", i, ops[k], j, apply(fun_ptr_arry[k], i, j));
			}
			printf("---------------\n");
		}
	}

	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mult(int a, int b)
{
	return a * b;
}

int apply(int(*p)(int, int), int a, int b)
{
	return (*p)(a, b);
}
