// Write a function in C to find the sum of rows and columns of a Matrix.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// Functions Declarations (Prototypes)
void input2DArray(int (*)[], int, int);
void print2DArray(int (*)[], int, int);
void printRowsColsSum(int (*)[], int, int);

// // Main Function Start
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
    input2DArray(matrixA, ROWS, COLS);

    // Print Matrix-A
    printf("\n\n>>>>>>>> Matrix-A of %d x %d <<<<<<<<<\n", ROWS, COLS);
    print2DArray(matrixA, ROWS, COLS);

    // Print Sum of Rows and Cols
    puts("\n>>>>>>>> Sum of Rows and Columns <<<<<<<<<");
    printRowsColsSum(matrixA, ROWS, COLS);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Functions Definitions 👇👇

// Function to Input Elements of 2D Array
void input2DArray(int (*arr)[], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("\nEnter element[%d][%d] => ", i + 1, j + 1);
            scanf("%d", &*((int *)arr + i * cols + j));
        }
    }
}

// Function to Print 2D Array
void print2DArray(int (*arr)[], int rows, int cols)
{
    putch(10); // Add new line

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%-4d ", *((int *)arr + i * cols + j));

        putch(10); // Add new line
    }

    putch(10); // Add new line
}

// Function to Print Sum of Each Row and Column
void printRowsColsSum(int (*mat)[], int rows, int cols)
{
    int sumOfRows, sumOfCols;

    // Find Sum of Rows and Cols and Print
    if (rows == cols)
    {
        // Find Sum of Rows and Cols
        for (int i = 0; i < rows; i++)
        {
            sumOfRows = sumOfCols = 0;

            for (int j = 0; j < cols; j++)
            {
                sumOfRows += *((int *)mat + i * cols + j);
                sumOfCols += *((int *)mat + j * cols + i);
            }

            printf("\nSum of Row-%d => %d", i + 1, sumOfRows);
            printf("\nSum of Col-%d => %d", i + 1, sumOfCols);
        }
    }
    else
    {
        // Find Sum of Rows
        for (int i = 0; i < rows; i++)
        {
            sumOfRows = 0;

            for (int j = 0; j < cols; j++)
                sumOfRows += *((int *)mat + i * cols + j);

            printf("\nSum of Row-%d => %d", i + 1, sumOfRows);
        }

        // Find Sum of Cols
        for (int i = 0; i < cols; i++)
        {
            sumOfCols = 0;

            for (int j = 0; j < rows; j++)
                sumOfCols += *((int *)mat + j * cols + i);

            printf("\nSum of Col-%d => %d", i + 1, sumOfCols);
        }
    }
}