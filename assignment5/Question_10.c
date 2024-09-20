#include <stdio.h>

int main() {
    int index1, index2;
    printf("Enter the index of array1: ");
    scanf("%d", &index1);

    int arr1[index1]; 
    for(int i = 0; i < index1; i++) {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the index of array2: ");
    scanf("%d", &index2);

    int arr2[index2];
    for(int i = 0; i < index2; i++) {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int all[index1 + index2];
    int intersection[index1 < index2 ? index1 : index2];
    int size = 0;

    // Calculate union
    for (int i = 0; i < index1; i++) {
        all[size++] = arr1[i];
    }
    for (int i = 0; i < index2; i++) {
        all[size++] = arr2[i];
    }

    // Bubble sort to sort the union array
    for(int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (all[j] > all[j + 1]) {
                int temp = all[j];
                all[j] = all[j + 1];
                all[j + 1] = temp;
            }
        }
    }

    // Remove duplicates
    int uniqueSize = 0;
    int unique[size]; 
    unique[uniqueSize++] = all[0]; 

    for (int i = 1; i < size; i++) {
        if (all[i] != all[i - 1]) { 
            unique[uniqueSize++] = all[i]; 
        }
    }

    // Calculate intersection
    int intersectionSize = 0;
    for (int i = 0; i < index1; i++) {
        for (int j = 0; j < index2; j++) {
            if (arr1[i] == arr2[j]) {
                intersection[intersectionSize++] = arr1[i];
                break;
            }
        }
    }

    printf("Union : ");
    for (int i = 0; i < uniqueSize; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

	int uniquesize=0;
	int uniqueintersection[intersectionSize];
	uniqueintersection[uniquesize++]=intersection[0];
	for (int i=1;i<intersectionSize;i++)
	{
		if(intersection[i]!=intersection[i-1])
		{
			uniqueintersection[uniquesize++]=intersection[i];
		}
	}
    printf("Intersection: ");
    for (int i = 0; i < uniquesize; i++) {
        printf("%d ", uniqueintersection[i]);
    }
    printf("\n");
	
    return 0;
}
