/*
Name		:Nithish kumar
Date		:
Description	:
Sample input	:
Sample output	:
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rowsA, columnsA, rowsB, columnsB;

    // Read the number of rows and columns for matrix A
    printf("Enter the number of rows for matrix A: ");
    scanf("%d", &rowsA);

    printf("Enter the number of columns for matrix A: ");
    scanf("%d", &columnsA);

    // Dynamically allocate memory for matrix A
    int **A = (int **)malloc(rowsA * sizeof(int *));
    for (int i = 0; i < rowsA; i++) {
        A[i] = (int *)malloc(columnsA * sizeof(int));
    }

    // Read matrix A from the user
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < columnsA; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read the number of rows and columns for matrix B
    printf("Enter the number of rows for matrix B: ");
    scanf("%d", &rowsB);

    printf("Enter the number of columns for matrix B: ");
    scanf("%d", &columnsB);

    // Dynamically allocate memory for matrix B
    int **B = (int **)malloc(rowsB * sizeof(int *));
    for (int i = 0; i < rowsB; i++) {
        B[i] = (int *)malloc(columnsB * sizeof(int));
    }

    // Read matrix B from the user
    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < columnsB; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Check if the matrices can be multiplied
    if (columnsA != rowsB) {
        printf("Error: The number of columns in matrix A must be equal to the number of rows in matrix B for multiplication.\n");

        // Free the dynamically allocated memory
        for (int i = 0; i < rowsA; i++) {
            free(A[i]);
        }
        free(A);

        for (int i = 0; i < rowsB; i++) {
            free(B[i]);
        }
        free(B);

        return 1;
    }

    // Dynamically allocate memory for matrix R
    int **R = (int **)malloc(rowsA * sizeof(int *));
    for (int i = 0; i < rowsA; i++) {
        R[i] = (int *)malloc(columnsB * sizeof(int));
    }

    // Calculate the product of matrices A and B and store the result in matrix R
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < columnsB; j++) {
            R[i][j] = 0;
            for (int k = 0; k < columnsA; k++) {
                R[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the result matrix R
    printf("Result matrix R:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < columnsB; j++) {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < rowsA; i++) {
        free(A[i]);
    }
    free(A);

    for (int i = 0; i < rowsB; i++) {
        free(B[i]);
    }
    free(B);

    for (int i = 0; i < rowsA; i++) {
        free(R[i]);
    }
    free(R);

    return 0;
}

