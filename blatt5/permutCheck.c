#include <stdio.h>
#include <string.h>

int strLen(char *s) {
    char *x = s;
    while (*x != '\0') x++;
    return x-s;
}

void sortingStrings(char *s) {
    printf("%s\n",s);

    char *x = s;
    printf("TEST %c\n", *x);

    while(*x != '\0') {
        s=x+1;
        while(*s != '\0') {
           
            if (*x > *s) {
                char temp = *x;
                *x = *s;
                *s = temp;
            }
            s++;
        }
        x++;
    }
/*
    for (int i = 0; s[i] != '\0'; i++) {
        for (int j = i+1; s[j] != '\0'; j++) {
            if (s[i] > s[j]) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }  
        }
    }
    */
}

int isPermutation(char *a, char *b) {
    if (strLen(b) < strLen(a)) return 0;
    sortingStrings(a);
    sortingStrings(b);
    if (*a == *b) return 1;

    return 0;
}


int main(void) {
    printf("test\n");
    printf("%i\n", isPermutation("hello", "lehol"));
    //isPermutation("hello", "lehho");
}