/******************************************************************************
 **  Copyright sun4running@outlook.com
 **
 ** FILE NAME
 **    stringreverse.c
 ** FILE DESCRIPTION
 **    This file contains the strings reverse implementation.
 **      
 ** FILE History:
 **-----------------------------------------------------------------------------
 **  Ver   Date              Author                        Description
 **-----------------------------------------------------------------------------
 **  1.0   06/27/2016        Li Jun                        Create
 *******************************************************************************/

/******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define BLOCK_SIZE 10

int main(void)
{
	int length,n=0,size=BLOCK_SIZE;
	char *s1 = NULL,c;
	char *s2 = (char *)malloc(size);
	if( NULL == s2 )
	{
		printf("malloc failed\n\r");
		free(s2);
		return -1;
	}

	printf("Please Input strings need reverse:\n\r");
	while((c = getchar()) != '\n')
	{
		if( n < size)
		{
			s2[n++] = c;
		}
		else
		{
			size += BLOCK_SIZE;
			s1 = realloc(s2,size);
			if(NULL == s1)
			{
				printf("realloc failed\n\r");
				free(s2);
				return -2;
			}
			s2 = s1;
			s2[n++] = c;
		}
		//printf("%d",c);
	}
	length = n;
	printf("The reversed strings is:\n\r");
	while(n >= 0)
	{
		printf("%c",s2[n--]);
	}
	printf("\n\r");
	
	return 0;
}


