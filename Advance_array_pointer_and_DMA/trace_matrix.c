#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row,col,i,j,sum=0;
    printf("Enter no of rows:");
    scanf("%d",&row);
    printf("Enter no of columns:");
    scanf("%d",&col);
    if(row==col)
    {
           // int arr[row][col];
            int **p=(int**)malloc(row*sizeof(int*));
            for(i=0;i<row;i++){
                    p[i]=(int*)malloc(col*sizeof(int));
            }
            for(i=0;i<row;i++){
                for(j=0;j<col;j++){
                    printf("arr[%d][%d]:",i,j);
                    scanf("%d",&p[i][j]);
                }
            }
            printf("the matrix elements are\n");
            for(i=0;i<row;i++){
                for(j=0;j<col;j++){
                    printf("%d ",p[i][j]);
                }
                printf("\n");
            }
            //To Find Trace of a matrix
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++){
                        if(i==j)
                          sum+=p[i][j];
                    }
                }
                printf("Trace of a matrix is %d\n",sum);
               for(i=0;i<row;i++){
                        free(p[i]);
                }
                free(p);
            }
    else
            printf("can't find the trace of a matrix\n");
    
}
