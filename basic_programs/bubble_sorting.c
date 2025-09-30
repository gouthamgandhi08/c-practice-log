#include<stdio.h>
int main()
{
    int a[]={1,4,7,2,9};
    int i,j,size=sizeof a/sizeof a[0];
    for(i=0;i<size-1;i++)
    {
      for(j=0;j<size-i-1;j++)
      {
        if (a[j]<a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
      }
    }
    for(int i=0;i<size;i++){
          printf("%d ",a[i]);
    }
}