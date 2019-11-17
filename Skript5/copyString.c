#include <stdio.h>


void myStrCpy(char *dest, char *src) {
    while(*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

void main(void) {
    char a[] = "Testelement";
    char b[20];
    myStrCpy(b,a);
    printf("a = %s, b = %s\n", a, b);
}