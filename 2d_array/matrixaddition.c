#include<stdio.h>
int main()
{
	int r1,r2,c1,c2;
	printf("Enter no of row for matrix 1:");
	scanf("%d",&r1);
	printf("\nEnter no of column for matrix 1:");
	scanf("%d",&c1);
	int a[r1][c1];
	printf("Enter the element for matrix 1:\n");
        for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			printf("a[%d][%d]-->",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter no of row for matrix 2:");
	scanf("%d",&r2);
	printf("\nEnter no of column for matrix 2:");
	scanf("%d",&c2);
	int b[r2][c2];
	printf("Enter the element for matrix 2:\n");
        for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			printf("b[%d][%d]-->",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	if((c1 == c2)&&(r1==r2))
	{
		int c[r1][c2];
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		printf("Matrix addition of Matrix A and Matrix B\n");
		for(int i=0;i<r1;i++)
        {
			for(int j=0;j<c2;j++){
				printf("%d ",c[i][j]);
            }
            printf("\n");
        }
	}
    else
    printf("can't perform matrix addition");
}
