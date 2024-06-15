/*
Name		:Nithish kumar
Date		:11/06/2023
Description	:To count no. of characters, words and lines, entered through stdin
Sample input	:Hello world
		 Dennis Ritchie
		 Linux

Sample output	:Character count : 33
		 Line count : 3
		 Word count : 5
*/


#include<stdio.h>
#include<stdio_ext.h>

int main()
{
    char ch, prev_ch='\0';		//local variable
    int  character = 0, line=0, word=0;
    __fpurge(stdin);

    while( (ch=getchar()) != EOF )	//Condition will run untill ctrl+d
    {
    	    character++;

	if( ch == '\n')
	{
	    line++;
	}
	
	if( ((ch == '\t') || (ch == '\n') || (ch == ' ')) && ((prev_ch != '\t') && ( prev_ch != '\n') && (prev_ch != ' ')) )
	{
   	       word++;
   	   
	}
	    
	prev_ch = ch;

    }

    printf("Character count : %d\nLine count : %d\nWord count : %d\n", character, line, word);

    return 0;
}


