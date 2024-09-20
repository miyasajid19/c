#include<stdio.h>
#include<math.h>

int main() {
    int arr[5];
    int sum = 0;

    // Input
    for(int i = 0; i < 5; i++) {
        printf("Enter the data No. %d : ", i + 1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    float mean = (float)sum / 5; // Corrected mean calculation
    printf("Mean is %.2f \n", mean); 

    // Sort the array to find min and max
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The min. value is %d \nThe max. value is %d\n", arr[0], arr[4]);

    // Calculate Variance
    float variance = 0;
    for (int i = 0; i < 5; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance /= 5;

    printf("The variance is %.2f\n", variance);

    return 0;
}
