/*
17)	Write a program to construct Binary-tree by the given nodes and print it in the order
             i) pre-order          ii) in-order     iii)post-order
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
void in_order(TREE*);
void post_order(TREE*);

int main()
{
    TREE *hptr=0;
    int roll;
    char c;
    while(1)
    {
        printf("1->add node\n2->display\n3->exit\noption:");
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
                    printf("\ninorder:\n");
                    in_order(hptr);
                    printf("\npostorder:\n");
                    post_order(hptr);
                    printf("\n");
                    break;
            case '3':
                    return 0;
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
void in_order(TREE* ptr)
{
    if(ptr!=0)
    {
        in_order(ptr->left);
        printf("%d ",ptr->roll);
        in_order(ptr->right);
    }
}
void post_order(TREE* ptr)
{
    if(ptr!=0)
    {
        post_order(ptr->left);
        post_order(ptr->right);
        printf("%d ",ptr->roll);
    }
}