#include<stdio.h>
int main()
{
    int a[10]={1,2,1,4,2,6,3,6,0,0},n,c=0;
    printf("Enter a number to find how many times it present:");
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
        if(n==a[i]){
        c++;
        }
    }
    printf("%d present %d times",n,c);
    
}