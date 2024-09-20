//Merge two arrays
#include<stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int Size = size1 + size2;
    printf("arr1 is \n");
	for (int i=0;i<size1;i++){
		printf("%d\t",arr1[i]);
	}
	printf("\narr2 is \n");
	for (int i=0;i<size2;i++){
		printf("%d\t",arr2[i]);
	}
    int mergedArray[Size];
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = arr2[i];
    }
    printf("\nMerged Array: ");
    for (int i = 0; i < Size; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");
    return 0;
}
