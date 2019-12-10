#include <stdio.h>
#include "isbn.h"

int main(void) 
{
	char input[255];
	scanf("%s", input);
	printf("ISBN-Check: %i\n", checkIsbn(input));
}
