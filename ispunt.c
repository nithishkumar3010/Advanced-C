/*
Name		:Nithish kumar
Date		:26/04/2023
Description	:To implement your own ispunct() function
Sample input	:1.Enter the character: a
		 2.Enter the character:$
Sample output	:1.Entered character is not punctuation character
		 2.Entered character is punctuation character
*/


#include<stdio.h>

int is_punct( char ch)		//Function definition
{
    if( ch>='0'&&ch<='9' || ch>='a'&&ch<='z' || ch>='A'&&ch<='Z' || ch==' ' )//is_punctuation
	return 1;
    else
	return 0;
}

int main()		//Main function
{
    char ch;		//Local variable
    int res = 0;

    printf("Enter the character: ");//To get i/p from user
    scanf("%c",&ch);

    res = is_punct(ch);		//Function call

    if ( res == 0)
	printf("Entered character is punctuation character\n");
    else
	printf("Entered character is not punctuation character\n");

    return 0;
}



