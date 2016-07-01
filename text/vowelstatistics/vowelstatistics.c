/******************************************************************************
 **  Copyright sun4running@outlook.com
 **
 ** FILE NAME
 **    vowelstatistics.c
 ** FILE DESCRIPTION
 **    This file contains the vowel statistic implementation.
 **      
 ** FILE History:
 **-----------------------------------------------------------------------------
 **  Ver   Date              Author                        Description
 **-----------------------------------------------------------------------------
 **  1.0   06/28/2016        Li Jun                        Create
 *******************************************************************************/

/******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	char vowel_id;
	unsigned int statistics;
	unsigned int low;
	unsigned int high;
}vowel_t;

void merge(vowel_t * input)
{
	input->statistics = input->low + input->high;
	return;
}

int main(void)
{
	vowel_t vowel[5] = {{'a',0},{'e',0},{'i',0},{'o',0},{'u',0}};
	unsigned char i,c;
	printf("Please Input strings need vowelstatistics:\n\r");
	while((c = getchar()) != '\n')
	{
		switch(c)
		{
			case 'a':
				vowel[0].low++;
				merge(&vowel[0]);
				break;
			case 'A':
				vowel[0].high++;
				merge(&vowel[0]);
				break;
			case 'e':
				vowel[1].low++;
				merge(&vowel[1]);
				break;
			case 'E':
				vowel[1].high++;
				merge(&vowel[1]);
				break;
			case 'i':
				vowel[2].low++;
				merge(&vowel[2]);
				break;
			case 'I':
				vowel[2].high++;
				merge(&vowel[2]);
				break;
			case 'o':
				vowel[3].low++;
				merge(&vowel[3]);
				break;
			case 'O':
				vowel[3].high++;
				merge(&vowel[3]);
				break;
			case 'u':
				vowel[4].low++;
				merge(&vowel[4]);
				break;
			case 'U':
				vowel[4].high++;
				merge(&vowel[4]);
				break;
			default:
				break;
		}
	}
	for(i = 0; i <= 4; i++)
	{
		printf("vowel %c: \n\rlower-case:%d\n\rupper-case:%d\n\rstatistics:%d\n\r",vowel[i].vowel_id,vowel[i].low,vowel[i].high,vowel[i].statistics);
	}
	
	return 0;
}


