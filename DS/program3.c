/*
  3)	Write a program to merge two Singly linked list.
*/
#include<stdio.h>
#include<stdlib.h>

struct st
{
   int roll;
   struct st *next;
};
void add_end(struct st**);
void merge(struct st **,struct st **);
void print(struct st*);
int main()
{
    struct st  *hptr1=0;
    struct st *hptr2=0;
    char op;
    do 
    {
        int num;
        add_end(&hptr1);
        printf("do u want to continue the operation (y->yes or n->no):");
        scanf(" %c",&op);
       
    }while(op=='y');
    print(hptr1);
     do 
    {
        int num;
        add_end(&hptr1);
        printf("do u want to continue the operation (y->yes or n->no):");
        scanf(" %c",&op);
       
    }while(op=='y');
    print(hptr2);
    printf("after merging\n");
    merge(&hptr1,&hptr2);
    print(hptr1);
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
void merge(struct st **hptr1,struct st **hptr2)
{
    struct st *last; 
    last=*hptr1;
    while(last->next !=0)
        last=last->next;
    last->next=*hptr2;
    *hptr2=*hptr1;
}