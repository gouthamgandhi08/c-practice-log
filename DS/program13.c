/*
   14)	Write a program to reverse all links of given Singly linked list 
	i) using loops       ii) using recursion.

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct st
{
    int roll;
    char name[50];
    struct st* next;
}ST;

void add_end(ST**);
void print(ST*);
void reverse_link01(ST**);
void reverse_link02(ST**,ST*,ST*,ST*);
int nodecount(ST*);
int main()
{
    ST *hptr=0;
   char op;
   int k,c;
    do 
    {
        int num;
        add_end(&hptr);
        printf("do u want to continue the operation (y->yes or n->no):");
        scanf(" %c",&op);
       
    }while(op=='y');
    print(hptr);
    reverse_link01(&hptr);
    print(hptr);
    reverse_link02(&hptr,NULL,NULL,hptr);
    print(hptr);
}
void add_end(struct st** ptr)
{
     struct st *temp=(struct st*)malloc(sizeof(struct st));
     struct st *last; 
    printf("enter the roll:");
    scanf("%d",&temp->roll);
    if(*ptr == 0)
    {
        temp->next=*ptr;
        *ptr=temp;
    }
    else
    {
        last=*ptr;
        while(last->next !=0)
           last=last->next;
        temp->next=last->next;
        last->next=temp;
    }
}
void print(struct st* hptr)
{
    while(hptr!=0)
    {
        printf("%d ",hptr->roll);
        hptr=hptr->next;
    }   
    printf("\n"); 
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
void reverse_link01(ST **hptr)//loop
{
    ST *prev=NULL,*next=NULL,*curr=*hptr;
    while(curr!=0)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;

    }
    *hptr=prev;
}
void reverse_link02(ST **hptr1,ST *prev1,ST *next1,ST *curr1)//recursion
{
    if(curr1==0)
    {
        *hptr1=prev1;
        return;
    }
        next1=curr1->next;
        curr1->next=prev1;
        prev1=curr1;
        curr1=next1;
        reverse_link02(hptr1,prev1,next1,curr1);
}