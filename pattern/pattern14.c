#include<stdio.h>
int main()
{
    int i,j,s,n;
    char val='A';
    printf("Enter a number:");
    scanf("%d",&n);
    val+=(n-1);
    for(i=0;i<n;i++)
    {
        for(j=-(n-1);j<n;j++)
        {
            if((j>-i)&&(j<i))
            printf("  ");
            else
            {
                if(j<0)
                printf("%c ",val+j);
                else 
                printf("%c ",val-j);
            }
        }
        printf("\n");
    }
}