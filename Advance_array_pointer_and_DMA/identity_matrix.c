#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row,col,i,j;
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
            //To check whether the given matrix is identity matrix 
            for(i=0;i<row;i++){
                int c=0;
                for(j=0;j<col;j++){
                    if((i!=j)&&(p[i][j]!=0)){
                        c=1;
                        break;
                    }
                    else
                    {
                        if((i==j)&&(p[i][j]!=1))
                        {
                            c=1;
                            break;
                        }
                    }
                }
                if(c==1)
                 break;
            }
            if((i<(row-1))||(j<(col-1)))
            printf("It is not an identity matrix\n");
            else
            printf("It is an identity matrix\n");
        for(i=0;i<row;i++){
                    free(p[i]);
            }
            free(p);
    }
    else
            printf("It is not an identity matrix\n");
    
}
