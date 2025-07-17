/*
WAP to find the given number is even or odd using bitwise operators.
*/
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("%s",(num & (1<<0))?"odd":"even");

}