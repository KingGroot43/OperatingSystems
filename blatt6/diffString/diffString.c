#include <stdio.h>
#include <string.h>
#include "diffString.h"

int isSameLength(char* text1, char* text2) 
{
	return strlen(text1) == strlen(text2);
}

int countDiffs(char* text1, char* text2)
{
	if (!isSameLength(text1, text2)) 
		return -1;
		
	int count = 0;
	for (int i = 0; text1[i] != '\0'; i++)
	{
		if (text1[i] != text2[i])
			++count;
	}
	return count;
}

