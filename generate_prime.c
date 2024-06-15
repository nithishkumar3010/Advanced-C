/*
Name		:Nithish kumar
Date		:29/04/2023
Description	:To check whether a given number is prime or not using function
Sample input	:1.Enter a number: 2
		 2.Enter a number: 4
		 3.Enter a number: -2

Sample output	:1.2 is a prime number
		 2.4 is not a prime number
		 3.Invalid input
*/


#include<stdio.h>

int prime(int num)			//Function definition
{
    int i, count = 0;			//Local variable

    for(i=1; i<=num; i++)
    {
	if(num%i == 0)
	    count++;
    }
    return count;
}

int main()				//Main function
{
    int num, count;			//Local variable

    printf("Enter a number: ");		//To get i/p from user
    scanf("%d",&num);

   if( num >1 )				//To check the i/p is positive
    {  
	count = prime(num);

      	if( count == 2)
    	    printf("%d is a prime number\n",num);
    	else
    	    printf("%d is not a prime number\n",num);

    }
    else
    {
	printf("Invalid input");
    }

    return 0;
}


