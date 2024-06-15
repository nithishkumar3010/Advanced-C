/*
Name		:Nithish kumar
Date		:26/04/2023
Description	:To implement your own isxdigit() function
Sample input	:1.Enter the character:3
		 2.Enter the character:G
Sample output	:1.Entered character is  an hexadecimal digit
		 2.Entered character is not an hexadecimal digit
*/


#include<stdio.h>

int is_digit( char ch)		//Function definition
{
    if( ch>='0'&&ch<='9' || ch>='a'&&ch<='f' || ch>='A'&&ch<='F' )	//is_x_digit
	return 0;
    else
	return 1;
}

int main()			//Main funnction
{
    char ch;			//Local variable
    int res = 0;		//Local variable

    printf("Enter the character: ");//To get i/p from user
    scanf("%c",&ch);

    res = is_digit(ch);		//Function call

    if ( res == 0)
	printf("Entered character is an hexadecimal digit\n");
    else
	printf("Entered character is not an hexadecimal digit\n");

    return 0;

}


