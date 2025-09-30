/*
10)	Write a  program to reverse the data of given Singly linked list.
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
void reverse_data(ST*);
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
    reverse_data(hptr);
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
void reverse_data(ST *hptr)
{
    int size=sizeof(ST)-8,c=nodecount(hptr);
    ST **p=(ST **)malloc(sizeof(ST*));
    for(int i=0;i<c;i++)
    {
        p[i]=hptr;
        hptr=hptr->next;
    }
    ST temp;
    for(int i=0,j=c-1;i<=j;i++,j--)
    {
    memcpy(&temp,p[i],size);
    memcpy(p[i],p[j],size);
    memcpy(p[j],&temp,size);
    }
}