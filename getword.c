/*
Name		:Nithish kumar
Date		:15/06/2023
Description	:To implement getword function
Sample input	:1.Enter the string : Welcome to Emertxe
		 2.Enter the string : Hello

Sample output	:1.You entered Welcome and the length is 7
		 2.You entered Hello and the length is 5
*/


#include<stdio.h>

int getword(char *ptr)		//Function definition
{
    int i=0;

    while( *(ptr+i) != '\0')	//Condtion will run untill '\0'
    {
	if(*(ptr+i) == ' ')	//If space return to main()
	{
	    *(ptr+i) = '\0';
	    return i;
	}
	i++;			//To count the character
    }
    return i;
}

int main()
{
    char str[100];	//Local variable
    int count = 0;

    char *ptr;

    ptr = str;

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    count = getword(ptr);	//Function call

    printf("You entered %s and the length is %d\n",str, count);

    return 0;
}


