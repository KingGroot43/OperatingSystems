#include <stdio.h>
#include "countChars.h"

int main(void) 
{
	printf("%i\n", countLetter("hello", 'l'));
	printf("%i\n", countLetter("Hello", 'h'));
	printf("%i\n", countLetter("Testcall", 'l'));
}
