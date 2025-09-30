/*
19)	Write a program to delete a particular node in a given Binary-tree according to any signature of a given structure.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct BST
{
    int roll;
    struct BST *left;
    struct BST *right;
}TREE;
void add_node(TREE **,int);
void pre_order(TREE*);
TREE *search(TREE*,int);
void delete(TREE **ptr,int n);
int main()
{
    TREE *hptr=0;
    int roll;
    char c;
    while(1)
    {
        printf("1->add node\n2->display\n3->exit\n4->search\n5->delete\noption:");
        scanf(" %c",&c);
        switch(c)
        {
            case '1':
                    printf("enter roll no:");
                    scanf("%d",&roll);
                    add_node(&hptr,roll);
                    break;
            case '2':
                    printf("preorder:\n");
                    pre_order(hptr);
                    printf("\n");
                    break;
            case '3':
                    return 0;
            case '4':
                    
                    printf("Enter the roll to search\n");
                    scanf("%d",&roll);

                    TREE *ptr = search(hptr,roll);
                    if(ptr == NULL)
                    printf("The data doesn't exist to delete\n");
                    else
                    printf("The data is exist at addr : %p\n",ptr);
                    break;
            case '5':
                printf("Enter the roll to delete\n");
                scanf("%d",&roll);

                delete(&hptr,roll);

                printf("\npre_order...\n");
                pre_order(hptr);
                break;
            default:
                    printf("wrong option\n");
                    break;
        }
    }
}
void add_node(TREE **hptr,int roll)
{
    if(*hptr==0)
    {
      *hptr=(TREE*)malloc(sizeof(TREE));
      (*hptr)->roll=roll;
      (*hptr)->left=0;
      (*hptr)->right=0;
    }
    else if((*hptr)->roll>roll)
      add_node(&(*hptr)->left,roll);
    else
       add_node(&(*hptr)->right,roll);
}
void pre_order(TREE* ptr)
{
    if(ptr!=0)
    {
        printf("%d ",ptr->roll);
        pre_order(ptr->left);
        pre_order(ptr->right);
    }
}
TREE *parent;
TREE *search(TREE *ptr,int n)
{
        if(ptr == NULL)
        return NULL;
        else if(n == ptr->roll)
        return ptr;
        else if(n < ptr->roll) {
        parent = ptr;
        return search(ptr->left,n);
        }
        else {
        parent = ptr;
        return search(ptr->right,n);
        }
}
void delete(TREE **ptr,int n) 
{
        TREE *p,*q;
        q = search(*ptr,n);
        if(q == NULL)
        {
                printf("The data doesn't exist to delete\n");
                return;
        }
        p = parent;

        if((q->left != 0)&&(q->right != 0))
        {
                TREE *r = q->left;
                while(r->right != 0)
                {
                        p = r;
                        r = r->right;
                }
                q->roll = r->roll;
                q=r;
        }
        if((q->left == 0)&&(q->right == 0))
        {
                if(q == p->left)
                p->left = 0;
                else
                p->right = 0;

                free(q); q = NULL; return;
        }
        if((q->left != 0)&&(q->right == 0))
        {
                if(q == p->left)
                p->left = q->left;
                else
                p->right = q->left;

                free(q); q = NULL; return;

        }
        if((q->left == 0)&&(q->right != 0))
        {
                if(q == p->left)
                p->left = q->right;
                else
                p->right = q->right;

                free(q); q = NULL; return;
        }
}