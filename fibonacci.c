/*
Name		:Nithish kumar
Date		:
Description	:
Sample input	:
Sample output	:
*/


#include<stdio.h>

void fibonacci_series(int num, int first_term, int sec_term, int third_term, int flag)		//Function definition
{

    if( num >= 1)		//To check the number is positive
    {
    	if (flag == 0)
	{
    	    printf("%d, %d", first_term, sec_term);
	    flag = 1;
	}
	third_term = first_term+sec_term;

	if( third_term <= num )			//To check the series reached the limit
	{
	    printf(", %d", third_term);

	    first_term = sec_term;
	    sec_term =  third_term;
	    
	    fibonacci_series(num, first_term, sec_term, third_term, flag);	//Recursive function
	}
    }
    else
    {
	printf("Invalid input");
    }

}

int main()			//Main function
{
    int num;			//Local variable

    printf("Enter a number: ");//To get i/p from user
    scanf("%d",&num);

    fibonacci_series(num, 0, 1, 0, 0);//Function call
    printf("\n");
    return 0;
}


