/*
16)Write a Singly linked list program to implement Queue operations.

*/
#include<stdio.h>
#include<stdlib.h>

#define MAX 8

typedef struct st
{
    int roll;
    struct st *next;
}ST;

void enqueue(ST**);
void dequeue(ST**);
void display(ST*);
int nodecount(ST*);

int main()
{
      ST *top=0;
      char op;
    while(1)
      {
        printf("1->enqueue\n2->dequeue\n3->display\n4->exit\n");
        scanf(" %c",&op);
        switch(op)
        {
            case '1':
                    enqueue(&top);
                    break;
            case '2':
                    dequeue(&top);
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
void enqueue(ST** top)
{
    if(nodecount(*top)==MAX)
    {
            printf("queue is full\n");
            return ;
    }
    ST *temp=(ST*)malloc(sizeof(ST));
    printf("enter the roll:");
    scanf("%d",&temp->roll);
    if(*top==0)
    {
        temp->next=*top;
        *top=temp;
    }
    else
    {
        ST *last;
        last=*top;
        while(last->next!=0)
           last=last->next;
        temp->next=last->next;
        last->next=temp;
    }
}
void dequeue(ST** top)
{
    if(nodecount(*top)==0)
    {
            printf("queue is empty\n");
            return;
    }
        ST *temp;
        temp=*top;
        *top=temp->next;
        printf("%d is dequeued\n",temp->roll);
        free(temp);
}
void display(ST*  top)
{
    if(top==0)
    {
        printf("queue is empty\n");
        return;
    }
   while(top!=0)
   {
    printf("%d ",top->roll);
    top=top->next;
   }
   printf("\n");
}