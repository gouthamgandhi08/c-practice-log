#include<stdio.h>
void fibbo(int n,int x,int y)
{
    if(x<=n)
    {
        int z=x+y;
        printf("%d ",x);
        x=y;
        y=z;
        fibbo (n,x,y);
    }

}
int main()
{
    int x=0,y=1,z,n=100;
    fibbo(n,x,y);
}