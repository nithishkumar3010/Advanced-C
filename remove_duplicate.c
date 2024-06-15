/*
Name		:Nithish kumar
Date		:29/04/2023
Description	:To remove duplicate elements in a given array
Sample input	:1.Enter the size: 5
	 	   Enter elements into the array: 5 1 3 1 5

Sample output	:1.After removing duplicates: 5 1 3
*/


#include<stdio.h>

void duplicate(int *arr1, int size, int *arr2, int *new_size)	//Function definition
{
    int count,i,j, arr_size = 0;				//Local variables

    *arr2 = *arr1;
    arr_size = 1;

    for(i=1; i<size; i++)					//To find duplicate elements
    {
	count = 0;
	for(j=0; j<=i; j++)
	{
	    if( *(arr1+i) == *(arr2+j) )
	    {
		count = 1;
		break;
	    }
	}
	if( count == 0 )
	{
	    arr2[arr_size] = arr1[i];
	    arr_size++;
	}
    }
    *new_size = arr_size;
  
}

int main()				//Main function
{
    int size, ret, i;			//Local variables

    printf("Enter the size: ");		//To get i/p from user
    scanf("%d",&size);

    int arr1[size], arr2[size], new_size[1];//arrays

    printf("Entet elements into the array: ");	//To get array elements

    for(int i=0; i<size; i++)
    {
    	scanf("%d",&arr1[i]);
    }
    
    duplicate(arr1, size, arr2, new_size);   //Function call

    ret = new_size[0];			    //To store new address

    printf("After removing duplicates:"); //To print the array elements after removing duplicates
    for( i=0; i<ret; i++)
    {
	printf(" %d", arr2[i]);
    }
    printf("\n");

    return 0;
}


