/*
Name		:Nithish kumar
Date		:22/04/2023
Description	:To replace 'n' bits of a given number
Sample input	:1.Enter the number: 10
		   Enter number of bits: 3
		   Enter the value: 12

Sample output	:Result = 12
*/


#include<stdio.h>
int replace(int num, int n, int val)	//function definition
{
    int mask1, mask2, res1, res2, res;	//variable declaration

    mask1=~((1<<n)-1);	//mask 
    mask2=((1<<n)-1);

    res1= num&mask1;
    res2= val&mask2;

    res= res1|res2;

    return res;	//return value

}

int main()
{
    int num, n, val, res;		//variable declaration

    printf("Enter the number: ");	//Getting input from user
    scanf("%d", &num);

    printf("Enter number of bits: ");	//Getting input from user
    scanf("%d", &n);

    printf("Enter the value: ");	//Getting input from user
    scanf("%d", &val);

    res=replace(num,n,val);		//function call

    printf("Result = %d\n", res);

    return 0;
}


