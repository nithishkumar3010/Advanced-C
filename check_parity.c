/*
Name		:Nithish kumar
Date		:06/03/2023
Description	:To count number of set bits in a given number and print parity.
Sample input	:1.Enter the number: 7
		 2.Enter the number : 15

Sample output	:1.Number of set bits = 3
                   Bit parity is Odd
		 2.Number of set bits = 4
		   Bit parity is Even
*/


#include<stdio.h>

int main()
{
    int num,set=1, count=0;	//Initialization

    printf("Enter the number: ");
    scanf("%d", &num);		//Getting i/p from user

    while(num>0)	//Checking for condition
    {
	if( num&1 )
	{
	    count++;	//Counting the set bit 
	}
	num=(num>>1);	//Right shifting the number by 1
    }
    printf("Number of set bits = %d\n", count);

    if(count&1)		//Cheching for parity
	printf("Bit parity is Odd\n");
    else
	printf("Bit parity is Even\n");

    return 0;
}


