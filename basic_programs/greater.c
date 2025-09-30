#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    printf("enter the value of c: ");
    scanf("%d",&c);
    if(( a==b)&&(a==c))
    {
        printf("A ,B, C are same");
    }
    
    else if ( b==c )
    {
        if(b>a)
        {
          printf("C and B are same and both are bigger than A");
        }
        else{
         printf("A is greater");
        }
    }
    else if ( a==b)
    {
       if(a>c)
       {
         printf("A and B are same and both are bigger than c");
       }
       else{
        printf("c is greater");
       }
    }
    else if ( a==c)
    {
       if(a>b)
       {
         printf("A and C are same and both are bigger than b");
       }
       else{
        printf("b is greater");
       }
    }
    else 
    {
        if((a<c) && (b<c))
        {
            printf("c is greater");
        }
        else if ((a<b)&&(c<b))
        {
            printf("b is greater");
        }
        else
        {
            printf("a is greater");
        }
    }
    
}