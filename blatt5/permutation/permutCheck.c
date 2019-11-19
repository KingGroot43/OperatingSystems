#include <stdio.h>
#include <string.h>
#include "permutCheck.h"

int strLen(char *s) {
    char *x = s;
    for ( ;*x != '\0'; x++);
    return x-s;
}

void sortingStrings(char *s) {
/*
    char *x = s;
    char *y = s;

    while(*x != '\0') {
        printf("LOOP-X %c\n", *x);
        //y=x+1;
        while(*y != '\0') {
            
            if (*x > *y) {
                //char temp = *x;
                *x = *y;
                //*y = temp;
                printf("LOOP-Y %c\n", *y);
            }
            y++;
        }
        y = s;
        x++;
    }
*/

    int len = strLen(s);
    for (int i = 0; s[i] < len; i++) {
        for (int j = i+1; s[j] < len; j++) {
            if (s[i] > s[j]) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }  
        }
    }
}

int isPermutation(char *a, char *b) {
    if (strLen(b) < strLen(a)) return 0;
    sortingStrings(a);
    sortingStrings(b);
    if (*a == *b) return 1;

    return 0;
}
