/*
To check whether number is: (a) even or odd (b) negative or positive by using (i) if-else
(ii) ternary operator
*/
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }
if (number >= 0) {
        printf("%d is positive.\n", number);
    } else {
        printf("%d is negative.\n", number);
    }

    printf("%d is %s and %s.\n", number, (number % 2 == 0) ? "even" : "odd", (number >= 0) ? "positive" : "negative");
    return 0;
}
