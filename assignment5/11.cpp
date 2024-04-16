#include<stdio.h>

void matrixAddition(void) {
    int rowsA, columnsA, rowsB, columnsB;

    printf("Enter the dimensions of matrix A:\n");
    printf("Enter number of rows: ");
    scanf("%d", &rowsA);
    printf("Enter number of columns: ");
    scanf("%d", &columnsA);

    int matA[100][100];

    printf("\nEnter elements of matrix A:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < columnsA; j++) {
            printf("Element A[%d][%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
        printf("\n");
    }

    printf("Enter the dimensions of matrix B:\n");
    printf("Enter number of rows: ");
    scanf("%d", &rowsB);
    printf("Enter number of columns: ");
    scanf("%d", &columnsB);

    int matB[100][100];

    printf("\nEnter elements of matrix B:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < columnsB; j++) {
            printf("Element B[%d][%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
        printf("\n");
    }

    if (rowsA == rowsB && columnsA == columnsB) {
        printf("\nMatrix Addition:\n");
        int resultAddition[100][100];
        for (int i = 0; i < rowsA; i++) {
            for (int j = 0; j < columnsA; j++) {
                resultAddition[i][j] = matA[i][j] + matB[i][j];
                printf("%d ", resultAddition[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrix Addition not possible. Dimensions mismatch!\n");
    }
}

void matrixMultiplication(void) {
    int rowsA, columnsA, rowsB, columnsB;

    printf("\nEnter the dimensions of matrix A for multiplication:\n");
    printf("Enter number of rows: ");
    scanf("%d", &rowsA);
    printf("Enter number of columns: ");
    scanf("%d", &columnsA);

    int matA[100][100];

    printf("\nEnter elements of matrix A:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < columnsA; j++) {
            printf("Element A[%d][%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the dimensions of matrix B for multiplication:\n");
    printf("Enter number of rows: ");
    scanf("%d", &rowsB);
    printf("Enter number of columns: ");
    scanf("%d", &columnsB);

    int matB[100][100];

    printf("\nEnter elements of matrix B:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < columnsB; j++) {
            printf("Element B[%d][%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
        printf("\n");
    }

    if (columnsA == rowsB) {
        printf("\nMatrix Multiplication:\n");
        int resultMultiplication[100][100];
        for (int i = 0; i < rowsA; i++) {
            for (int j = 0; j < columnsB; j++) {
                resultMultiplication[i][j] = 0;
                for (int k = 0; k < columnsA; k++) {
                    resultMultiplication[i][j] += matA[i][k] * matB[k][j];
                }
                printf("%d ", resultMultiplication[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrix Multiplication not possible. Inner dimensions mismatch!\n");
    }
}

void matrixTranspose(void) {
    int rows, columns;

    printf("\nEnter the dimensions of the matrix for transpose:\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    int matrix[100][100];

    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    int resultTranspose[100][100];
    printf("\nTranspose of Matrix:\n");
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            resultTranspose[i][j] = matrix[j][i];
            printf("%d ", resultTranspose[i][j]);
        }
        printf("\n");
    }
}

int main() {
    matrixAddition();
    matrixMultiplication();
    matrixTranspose();
    return 0;
}
