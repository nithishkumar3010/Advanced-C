/*
Name		:Nithish kumar
Date		:28/05/2023
Description	:To implement strtok function
Sample input	:Enter string1 : -;Bangalore;;::---Chennai:;Kolkata:;Delhi:-
		 Enter string2 : ;./-:

Sample output	:Tokens :
		 Bangalore
		 Chennai
		 Kolkata
		 Delhi
*/

#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char *my_strtok(char *str, const char *delim)	//Function definition of strtok function
{
    static char *ptr;		

    static int i = 0;
    int j = i, k = i;
    
    if( str != NULL )		
    {
	ptr = str;
    }
	
    if( *(ptr+i) == '\0' )
    {
	return NULL;
    }	

    while( *(ptr+j) != '\0' ) 			//To check the string is '\0' or not
    {
	int l = 0;
	while( *(delim+l) != '\0')		//To check the delimiter is '\0'
	{

	    if( *(ptr+j) == *(delim+l) )
	    {
		*(ptr+j) = '\0' ;
		i++;
		return (ptr+k);
	    }

 	    l++;
	}
	j++;
	i++;
    }
    return (ptr+k);
}

int main()			//Main function
{
    char str[50], delim[50];
    
    printf("Enter the string1 : ");//To get i/p from user
    scanf("%s", str);

    __fpurge(stdout);            //Flushing o/p buffer
 
    printf("Enter the string2 : ");//To get i/p from user
    scanf("%s", delim);

    __fpurge(stdout);		 //Flushing o/p buffer
    
    char *token = my_strtok(str, delim); //Function call
    printf("Tokens :\n");
    
    while (token)
    {
	if( *token != '\0' )
	{
    	    printf("%s\n", token);
	}
	token = my_strtok(NULL, delim);	//Function call
    }

    return 0;
}
