#include <stdio.h>
#include "permutCheck.h"

int strLen(char *s) 
{
    char *x = s;
    for ( ;*x != '\0'; x++);
    return x-s;
}

int getMinIndex(char *sPtr, int startIndex) 
{
    int IndexOfMinimum = startIndex;
    for (int index = startIndex+1; index < strLen(sPtr); index++)
    {
        if (sPtr[IndexOfMinimum] > sPtr[index])
            IndexOfMinimum = index;
    }
    return IndexOfMinimum;
}

void sortString(char *s) 
{
    int len = strLen(s);
    for (int i = 0; i < len; i++) 
    {
        char buffer = s[i];
        int min = getMinIndex(s, i);
        s[i] = s[min];
        s[min] = buffer;
    }
}

void mystrcpy(char *dest, char *src) 
{
    for(int i = 0; i < strLen(src)+1; i++) 
        dest[i] = src[i];
}

int isPermutation(char *a, char *b) 
{
    char wa[strLen(a)+1];
    char wb[strLen(b)+1];
    mystrcpy(wa, a); 
    mystrcpy(wb, b);
    sortString(wa);
    sortString(wb);
    for (int i = 0; i < strLen(wb)+1; i++) 
    {
        if (wa[i] != wb[i])
            return 0;
    }
    return 1;
}
