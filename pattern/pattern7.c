#include<stdio.h>
int main()
{
    int i,j,n,val;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        val=1;
        else
        val=2;
        for(j=0;j<=i;j++,val+=2)
        printf("%d ",val);
        printf("\n");
    }
}