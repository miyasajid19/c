#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_number;
    float marks;
};

void copy_struct(struct Student *dest, struct Student *src) {
    *dest = *src;
}

void copy_selected_vars(struct Student *dest, struct Student *src) {
    strcpy(dest->name, src->name);
    dest->roll_number = 407;
    dest->marks=43.2;
}

int main() {
    struct Student student1 = {"Sajid", 432, 40.7};
    struct Student student2, student3;

    copy_struct(&student2, &student1);
    copy_selected_vars(&student3, &student1);

    printf("Original Structure (student1):\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.roll_number);
    printf("Marks: %.2f\n\n", student1.marks);

    printf("Copied Structure (student2 - copied entirely):\n");
    printf("Name: %s\n", student2.name);
    printf("Roll Number: %d\n", student2.roll_number);
    printf("Marks: %.2f\n\n", student2.marks);

    printf("Copied Structure (student3 - selected variables):\n");
    printf("Name: %s\n", student3.name);
    printf("Roll Number: %d\n", student3.roll_number);
    printf("Marks: %.2f\n", student3.marks);

    return 0;
}
