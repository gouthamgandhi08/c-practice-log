/*
15)	Write a Singly linked list program to implement Stack operations.
*/
#include<stdio.h>
#include<stdlib.h>

#define MAX 8

typedef struct st
{
    int roll;
    struct st *next;
}ST;

void push(ST**);
void pop(ST**);
void display(ST*);
int nodecount(ST*);

int main()
{
      ST *top=0;
      char op;
    while(1)
      {
        printf("1->push\n2->pop\n3->display\n4->exit\n");
        scanf(" %c",&op);
        switch(op)
        {
            case '1':
                    push(&top);
                    break;
            case '2':
                    pop(&top);
                    break;
            case '3':
                    display(top);
                    break;
            case '4':
                    return 0;
        }
      }
}
int nodecount(ST *hptr)
{
    int c=0;
    while(hptr!=0)
    {
        c++;
        hptr=hptr->next;
    }
    return c;
}
void push(ST** top)
{
    if(nodecount(*top)==MAX)
    {
            printf("Stack is overflow\n");
            return ;
    }
    ST *temp=(ST*)malloc(sizeof(ST));
    printf("enter the roll:");
    scanf("%d",&temp->roll);
    temp->next=*top;
    *top=temp;
}
void pop(ST** top)
{
    if(nodecount(*top)==0)
    {
            printf("Stack is underflow\n");
            return;
    }
        ST *temp;
        temp=*top;
        *top=temp->next;
        printf("%d is poped\n",temp->roll);
        free(temp);
}
void display(ST*  top)
{
    if(top==0)
    {
        printf("stack is empty\n");
        return;
    }
   while(top!=0)
   {
    printf("%d ",top->roll);
    top=top->next;
   }
   printf("\n");
}