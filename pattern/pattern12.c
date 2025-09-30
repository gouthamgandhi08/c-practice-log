#include<stdio.h>
int main()
{
    int i,j,n,s,r,val;
    printf("Enter a number:");
    scanf("%d",&n);
    r=n-1;
    for(i=0;i<n;i++)
    {
        for(j=-r;j<=n;j++)
        {
            if(j<=0)
            val=n;
            else
            val=n+1;
            if((j>-r+i)&&(j<n-i))
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
