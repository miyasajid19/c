#include<stdio.h>

int main() {
    int index1, index2;

    printf("How many data do you like to store in the arr1? ");
    scanf("%d", &index1);

    int arr1[index1];

    for (int i = 0; i < index1; i++) {
        printf("arr1 : entry %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("\n\n\nHow many data do you like to store in the arr2? ");
    scanf("%d", &index2);

    int arr2[index2];

    for (int i = 0; i < index2; i++) {
        printf("arr2 : entry %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int temp;

    if (index1 > index2) {
        temp = index1;
        index1 = index2;
        index2 = temp;
    }

    int union_array[index1 + index2];
    int intersection[index2];
    int k = 0;

    printf("\nIntersection: "); 
    for (int i = 0; i < index1; i++) {
        for (int j = 0; j < index2; j++) {
            if (arr1[i] == arr2[j]) {
                printf(" %d", arr1[i]);
                intersection[k++] = arr1[i];
                break; 
            }
        }
    }

    // Union
    printf("\nUnion: ");
    for (int i = 0; i < index1; i++) {
        printf(" %d", arr1[i]);
        union_array[i] = arr1[i];
    }
    int union_length = index1;
    for (int i = 0; i < index2; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < index1; j++) {
            if (arr2[i] == union_array[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            printf(" %d", arr2[i]);
            union_array[union_length++] = arr2[i];
        }
    }

    return 0;
}
