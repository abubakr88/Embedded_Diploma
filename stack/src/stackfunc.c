/*
 * stackfunc.c
 *
 *  Created on: May 6, 2015
 *      Author: abubakr
 */

#include <stackfunc.h>

void Push (StackEntry e, Stack *ps){
		ps -> entry[ps ->top] = e;
		ps ->top++;
	}

void Pop (StackEntry *pe, Stack *ps){
	ps ->top--;
	*pe = ps -> entry[ps ->top];
}


int StackEmpty (Stack *ps){
	if (ps ->top == 0)
		return 1;
	else
		return 0;
}

int Stackfull (Stack *ps){
	if (ps ->top == MAXSTACK)
		return 1;
	else
		return 0;
}

void CreateStack (Stack *ps){
	ps ->top=0;  // we say it ps access top equal zero
}

void StackTop (StackEntry *pe, Stack *ps){
	*pe = ps -> entry[ps ->top-1];
}

int StackSize (Stack *ps){
	return ps ->top;
}

void TraverseStack(Stack *ps, void(*ps)(StackEntry)){
	for (int i=ps->entry[i-1]; i>0; i--)
		(*ps)(ps->entry[i-1]);
}
