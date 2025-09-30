/*
 20) Wrtie a program to delete a node in a Circular Linked List.
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
    int roll;
    struct st* next;
}ST;

void add(ST**);
void delete(ST**);
void display(ST*);

int main()
{     
     ST* hptr=0;
    char op;
    while(1)
    {
        printf("1->add\n2->delete\n3->display\n4->exit\nenter option:");
        scanf(" %c",&op);
         switch(op)
        {
            case '1':
                    add(&hptr);
                    break;
            case '2':
                    delete(&hptr);
                    break;
            case '3':
                    display(hptr);
                    break;
            case '4':
                    return 0;
            default:
                  printf("wrong option\n");
                  break;
        }
    }
}
void add(ST** ptr)
{
   ST* temp=(ST*)malloc(sizeof(ST));
   printf("Enter roll no:");
   scanf("%d",&temp->roll);
   if(*ptr==0)
   {
      *ptr=temp;
      temp->next=*ptr;
   }
   else
   {
    ST *last;
    last=*ptr;
      while(last->next!=*ptr)
         last=last->next;
    temp->next=last->next;
    last->next=temp;
   }
}
void delete(ST** ptr)
{
    int roll;
    printf("enter the roll no to delete:");
    scanf("%d",&roll);
    ST *temp,*last;
    if((*ptr!=0)&&((*ptr)->roll == roll))
    {
        last=*ptr;
        while((last->next!=*ptr))
            last=last->next;
        temp=*ptr;
        *ptr=temp->next;
        last->next=*ptr;
        free(temp);
    }
    else
    {
        temp=*ptr;
        while((temp->next!=*ptr)&&(temp->next->roll!=roll))
             temp=temp->next;
        last=temp->next;
        temp->next=last->next;
        free(last);
    }

}
void display(ST* ptr)
{
    ST* check;
    check=ptr;
    if(ptr!=0)
    {
        printf("%d ",ptr->roll);
        ptr=ptr->next;
        while(ptr!=check)
        {
            printf("%d ",ptr->roll);
            ptr=ptr->next;
        }
        printf("\n");

    }
}