// Write a program in C to find the sum of rows and columns of a Matrix.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// Main Function Start
int main()
{
    const int ROWS, COLS;
    printf("\nEnter Order of  Matrix-A (Rows x Cols) (MAX %d x %d) => ", MAX_ROWS, MAX_COLS);
    scanf("%d%d", &ROWS, &COLS);

    // Check Invalid Input for Matrix Order
    if (ROWS < 1 || ROWS > MAX_ROWS || COLS < 1 || COLS > MAX_COLS)
    {
        puts("\n!!! Invalid order of Matrix, Plz Enter Appropriate Order...\n");
        exit(0);
    }

    // Declare 2-d Array of Entered Order
    int matrixA[ROWS][COLS], sumOfRows = 0, sumOfCols = 0;

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

    puts("\n>>>>>>>> Sum of Rows and Columns <<<<<<<<<");

    // Find Sum of Rows and Cols and Print
    if (ROWS == COLS)
    {
        // Find Sum of Rows and Cols
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                sumOfRows += matrixA[i][j];
                sumOfCols += matrixA[j][i];
            }

            printf("\nSum of Row-%d => %d", i + 1, sumOfRows);
            printf("\nSum of Col-%d => %d", i + 1, sumOfCols);
            sumOfRows = sumOfCols = 0;
        }
    }
    else
    {
        // Find Sum of Rows
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
                sumOfRows += matrixA[i][j];

            printf("\nSum of Row-%d => %d", i + 1, sumOfRows);
            sumOfRows = 0;
        }

        // Find Sum of Cols
        for (int i = 0; i < COLS; i++)
        {
            for (int j = 0; j < ROWS; j++)
                sumOfCols += matrixA[j][i];

            printf("\nSum of Col-%d => %d", i + 1, sumOfCols);
            sumOfCols = 0;
        }
    }

    putch('\n');
    getch();
    return 0;
}
// Main Function End
