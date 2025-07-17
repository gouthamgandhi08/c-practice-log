/*
1.  Write a prorgram for the following one.
      a) Set a bit      b) Clear a bit    c) Toggle a  bit  
*/
#include<stdio.h>
int main()
{
    int num,pos;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Enter position:");
    scanf("%d",&pos);
    printf("\n Set the particular bit \n");
    num= num|(1<<pos);//set a bit
    for(int i=31;i>=0;i--)
    printf("%d",(num&1<<i)?1:0);
    num= num & ~(1<<pos);//clear a bit
    printf("\n clear the particular bit \n");
    for(int i=31;i>=0;i--)
    printf("%d",(num&1<<i)?1:0);
    printf("\n Toggle the particular bit \n");
    num = num ^ (1<<pos);// toggle  a bit
    for(int i=31;i>=0;i--)
    printf("%d",(num&1<<i)?1:0);
}