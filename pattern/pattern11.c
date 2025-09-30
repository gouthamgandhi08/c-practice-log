#include<stdio.h>
int main()
{
    int i,j,n,val,diff;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        val=i;
        for(j=0;j<i;j++,val+=i){
            printf("%d ",val);
        }
        printf("\n");
    }
}