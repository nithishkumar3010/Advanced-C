/*
Name		:Nithish kumar
Date		:13/06/2023
Description	:To reverse the given string using iterative method
Sample input	:1.Hello World
		 2.EMERTXE

Sample output	:1.dlroW olleH
		 2.EXTREME
*/


#include<stdio.h>

int my_strlen(char *str)	//Function definition to calculate the string length
{
    int count = 0, i = 0;

    while( *(str+i) != '\0' )
    {
	count++;
	i++;
    }
    return count;   
}

void reverse_iter(char *str)		//Function definition
{
    int len, j;
    len = my_strlen(str);
    j = len-1;

    char temp;

    for( int i=0; i<(len/2); i++)	//Reversing the string with index
    {
	temp = *(str+i);

	*(str+i) = *(str+j);

	*(str+j) = temp;
	j--;
    }

}

int main()
{
    char str[50];

    printf("Enter any string : ");
    scanf("%[^\n]",str);

    reverse_iter(str);		//Function call

    printf("Reversed string is : %s\n", str);

    return 0;
}


