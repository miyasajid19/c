#include <stdio.h>
int main() {
    int n; 
    printf("Enter the size of the array: ");
    scanf("%d", &n);
	int unique[n],arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        unique[i] = 1; 
    }
    printf("original array\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n - 1; i++) {
        if (unique[i]) { 
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    unique[j] = 0;
                }
            }
        }
    }
    printf("Array with duplicates removed:\n");
    for (int i = 0; i < n; i++) {
        if (unique[i]) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
