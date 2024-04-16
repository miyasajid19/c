#include <stdio.h>

int main() {
    int index;
    printf("Enter how many data points you have: ");
    scanf("%d", &index);

    int data[index], sum = 0;
    for (int i = 0; i < index; i++) {
        printf("Enter data point %d: ", i + 1);
        scanf("%d", &data[i]);
        sum += data[i];
    }

    // Sorting the array (you already have the sorting code)
    for (int i = 0; i < index - 1; i++) {
        for (int j = 0; j < index - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    printf("The arranged order is:\n");
    for (int i = 0; i < index; i++) {
        printf("%d     ", data[i]);
    }
    printf("\n");

    // Calculate mean
    double mean = (double)sum / index;
    printf("Mean: %.2f\n", mean);

    // Calculate median
    double median;
    if (index % 2 == 0) {
        median = (data[index / 2 - 1] + data[index / 2]) / 2.0;
    } else {
        median = data[index / 2];
    }
    printf("Median: %.2f\n", median);

    // Calculate mode
    int mode = data[0]; // Initialize mode with the first element
    int maxCount = 1;
    int currentCount = 1;
    for (int i = 1; i < index; i++) {
        if (data[i] == data[i - 1]) {
            currentCount++;
        } else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
                mode = data[i - 1];
            }
            currentCount = 1;
        }
    }
    // Check if the last element forms a mode
    if (currentCount > maxCount) {
        mode = data[index - 1];
    }
    printf("Mode: %d\n", mode);

    return 0;
}
