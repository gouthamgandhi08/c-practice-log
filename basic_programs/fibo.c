#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n==0)
    {
        printf("%d ",a);
    }
    else{
    printf("%d %d ",a,b);
    while (c<=n)
    {
        c=a+b;
        if (c<=n)
        {
            printf("%d ",c);
        }
        a=b;
        b=c;
    }
    
    }
    
}