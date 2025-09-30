/*) Write a program to replace the words in reverse order in a given string line.
	Ex:  Input   :  “world changed your thoughts”
	       Output :  “thoughts your changed world”
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],end=0;
    printf("enter a string1:");
    scanf("%[^\n]s",a);
    int len=strlen(a);
    for(int i=0,j=len-1;i<j;i++,j--)
    {
        char ch=a[i];
        a[i]=a[j];
        a[j]=ch;
    }
    for(int i=0;i<len;i=end)
    {
        if (a[i]==' ')
        {
            end++;        
            continue;
        }
        while((a[end]!='\0')&&(a[end]!=' '))
          end++;
        for(int j=i,k=end-1;j<k;j++,k--)
        {
            char ch=a[j];
            a[j]=a[k];
            a[k]=ch;
        }
    }
    printf("%s",a);
}