/*
Name		:Nithish kumar
Date		:25/04/2023
Description	:To implement Circular left shift
Sample input	:1.Enter num: 12
		   Enter n : 3
Sample output	:1.Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0
*/


#include<stdio.h>

int circular_left(int num, int n)	//Function definition
{
    int mask1, mask2, res1, res2;	//Local variable
    mask1 = ~((1<<(32-n))-1);		//Mask for getting n bits 
    res1 = num&mask1;			//To get n bits from the num

    mask2 = (res1>>(32-n))&((1<<n)-1);	//Moving the n bits from num to right side

    num = (num<<n);			//Left the num to n times

    res2 = num|mask2;			//Circular left shift

    for(int i=0; i<32; i++)		//Fetching the bits of circular left shift
    {
	if( res2&(1<<(31-i)) )
	    printf(" 1");
	else
	    printf(" 0");
    }
    
}

int main()				//Main function
{
    int num, n;				//Local variable

    printf("Enter num: ");		//To get i/p from user
    scanf("%d",&num);

    printf("Enter n: ");		//To get i/p from user
    scanf("%d",&n);

    printf("Result in Binary:");    
    circular_left(num, n);		//Function call
    printf("\n");

    return 0;
}


