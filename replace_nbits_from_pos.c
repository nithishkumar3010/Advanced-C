/*
Name		:Nithish kumar
Date		:25/04/2023
Description	:To put the (b-a+1) lsb’s of num into val[b:a]
Sample input	:1.Enter the value of 'num' : 11
		   Enter the value of 'a' : 3
		   Enter the value of 'b' : 5
		   Enter the value of 'val': 174

Sample output	:1.Result : 158
*/


#include<stdio.h>

int replace_bits(int num, int a, int b, int val)	//Function definition 
{
    int n, mask1, mask2, res1, res2;			//Local variables
    n = b-a+1;						//n for shifting
    mask1 = ~(((1<<n)-1)<<a);				//mask for getting the n bits from value
    mask2 = ((1<<n)-1);					//mask for getting n bits from LSB end of num

    res1 = val&mask1;
    res2 = num&mask2;

    val = res1|(res2<<a);				//Updated value

    return val;
}

int main()						//Main function
{
    int num, a, b, val, res=0;				//Local variable

    printf("Enter the number: ");			//Getting i/p from user
    scanf("%d", &num);

    printf("Enter the value of 'a': ");			//Getting i/p from user

    scanf("%d", &a);

    printf("Enter the value of 'b': ");			//Getting i/p from user

    scanf("%d", &b);

    printf("Enter the value of 'val': ");			//Getting i/p from user

    scanf("%d", &val);

    res = replace_bits(num, a, b, val);

    printf("Result : %d\n",res);

    return 0;
}


