#include<stdio.h>

int main() {
    int index1;

    printf("How many data do you like to store in the arr1? ");
    scanf("%d", &index1);

    int arr1[index1];

    for (int i = 0; i < index1; i++) {
        printf("arr1 : entry %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
        
    for(int i = 0; i < index1 ; i++) {
        for (int j = 0; j < index1 - i -1; j++) {
            if (arr1[j] > arr1[j + 1]) {
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: \n");
    for (int i = 0; i < index1; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nThe greatest is %d \nThe smallest is %d", arr1[index1 - 1], arr1[0]);
    
    return 0;
}
