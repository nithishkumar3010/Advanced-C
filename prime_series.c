/*
Name		:Nithish kumar
Date		:30/04/2023
Description	:To generate the prime series upto the given limit using functions
Sample input	:1.Enter a number: 20
		 2.Enter a number: -2
Sample output	:1.2 3 5 7 11 13 17 19
		 2.Invalid input
*/


#include<stdio.h>

void prime_series(int num)		//Function definition
{
    int i, count, j;			//Local variable

    for(i=2; i<=num; i++)		
    {
	count=0;
	for(j=1; j<=num; j++)
    	{
    	    if( i%j == 0)
    		count ++;   
       	}
	if(count == 2)
	    printf("%d ",i);
    }
}

int main()				//Main function
{
    int num;				//Local variable

    printf("Enter a number: ");		//To get i/p from user
    scanf("%d",&num);

    if( num >1 )
    {
	prime_series(num);
    }
    else
    {
	printf("Invalid input\n");
    }

    return 0;
}


