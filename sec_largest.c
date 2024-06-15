/*
Name		:Nithish kumar
Date		:27/04/2023
Description	:To find 2nd largest element in an array
Sample input	:1.Enter the size of the Array : 5
		   Enter the elements into the array: 5 1 4 2 8
Sample output	:1.Second largest element of the array is 5
*/


#include<stdio.h>

int sec_large(int *ptr, int size)		//Function definition
{
    int f_large, s_large;			//Local variable

    if( *ptr > *(ptr+1) )			
    {
	f_large = *ptr;
	s_large = *(ptr+1);	
    }
    else
    {
	f_large = *(ptr+1);	
	s_large = *ptr;
    }

    for(int i=2; i<size; i++)
    {
	if( f_large < *(ptr+i) )
	{
	    s_large = f_large;
	    f_large = *(ptr+i);
	}
	else if( s_large < *(ptr+i) )
	{
	    s_large = *(ptr+i);
	}
    }
    printf("%d\n",s_large);

}

int main()				//Main function
{
    int size;				//Local variable

    printf("Enter the size of array: ");//To get i/p from user
    scanf("%d",&size);
 
    int arr[size];
    printf("Enter the elements into array: ");//To get array elements from user
    for(int i=0; i<size; i++)
    {
	scanf("%d",&arr[i]);
    }

    printf("Second largest element of the array is");
    sec_large(arr, size);		//Function call
    printf("\n");

    return 0;
}


