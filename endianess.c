/*
Name		:Nithish kumar
Date		:28/05/2023
Description	:To convert Little Endian data to Big Endian
Sample input	:1.Enter the size: 2
		   Enter any number in Hexadecimal: ABCD

		 2.Enter the size: 4
		   Enter any number in Hexadecimal: 12345678

Sample output	:1.After conversion CDAB

		 2.After conversion 78563412
*/


#include<stdio.h>

void endian(char *cptr, int size)		//Function definition
{
    int i = 0, j = 0, new_size = size/2;	//Local variables
    char temp;

    for( i=0, j=size-1; i<new_size; i++, j--)	//To swap the lsb to msb and vise versa
    {
	temp = *(cptr+i);
	*(cptr+i) = *(cptr+j);
	*(cptr+j) = temp;
    }

}

int main()				//Main function
{
    int size;

    printf("Enter the size: ");		//Getting i/p from user
    scanf("%d",&size);
    
    int num;

    printf("Enter any number in Hexadecimal: ");	//Getting i/p from user
    scanf("%X",&num); 

    char *cptr = (char *)&num;

    endian( cptr, size);				//Function call
  

    printf("After conversion %X\n", num);

    return 0;
}


