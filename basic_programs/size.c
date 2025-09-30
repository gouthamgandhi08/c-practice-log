#include<stdio.h>
int main()
{
    int a[10]={1,2,1,4,2,6,3,6,0,0},i,j,n,temp;
    n= sizeof(a)/sizeof(a[0]);
    printf("before reversing an array\n");
    for(int i=0;i<n;i++)
    {
        printf("a[%d]=%d ",i,a[i]);
    }
    for(i=0,j=n-1;i<j;i++,j--)
    {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
    }
    printf("\nbefore reversing an array\n");
    for(int i=0;i<n;i++)
    {
        printf("a[%d]=%d ",i,a[i]);
    }
}
    