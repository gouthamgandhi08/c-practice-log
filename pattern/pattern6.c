#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        printf("%d ",(j+1)%2);
        printf("\n");
    }
}