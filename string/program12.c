/*Write a program to print the count of duplicate characters in a given string.
       Ex:  Input : “hrithik roshan”
              Output:  Letter   -------  Count
                       h        -------      3
		               r        -------      2
                       i        -------      2
*/
#include<stdio.h>
int main()
{
    char str[]="hrithik roshan";
    int len,count=1,i,j;
    for(len=0;str[len];len++);
    for(i=0;i<len;i++,count=1)
    {
        for(j=0;j<i;j++)
        {
            if(str[j]==str[i])
               break;
        }
        if(j>=i)
        {
            for(j=i+1;j<len-1;j++)
            {
                if(str[i]==str[j])
                  count++;
            }
            if(count>1)
            printf("%c---> %d times \n",str[i],count);
        }
    }

}