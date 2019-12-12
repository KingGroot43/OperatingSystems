#include <stdio.h>
#include "prefix.h"



char* repeat(char* text)
{
	static char temp[255];
	int indexNewText = 0;
	for (int indexText = 0; text[indexText] != '\0'; indexText++) {
		for (int iterIndex = 0; iterIndex <= indexText; indexNewText++, iterIndex++) {
	//		printf("indexText: %i\t indexNewText: %i\t iterText: %i\n", indexText, indexNewText, iterIndex);
			temp[indexNewText] = text[iterIndex];
		}
	}
	return temp;
}
