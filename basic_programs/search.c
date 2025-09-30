#include<stdio.h>
int main()
{
    int a[10],n,c=0;
    for(int i=0;i<10;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter a number to search:");
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
        if(n==a[i]){
        c=1;
        break;
        }
    }
    if (c==1)
    printf("present");
    else
    printf("not present");
    
}