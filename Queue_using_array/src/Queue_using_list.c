/*
 ============================================================================
 Name        : Queue_using_list.c
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

StackStatus QueueInsert(int data,ListPtrType *rp,ListPtrType *fp);
StackStatus QueueDelete(int *data,ListPtrType *rp,ListPtrType *fp);
void QueueDisplay(ListPtrType rp,ListPtrType fp);
int main()
{
ListPtrType  RearPrt=NULL, FrontPtr = NULL;

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
        status = QueueInsert(data,&RearPrt,&FrontPtr);
        if(status == OK)
        {
            QueueDisplay(RearPrt,FrontPtr);
        }
        else
        {
            printf("Queue is full");
        }
        break;
        case 2:
        status = QueueDelete(&data,&RearPrt,&FrontPtr);
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
StackStatus QueueInsert(int data,ListPtrType *rp,ListPtrType *fp)
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
        NewPtr->Pnext = NULL;
        if(*fp == NULL)
        {
            *fp = NewPtr;
        }
        else
        {
            (*rp)->Pnext = NewPtr;
        }
        *rp = NewPtr;
        ret = OK;
    }
    return ret;

}
StackStatus QueueDelete(int *data,ListPtrType *rp,ListPtrType *fp)
{
        StackStatus ret;
    ListPtrType TempPtr;
    if(*rp == *fp)
    {
        ret = EMPTY;
    }
    else
    {

        TempPtr = *fp;
        *data = (*fp)->data;
        *fp = (*fp)->Pnext;
        if(*fp == NULL)
        *rp = NULL;
        free(TempPtr);
        ret = OK;
    }
    return ret;

}
void QueueDisplay(ListPtrType rp,ListPtrType fp)
{
    ListPtrType p;
        for(p = fp;; p= p->Pnext)
    {
        printf("%d \n",p->data);
        if(p->Pnext == 0)
        break;
    }


}
