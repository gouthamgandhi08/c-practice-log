/*
9. Write a one line code to compare two numbers equal or not using bitwise operators.
*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter two number:");
    scanf("%d %d",&num1,&num2);
    int result= !(num1^num2);
    if(result)
    printf("%d and %d are equal",num1,num2);
    else
    printf("%d and %d are not equal",num1,num2);

}