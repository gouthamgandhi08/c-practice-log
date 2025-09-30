#include<stdio.h>
int main()
{
    int i,j,n,s;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(s=n-1;s>i;s--)
        printf("  ");
        for(j=0;j<(2*i)+1;j++)
        printf("%d ",j+1);
        printf("\n");
    }
}