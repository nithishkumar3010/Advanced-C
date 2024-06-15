/*
Name		:Nithish kumar
Date		:17/06/2023
Description	:To find the product of given matrix.
Sample input	:1.Enter number of rows : 3
		   Enter number of columns : 3
		   Enter values for 3 x 3 matrix :
		   1      2      3
		   1      2      3
		   1      2      3
		   Enter number of rows : 3
		   Enter number of columns : 3
		   Enter values for 3 x 3 matrix :
		   1      1     1
		   2      2     2
		   3      3     3

Sample output	:1.Product of two matrix :
		   14      14      14
		   14      14      14
		   14      14      14
*/


#include<stdio.h>
#include<stdlib.h>

void mat_mul(int **matA, int matA_row, int matA_col, int **matB, int matB_row, int matB_col, int **res, int res_row, int res_col)
{
    int sum=0, i, j, k;

    for(i=0; i<res_col; i++)
    {
	for(j=0; j<matA_col; j++)
	{
	    for(k =0; k<matB_row; k++)
	    {
		sum = sum + (matA[i][k]*matB[k][j]);
	    }
	    res[i][j] = sum;
	    sum = 0;
	}
    }
}

int main()
{
    /*************matrix A***********/
    int matA_row, matA_col;

    printf("Enter the rows : ");
    scanf("%d", &matA_row);
    
    printf("Enter the columns : ");
    scanf("%d", &matA_col);

    int **matA;

    matA = malloc(matA_row*sizeof(int));

    for(int i=0; i<matA_row; i++)
    {
	matA[i] = malloc(matA_col*sizeof(int));
    }

    printf("Enter values for %d x %d matrix :\n", matA_row, matA_col);

    for(int i=0; i<matA_row; i++)
    {
	for( int j=0; j<matA_col; j++)
	{
	    scanf("%d", &matA[i][j]);
	}
    }


    /********matrix B************/
    int matB_row, matB_col;
    int **matB;

    printf("Enter the rows : ");
    scanf("%d", &matB_row);

    printf("Enter the columns : ");
    scanf("%d", &matB_col);

    matB = malloc(matB_row*sizeof(int));

    for(int i=0; i<matB_row; i++)
    {
	matB[i] = malloc(matB_col*sizeof(int));
    }


    /********Result matrix************/
    int **res;

    int res_row = matA_row;
    int res_col = matB_col;

    if( matA_col == matB_row)
    {
	printf("Enter values for %d x %d matrix :\n", matB_row, matB_col);

	for(int i=0; i<matB_row; i++)
	{
	    for( int j=0; j<matB_col; j++)
	    {
		scanf("%d", &matB[i][j]);
	    }
	}


	/**************Result matrix*********/


	res = malloc(matA_row*sizeof(int));

	for(int i=0; i<res_row; i++)
	{
	    res[i] = malloc(res_col*sizeof(int));
	}

	/****Calling the matrix multiplication function***/

	mat_mul(matA, matA_row, matA_col, matB, matB_row, matB_col, res, res_row, res_col);

	printf("Product of two matrix :\n");

	for( int i=0; i<matA_row; i++)
	{
	    for(int j=0; j<matB_col; j++)
	    {
		printf("%d ", res[i][j]);
	    }
	    printf("\n");
	}

    }
    else
    {
	printf("Matrix multiplication is not possible\n");
    }

    free(matA);
    free(matB);
    free(res);

    return 0;
}


