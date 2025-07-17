/*
Write a one line code to compare two numbers equal or not using bitwise operators.
*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter two number:");
    scanf("%d %d",&num1,&num2);
    int result= !(num1^num2);
    if(result)
    printf("equal");
    else
    printf("not equal");

}