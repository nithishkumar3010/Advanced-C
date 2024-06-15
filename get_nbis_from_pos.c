/*
Name		:Nithish kumar
Date		:24/04/2023
Description	:To get 'n' bits from given position of a number
Sample input	:1.Enter the number: 12
		   Enter number of bits: 3
		   Enter the pos: 4

Sample output	:1.Result = 3
*/


#include<stdio.h>

int nbits(int num, int n, int pos)	//Function definition
{
    int shift = ((pos-n)+1), mask = (((1<<n)-1)<<shift), res;	//local variables
    res = num&mask;	//To get n bits

    res = res>>shift;	//To get get res

    return res;

}
int main()	//Main function
{
    int num, n, pos, res;	//Local variable

    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Enter number of bits: ");
    scanf("%d",&n);

    printf("Enter the pos: ");
    scanf("%d",&pos);

    res = nbits(num,n,pos);	//Function call

    printf("Result = %d\n",res);

    return 0;
}


