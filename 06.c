/*
Name		:Nithish kumar
Date		:19/03/2023
Description	:To print the numbers in X format 
Sample input	:4
Sample output	:1  4
		  23
		  23
		 1  4
*/


#include<stdio.h>

int main()
{

    int num;	//To get input from user

    printf("Enter a number: ");
    scanf("%d", &num);

    int i, j; 	//Initialization
    for(i=1; i<=num; i++)	//Condition checking and increment
    {
	for(j=1; j<=num; j++)	//Condition checking and increment
	{
	    if( (i==j)||(i+j==num+1)) 	//Checking for condition	
	    {
		   printf("%d",j);
	    }
	    else	//To print space
	    {
		printf(" ");
	    }

	}
	printf("\n");
    }

    return 0;
}


