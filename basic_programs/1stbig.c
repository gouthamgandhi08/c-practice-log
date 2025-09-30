#include<stdio.h>
int main()
{
    int a[]={1,29,3,20,4};
    int i,j,n=sizeof a/sizeof a[0];
    int big1=a[0];
    for(i=1;i<n;i++)
    {
        if(big1<a[i])
        big1=a[i];
    }
    printf("big1 = %d ",big1);
}