/*
   9)	Write a program to delete the duplicate nodes from unsorted Singly linked list.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 
typedef struct st
{
    int roll;
    struct st* next;
}ST;

void add_end(ST **);
void duplicate(ST *);
void print(ST *);
int main()
{
    ST *hptr=0;
    char op;
    do 
    {
        int num;
        add_end(&hptr);
        printf("do u want to continue the operation (y->yes or n->no):");
        scanf(" %c",&op);
       
    }while(op=='y');
    print(hptr);
    printf("after removing duplicate\n");
    duplicate(hptr);
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
void print(ST *hptr)
{
   while(hptr!=0)
   {
     printf("%d\n",hptr->roll);
     hptr=hptr->next;
   }
}
void duplicate(ST *hptr)
{
    ST *prev,*cur,*past;
    prev=hptr;
    cur=prev->next;
   while(prev!=0)
   {
     cur=prev->next;
     past=prev;
     while((cur!=0)&&(past!=0))
     {
       if(prev->roll == cur->roll)
        {
           
                past->next=cur->next;
                free(cur);
                cur=past->next; 
        }
        else 
        {
        past=past->next;
        cur=past->next; 
        }
    }
     prev=prev->next;
    }
}
