#include<stdio.h>
int main()
{
    int i,j,s,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(s=n-1;s>i;s--)
        printf(" ");
        for(j=0;j<=i;j++)
        printf("* ");
        printf("\n");
    }
}