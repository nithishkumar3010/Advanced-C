/*
Name		:Nithish kumar
Date		:
Description	:
Sample input	:
Sample output	:
*/


#include<stdio.h>

int main()
{
    int n, start_day;

    printf("enter the value of 'n' : ");
    scanf("%d", &n);

    if( (n>0)&&(n<=365) )
    {
	printf("Choose First Day : \n");
	printf("1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n");
	
	printf("enter the value of 'start_day' : ");
        scanf("%d", &start_day);
	
	if ( (start_day>0)&&(start_day<=7) )
	{
	    
		switch ( (start_day+(n-1) )%7 )
		{
	    		case 1:
			   printf("The day is Sunday\n");
			   break;

			case 2:  
			   printf("The day is Monday\n");
			   break; 

			case 3:  
			   printf("The day is Tuesday\n");
			   break;  

			case 4:  
			   printf("The day is Wednesday\n");
			   break; 

			case 5:  
			   printf("The day is Thursday\n");
			   break; 

			case 6:  
			   printf("The day is Friday\n");
			   break; 

			case 7:  
			   printf("The day is Saturday\n");
			   break; 
		}
	}
	else
	{
	    printf("Error: Invalid input, first day should be > 0 and <= 7\n");
	}

    }
    else
    {
	printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
    }


    return 0;
}


