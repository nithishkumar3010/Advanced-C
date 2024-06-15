/*
Name		:Nithish kumar
Date		:27/05/2023
Description	:To print all possible combinations of given string.
Sample input	:1.Enter a string: abc
		 2.Enter a string: abb

Sample output	:1.All possible combinations of given string :abc
		  acb
		  bca
		  bac
		  cab
		  cba

		 2.Error: please enter distinct characters.
*/



#include<stdio.h>
#include<string.h>

int my_strlen( char *str)	//Function to find the length of string
{
    int count=0;

    while( *str != '\0' )
    {
	count++;
	str++;
    }
    return count;
}

int distinct( char *str, int len )//Function to check distinct characters
{
    int i, j, count=0;

    for( i=0; i<len; i++)
    {
	for(j=i+1; j<=len; j++)
	{
	    if( *(str+i) == *(str+j) )
	    {
		count++;
	    }
	}
    }
    return count;
}

char combination( char *str, int i, int len)//Function to create the combinations of given string
{
    int j;
    char temp = 0;

    if( i == len )
    {
	printf("%s\n",str);
	return 0;
    }

    for( int j=i; j<=len; j++)
    {
	temp = str[i];
	str[i] = str[j];
	str[j] = temp;

	combination(str, i+1, len);
	
	temp = str[i];
	str[i] = str[j];
	str[j] = temp;

    }
}

int main()		//Main function
{
    char str[100];

    int count = 0;

    int len;

    printf("Enter a string: ");
    scanf("%100[^\n]",str);

    len = my_strlen(str)-1;	//Function call
    count = distinct(str, len);//Function call

    if( count == 0)
    {
	printf("All possible combinations of given string :");
	combination(str, 0, len);	//Function call
    }
    else
    {
	printf("Error: please enter distinct characters.\n");
    }

    return 0;
}

