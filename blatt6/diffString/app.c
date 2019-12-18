#include <stdio.h>
#include "diffString.h"

int main(void)
{
	printf("%i\n", countDiffs("Test", "Teste"));
	printf("%i\n", countDiffs("Test", "Test"));
	printf("%i\n", countDiffs("Hello", "HEllo"));
	printf("%i\n", countDiffs("World", "workd"));
}
