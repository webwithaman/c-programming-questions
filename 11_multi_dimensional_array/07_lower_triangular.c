// Write a program in C to display the lower triangular matrix of a given matrix

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// // Main Function Start
int main()
{
    const int ROWS, COLS;
    printf("\nEnter Order of Square Matrix-A (Rows x Cols) (MAX %d x %d) => ", MAX_ROWS, MAX_COLS);
    scanf("%d%d", &ROWS, &COLS);

    // Check Invalid Input for Matrix Order
    if (ROWS < 1 || ROWS != COLS || ROWS > MAX_ROWS || COLS < 1 || COLS > MAX_COLS)
    {
        puts("\n!!! Invalid order of Matrix, Plz Enter Appropriate Order...\n");
        exit(0);
    }

    // Declare 2-d Array of Entered Order
    int matrixA[ROWS][COLS], lowerTri[ROWS][COLS];

    // Input Elements of Matrix-A
    printf("\n>>>>>> Enter Elements of Matrix-A of Order %d x %d <<<<<<<\n", ROWS, COLS);

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("\nEnter element[%d][%d] => ", i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Print Matrix-A
    printf("\n\n>>>>>>>> Matrix-A of %d x %d <<<<<<<<<\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            printf("%4d ", matrixA[i][j]);

        putch(10); // Add New line
    }

    // Find Lower Triangular Matrix
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (j > i)
                lowerTri[i][j] = 0;
            else
                lowerTri[i][j] = matrixA[i][j];
        }
    }

    // Print Lower Triangular Matrix
    printf("\n\n>>>>>>>> Lower Triangular Matrix of %d x %d <<<<<<<<<\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            printf("%4d ", lowerTri[i][j]);

        putch(10); // Add New line
    }

    putch('\n');
    getch();
    return 0;
}
// Main Function End
