#include<stdio.h>
void main ()
{
int m, n, p, q, i, j, k;
printf("Enter the no. of rows and columns in first matrix :\n");
scanf("%d %d",&m,&n);
printf("Enter the no. of rows and columns in second matrix:\n");
scanf("%d %d",&p,&q);
if (m!=q || n!=p)
    {
        printf("Invalid size for matrix multiplication, please renter correct size.\n");
        exit(0);
    }    
int mat1[m][n], mat2[p][q], resm[m][p];
printf("Enter the values in matrix 1 :\n");
for (i=0;i<=m;i++)
    {
        for (j=0;j<=n;j++)
            {
                printf("a(%d,%d) = ",&i,&j);
                scanf("%d",&mat1[i][j]);
            }   
    }
i=0;j=0;    
printf("Enter the values in matrix 2 :\n");
for (i=0;i<=m;i++)
    {
        for (j=0;j<=n;j++)
            {
                printf("b(%d,%d) = ",&i,&j);
                scanf("%d",&mat2[i][j]);
            }   
    }




}