/*
Name		:Nithish kumar
Date		:19/03/2023
Description	:To print the numbers triangle pattern
Sample input	:4
Sample output	:1 2 3 4
		 5     6
		 7 8
		 9
*/


#include<stdio.h>

int main()
{

    int num;	//To get input from user

    printf("Enter a number: ");
    scanf("%d", &num);

    int i, j, count=1;	//Initialization
    for(i=1; i<=num; i++)	//For the iteration
    {
	for(j=1; j<=num; j++)	//For the iteration
	{
	    if( (i==1) || (j==1) || (i+j==num+1))	//To check the condtion 
	    {
		
		   printf("%d ",count);
	    	   count++;
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

