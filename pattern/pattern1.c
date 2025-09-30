#include<stdio.h>
int main()
{
    int i,j,s,l,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=-(n-1);i<n;i++)
    {
        if(i<0)
        l=-i;
        else
        l=i;
        for(s=0;s<l;s++)
        printf(" ");
        for(j=0;j<(n-l);j++)
        printf("* ");
        printf("\n");
    }
}