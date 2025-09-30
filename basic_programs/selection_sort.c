#include<stdio.h>
int main()
{
    int a[]={12,2,55,20,1};
    int i,j,n=sizeof a/sizeof a[0];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}