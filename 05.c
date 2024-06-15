/*
Name		:Nithish kumar
Date		:20/03/2023
Description	:To generate AP, GP, HP series
Sample input	:Enter the First Number 'A': 2
		 Enter the Common Difference / Ratio 'R': 3
		 Enter the number of terms 'N': 5

Sample output	:AP = 2, 5, 8, 11, 14
		 GP = 2, 6, 18, 54, 162
		 HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
*/


#include<stdio.h>

int main()
{
    int A, R, N;	//Initializing variable A, R, N 

    printf("Enter the First Number 'A': ");	//Getting the value for A from user
    scanf("%d", &A);

    printf("Enter the Common Difference / Ratio 'R': ");	//Getting the value for A from user
    scanf("%d", &R);
    
    printf("Enter the number of terms 'N': ");		//Getting the value for A from user
    scanf("%d", &N);
	
    int AP = A, GP = A;		//Initializing value for AP, GP, HP
    float HP = (float)1/A;

    if(N>0)	//Checking the value N is greater then 0 or not
    {

	printf("AP = %d", AP);		//To generate AP series
	for(int i=1; i<N; i++)
	{
	   AP = AP + R;
	   printf(", %d", AP);
	}
	printf("\n");

	printf("GP = %d", GP);		//To generate GP series
	for(int i=1; i<N; i++)
	{
	   GP = GP * R;
	   printf(", %d", GP);
	}
	printf("\n");

	printf("HP = %f", HP);		//To generate HP series
	int AP = A;
	for(int i=1; i<N; i++)
	{
	   AP = AP+R;
	   
	   HP = (float)1/AP ;
	   printf(", %f", HP);
	}
	printf("\n");

    }
    else	//If N is less then 0 get executed
    {
	printf("Invalid input\n");
    }

    return 0;
}


