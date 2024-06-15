/*
Name		:Nithish kumar
Date		:12/06/2023
Description	:To implement atoi function
Sample input	:1.Enter a numeric string: 12345
		 2.Enter a numeric string: -12345
		 3.Enter a numeric string: +12345
		 4.Enter a numeric string: +-12345
		 5.Enter a numeric string: 12345-
		 6.Enter a numeric string: abcd12345
		 7.Enter a numeric string: 12345abcd

Sample output	:1.String to integer is 12345
		 2.String to integer is -12345
		 3.String to integer is 12345
		 4.String to integer is 0
		 5.String to integer is 12345
		 6.String to integer is 0
		 7.String to integer is 12345
 */


#include<stdio.h>

int my_atoi(char *str)		//To convert the string  to integer if numbers
{
    int num = 0, res = 0, flag = 0, i = 0;	//Local variable

    if( *(str+0) == '-' )			//If 1st character of string is '-' or '+' then move to next charater
    {
	flag = 1;
	i++;
    }
    else if( *(str+0) == '+' )
    {
	flag = 0;
	i++;
    }
    

    while( *(str+i) != '\0' )			
    {
	if( *(str+i) >= '0' && *(str+i) <= '9' )  //To check the string character is numbers or not
	{
	    res = *(str+i)-48 ;

	    num = (num*10) + res;
	}
	else
	{
	    return num;
	}
	i++;
    }

    if( flag == 1)	//To return the num a +ve / -ve
    {
	return -(num);
    }
    else
    {
	return num;
    }
}

int main()
{
    char str[20];

    printf("Enter a numeric string: ");
    scanf("%s",str);

    printf("String to integer is %d\n", my_atoi(str));

    return 0;
}


