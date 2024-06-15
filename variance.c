/*
Name		:Nithish kumar
Date		:28/05/2023
Description	:To find variance calculation with dynamic arrays
Sample input	:Enter the no.of elements : 10
		 Enter the 10 elements:
		 [0] -> 9
		 [1] -> 12
		 [2] -> 15
		 [3] -> 18
		 [4] -> 20
		 [5] -> 22
		 [6] -> 23
		 [7] -> 24
		 [8] -> 26
		 [9] -> 31

Sample output	:Variance is 40.000000
*/


#include<stdio.h>
#include<stdlib.h>

float variance(int *ptr, int size)	//Function definition
{
    int i, sum = 0, mean = 0, var_sum = 0;
    float var = 0.0;

    for( i=0; i<size; i++)	//Mean
    {
	sum = sum+(*(ptr+i));
    }
    mean = sum/size;

    for( i=0; i<size; i++ )	//D_sqr
    {
	*(ptr+i) = *(ptr+i) - mean;
    }

    for( i=0; i<size; i++ )	//Square of D_srr
    {
	*(ptr+i) = (*(ptr+i)) * (*(ptr+i)) ;
    }

    for( i=0; i<size; i++ )	//Sum of D_sqr
    {
	var_sum = var_sum + (*(ptr+i)) ;
    }
    var = ((float)var_sum) / size;	//Variance

    return var;
    
}

int main()
{
    int N;

    printf("Enter the no.of elements : " );
    scanf("%d", &N);

    int *arr;
    arr = malloc(N);		//Dynamic allocation

    printf("Enter the %d elements:\n",N);

    for(int i=0; i<N; i++)
    {
	printf("[%d] -> ", i);
	scanf("%d",&arr[i]);
    }

    float var = 0;
     
    var = variance(arr, N);	//Function call

    printf("Variance is %f\n", var);

    free(arr);

    return 0;
}


