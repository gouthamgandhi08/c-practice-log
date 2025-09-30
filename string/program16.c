/*Write a program to accept two strings from user into two character array and copy one 
       by one character into another destination array.
	Ex:  First String      : “abcdefg”
                   Second String : “1234”
	        then  Destination String  is  “a1b2c3d4efg”
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],j=0,flag1=0,flag2=0;
    printf("enter a string1:");
    scanf("%[^\n]s",a);
    printf("enter a string2:");
    scanf(" %[^\n]s",b);
    char c[strlen(a)+strlen(b)+2];
    for(int i=0;a[i]!='\0'|b[i]!='\0';i++)
    {
        if(a[i]=='\0')
           flag1=1;
        if(b[i]=='\0')
           flag2=1;
        if((a[i]!='\0')&&(flag1==0))
        {
            c[j++]=a[i];
        }
        if((b[i]!='\0')&&(flag2==0))
           c[j++]=b[i];
    }
    c[j]='\0';
    printf("%s",c);
}
