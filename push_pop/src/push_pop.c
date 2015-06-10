/*
 ============================================================================
 Name        : push_pop.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct list
{
    int data;
    struct list *Pnext;
}ListType;
typedef ListType* ListPtrType;
typedef enum{FULL,EMPTY,OK}StackStatus;
StackStatus StackPush(ListPtrType * TopStackPtr,int data);
StackStatus StackPop(ListPtrType * TopStackPtr,int *data);
void StackDisplay(ListPtrType TopStackPtr);
int main()
{
ListPtrType TopStackPtr = NULL;

int data;
    StackStatus status;
    char option;
    char exitFalg = 0;

    while(exitFalg == 0)
    {
    do
    {
     printf("\nPlease Select \n 1: Push \n 2: Pop \n 3:Exit\n");
     scanf("%d",&option);
    }while(!(option>=1 && option<= 3));

    switch (option)
    {
        case 1:
        printf("\n Please Enter data\n");
        scanf("%d",&data);
        status = StackPush(&TopStackPtr,data);
        if(status == OK)
        {
            StackDisplay(TopStackPtr);
        }
        else
        {
            printf("Stack is full");
        }
        break;
        case 2:
        status = StackPop(&TopStackPtr,&data);
        if(status == OK)
        {
            printf("Data = %d",data);
        }
        else
        {
            printf("Stack is Empty");
        }
        break;
        case 3:
        exitFalg =1;
        break;

    }
    }

return 0;
}
StackStatus StackPush(ListPtrType * TopStackPtr,int data)
{
    StackStatus ret;
    ListPtrType NewPtr;
    NewPtr = malloc(sizeof(ListType));
    if(NewPtr == NULL)
    {
        ret = FULL;
    }
    else
    {
        NewPtr->data = data;
        NewPtr->Pnext = *TopStackPtr;
        *TopStackPtr = NewPtr;
        ret = OK;
    }
    return ret;

}
StackStatus StackPop(ListPtrType * TopStackPtr,int *data)
{
        StackStatus ret;
    ListPtrType TempPtr;
    if(*TopStackPtr == NULL)
    {
        ret = EMPTY;
    }
    else
    {
        TempPtr = *TopStackPtr;
        *data = (*TopStackPtr)->data;
        *TopStackPtr = (*TopStackPtr)->Pnext;
        free(TempPtr);
        ret = OK;
    }
    return ret;

}
void StackDisplay(ListPtrType TopStackPtr)
{
    ListPtrType p;
        for(p = TopStackPtr;; p= p->Pnext)
    {
        printf("%d \n",p->data);
        if(p->Pnext == 0)
        break;
    }


}
