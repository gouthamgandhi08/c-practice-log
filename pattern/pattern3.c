#include<stdio.h>
int main()
{
    int i,j,l,s,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=-(n-1);i<n;i++)
    {
        if(i<0)
        l=-i;
        else
        l=i;
        for(s=0;s<n-1-l;s++)
        printf(" ");
        for(j=0;j<n-s;j++)
        printf("* ");
        printf("\n");
    }
}