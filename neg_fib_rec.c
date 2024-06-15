/*
Name		:Nithish kumar
Date		:29/04/2023
Description	:To generate negative fibbonacci numbers using recursion
Sample input	:1.Enter a number: -8
		 2.Enter a number: 21
Sample output	:1.0, 1, -1, 2, -3, 5, -8
		 2.Invalid input
*/


#include<stdio.h>

void neg_fib(int num, int first_term, int sec_term, int third_term)	//Function definition
{
    if( num < 1)							//To check the number is negative or not
    {
	if(first_term == 0)						//To print first and second term of fibonacci series
	{
	    printf("%d, %d", first_term, sec_term);
	}
	third_term = first_term - sec_term;

	int dup_num = third_term;					//Duplicate of third term

	if ( dup_num < 0 )						//To make the third term negative
	{
	    dup_num = dup_num;
	}
	else
	{
	    dup_num = -dup_num;
	}
	
	if( dup_num >= num )						//To print negative fibonacci series till the number
	{
	    printf(", %d",third_term);
	    
	    first_term = sec_term;
	    sec_term = third_term;

	    neg_fib(num, first_term, sec_term, third_term);		//Recursive function
	}
    }
    else
    {
	printf("Invalid Input");
    }
}

int main()			//Main function
{
    int num;			//Local variable

    printf("Enter a number: ");//To get i/p from user
    scanf("%d",&num);

    neg_fib(num, 0, 1, 0);	//Function call
    printf("\n");

    return 0;
}


