/*
Name		:Nithish kumar
Date		:
Description	:
Sample input	:
Sample output	:
*/

#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>

int distinct(char *str,int k)		
{
    int i, j, count=0;

    for(i = 0; i < k; i++)		
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

void nrps(char *str, int n, int k)	
{
    int i=0, j=0, count=0;
    char temp;

    for(i=0; i<n; i++)			
    {
	if( count == k)
	{
	    temp = *(str+0);
	    *(str+0) = *(str+1);
	    *(str+1) = temp;
	    count=0;
	}
	printf("%c",*(str+count));
	count++;

    }

}

int main()				
{
    int k, n, ret = 0;			

    printf("Enter the number of characters C : ");
    scanf("%d", &k);

    printf("Enter the length of string N : ");

    scanf("%d", &n);

    char str[k];

    printf("Enter %d distinct character : ",k);

    __fpurge(stdin);

    for(int i = 0; i < k; i++)		
    {
    	scanf("%c", &str[i]);
    }

    ret = distinct(str, k);		

    if( ret == 0)		
    {
	printf("Possible NRPS is ");
	nrps(str, n, k);
	printf("\n");	
    }
    else
    {
	printf("Error : Enter distinct characters\n");
    }
    return 0;
}
