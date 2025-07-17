/*
Write a logic to extract  P bits from Posion N in an integer M.
      Ex:
      M = 171
       P = 5 
       N = 2
       171 in binary : 00000000000000000000000010101011 
       extracted bits:  10101     i.e.    21.
*/
#include<stdio.h>
int main()
{
    int m,p,n;
    printf("enter a integer:");
    scanf("%d",&m);
    printf("enter how many bits to extract:");
    scanf("%d",&p);
    printf("enter a position:");
    scanf("%d",&n);
    for(int i=n+p;i>n;i--)
    printf("%d",(m&(1<<i))?1:0);

}