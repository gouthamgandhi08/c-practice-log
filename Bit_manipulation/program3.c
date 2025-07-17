/*
3. WAP to find the given number is +ve or -ve using bitwise operators.
*/
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("%s",(num & (1<<31))?"negative":"positive");
}