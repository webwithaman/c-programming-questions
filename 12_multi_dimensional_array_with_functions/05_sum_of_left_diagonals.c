// Write a program in C to find the sum of left diagonals of a matrix.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// Functions Declarations (Prototypes)
void input2DArray(int (*)[], int, int);
void print2DArray(int (*)[], int, int);
int sumOfLeftDiag(int (*)[], int);

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
    int matrixA[ROWS][COLS], sumOfLeftDiagonals;

    // Input Elements of Matrix-A
    printf("\n>>>>>> Enter Elements of Matrix-A of Order %d x %d <<<<<<<\n", ROWS, COLS);
    input2DArray(matrixA, ROWS, COLS);

    // Print Matrix-A
    printf("\n\n>>>>>>>> Matrix-A of %d x %d <<<<<<<<<\n", ROWS, COLS);
    print2DArray(matrixA, ROWS, COLS);

    // Find Sum of Left Diagonals
    sumOfLeftDiagonals = sumOfLeftDiag(matrixA, ROWS);

    // Print Sum of Left Diagonals
    printf("\nSum of Left Diagonals => %d", sumOfLeftDiagonals);

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

// Function to Find Sum of Left Diagonals
int sumOfLeftDiag(int (*mat)[], int order)
{

    int sumOfLeftDiagonals = 0;

    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            if (order - 1 - i == j)
                sumOfLeftDiagonals += *((int *)mat + i * order + j);
        }
    }

    return sumOfLeftDiagonals;
}