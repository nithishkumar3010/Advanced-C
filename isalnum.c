/*
Name		:Nithish kumar
Date		:26/04/2023
Description	:To implement your own isalnum() function
Sample input	:1.Enter the character: a
Sample output	:1.The character 'a' is an alnum character.
*/


#include<stdio.h>

int is_al_num( char ch)		//Function definition
{
    if( ch>='0'&&ch<='9' || ch>='a'&&ch<='z' || ch>='A'&&ch<='Z' )//alnum
	return 0;
    else
	return 1;
}

int main()		//Main function
{
    char ch;		//Local variable
    int res = 0;	//Local variable

    printf("Enter the character: ");	//Getting i/p from user
    scanf("%c",&ch);

    res = is_al_num(ch);		//Function call

    if ( res == 0)
	printf("The character '%c' is an alnum character.\n",ch);
    else
	printf("The character '%c' is not an alnum character.\n",ch);

    return 0;
}


