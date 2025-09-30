#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row,col,i,j;
    printf("Enter no of rows:");
    scanf("%d",&row);
    printf("Enter no of column:");
    scanf("%d",&col);
    int **p=(int**)malloc(row*sizeof(int*));
    int **q=(int**)malloc(col*sizeof(int*));
    for(i=0;i<row;i++)
      p[i]=(int*)malloc(col*sizeof(int));
    for(i=0;i<col;i++)
      q[i]=(int*)malloc(row*sizeof(int));
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&p[i][j]);
        }
    }
    printf("The element of matrix are\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",p[i][j]);
            q[j][i]=p[i][j];
        }
        printf("\n");
    }
    //transpose of a matrix
    printf("Transpose of matrix are\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",q[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
        free(p[i]);
    free(p);
    for(i=0;i<col;i++)
      free(q[i]);
    free(q);
}