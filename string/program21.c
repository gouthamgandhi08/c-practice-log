/*Write a program to check given strings are anagram or not.
       An anagram is a rearrangement of the letters of one word or phrase to form another word or phrase.
      Note : Both strings are anagram, if  both contains same elements, same no.of times in any order.
                 (Can have extra special characters & digits also, but non-alphabets should not be counted)

      Ex:   "Osama bin laden"  & "Old man in a base"  both are anagrams.
	  “study”  & “dus%@ty123” both are anagrams. 
			      Here after removing special characters and digits ----> “ dusty “.
*/
#include<stdio.h>
#include<string.h>
void remove_sp(char *p)
{
    int i=0,j,k=0;
    for(i=0;p[i];i++)
    {
       if(((p[i]>='A')&&(p[i]<='Z'))||((p[i]>='a')&&(p[i]<='z')))
       {
            if((p[i]>='A')&&(p[i]<='Z'))
               p[i]=p[i]^32;
            p[k++]=p[i];
       }
    }
    p[k]='\0';
}
void arrange(char *p,int len)
{

    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(p[i]>p[j])
            {
                char a=p[i];
                p[i]=p[j];
                p[j]=a;
            }
        }
    }
}
int main()
{
    char a[100],b[100],i;
    printf("enter sentence 1:");
    scanf("%[^\n]s",a);
    printf("enter sentence 2:");
    scanf(" %[^\n]s",b);
    remove_sp(a);
    remove_sp(b);
    int len1=strlen(a),len2=strlen(b);
    if(len1!=len2)
    {
       printf("Both are not an anagram");
    }
    else
    {
        arrange(a,len1);
        arrange(b,len2);
        if(strcmp(a,b)==0)
        printf("both the string are anagram");
        else 
        printf("both the string are not anagram");
    }
      
}