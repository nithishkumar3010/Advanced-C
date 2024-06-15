/*
Name		:Nithish kumar
Date		:29/04/2023
Description	:To print the values in sorted order without modifying or copying array
Sample input	:1.Enter the size : 5
		   Enter 5 elements 
		   10 1 3  8 -1
		 2.Enter the size : 7
		   Enter 7 elements 
		   1 3 2 5 4 7 6
Sample output	:1.After sorting: -1 1 3 8 10
		   Original array values 10 1 3 8 -1
		 2.After sorting: 1 2 3 4 5 6 7
		   Original array values 1 3 2 5 4 7 6

*/


#include<stdio.h>

void sort_array( int *arr, int size)			//Function definition
{
    int large = *arr, small = *arr, i, j;		//Local variable

    for(i=0; i<size; i++)
    {
	if(large < *(arr+i) )
	{
	    large = *(arr+i);
	}

	if(small > *(arr+i) )
	{
	    small = *(arr+i);
	}

    }
    int sec_small = large;

    printf("%d", small);

    for( i=0; i<(size-1); i++)
    {
	for(j=0; j<size; j++)
	{
	    if( (*(arr+j) > small) && (*(arr+j) < sec_small) )
	    {
		sec_small = *(arr+j);
	    }
	}
	printf(" %d", sec_small);
	small = sec_small;
	sec_small = large;

    }
}

int main()			//Main function
{
    int size;			//Local variable

    printf("Enter the size: ");//To get i/p from user
    scanf("%d",&size);

    int arr[size], i;		//Local variable
 
    printf("Enter %d elements:\n",size);
    for(i=0; i<size; i++)	//To get array elements
        scanf("%d",&arr[i]);

    printf("After sorting: ");
    sort_array(arr, size);	//Function call
    
    printf("\nOriginal array values");
    for(i=0; i<size; i++)
	printf(" %d", arr[i]);

    printf("\n");

    return 0;
}


