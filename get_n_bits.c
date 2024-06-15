/*
Name		:Nithish kumar
Date		:22/04/2023
Description	:To get 'n' bits of a given number
Sample input	:1.Enter the number: 10
		   Enter number of bits: 3

Sample output	:Result = 2
*/


#include<stdio.h>

int fun(int, int);	//prototype

int main()
{
   int num, n, result;
   printf("Enter the number: ");
   scanf("%d", &num);

   printf("Enter number of bits: ");
   scanf("%d", &n);

   result=fun(num, n);		// Function call
   printf("Result = %d\n", result);

    return 0;
}

int fun(int num, int n)	//Function defition
{
    int mask, res;
    mask = (1<<n)-1;

    res= num&mask;

    return res;
}


