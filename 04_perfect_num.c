/*
Name		:Nithish kumar
Date		:13/02/2023
Description	:To check the entered number is perfect number or not.
Sample input	:1.6
		 2.8
		 3.-1

Sample output	:1.Yes, entered number is perfect number
		 2.No, entered number is not a perfect number
		 3.Error : Invalid Input, Enter only positive number
*/



#include<stdio.h>

int main()
{
    int n, sum=0;
    
    printf("Enter a number: ");	//Getting input from the user.
    scanf("%d", &n);


    if (n > 0)	//Check entered number not negative
    {

	int i=1;
	while ( i < n)	//Checking for divisor upto n number
	{
	  
	    if(n%i == 0)	//Checking for every divisor
	    {
		sum = sum+i;	//Add the divisors of n number
	    }

	    i++; 
	}

	if( sum == n)	//Checking the sum of divisor is equal to entered numner or not
	{
	    printf("Yes, entered number is perfect number\n");
	}
	else
	{
	    printf("No, entered number is not a perfect number\n");
	}

    }
    else	//If the entered number is negative
    {
	printf("Error : Invalid Input, Enter only positive number\n");
    }

    return 0;
}

