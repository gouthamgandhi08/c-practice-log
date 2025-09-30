/*
8)	Write a program to delete the duplicate nodes from sorted Singly linked list.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 
typedef struct st
{
    int roll;
    struct st* next;
}ST;

void add_middle(ST **,int);
void duplicate(ST **);
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
    printf("after removing duplicate\n");
    duplicate(&hptr);
    print(hptr);
}
void add_middle(ST **ptr,int roll)
{
    ST *temp=(ST*)malloc(sizeof(ST));
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
     printf("%d\n",hptr->roll);
     hptr=hptr->next;
   }
}
void duplicate(ST **hptr)
{
    ST *prev,*cur;
    prev=*hptr;
    cur=prev->next;
   while((prev!=0)&&(cur!=0))
   {
     while(prev->roll == cur->roll)
       {
         prev->next=cur->next;
         free(cur);
         cur=prev->next;
       }
       prev=prev->next;
       cur=prev->next;
    }
}
