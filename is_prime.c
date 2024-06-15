/*
Name		:Nithish kumar
Date		:09/03/2023
Description	:To find entered number prime or not
Sample input	:1.Enter a number: 2
		 2.Enter a number: 4
		 3.Enter a number: -2

Sample output	:1.2 is a prime number
		 2.4 is not a prime number
		 3.Invalid input
*/


#include<stdio.h>

int main()
{
    int num, count=0, i;

    printf("Enter a number: ");	//Getting i/p from user
    scanf("%d", &num);

    if(num>1)	//To check the number is positive
    {
	for(i=1; i<=num; i++)
    	{
    	    if( num%i == 0 )
    	    {
    		count++;
    	    }
    	}
    	if(count==2)
    	    printf("%d is a prime number\n", num);
    	else
   	    printf("%d is not a prime number\n", num);
    } 
    else
    {
	printf("Invalid input\n");
    }


    return 0;
}


