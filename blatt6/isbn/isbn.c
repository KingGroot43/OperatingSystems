#include <stdio.h>
#include "isbn.h"

int char2int(char c)
{
	return c - '0';
}

int checkLen(char* c) 
{
	char* tmp = c;
	for(; *tmp != '\0'; tmp++);
	return tmp-c;
}

int checkIsbn(char* c)
{
	int sum = 0;
	if (checkLen(c) != 10) return -1;
	for (int i = 1; c[i-1] != '\0'; i++) {
		sum = sum + i * char2int(c[i-1]);
	}
	return (sum % 11 == 0) ? 0 : -1;
}
