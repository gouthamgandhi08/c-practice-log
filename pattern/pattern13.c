#include<stdio.h>
int main()
{
    int i,j,s,n,val;
    printf("Enter a number:");
    scanf("%d",&n);
    val=n;
    for(i=0;i<n;i++)
    {
        for(j=-(n-1);j<n;j++)
        {
            if((j>(-(n-1)+i))&&(j<(n-1)-i))
            printf("  ");
            else
            {
                if(j<0)
                printf("%d ",val+j);
                else 
                printf("%d ",val-j);
            }
        }
        printf("\n");
    }
}