/*
Name		:Nithish kumar
Date		:11/02/2023
Description	:To check the entered number is odd or even
Sample input	:1.Enter the value of 'n' : -2
		 2.Enter the value of 'n' : 2
		 3.Enter the value of 'n' : 0

Sample output	:1.-2 is negative even number
		 2.2 is positive even number
		 3.0 is neither odd nor even
*/


#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of 'n' : ");
    scanf("%d", &n);
   
   if (n == 0)		//To check the entered number is 0
   {
	printf("%d is neither odd nor even\n", n);
   }
   else
   {

    if (n%2 == 0)	//To check the entered number remainder is 0
   	 {		//If 0 then it is even
	    if (n > 0)
	    {
		printf("%d is positive even number\n", n);

	    }
	    else 
	    {
		printf("%d is negative even number\n", n);
	    }
	}

    else 		//If not 0 then it is odd
	{
	    if (n > 0)
	    {
		printf("%d is positive odd number\n", n);

	    }
	    else
	    {
		printf("%d is negative odd number\n", n);
	    }
	}
    
   } 

    return 0;
}
