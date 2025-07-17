/*
7. Write a program to rotate the bits. Input  the no.of  rotations, at runtime.
    Ex : 
    1) binary  :  10000000000000000000000000001011
        rotations : suppose 3 times right,  then
        result    :  01110000000000000000000000000001

     2) binary  :  10000000000000000000000000001011
         rotations : suppose 4 times left,  then
         result :     00000000000000000000000010111000
*/
#include<stdio.h>
int main()
{
    unsigned int  num,choice,rotation,result;
    printf("Enter a number:");
    scanf("%u",&num);
    printf("Type 1 for right rotate\n");
    printf("Type 2 for left rotate\n");
    scanf("%u",&choice);
    const int bits = sizeof(num)*8;
    printf("Enter number of rotation:");
    scanf("%u",&rotation);
    printf("%u in binary: ",num);
    for(int i=31;i>=0;i--)
         printf("%d",(num&1<<i)?1:0);
    rotation=rotation%bits;
    if(choice==1)
    {
       result=(num>>rotation)|(num<<(bits-rotation));
       printf("\nafter right rotate by %d: ",rotation);
       for(int i=31;i>=0;i--)
         printf("%d",(result & (1<<i))?1:0);
    }
    else if(choice==2)
    {
       result=(num<<rotation)|(num>>(bits-rotation));
       printf("\nafter left rotate by %d: ",rotation);
       for(int i=31;i>=0;i--)
         printf("%d",(result & (1<<i))?1:0);
    }
    else 
    printf("your choice is wrong");


}