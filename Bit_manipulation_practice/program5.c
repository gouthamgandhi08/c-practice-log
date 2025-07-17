/*
5.WAP to find the given number is power of 2 or not.
*/
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("%s",(num & (num-1))?"not a power of 2":"power of 2");
}