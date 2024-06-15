/*
Name		:Nithish kumar
Date		:14/06/2023
Description	:Provide a menu to manipulate or display the value of variable of type t

Sample input	:
Sample output	:
*/


#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

void menu_1(void)		//Menu 1
{
    printf("Menu :\n");
    printf("1. Add element\n");
    printf("2. Remove element\n");
    printf("3. Display element\n"); 
    printf("4. Exit from the program\n\n");
}

void menu_2(void)		//Menu 2
{
    printf("Enter the type you have to insert:\n");
    printf("1. int\n");
    printf("2. char\n");
    printf("3. float\n");
    printf("4. double\n\n");

}


int main()
{
    void *ptr = malloc(8);	//Local variable pointer

    if (ptr == NULL) 		//To check the memory is allocated or not
    {
	printf("Memory allocation failed!\n");
	return 1;
    }


    int ch1_flag = 0, ch2_flag = 0, in_flag = 0, sh_flag = 0, fl_flag = 0, d_flag = 0, choice_menu_1, choice_menu_2;		//local variables
		
    int rem_choice = 0 ;

    do
    {
	menu_1();	//Print menu 1

	printf("Choice --->");
	scanf("%d",&choice_menu_1);
	

	switch(choice_menu_1)
	{
	    case 1:
		menu_2();	//Print menu 2

		printf("Choice --->");
		scanf("%d",&choice_menu_2);

		switch(choice_menu_2)
		{
		    case 1:    //Adding element to int
			if( (in_flag == 0) && (fl_flag != 1) )
			{
			    printf("Enter the int : ");
			    scanf("%d",(int *)(ptr+4));
			    in_flag = 1;
			}
			else
			{
			    printf("Don't have enough space to store\n\n");
			}
			break;
		    
		    case 2:    //Adding element to char
			if( (ch1_flag == 0) && (d_flag != 1) )
			{
			    printf("Enter the char : ");
			    __fpurge(stdin);
			    scanf("%c",(char *)(ptr+0));
			    ch1_flag = 1;
			}

			else if( (ch2_flag == 0) && (d_flag != 1) )
			{
			    printf("Enter the char : ");
			    __fpurge(stdin);
			    scanf("%c",(char *)(ptr+1));
			    ch2_flag = 1;
			}

			else
			{
			    printf("Don't have enough space to store\n\n");
			}
			break;

		    case 3:    //Adding element to float
			if( (fl_flag == 0) && (in_flag !=1 ))
			{
			    printf("Enter the float : ");
			    scanf("%f",(float *)(ptr+4));
			    fl_flag = 1;
			}
			else
			{
			    printf("Don't have enough space to store\n\n");
			}
			break;

		    case 4:    //Adding element to double
			if( (d_flag == 0) && (ch1_flag != 1) )
			{
			    printf("Enter the double : ");
			    scanf("%lf",(double *)(ptr+0));
			    d_flag = 1;
			}
			else
			{
			    printf("Don't have enough space to store\n\n");
			}
			break;

		    default:
			printf("Only enter the option from menu!!\n");

		}
		break;

	    case 2:   //Removing element
		printf("----------------------\n\n");

		if(  ch1_flag == 1)
		{
		    printf("0 -> %c\n", *(char *)(ptr+0));
    
		    if(  ch2_flag == 1)
		    {
    			printf("0 -> %c\n", *(char *)(ptr+1));
		    }    	
		}
		
		if(  in_flag == 1)
		{
		    printf("1 -> %d\n", *(int *)(ptr+4));
		}
		
		if(  fl_flag == 1)
		{
		    printf("1 -> %f\n", *(float *)(ptr+4));
		}
		
		if(  d_flag == 1)
		{
		    printf("0 -> %lf\n",*(double *)(ptr+0));
		}
		printf("\n----------------------\n\n");

		printf("Enter the index value to be deleted : ");
		scanf("%d",&rem_choice);

		switch(rem_choice)
		{
		    case 0:	//Reset the index
			printf("index %d successfully deleted\n\n",rem_choice);
			ch1_flag =0;
			ch2_flag =0;
			d_flag = 0;
			
			break;
		    case 1:
			printf("index %d successfully deleted\n\n",rem_choice);
			fl_flag = 0;
			in_flag = 0;

			break;

		    default:
			printf("Only enter the above index!!\n\n");
		}

		break;

	    case 3:	//Display store variables

		printf("----------------------\n\n");

		if(  ch1_flag == 1)
		{
		    printf("0 -> %c (char)\n", *(char *)(ptr+0));
    
		    if(  ch2_flag == 1)
		    {
    			printf("0 -> %c (char)\n",  *(char *)(ptr+1));
		    }
		}
		
		if(  in_flag == 1)
		{
		    printf("1 ->%d (int)\n",  *(int *)(ptr+4));
		}
		
		if(  fl_flag == 1)
		{
		    printf("1 -> %f (float)\n", *(float *)(ptr+4));
		}
		
		if(  d_flag == 1)
		{
		    printf("0 -> %lf(double)\n", *(double *)(ptr+0));
		}


		printf("\n----------------------\n\n");


		break;

	    case 4:	//Exit
		exit(0);
		break;

	    default:
			
		printf("Only enter the option from menu!!\n");
		
	}
    }while(1);


    return 0;
}


