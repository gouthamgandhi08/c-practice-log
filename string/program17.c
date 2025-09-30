/*Write a program to find the no.of times substring is found in a given string.*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100]="aaaa",b[20]="aa";
    int len1=strlen(a),len2=strlen(b),c=0;
    for(int i=0;i<len1;)
    {
        int k=i,j;
        for(j=0;j<len2;j++)
        {
            if(a[k]==b[j])
            {
               // printf("a[i]=%c b[i]=%c\n",a[k],b[j]);
                k++;
            }
            else 
             break;
        }
        if(j==len2)
        {
            c++;
            i=i+len2;
        }
        else
          i++;
    }
    printf("no of substring is %d",c);

}