#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row1,row2,col1,col2,i,j;
    printf("no of rows for matrix 1:");
    scanf("%d",&row1);
    printf("no of column for matrix 1:");
    scanf("%d",&col1);
    printf("no of rows for matrix 2:");
    scanf("%d",&row2);
    printf("no of column for matrix 2:");
    scanf("%d",&col2);
    if((row1 == row2)&&(col1 == col2))
    {
        int **p=(int**)malloc(row1*sizeof(int*));
        int **q=(int**)malloc(row2*sizeof(int*));
        for(i=0;i<row1;i++)
        {
            p[i]=(int*)malloc(col1*sizeof(int));
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
            int c=0;
            for(j=0;j<col1;j++)
            {
                if(p[i][j] != q[i][j]){
                    c=1;
                    break;
                }
            }
            if(c==1)
            break;
        }
        if((i<row1)&&(j<col1))
        printf("Two matrix are not identical");
        else
        printf("Two matrix are identical");
         for(i=0;i<row1;i++)
        {
            free(p[i]);
            free(q[i]);
        }
        free(p);
        free(q);
    }
    else
    printf("Two matrix are not identical");
}