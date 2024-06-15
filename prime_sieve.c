/*
Name		:Nithish kumar
Date		:08/03/2023
Description	:To print all prime numbers upto 'n'
Sample input	:1.A positive number
		   Enter the value of 'n' : 20
		 2.Enter the value of 'n' : -20

Sample output	:1.The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
		 2.Please enter a positive number which is > 1

*/


#include<stdio.h>

int main()
{
    int num;	//Declaration

    printf("Enter the value of 'n': ");
    scanf("%d", &num);		//Getting i/p from user

    if(num>1)		//Check num is not negtive.
    {
    	int size=num-1;	//Size is num-1
    	int arr[size], i, j;	//Declaration
    
	for(i=0; i<size; i++)	//Storing the array values
    	{
    	    arr[i]=i+2;
    	}
    
	for(i=0; ( (arr[i]*arr[i]) <= num); i++)	//check array value is lesser than num
    	{
    
	    if( arr[i] !=0 )	// check array value is not zero
    	    {
    		for(j=i+1; j<size; j++)
    		{
		    if( (arr[j]%arr[i]) == 0 )	
  		    {
    			arr[j]=0;	
    		    }
	       	}
    	    }
    	}
	
	printf("The primes less than or equal to %d are:\n", num);
    
	for(i=0; i<size; i++)
    	{
    	    if(arr[i]!=0)
    	    {
    		printf("%d ",arr[i]);
    	    }
    	}
    	printf("\n");
    }
    else
    {
	printf("Please enter a positive number which is > 1");
    }

    return 0;
}


