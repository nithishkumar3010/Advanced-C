/*
Name		:Nithish kumar
Date		:11/06/2023
Description	:To replace each string of one or more blanks by a single blank
Sample input	:Welcome                to Emertxe
Sample output	:Welcome to Emertxe
*/


#include<stdio.h>

void replace_blank(char *str)	//Function defintiton
{
    int i = 0, j;

    while( *(str+i) != '\0' )		//To check for the null character
    {
	if( *(str+i) == ' ' || *(str+i) == '\t' ) //To check the next character is space or tab
	{
	    if( *(str+(i+1)) == ' ' || *(str+(i+1)) == '\t' )	//To check the current character is space or tab

	    {
		j = i;
		while( *(str+j) != '\0' )	//Swap
		{
		    *(str+j) = *(str+(j+1));
		    j++;
		}
		i--;
	    }

	}
	i++;
    }
}

int main()
{
    char str[50];

    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);

    replace_blank(str);		//Function call

    printf("%s\n",str);		//Print the string without blank

    return 0;
}


