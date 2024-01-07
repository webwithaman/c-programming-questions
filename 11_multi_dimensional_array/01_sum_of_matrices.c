// Write a program to calculate the sum of two matrices each of order 3x3.

// Header Files
#include <stdio.h>
#include <conio.h>

#define ROWS 3
#define COLS 3

// Main Function Start
int main()
{
    // Declare 2-d Arrays
    int matrixA[ROWS][COLS], matrixB[ROWS][COLS], matrixC[ROWS][COLS];

    // Input Elements Matrix-A
    printf("\n>>>>>> Enter Elements of Matrix-A of Order %d x %d <<<<<<<\n", ROWS, COLS);

    for (int i = 0; i < ROWS; i++)
    {
        printf("\nEnter %d Elements For Row %d => ", COLS, i + 1);
        for (int j = 0; j < COLS; j++)
            scanf("%d", &matrixA[i][j]);
    }

    // Input Elements of Matrix-B
    printf("\n\n>>>>>> Enter Elements of Matrix-B of Order %d x %d <<<<<<<\n", ROWS, COLS);

    for (int i = 0; i < ROWS; i++)
    {
        printf("\nEnter %d Elements For Row %d => ", COLS, i + 1);
        for (int j = 0; j < COLS; j++)
            scanf("%d", &matrixC[i][j]);
    }

    // Add Matrices
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            matrixC[i][j] = matrixA[i][j] + matrixC[i][j];
    }

    // Print Matrix-A
    printf("\n\n>>>>>>>> Matrix-A of %d x %d <<<<<<<<<\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            printf("%4d ", matrixA[i][j]);

        putch(10); // Add New line
    }

    // Print Matrix-B
    printf("\n\n>>>>>>>> Matrix-B of %d x %d <<<<<<<<<\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            printf("%4d ", matrixC[i][j]);

        putch(10); // Add New line
    }

    // Print Sum of Matrices
    printf("\n\n>>>>>>>> Sum Matrix-C of %d x %d <<<<<<<<<\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            printf("%4d ", matrixC[i][j]);

        putch(10); // Add New line
    }

    putch('\n');
    getch();
    return 0;
}
// Main Function End
