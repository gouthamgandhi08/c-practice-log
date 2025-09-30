#include<stdio.h>
int main()
{
    int n;
    printf("no of array element:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
    printf("a[%d] =",i);
    scanf("%d",&a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    printf("a[%d] = %d ",i,i[a]);
    printf("\nto print reverse of array");
    for(int i=n-1;i>=0;i--)
    printf("a[%d] = %d ",i,i[a]);
}