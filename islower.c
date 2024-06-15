/*
Name		:Nithish kumar
Date		:26/04/2023
Description	:To implement your own islower() function
Sample input	:1.Enter the character: a
		 2.Enter the character:3
Sample output	:1.Entered character is lower case alphabet
		 2.Entered character is not lower case alphabet
*/


#include<stdio.h>

int is_lower(char ch)		//Function definition
{
    if( ch>='a'&&ch<='z' )	//is_lower
	return 0;
    else
	return 1;
}

int main()			//Main function
{
    char ch;			//Local variable

    printf("Enter the character: ");//To get i/p from user
    scanf("%c",&ch);

    int res=is_lower(ch);	//Function call

    if ( res==0 )
	printf("Entered character is lower case alphabet\n");
    else
	printf("Entered character is not lower case alphabet\n");


    return 0;
}


