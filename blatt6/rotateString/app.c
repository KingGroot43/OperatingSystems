#include <stdio.h>
#include "rotateString.h"

int main(void)
{
        char string[255] = "Testaufruf";
        rotateLeft(string);

        printf("rotated string: %s\n", string);

	return 0;
}

