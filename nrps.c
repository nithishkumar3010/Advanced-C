/*
Name		:Nithish kumar
Date		:15/05/2023
Description	:To Generate consecutive NRPS of length n using k distinct character
Sample input	:1.Enter the number characters C : 3
		   Enter the Length of the string N : 6
		   Enter 3 distinct characters : a b c

		 2.Enter the number characters C : 3
		   Enter the Length of the string N : 7
		   Enter 3 distinct characters : a b a

Sample output	:1.Possible NRPS is abcbca
		 2.Error : Enter distinct characters
*/


#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>

int distinct(char *str,int k)		//Function definition to check the distict characters
{
    int i, j, count=0;

    for(i = 0; i < k; i++)		//To check the character is distinct
    {
	for(j = i+1; j <= k; j++)
	{
	    if( *(str+i) == *(str+j) )
	    {
		count++;
	    }
	    
	}

    }
    return count;
}

void nrps(char *str, int n, int k)	//Function definition to generate nrps
{
    int i=0, j=0, count=0;

    for(i=0; i<n; i++)			//To generate nrps
    {
	if( i%k==0 && i>0 )
	{
	    j++;
	}
	printf("%c", *(str+((i+j)%k)) );
    }

}

int main()				//Main function
{
    int k, n, ret = 0;			//Local variables

    printf("Enter the number of characters C : ");//Getting i/p from user
    scanf("%d", &k);

    printf("Enter the length of string N : ");//Getting i/p from user

    scanf("%d", &n);

    char str[k];

    printf("Enter %d distinct character : ",k);


    for(int i = 0; i < k; i++)			//Geting characters from user for the string
    {
    	scanf("\n%c", &str[i]);
    }

    ret = distinct(str, k);			//Function call

    if( ret == 0)				//To check distinct character or not
    {
	printf("Possible NRPS is ");
	nrps(str, n, k);			//Function call
	printf("\n");	
    }
    else
    {
	printf("Error : Enter distinct characters\n");
    }
    return 0;
}


