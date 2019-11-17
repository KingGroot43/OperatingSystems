#include <stdio.h>

typedef struct person {
    char firstname[255];
    char lastname[255];
} Person;

void readPerson(Person *p) {
    printf("Your Firstname: ");
    scanf("%s", p->firstname);
    printf("Your Lastname: ");
    scanf("%s", p->lastname);
}

void main(void) {
    Person p;
    readPerson(&p);
    printf("Firstname: %s, Lastname: %s\n", p.firstname, p.lastname);
}