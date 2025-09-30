/*
6)	Write a Singly linked list program to delete a perticular according to any signature of a given structure.
For example:

If user enters roll = 5, delete the node where roll == 5.

Or if user enters name = "ABC", delete the node where name == "ABC"
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
    int c;
    printf("do you want to delete based on \n1->roll no\n2->name\n");
    scanf("%d",&c);
    if(c==1)
    {
        int roll;
        printf("enter a roll no:");
        scanf("%d",&roll);
        ST *ptr,*prev;
        ptr=*hptr;
        if((*hptr!=0)&&((*hptr)->roll == roll))
        {
            *hptr=(*hptr)->next;
             ptr->next=0;
             free(ptr);
        }
        else
        {
            while((ptr->next!=0)&&(ptr->next->roll!=roll))
            {
                ptr=ptr->next;
            }
            if((ptr->next!=0)&&(ptr->next->roll==roll))
            {
                prev=ptr->next;
                ptr->next=ptr->next->next;
                free(prev);
            }
            
        }
    }
    else if(c==2)
    {
        char name[50];
        printf("enter a name:");
        scanf("%s",name);
        ST *ptr,*prev;
        ptr=*hptr;
        if((*hptr!=0)&&(!(strcmp((*hptr)->name,name))))
        {
            *hptr=(*hptr)->next;
             ptr->next=0;
             free(ptr);
        }
        else
        {
            while((ptr->next!=0)&&(strcmp(ptr->next->name,name)))
            {
                ptr=ptr->next;
            }
            if((ptr->next!=0)&&!(strcmp(ptr->next->name,name)))
            {
                 prev=ptr->next;
                ptr->next=ptr->next->next;
                free(prev);
            }
            
        }
    }
    else 
       printf("wrong option\n");
}