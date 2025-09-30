#include<stdio.h>
int main()
{
    int i,j,n,l;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=-(n-1);i<n;i++)
    {
        if(i<0)
        l=-i;
        else
        l=i;
        for(j=0;j<2*(n-l)-1;j++)
        {
            if(j%2==1)
            printf("*");
            else
            printf("%d",n-l);
        }
        printf("\n");
    }
}