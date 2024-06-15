/*
Name		:Nithish kumar
Date		:12/06/2023
Description	:To implement itoa function
Sample input	:1.Enter the number : 1234
		 2.Enter the number : -1234
		 3.Enter the number : +1234
		 4.Enter the number : a1234

Sample output	:1.Integer to string is 1234
		 2.Integer to string is -1234
		 3.Integer to string is 1234
		 4.Integer to string is 0
*/


#include<stdio.h>

void my_strrev(int num, char *ptr, int count)	//Function definition
{
    int i =0, j = count -1;	//Local variable
    char temp;

    if( num < 0)		//To check the num is -ve or not
    {
   	i++;
    }

    while(i < j)		//To swap the character
    {

	temp = *(ptr+i);
	*(ptr+i) = *(ptr+j);
	*(ptr+j) = temp;

	i++;
	j--;
    }

}

int my_itoa(int num, char *str, int ret)	//Function definition
{
    int fnum = num, rem = 0, i = 0;		//Local variable
  
    if( num < 0 )			//To check the number is -ve or not 
    {
	fnum = -(num);			//If -ve change to positive
	*(str+i) = '-';
	i++;
    }

    /*Changing the number to character */
    if( ret != 0 )
    {
	while(fnum != 0)
	{
	    rem = fnum % 10;
	    fnum = fnum / 10;

	    *(str+i) = rem+48;	  

	    i++;
	}
	
	my_strrev(num, str, i);		//Function call
    }
    else
    {
	return 0;
    }

}

int main()
{
    int num, ret=0 ;
    char str[10] = "0";

    printf("Enter the number : ");
    ret = scanf("%d",&num);
	    
    my_itoa( num, str, ret);	//Function call

    printf("Integer to string is %s\n", str);

    return 0;
}


