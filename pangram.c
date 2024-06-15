/*
Name		:Nithish kumar
Date		:
Description	:
Sample input	:
Sample output	:
*/


#include<stdio.h>
#include<ctype.h>

int pangram( char *str )
{
    int arr[26] = {0};
    int res, count=0;
    char upper;

    while( *str != '\0' )
    {
	upper = toupper(*str);

	res = upper % 65;
	
	arr[res] = 1;

	str++;
    }

   for( int i=0; i<26; i++)
    {
	if( arr[i] == 1 )
	    count++;
    }
   return count;

}

int main()
{
    char str[200];
    
    printf("Enter the string: ");
    scanf("%200[^\n]",str);

    int count = 0;

    count = pangram(str);

    if( count==26 )
	printf("The Entered String is a Pangram String\n");
    else
	printf("The Entered String is not a Pangram String\n");

    return 0;
}


