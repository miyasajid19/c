#include<stdio.h>

int main() {
    printf("Enter how many data do you have? ");
    int n;
    scanf("%d", &n);
    int data[n];
    for (int i = 0; i < n; i++) {
        printf("Enter Data No. %d ", i + 1);
        scanf("%d", &data[i]);
    }
    printf("Your data is : \n");
    for (int i = 0; i < n; i++) {
        printf("%d ===  %d\t ", i, data[i]);
    }
    char x;
top:
    printf("\nDo you want to delete? (y/n)");
    scanf(" %c", &x); 
    int index;
    n = n - 1;
    if ((x == 'y') || (x == 'Y')) { 
        printf("enter the index that you want to delete : ");
        scanf("%d", &index);
        for (int i = index; i < n; i++) {
            data[i] = data[i + 1];
        }
        printf("Data deleted successfully.\n");
        printf("Your updated data is : \n");
        for (int i = 0; i < n; i++) {
            printf("%d ===  %d\t ", i, data[i]);
        }
        goto top;
    }
    return 0;
}
