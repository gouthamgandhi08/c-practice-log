#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sort(char **p,int n)
{
    int i,j;
    char temp[20];
    for(i=0;i<n;i++)
     {
        for(j=i+1;j<n;j++)
        {
            int a=strlen(p[i]);
            int b=strlen(p[j]);
            if(a>b)
            {
                strcpy(temp,p[i]);
                strcpy(p[i],p[j]);
                strcpy(p[j],temp);
            }
        }
     }
}
int main()
{
    int n,i;
    printf("enter the no of string :");
    scanf("%d",&n);
    char **p=(char**)malloc(n*sizeof(char*));
    for(i=0;i<n;i++)
      p[i]=(char*)malloc(20*sizeof(char));
    for(i=0;i<n;i++)
    {
        printf("Enter the string %d:",i+1);
        scanf("%s",p[i]);
    }
    printf("Before sorting strings are:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",p[i]);

    }
    sort (p,n);
    printf("after sorting strings are:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",p[i]);

    }

}