#include <stdio.h>
#include "rotateString.h"

int getSize(char* text) 
{
	char* tmp = text;
	for (; *tmp != '\0'; tmp++);
	return tmp-text;
}

void rotateLeft(char* text) 
{
	char tmp = text[0];
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i+1] != '\0') 
			text[i] = text[i+1];
	}
	text[getSize(text)-1] = tmp;
}

