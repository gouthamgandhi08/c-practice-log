/*Write a program to delete the duplicate characters in a given string.
      Ex: Input : vecteeovvorr
             Output : vector
*/
#include<stdio.h>
int main()
{
    char a[100],i,j,k=0;
    printf("Enter a string:");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;j<i;j++)
        {
           if(a[i]==a[j])
              break;
        }
        if(j>=i)
        {
            a[k++]=a[i];
        }
    }
    a[k]='\0';
    printf("%s",a);
}