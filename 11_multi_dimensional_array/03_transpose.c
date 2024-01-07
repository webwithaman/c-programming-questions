// Write a program in C to find the transpose of a given matrix.

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    const int ROWS,COLS;
    printf("\nEnter ")
    // Declare 2-d Arrays
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], sumOfMatrices[ROWS][COLS];

    // Input Elements of 1st Matrix
    printf("\n>>>>>> Enter Elements of 1st Matrix of Order %d x %d <<<<<<<\n", ROWS, COLS);

    for (int i = 0; i < ROWS; i++)
    {
        printf("\nEnter %d Elements For Row %d => ", COLS, i + 1);
        for (int j = 0; j < COLS; j++)
            scanf("%d", &matrix1[i][j]);
    }

    // Input Elements of 2nd Matrix
    printf("\n\n>>>>>> Enter Elements of 2nd Matrix of Order %d x %d <<<<<<<\n", ROWS, COLS);

    for (int i = 0; i < ROWS; i++)
    {
        printf("\nEnter %d Elements For Row %d => ", COLS, i + 1);
        for (int j = 0; j < COLS; j++)
            scanf("%d", &matrix2[i][j]);
    }

    // Add Matrices
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            sumOfMatrices[i][j] = matrix1[i][j] + matrix2[i][j];
    }

    // Print Matrix-1
    printf("\n\n>>>>>>>> 1st Matrix of %d x %d <<<<<<<<<\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            printf("%4d ", matrix1[i][j]);

        putch(10); // Add New line
    }

    // Print Matrix-2
    printf("\n\n>>>>>>>> 2nd Matrix of %d x %d <<<<<<<<<\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            printf("%4d ", matrix2[i][j]);

        putch(10); // Add New line
    }

    // Print Resultant (sumOfMatrices)
    printf("\n\n>>>>>>>> Sum Matrix of %d x %d <<<<<<<<<\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            printf("%4d ", sumOfMatrices[i][j]);

        putch(10); // Add New line
    }

    putch('\n');
    getch();
    return 0;
}
// Main Function End
