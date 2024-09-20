//To insert an element at a given location of an array
#include <stdio.h>
#include <string.h>

int main() {
    char subjects[4][20] = {"maths", "physics", "chemistry", "C"};
    int i, n;
    int marks[4];
    for (i = 0; i < 4; i++) {
        printf("Enter marks of %s: ", subjects[i]);
        scanf("%d", &marks[i]);
    }
    printf("Marks in subjects with index:\n");
    for (i = 0; i < 4; i++) {
        printf("Marks of %s { %d }: %d\n", subjects[i], i, marks[i]);
    }
    char x;
top:
    printf("Any error? (y/n): ");
    scanf(" %c", &x); // Added space before %c to consume whitespace
    if (x == 'y') {
        printf("Enter the index: ");
        int index, value;
        scanf("%d", &index);
        printf("Enter the correct value: ");
        scanf("%d", &value);
        marks[index] = value;
        goto top; // Using goto to ask for error correction again
    } else {
        printf("Corrected once:\n");
        for (i = 0; i < 4; i++) {
            printf("Marks of %s { %d }: %d\n", subjects[i], i, marks[i]);
        }
    }
    return 0;
}
