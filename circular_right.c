/*
Name		:Nithish kumar
Date		:26/04/2023
Description	:To implement Circular right shift
Sample input	:1.Enter num: 12
		   Enter n : 3
Sample output	:1.Result : 10000000 00000000 00000000 00000001
*/


#include<stdio.h>

void circular_right_shift(int num, int n)		//Function definition
{
    int mask1, mask2, res1, res2, final_res;		//Local variables
    
    mask1 = ((1<<n)-1);					//Getting n bits from LSB side

    mask2 =  ((1<<(32-n))-1);				//To make n bits 0 on MSB side

    res1 = num&mask1;					//To get n bits from num

    res1 = (res1<<(32-n));				//Moving it to MSB side

    num = num>>n;					//Right shift of number

    res2 = num&mask2;					//To make n bits 0 on MSB side
    
    final_res = res1|res2;				//Final result

    for(int i=0; i<32; i++)
    {
	if( final_res&(1<<(31-i)) )
	    printf(" 1");
	else
	    printf(" 0");
    }

}

int main()						//Main function
{
    int num, n;						//Local variables

    printf("Enter num: ");				//Getting i/p from user
    scanf("%d", &num);

    printf("Enter n: ");				//Getting i/p from user
    scanf("%d", &n);

    printf("Result :");
    circular_right_shift(num, n);			//Function call
    printf("\n");

    return 0;
}


