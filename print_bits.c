/*
Name		:Nithish kumar
Date		:24/04/2023
Description	:To print 'n' bits from LSB of a number
Sample input	:1.Enter the number: 10
		   Enter number of bits: 12

Sample output	:1.Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0 
*/


#include<stdio.h>

int printbits(int num, int n)		//Function definition
{
    n = n-1;				//To Check the n bits from LSB
   
    for(int i=0; i<=n; i++)		//To get binary form from n bits
    {
	if(num&(1<<(n-i)))
	    printf("1");
	else
	    printf("0");
    }
}

int main()				//Main function
{
    int num, n;

    printf("Enter the number: ");	//Getting input from user
    scanf("%d",&num);

    printf("Enter number of bits: ");	//Getting input from user
    scanf("%d",&n);

    printf("Binary form of %d: ",num);
    printbits(num, n);			//Function call
    printf("\n");

    return 0;
}


