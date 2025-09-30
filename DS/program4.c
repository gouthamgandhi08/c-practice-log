/*
4)	Write a prorgram to swap 'k'th node from begining and 'k' node from end in a Singly linked list. 
For Ex: if nodes are
             A --- B --- C --- D --- E --- F --- G --- H --- I
             if k = 2 , then o/p should be 
             A --- H --- C --- D --- E --- F --- G --- B --- I 
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
void swap(ST*,int);
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
    printf("enter the node to swap:");
    scanf("%d",&k);
    c=nodecount(hptr);
    if(k<=(c/2))
       swap(hptr,k);
    else
     printf("can't perform swap\n");
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
void swap(ST *hptr,int k)
{
    int size=sizeof(ST)-8,c=nodecount(hptr);
    ST **p=(ST **)malloc(sizeof(ST*));
    for(int i=0;i<c;i++)
    {
        p[i]=hptr;
        hptr=hptr->next;
    }
    ST temp;
    memcpy(&temp,p[k-1],size);
    memcpy(p[k-1],p[c-k],size);
    memcpy(p[c-k],&temp,size);
}