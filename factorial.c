/*
Name		:Nithish kumar
Date		:29/04/2023
Description	:To find factorial of given number using recursion
Sample input	:1.Enter the value of N : 7
		 2.Enter the value of N : -1

Sample output	:1.Factorial of the given number is 5040
		 2.Invalid Input
*/


#include<stdio.h>

int main()		//Main function
{
    static int N, flag = 0, fact = 1;		//Global variable

    if( flag == 0)
    {
    	printf("Enter the value of N : ");	//To get i/p from user
    	scanf("%d",&N);
    }
    flag = 1;

    if (N >= 1 )					//To check number is negative ro not
    {
    	if(N <= 1)
    	{
    	    printf("Factorial of the given number is %d\n",fact);
    	}
    	else
    	{
    	    fact = fact * N;
    	    N = N-1;
    	    main();				//Recursive function
    	}
    }
    else
    {
	printf("Invalid Input\n");
    }

    return 0;
}


