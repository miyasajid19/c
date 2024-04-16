#include<stdio.h>

void calculate(int arr[], int size, int num) {
    printf("Multiplication table for %d:\n", num);
    for (int i = 0; i < size; i++) {
        arr[i] = (i + 1) * num; // Calculate the multiplication table
    }
}

int main() 
{
    int num;
    printf("Enter the number for which you want to calculate the multiplication table: ");
    scanf("%d", &num);
    
    // Assuming you want to calculate the multiplication table up to 10
    int arr[10];
    
    // Calling the calculate function to fill the array with multiplication table values
    calculate(arr, sizeof(arr) / sizeof(arr[0]), num);
    
    // Printing the multiplication table
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
