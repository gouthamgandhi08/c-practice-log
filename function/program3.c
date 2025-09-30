/*Write a C program to insert an element at desired position in an array. 
     Ex:
     char a[6] = {‘B’,’C’,’D’,’E’,’F’} 
     if 'A' is to be stored at 0th position then.
     output = {‘A’,‘B’,’C’,’D’,’E’,’F’} 
*/
#include<stdio.h>
#include<string.h>
int main()
{
     char a[6] = {'B','C','D','E','F'};
     printf("%lu",sizeof(a));
     char ch='A';
     int pos=0,k=strlen(a),i;
     for(i=strlen(a);i>pos;i--)
     {
        a[i]=a[i-1];
     }   
     a[i]=ch;
     printf("%s",a); 
}  