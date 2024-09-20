#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

void initPerson(struct Person *p,  char *name, int age) {
    strcpy(p->name, name);
    p->age = age;
}

void displayPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
}

void displayPersonPtr(struct Person *p) {
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
}

int main() {
    struct Person person1;
    initPerson(&person1, "Alice", 30);

    printf("Using dot operator:\n");
    displayPerson(person1);

    struct Person *personPtr = &person1;

    printf("\nUsing arrow operator:\n");
    displayPersonPtr(personPtr);

    return 0;
}
