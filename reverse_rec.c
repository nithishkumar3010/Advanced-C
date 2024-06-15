/*
Name		:Nithish kumar
Date		:13/06/2023
Description	:To reverse the given string using recursive method
Sample input	:1.Enter a string : Hello World
		 2.Enter a string : EMERTXE

Sample output	:1.Reverse string is : dlroW olleH
		 2.Reverse string is : EXTREME
*/


#include<stdio.h>
int my_strlen(char *str)	//Function definition to calculate string length
{
    int i =0, count = 0;

    while( *(str+i) != '\0')
    {
	count++;
	i++;
    }
    return count;
}

int reverse_rec(char *str, int start, int end)	//Function definition
{
    char temp; 

    if(start < end)				//To check the string character reached middle until that swap
    {
	temp = *(str+start);
	*(str+start) = *(str+end);
	*(str+end) = temp;

	reverse_rec( str, start+1, end-1);	//Recursive function
	return 0;
    }

    return 0;
}

int main()
{

    char str[30];
    int len;

    printf("Enter a string : ");
    scanf("%[^\n]", str);

    len = my_strlen(str);		//Function call

    reverse_rec(str, 0, len-1);		//Function call

    printf("Reversed string is %s\n", str);

    return 0;
}


