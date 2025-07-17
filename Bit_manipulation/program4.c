/*
WAP to swap two numbers using bitwise operators.
*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter two number");
    scanf("%d %d",&num1,&num2);
    printf("Before swapping\n");
    printf("num1=%d,num2=%d\n",num1,num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("After swapping\n");
    printf("num1=%d,num2=%d\n",num1,num2);

}