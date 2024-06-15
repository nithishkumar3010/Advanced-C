/*
Name		:Nithish kumar
Date		:24/06/2023
Description	:To Implement the student record using array of structures
Sample input	:
Sample output	:
 */


#include<stdio.h>
#include<stdlib.h>

struct Stu_record		//Structure for student record
{
    int roll_no;
    char name[20];
    int *marks;
    char grade;
    float avg;
};

float student_average(float total_mark, int no_of_sub)	//To calculate average 
{
    float avg = total_mark/no_of_sub;
    return avg;
}

char student_grade(int avg)	//To calculate grade
{

    if( avg>=90 && avg<=100 )
    {
	return 'A';
    }
    else if( avg>=80 && avg<90 )
    {
	return 'B';
    } 
    else if( avg>=70 && avg<80 )
    {
	return 'C';
    }
    else if( avg>=60 && avg<70 )
    {
	return 'D';
    }
    else
    {
	return 'F';
    }

}

int my_strcmp(const char *str1, const char *str2) //String compare function
{
    while( *str1 == *str2 && *str1 !='\0' && *str2 !='\0' )
    {
	str1++;
	str2++;
    }
    if( *str1 == *str2 )
    {
	return 0;
    }
    else
    {
	return *str1 - *str2;
    }
}

int main()
{
    char option = 'y';

    /*Read no.of student*/
    int n, i, j, n_sub, choice, flag = 0, u_roll_no;
    float avg;
    char u_name[20];

    printf("Enter no.of students : ");
    scanf("%d",&n);

    /*Declare the array of structure*/
    struct Stu_record student[n];

    /*Read no.of subjects*/
    printf("Enter no.of subjects : ");
    scanf("%d",&n_sub);

    char *sub_name[n_sub];

    /*Read name of subjects*/

    for(i=0, j=1; i<n_sub, j<=n_sub; i++, j++)
    {
	sub_name[i] = malloc(20*sizeof(char));

	if( sub_name[i] == NULL)
	{
	    printf("Memory not allocated\n");
	    return 1;
	}

	printf("Enter the name of subject %d : ", j);
	scanf("%s", sub_name[i]);
    }

    /*Read student info*/
    for(i=0; i<n; i++)
    {
	avg =0;
	printf("----------Enter the student datails-------------\n");
	student[i].marks = malloc(n_sub*sizeof(int));

	if( student[i].marks == NULL)
	{
	    printf("Memory not allocated\n");
	    return 1;
	}


	printf("Enter the student Roll no. : ");
	scanf("%d", &student[i].roll_no);

	printf("Enter the student %d name : ",student[i].roll_no );	
	getchar();
	scanf("%20[^\n]", student[i].name);

	for(j=0; j<n_sub; j++)
	{
	    printf("Enter %s mark : ", sub_name[j]);
	    scanf("%d", &student[i].marks[j]);
	    avg = avg + student[i].marks[j];
	}

	student[i].avg = student_average(avg, n_sub);

	student[i].grade = student_grade(student[i].avg);
    }
    do
    {
	/*Display menu*/
	printf("----Display Menu----\n");

	printf("1. All student details\n");
	printf("2. Particular student details\n");

	printf("Enter your choice : ");
	scanf("%d",&choice);

	switch(choice)
	{
	    case 1:

		printf("Roll No.   Name           ");

		for(i=0; i<n_sub; i++)
		{
		    printf("%s       ", sub_name[i]);
		}
		printf("Average       Grade\n");

		for(i=0; i<n; i++)
		{
		    printf("%d          %s", student[i].roll_no, student[i].name);
		    for(j=0; j<n_sub; j++)
		    {
			printf("          %d", student[i].marks[j]);

		    }

		    printf("            %g            %c\n", student[i].avg, student[i].grade);
		}

		break;

	    case 2:
		printf("\n----Menu for Particular student----\n");

		printf("1. Name.\n");
		printf("2. Roll no.\n");

		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
		    case 1://name search

			printf("Enter the name of the student : ");
			getchar();
			scanf("%20[^\n]", u_name);

			for(i=0; i<n; i++)
			{
			    if( my_strcmp(student[i].name, u_name) == 0)
			    {
				flag=1;
				break;
			    }
			}

			if(flag != 1)
			{
			    printf("Name not found\n");
			}
			else
			{
			    printf("Roll No.   Name           ");
			    for(j=0; j<n_sub; j++)
			    {
				printf("%s         ", sub_name[j]);
			    }
			    printf("Average       Grade\n");

			    /************info**********/

			    printf("%d          %s", student[i].roll_no, student[i].name);

			    for(j=0; j<n_sub; j++)
			    {
				printf("          %d", student[i].marks[j]);

			    }

			    printf("            %g            %c\n", student[i].avg, student[i].grade);
			}
			break;

		    case 2://Rollno. search

			printf("Enter the rollno of the student : ");
			scanf("%d", &u_roll_no);

			for(i=0; i<n; i++)
			{ 
			    if( u_roll_no == student[i].roll_no )
			    {
				flag=1;
				break;				
			    }
			}

			if(flag != 1)
			{
			    printf("Rollno. not found\n");
			}
			else
			{
			    printf("Roll No.   Name           ");
			    for(j=0; j<n_sub; j++)
			    {
				printf("%s         ", sub_name[j]);
			    }
			    printf("Average       Grade\n");

			    /************info**********/
			    printf("%d          %s", student[i].roll_no, student[i].name);

			    for(j=0; j<n_sub; j++)
			    {
				printf("          %d", student[i].marks[j]);

			    }

			    printf("            %g            %c\n", student[i].avg, student[i].grade);

			}

			break;

		    default:
			printf("Entered option is not there!!\n");
		}

		break;

	    default :
		printf("Entered option is not there!!\n");
	}

	printf("Do you want to continue to display(Y/n) : ");
	getchar();
	scanf("%c",&option);
    }while(option == 'y' || option == 'Y');



    return 0;
}


