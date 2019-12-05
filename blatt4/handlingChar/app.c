#include <stdio.h>
#include "handlingChar.h"

int main(void) 
{
    char input[255];
    printf("Write a word: ");
    scanf("%s", input);
    convert(input);
    printf("Result: %s\n", input);
}