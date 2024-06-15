/*
Name		:Nithish kumar
Date		:19/06/2023
Description	:To define a macro swap (t, x, y) that swaps 2 arguments of type t

Sample input	:
Sample output	:
 */


#include <stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>

#define SWAP(t, x, y) {t temp = x; x = y; y = temp;}

int main() {
    printf("1. Int\n");
    printf("2. Char\n");
    printf("3. Short\n");
    printf("4. Float\n");
    printf("5. Double\n");
    printf("6. String\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
	case 1: // Swapping int

	    {
		int num1, num2;
		printf("Enter num1: ");
		scanf("%d", &num1);
		printf("Enter num2: ");
		scanf("%d", &num2);

		SWAP(int, num1, num2);

		printf("After swapping:\n");
		printf("num1: %d\n", num1);
		printf("num2: %d\n", num2);
		break;
	    }
	case 2: // Swapping char
	    {
		char num1, num2;
		__fpurge(stdin);
		printf("Enter num1: ");
		scanf("%c", &num1);
		__fpurge(stdin);
		printf("Enter num2: ");
		scanf("%c", &num2);

		SWAP(char, num1, num2);

		printf("After swapping:\n");
		printf("num1: %c\n", num1);
		printf("num2: %c\n", num2);

		break;
	    }
	case 3:// Swapping short
	    {
		short num1, num2;
		printf("Enter num1: ");
		scanf("%hd", &num1);
		printf("Enter num2: ");
		scanf("%hd", &num2);

		SWAP(short, num1, num2);

		printf("After swapping:\n");
		printf("num1: %hd\n", num1);
		printf("num2: %hd\n", num2);

		break;
	    }
	case 4: // Swapping float
		{
		    float num1, num2;
		    printf("Enter num1: ");
		    scanf("%f", &num1);
		    printf("Enter num2: ");
		    scanf("%f", &num2);

		    SWAP(float, num1, num2);

		    printf("After swapping:\n");
		    printf("num1: %f\n", num1);
		    printf("num2: %f\n", num2);

		    break;
		}
	case 5: // Swapping double
		{
		    double num1, num2;
		    printf("Enter num1: ");
		    scanf("%lf", &num1);
		    printf("Enter num2: ");
		    scanf("%lf", &num2);

		    SWAP(double, num1, num2);

		    printf("After swapping:\n");
		    printf("num1: %lf\n", num1);
		    printf("num2: %lf\n", num2);
		    break;
		}
	case 6: // Swapping string
		{
		    char *num1, *num2;

		    num1 = (char *)malloc(20*sizeof(num1)); 
		    num2 = (char *)malloc(20*sizeof(num1)); 

		    printf("Enter num1: ");
		    scanf("%s", num1);
		    printf("Enter num2: ");
		    scanf("%s", num2);

		    SWAP(char*, num1, num2);

		    printf("After swapping:\n");
		    printf("num1: %s\n", num1);
		    printf("num2: %s\n", num2);

		    break;
		}
	default:
		printf("Invalid choice.\n");
    }

    return 0;
}

