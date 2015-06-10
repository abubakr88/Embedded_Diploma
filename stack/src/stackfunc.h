/*
 * stackfunc.h
 *
 *  Created on: May 6, 2015
 *      Author: abubakr
 */

#ifndef STACKFUNC_H_
#define STACKFUNC_H_
#define MAXSTACK 100

typedef struct stack{
	int top,x;
	StackEntry entry [MAXSTACK];
}Stack;

void Push (StackEntry , Stack );
void Pop (StackEntry, Stack );
int StackEmpty (Stack );
int Stackfull (Stack );
void CreateStack (Stack );
void StackTop (StackEntry , Stack );
#endif /* STACKFUNC_H_ */
