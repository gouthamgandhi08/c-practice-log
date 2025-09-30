/*Write a program to reverse the words in a given string line.
       Ex : “I am a good boy”
	  “I ma a doog yob”
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],end=0;
    printf("enter a string1:");
    scanf("%[^\n]s",a);
    int len=strlen(a);
    for(int i=0;i<len;i=end)
    {
       if(a[i]==' ')
       {
        end++;
        continue;
       }
       while((a[end]!=' ')&&(a[end]!='\0'))
          end++;
       for(int j=i,k=end-1;j<k;j++,k--)
       {
          char temp=a[j];
          a[j]=a[k];
          a[k]=temp;
       }
    }
    printf("%s",a);
}