/*
Name		:Nithish kumar
Date		:07/03/2023
Description	:To check N th bit is set or not, If yes, clear the M th bit
Sample input	:1.Enter the number: 19 
		   Enter 'N': 1
		   Enter 'M': 4

Sample output	:1.Updated value of num is 3 
*/


#include<stdio.h>

int main()
{
    int num, N, M;	//Declaration

    printf("Enter the number: ");	//Getting i/p from user
    scanf("%d", &num);
 
    printf("Enter 'N': ");	//Getting i/p from user
    scanf("%d", &N); 
  
    printf("Enter 'M': ");	//Getting i/p from user
    scanf("%d", &M);

    if( num & (1<<N) )		//Checking the Nth bit is set bit or not.
    {
	num= ( num & (~(1<<M)) );	//Changing the Mth bit of entered number.
 	
    }

    printf("Updated value of num is %d\n", num);

    return 0;
}


