    /*do
    {
	/*Display menu
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

		printf("Enter you choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
		    case 1://name search

			printf("Enter the name of the student : ");
			scanf("%20[^\n]", u_name);

			for(i=0; i<n; i++)
			{
			    if( my_strcmp(student[i].name, u_name) == 0)
			    {
				flag=1;
				break;
			    }
			}

			/*if(flag != 1)
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

			/************info**********

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
			printf("flag:%d, i:%d\n", flag, i);
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

			    /************info**********
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
    }while(option == 'y' || option == 'Y');*/

