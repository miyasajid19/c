#include <stdio.h>

int main() {
    float first_number, second_number, third_number;
    
    printf("Enter the first number: ");
    scanf("%f", &first_number);
    
    printf("Enter the second number: ");
    scanf("%f", &second_number);
    
    printf("Enter the third number: ");
    scanf("%f", &third_number);

    float greatest_if_else;
    if (first_number > second_number && first_number > third_number) {
        greatest_if_else = first_number;
    } else if (second_number > first_number && second_number > third_number) {
        greatest_if_else = second_number;
    } else {
        greatest_if_else = third_number;
    }
    printf("\nUsing if-else:\n");
    printf("The greatest number is %f\n", greatest_if_else);
    
    float greatest_ternary;
    greatest_ternary = (first_number > second_number) ? ((first_number > third_number) ? first_number : third_number) : ((second_number > third_number) ? second_number : third_number);
    printf("\nUsing ternary operator:\n");
    printf("The greatest number is %f\n", greatest_ternary);
    
    return 0;
}
