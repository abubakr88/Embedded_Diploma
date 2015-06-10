/*
 ============================================================================
 Name        : stack.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stackfunc.h>

int main(void) {
Stack s;
StackEntry e;

CreateStack(&s); //for intializing the stack

if (!StackFull(&s))
    Push (e, &s);

if (!StackEmpty(&s))
	Pop (&e, &s);

if (!StackEmpty(&s))
	StackTop (&e, &s);

x = StackSize (&s);

ClearStack (&s);

return 0;

}

void Desplay(StackEntry e){
	printf("e is: %d\n", e);
}


//void StackSize (Stack *ps){
//	ps ->top = 0;
//}
//
