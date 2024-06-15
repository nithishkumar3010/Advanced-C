/*
Name		:Nithish kumar
Date		:24/04/2023
Description	: To toggle 'n' bits from given position of a number
Sample input	:1.Enter the number: 10
		   Enter number of bits: 3
		   Enter the pos: 5

Sample output	:1.Result = 50
*/


#include<stdio.h>

int togglebits(int num, int n, int pos)	//Function definition
{
    int shift = ((pos-n)+1), mask = (((1<<n)-1)<<shift);	//Local variables
    int res = (num^mask);	//To get result

    return res;
}
int main()	//Main function
{
    int num, n, pos, res;	//Local variables

    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Enter number of bits: ");
    scanf("%d",&n);

    printf("Enter the pos: ");
    scanf("%d",&pos);
    
    res = togglebits(num, n, pos);	//Function call

    printf("Result = %d\n", res);

    return 0;
}


