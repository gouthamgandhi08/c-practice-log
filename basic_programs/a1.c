#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    printf(" %d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);
    printf(" %d %d %d %d %d\n",0[a],1[a],2[a],3[a],4[a]);
    printf(" %p %p %p %p %p\n",&a[0],&a[1],&a[2],&a[3],&a[4]);
    printf(" %p %p %p %p %p\n",a+0,a+1,a+2,a+3,a+4);
}