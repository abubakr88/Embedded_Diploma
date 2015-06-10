/*
 ============================================================================
 Name        : Queue_using_array.c
 Author      : abubakr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define QUEUE_SIZE 5
typedef enum{FULL,EMPTY,OK}StackStatus;
StackStatus QueueInsert(int *stack,int data,int *rp);
StackStatus QueueDelete(int *stack,int *data,int *rp,int *fp);
void QueueDisplay(const int *stack,int rp,int fp);
int main()
{

    static int x[QUEUE_SIZE];
    static int RP= -1,FP=-1;
    int data;
    StackStatus status;
    char option;
    char exitFalg = 0;

    while(exitFalg == 0)
    {
    do
    {
     printf("\nPlease Select \n 1: Insert \n 2: Delete \n 3: Exit\n");
     scanf("%d",&option);
    }while(!(option>=1 && option<= 3));

    switch (option)
    {
        case 1:
        printf("\n Please Enter data\n");
        scanf("%d",&data);
        status = QueueInsert(x,data,&RP);
        if(status == OK)
        {
            QueueDisplay(x,RP,FP);
        }
        else
        {
            printf("Queue is full");
        }
        break;
        case 2:
        status = QueueDelete(x,&data,&RP,&FP);
        if(status == OK)
        {
            printf("Data = %d",data);
        }
        else
        {
            printf("Queue is Empty");
        }
        break;
        case 3:
        exitFalg =1;
        break;

    }
    }

return 0;

}
StackStatus QueueInsert(int *stack,int data,int *rp)
{
    StackStatus ret;
    if(*rp == QUEUE_SIZE-1)
    {
        ret = FULL;
    }
    else
    {
        stack[++(*rp)] = data;
        ret = OK;
    }
    return ret;

}

StackStatus QueueDelete(int *stack,int *data,int *rp,int *fp)
{
   StackStatus ret;
   if(*rp == *fp)
   {
       ret = EMPTY;
   }
   else
{
    *data = stack[++(*fp)];
    ret = OK;
}
return ret;
}
void QueueDisplay(const int *stack,int rp,int fp)
{
    int i;
    for(i = fp+1; i<rp+1 ; i++)
    {
        printf("%d", stack[i]);
    }
}
