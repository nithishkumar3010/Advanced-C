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
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0)
    {
	int t1 = 0, t2 = 1;
    	int next = t1+t2;
	printf("%d %d ", t1,t2);
	int i=0;
	while(i < num)
	{
	    printf("%d ",next);
	    t1 = t2;
	    t2 = next;
	    next = t1+t2;
	    i++;
	
	}

    }
    else
    {
	printf("Invalid input\n");
    }

        return 0;
}

