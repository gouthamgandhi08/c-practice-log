/*
14)	Write a Singly linked list program to check the given linked list is palindrome or not.
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
void palindrome(ST*);
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
    palindrome(hptr);
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
void palindrome(ST *hptr)
{
    int c=nodecount(hptr),i,j;
    ST **p=(ST **)malloc(sizeof(ST*));
    for(i=0;i<c;i++)
    {
        p[i]=hptr;
        hptr=hptr->next;
    }
   for(i=0,j=c-1;i<j;i++,j--)
   {
      if(p[i]->roll != p[j]->roll)
         break;
   }
   if(i>=j)
   {
      printf("palindrome\n");
   }
   else
   {
      printf("not a spalindrome\n");
   }
   free(p);
}
