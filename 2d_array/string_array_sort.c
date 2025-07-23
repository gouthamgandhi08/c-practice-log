#include<stdio.h>
#include<string.h>
int main()
{
        int size,c;
        printf("enter the number of strings u want to insert in to array:");
        scanf("%d",&c);
        printf("Max size of each string:");
        scanf("%d",&size);
        char s[c][size];
        for(int i=0;i<c;i++)
        {
                printf("enter the string %d:",i+1);
                scanf("%s",s[i]);
        }
        for(int i=0;i<c-1;i++)
        {
                for(int j=0;j<c-(i+1);j++)
                {
                        int r=strcmp(s[j],s[j+1]);
                        if(r>0){
                         char temp[size];
                         strcpy(temp,s[j]);
                         strcpy(s[j],s[j+1]);
                         strcpy(s[j+1],temp);
                        }
                }
        }
        printf("after arranging the string in Ascending order\n");
        for(int i=0;i<c;i++)
        {
                printf("string %d:%s\n",i+1,s[i]);
        }
}
