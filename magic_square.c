/*
Name		:Nithish kumar
Date		:15/06/2023
Description	:To generate a n*n magic square
Sample input	:Enter a number: 3

Sample output	:8      1      6
		 3      5      7
		 4      9      2

 */


#include<stdio.h>
#include<stdlib.h>

void magic_square(int **ptr, int n)		//Function definition
{
    int row=0, col=n/2, prev_row = 0, prev_col = 0;	//Local variable

    for(int i=1; i<=(n*n); i++)			
    {

	if( row<0 )			//If row is -ve make row value as last row
	{
	    row = n-1;
	}
	if( col >= n )			//If col is n make col value as 0

	{
	    col = 0;
	}

	if( ptr[row][col] != 0 )	//If a marix value is not 0 then that is already taken
	{
	    row = prev_row+1;		
	    col = prev_col;
	}


	ptr[row][col] = i;

	prev_row=row;
	prev_col=col;

	row--;
	col++;
    }
}

int main()
{
    int n;				//Local variable

    printf("Enter a number: ");
    scanf("%d",&n);

    int **ptr;				
    
    ptr=malloc(n*sizeof(int *));	//Dynamic memory allocation for rows

    for(int i=0; i<n; i++)		//Dynamic memory allocation for columns

    {
	ptr[i]=(int *)calloc(1,n*sizeof(ptr));
    }


    if( (n >0) && ((n%2) == 1))		//To check the number is odd positive
    {
	magic_square(ptr,n);		//Function call

	for(int i=0; i<n; i++)		//To print the magic square matrix
	{
	    for(int j=0; j<n; j++)
	    {
		printf("%d  ",ptr[i][j]);
	    }
	    printf("\n");
	}
    }
    else
    {
	printf("Error : Please enter only positive values\n");
    }

    return 0;
}


