#include<stdio.h>
int main()
{
    int a[5]={10};
    int i,j,n=sizeof a/sizeof a[0];
    int big1,big2;
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        break;
    }
    if(i!=n-1){
    if(a[i]>a[i+1]){
        big1=a[i];
        big2=a[i+1];
    }
    else{
        big1=a[i+1];
        big2=a[i];
    }

    for(i=i+2;i<n;i++)
    {
        if(big1<a[i]){
            big2=big1;
            big1=a[i];
        }
        else if((big2<a[i])&&(big1 !=a[i]))
        big2=a[i];
    }
    printf("big1 = %d\n",big1);
    printf("big2 = %d\n",big2);
    }
    else 
    printf("all the value are same\n");
}