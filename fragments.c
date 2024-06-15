/*
Name		:Nithish kumar
Date		:31/05/2023
Description	:To implement fragments using Array of Pointers
Sample input	:
Sample output	:
*/


#include<stdio.h>
#include<stdlib.h>



int main()
{
    int row, i=0, col=0, j=0, temp_arr=0;	//Local variables

    printf("Enter no.of rows : ");		//Getting i/p from user
    scanf("%d",&row);
    
    float *ptr[row], *temp;			//Pointer

    float sum=0, avg;

    int col_size[row];
    
    for(i=0; i<row; i++)			//Dynamic memory allocation for rows
    {
	printf("Enter no of columns in row[%d] : ",i);
	scanf("%d",&col);

	col_size[i]=col+1;

	ptr[i] = malloc(col_size[i]*sizeof(int));
    }

    for(i=0; i<row; i++)			//Getting the value for each rows
    {
    	printf("Enter %d values for row[%d] : ",col_size[i]-1, i);

	for(j=0; j<col_size[i]-1; j++)
	{
	    scanf("%f",&ptr[i][j]);
	}

    }

    for(i=0; i<row; i++)		//Calculating the value of last column
    {
	sum=0.0;

	for(j=0; j<col_size[i]-1; j++)
	{
	    sum = sum+ ptr[i][j];
	}

	avg = sum/(col_size[i]-1);
	ptr[i][j]=avg;
    }

    printf("\nBefore sorting output is:\n");	//Before sorting

   
    for(i=0; i<row; i++)
    {
	for(j=0; j<col_size[i]; j++)
	{
	    printf("%f ",ptr[i][j]);
	}
	printf("\n");

    }


   
    for(i=0; i<row; i++)			//Sorting
    {
	for( j=1; j<row; j++)
	{
    	    if( (ptr[i][col_size[i]-1]) > (ptr[i][col_size[j]-1]) );
	    {
		temp = ptr[i];
		ptr[i] = ptr[j];
		ptr[j] = temp;

		temp_arr = col_size[i];
                col_size[i] = col_size[j];
                col_size[j] = temp_arr;		
	    }
	}
    }

    printf("\nAfter sorting output is:\n");		//After sorting
   
    for(i=0; i<row; i++)
    {
	for(j=0; j<col_size[i]; j++)
	{
	    printf("%f ",ptr[i][j]);
	}
	printf("\n");

    }

    return 0;
}

