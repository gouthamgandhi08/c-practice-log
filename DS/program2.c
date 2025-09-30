/*
 2)	Write a Singly linked list program to sort the nodes. (add_middle prog).
*/
#include<stdio.h>
#include<stdlib.h>
 
typedef struct st
{
    int roll;
    char name[50];
    struct st* next;
}ST;

void add_middle(ST **,int);
void print(ST *);
int main()
{
    ST *hptr=0;
    char op;
    do 
    {
        int num;
        printf("enter the roll:");
        scanf("%d",&num);
        add_middle(&hptr,num);
        printf("do u want to continue the operation (y->yes or n->no):");
        scanf(" %c",&op);
       
    }while(op=='y');
    print(hptr);
}
void add_middle(ST **ptr,int roll)
{
    ST *temp=(ST*)malloc(sizeof(ST));
    printf("enter name:");
    scanf(" %s",temp->name);
    temp->roll=roll;
    if((*ptr==0)||((*ptr)->roll>=temp->roll))
    {
       temp->next= *ptr;
       *ptr=temp;
    }
    else
    {
        ST *last;
        last = *ptr;
        while((last->next!=0)&&(last->next->roll<temp->roll))
        {
            last=last->next;
        }
        temp->next=last->next;
        last->next=temp;
    }
}
void print(ST *hptr)
{
   while(hptr!=0)
   {
     printf("%d %s\n",hptr->roll,hptr->name);
     hptr=hptr->next;
   }
}