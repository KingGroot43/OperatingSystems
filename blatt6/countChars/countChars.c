#include <stdio.h>
#include "countChars.h"

int countLetter( char* text, char letter )
{
	char* tmp = text;
	int count = 0;
	for ( ; *tmp != '\0'; tmp++) {
		count = (*tmp == letter) ? count+1 : count;
	}
	return count;
}
