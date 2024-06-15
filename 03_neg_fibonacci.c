/*
Name		:Nithish kumar
Date		:14/03/2023
Description	:To generate negative fibonacci series
Sample input	:1.-8
		 2.-10
		 3.-21
		 4.13

Sample output	:1.0 1 -1 2 -3 5 -8
		 2.0 1 -1 2 -3 5 -8
		 3.0 1 -1 2 -3 5 -8 13 -21
		 4.Invalid input
*/


#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");	//Getting input from user
    scanf("%d", &num);

    if (num <= 0)	//Checking the entered number is negative or not
    {
	int t1 = 0, t2 = 1;
    	int next = t1-t2;
	printf("%d %d ", t1,t2);
	
	while(-next >= num)
	{
	    printf("%d ",next);
	    t1 = t2;
	    t2 = next;
	    next = t1-t2;
	
	}

    }
    else	//For positive numbers
    {
	printf("Invalid input\n");
    }

        return 0;
}

