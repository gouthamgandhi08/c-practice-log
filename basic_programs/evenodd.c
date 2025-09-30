#include<stdio.h>
#include<math.h>
int main()
{
    int a[]={2,3,5,7,8,9,11},i,j,n,c,count=0;
    n= sizeof(a)/sizeof(a[0]);
    for(i=0,c=0;i<n;i++){
        int num=a[i];
        for(int j=2;j<=sqrt(num);j++)
        {
            if(num%j ==0){
                c=1;
            break;
            }
        }
        if(c == 0 && a[i] !=0 && a[i]!=1){
            count++;
            printf("%d ",a[i]);
        }
        c=0;
    }
    printf("count = %d",count);
}
