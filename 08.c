/*
Name		:Nithish kumar
Date		:19/03/2023
Description	:To print pyramid pattern
Sample input	:4
Sample output	:4
		 3 4
		 2 3 4
                 1 2 3 4
		 2 3 4
		 3 4
		 4
*/


#include<stdio.h>

int main()
{
    int num; 	//To get input from user

    printf("Enter a number: ");
    scanf("%d", &num);

    int i, j;	//Initialization
    
   for(i=num; i>1; i--)		//For iteration	i
   {
       for(j=i; j<=num; j++)	//For iteration j
       {
	   printf("%d",j);
       }
       printf("\n");
   } 
   for(i=1; i<=num; i++)		//For iteration	i
   {
       for(j=i; j<=num; j++)	//For iteration j
       {
	   printf("%d",j);
       }
       printf("\n");
   } 


    return 0;
}


