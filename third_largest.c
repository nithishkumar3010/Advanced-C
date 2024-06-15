/*
Name		:Nithish kumar
Date		:28/04/2023
Description	:To find 3rd largest element in an array
Sample input	:1.Enter the size of the Array : 5
		   Enter the elements into the array: 5 1 4 2 8
Sample output	:1.Second largest element of the array is 4
*/


#include<stdio.h>

void third_large(int *ptr, int size)		//Function definition
{
    int max1, max2, max3, i;			//Local variable

    if( *ptr > *(ptr+1) )			//To find the max1
    {
	if( *ptr > *(ptr+2) )
	{
	    max1 = *ptr;			//To find the max1
	    
	    if ( *(ptr+1) > *(ptr+2) )		//To find max2, max3
	    {
		max2 = *(ptr+1);
		max3 = *(ptr+2);
	    }
	    else				//To find max2, max3
	    {
		max2 = *(ptr+2);
		max3 = *(ptr+1);
	    }
	}
       	else 
	{
    	    max1 = *(ptr+2);			//To find the max1
    
	    if ( *(ptr) > *(ptr+1) )		//To find max2, max3
    	    {
    		max2 = *ptr;
    		max3 = *(ptr+1);
    	    }
    	    else				//To find max2, max3
    	    {
    		max2 = *(ptr+1);
    		max3 = *ptr;
    	    }
	    
    	}

    }

   else if( *(ptr+1) > *(ptr+2) ) 		//To find max1
    {
	max1 = *(ptr+1);
	
	if ( *(ptr) > *(ptr+2) )		//To find max2, max3

       	{
	    max2 = *ptr;
	    max3 = *(ptr+2);
	}
	else					//To find max2, max3

	{
	    max2 = *(ptr+2);
	    max3 = *ptr;
	}

    }

    else
    {
	max1 = *(ptr+2);		//To find max1

	if ( *(ptr) > *(ptr+1) )	//To find max2, max3

       	{
	    max2 = *ptr;
	    max3 = *(ptr+1);
	}
	else				//To find max2, max3
	{
	    max2 = *ptr;
	    max3 = *(ptr+1);
	}
    } ////////////

   for( i=3; i<size; i++)		//Iteration to find 3rd largest element
   {
       if( max1 < *(ptr+i) )
       {
	   max3 = max2;
	   max2 = max1;
	   max1 = *(ptr+i);
       }
       else if( max2 <= *(ptr+i) && max1 > *(ptr+i) )
       {
	   max3 = max2;
	   max2 = *(ptr+i);
       }
       else if( max3 <= *(ptr+i) && max2 > *(ptr+i) && max1 > *(ptr+i))
       {
	   max3 = *(ptr+i);
       }
   }
   
   printf("%d",max3);
  
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

    printf("Third largest element of the array is ");
    third_large(arr, size);		//Function call
    printf("\n");

    return 0;
}

