#include <stdio.h>

int main() {
    int num, shifted_left, shifted_right;
    printf("Enter an integer: ");
    scanf("%d", &num);
    shifted_left = num << 1;
    shifted_right = num >> 1;
    printf("Original number: %d\n", num);
    printf("After left shift by 1 bit: %d\n", shifted_left);
    printf("After right shift by 1 bit: %d\n", shifted_right);
    return 0;
}
