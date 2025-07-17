/*
10. Write a program to reverse the bits of a given number (not just reverse printing).
*/
#include<stdio.h>
int main()
{
   int num,rev=0;
   printf("Entera number:");
   scanf("%d",&num);
   printf("%d in binary : ",num);
   for(int i=31;i>=0;i--){
       printf("%d",(num&1<<i)?1:0);
       if(num & 1<<i)
         rev=rev|(1<<(31-i));
   }
   printf("\n%d in binary : ",rev);
   for(int i=31;i>=0;i--){
       printf("%d",(rev&1<<i)?1:0);
   }
}