/*
1)	Write a Singly linked list programs for 
            i) insert the nodes at begin.      ii) insert the nodes at end.
*/
#include<stdio.h>
#include<stdlib.h>

struct st
{
   int roll;
   struct st *next;
};
void add_begin(struct st**);
void add_end(struct st**);
void print(struct st*);
int main()
{
    struct st  *hptr=0;
    char ch,op;
    do
    {
        printf("1->addbegin\n2->add_end\n3->display\n4->exit\n");
        scanf(" %c",&ch);
        switch(ch)
        {
            case '1':
                add_begin(&hptr);
                break;
            case '2':
                 add_end(&hptr);
                 break;
            case '3':
                 print(hptr);
                 break;
            case '4':
                 return 0;
            default:
                 printf("wrong option\n");
                 break;
        }
        printf("do u want to continue the operation (y->yes or n->no):");
        scanf(" %c",&op);
    } while (op=='y');
    
}
void add_begin(struct st** ptr)
{
    struct st *temp=(struct st*)malloc(sizeof(struct st));
    printf("enter the roll:");
    scanf("%d",&temp->roll);
    temp->next=*ptr;
    *ptr=temp;
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
    if(hptr == 0)
      printf("empty");
    while(hptr!=0)
    {
        printf("%d ",hptr->roll);
        hptr=hptr->next;
    }   
    printf("\n"); 
}