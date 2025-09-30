#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row1,row2,col1,col2,i,j,k;
    printf("no of rows for matrix 1:");
    scanf("%d",&row1);
    printf("no of column for matrix 1:");
    scanf("%d",&col1);
    printf("no of rows for matrix 2:");
    scanf("%d",&row2);
    printf("no of column for matrix 2:");
    scanf("%d",&col2);
    if(col1==row2)
    {
        int **p=(int**)malloc(row1*sizeof(int*));
        int **q=(int**)malloc(row2*sizeof(int*));
        int **r=(int**)malloc(row1*sizeof(int*));
        for(i=0;i<row1;i++)
        {
            p[i]=(int*)malloc(col1*sizeof(int));
            r[i]=(int*)malloc(col2*sizeof(int));
        }
        for(i=0;i<row2;i++)
        {
            q[i]=(int*)malloc(col2*sizeof(int));
        }
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
            {
                printf("arr1[%d][%d]=",i,j);
                scanf("%d",&p[i][j]);
            }
        }
        for(i=0;i<row2;i++)
        {
            for(j=0;j<col2;j++)
            {
                printf("arr2[%d][%d]=",i,j);
                scanf("%d",&q[i][j]);
            }
        }
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                int sum=0;
                for(k=0;k<col1;k++)
                {
                   sum+=p[i][k]*q[k][j];
                }
                r[i][j]=sum;
            }
        }
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                printf("%d ",r[i][j]);
            }
            printf("\n");
        }
         for(i=0;i<row1;i++)
        {
            free(p[i]);
            free(r[i]);
        }
        for(i=0;i<row2;i++)
        {
            free(q[i]);
        }
        free(p);
        free(q);
        free(r);
    }
    else
    printf("can't perform multiplication");
}