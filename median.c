/*
Name		:Nithish kumar
Date		:09/03/2023
Description	:To find the median of two unsorted arrays
Sample input	:
Sample output	:
*/


#include<stdio.h>

int main()
{
    int size1, size2;	//Declaration of size

    printf("Enter the 'n' value for Array A: ");	 //Getting i/p from the user
    scanf("%d", &size1);

    printf("Enter the 'n' value for Array B: ");	 //Getting i/p from the user
    scanf("%d", &size2);

    int A[size1], B[size2], i, j;	//Declaration 

    printf("Enter the elements one by one for Array A: ");
    for(i=0; i<size1; i++)	 //Getting array elements from the user

    { 
	scanf("%d", &A[i]);
    
    }

    printf("Enter the elements one by one for Array B: ");
    for(i=0; i<size2; i++)	 //Getting array elementsfrom the user

    { 
	scanf("%d", &B[i]);
    }

    //sorting of array1

    int temp=0;

    for(i=0; i<(size1-1); i++)
    {
	for(j=i+1; j<size1; j++)
	{
	    if( A[i] > A[j] )
	    {
		//swap
		temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	    }
	}
    }
    //sorting of array2

    for(i=0; i<(size2-1); i++)
    {
	for(j=i+1; j<size2; j++)
	{
	    if( B[i] > B[j] )
	    {
		//swap
		temp = B[i];
		B[i] = B[j];
		B[j] = temp;
	    }
	}
    }

    //Finding medain
    float median1, median2;
    int a,b;
    a = size1/2;
    b = size2/2;

    //median1
    if( size1%2 == 0 )
	median1 = (float)(A[a]+A[(a-1)])/2;

    else
	median1 = A[a];

    printf("Median of array1 : %g\n",median1); 
   
    //median2
    if( size2%2 == 0 )
	median2 = (float)(B[b]+B[(b-1)])/2;

    else
	median2 = B[b];

    printf("Median of array2 : %g\n",median2); 

    printf("Median of both arrays : %g\n", ((median1+median2)/2));
    

    return 0;
}


