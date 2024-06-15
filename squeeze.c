/*
Name		:Nithish kumar
Date		:11/05/2023
Description	:To squeeze the character in s1 that matches any character in the string s2
Sample input	:1.Dennis Ritchie
	           Linux
Sample output	:1.Des Rtche
*/


#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>

void squeeze( char *ptr1, char *ptr2)
{
    int i, j, k;
    int len1 = strlen(ptr1);
    int len2 = strlen(ptr2);

    for(i=0; i<len1; i++)
    {
	for(j=0; j<len2; j++)
	{
	    if( *(ptr1+i) == *(ptr2+j) )
	    {
		for(k=i; k<len1; k++)
		{
		    *(ptr1+k)= *(ptr1+ (k+1));
		}
		i--;
	    }

	}

    }

}

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter s1 : ");
    fgets(str1,100,stdin);

    __fpurge(stdin);

    printf("Enter s2 : ");
    fgets(str2,100,stdin);

    squeeze(str1, str2);

    printf("%s\n", str1);

    return 0;
}


