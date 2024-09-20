#include <stdio.h>

void input_student_details(char names[][50], int roll_numbers[], float marks[]) {
    for (int i = 0; i < 3; i++) {
        printf("Enter student name: ");
        scanf("%s", names[i]);
        
        printf("Enter roll number: ");
        scanf("%d", &roll_numbers[i]);
        
        printf("Enter mark: ");
        scanf("%f", &marks[i]);
    }
}

void output_student_details(char names[][50], int roll_numbers[], float marks[]) {
    printf("\nStudent Details:\n");
    printf("Name\t\tRoll Number\tMarks\n");
    printf("-----------------------------------------\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\t\t%d\t\t%.2f\n", names[i], roll_numbers[i], marks[i]);
    }   
}

int main() {
    system("color F0");
    char names[3][50];
    int roll_numbers[3];
    float marks[3];

    input_student_details(names, roll_numbers, marks);
    output_student_details(names, roll_numbers, marks);

    return 0;
}
