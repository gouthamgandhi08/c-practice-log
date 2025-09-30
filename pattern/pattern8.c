#include<stdio.h>
int main()
{
    int i,j,n,val,diff;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        val=i+1;
        for(j=0,diff=4;j<=i;j++,diff--){
            printf("%d ",val);
            val=val+diff;
        }
        printf("\n");
    }
}