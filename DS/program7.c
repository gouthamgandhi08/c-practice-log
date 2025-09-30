/*
    8)	Write a Singly linked list program to delete a perticular node from last and also find the count  of no.of nodes using only single traverse.
	Ex:  Suppose  if there are  7 nodes, and if 2nd node has to be delete from last, then it is  6th 
	        node from starting.
	        Before delete  : A --- B --- C --- D --- E --- F --- G
	        After delete    : A ---  B --- C --- D --- E --- G
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
void delete(ST**);
int nodecount(ST*);
int main()
{
    ST *hptr=0;
   char op;
   int d;
    do 
    {
        int num;
        add_end(&hptr);
        printf("do u want to continue the operation (y->yes or n->no):");
        scanf(" %c",&op);
       
    }while(op=='y');
    print(hptr);
    delete(&hptr);
    print(hptr);
}
void add_end(struct st** ptr)
{
     struct st *temp=(struct st*)malloc(sizeof(struct st));
     struct st *last; 
    printf("enter the roll:");
    scanf("%d",&temp->roll);
    printf("Enter name:");
    scanf(" %s",temp->name);
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
        printf("%d %s\n",hptr->roll,hptr->name);
        hptr=hptr->next;
    }   
    printf("\n"); 
}
void delete(ST **hptr)
{
    int k,i=0;
    printf("enter node no to delete:");
    scanf("%d",&k);
    ST **p=(ST **)malloc(sizeof(ST*));
    ST *ptr;
    ptr=*hptr;
    while(ptr!=0)
    {
        p[i++]=ptr;
        ptr=ptr->next;
    }
    if(k<=i)
    {
        if((i-k)==0)
        {
            *hptr=p[i-k]->next;
            free(p[i-k]);
        }
        else
        {
            p[i-k-1]->next=p[i-k]->next;
            free(p[i-k]);
        }
    }
    else
      printf("node no out of range\n");
    
}
