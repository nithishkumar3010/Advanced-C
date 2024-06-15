/*
Name		:Nithish kumar
Date		:26/06/2023
Description	:To define a macro SIZEOF(x), without using sizeof operator
Sample input	:
Sample output	:
*/

#include <stdio.h>

#define SIZEOF(X) ( (char *)(&X + 1) - ((char *)&X) )    	//Defining macro for sizeof()

int main() 
{
    /*Declaring the variable with different data types*/
    char ch;
    char arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    char *ptr=arr;

    short num1;
    int num2;	
    unsigned int num3;
    long int num4;
    long long int num5;

    float f1;

    double d1;
    long double d2;

    /*Printing sizeof variables with SIZEOF macro */

    printf("Size of char : %zu byte\n", SIZEOF(ch));
    printf("Size of char array : %zu bytes\n", SIZEOF(arr));
    printf("Size of pointer : %zu bytes\n", SIZEOF(ptr));

    printf("Size of short int : %zu bytes\n", SIZEOF(num1));
    printf("Size of int : %zu bytes\n", SIZEOF(num2));
    printf("Size of unsigned int : %zu bytes\n", SIZEOF(num3));
    printf("Size of long int : %zu bytes\n", SIZEOF(num4));
    printf("Size of long long int : %zu bytes\n", SIZEOF(num5));

    printf("Size of float : %zu bytes\n", SIZEOF(f1));

    printf("Size of double : %zu bytes\n", SIZEOF(d1));
    printf("Size of long double : %zu bytes\n", SIZEOF(d2));
      
    return 0;
}
