// Write a function to calculate the sum of two matrices given by user.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Define Macros
#define MAX_ROWS 10
#define MAX_COLS 10

// Functions Declarations (Prototypes)
void input2DArray(int (*)[], int, int);
void print2DArray(int (*)[], int, int);
void addTwoMatrices(int (*)[], int (*)[], int (*)[], int, int);

// Main Function Start
int main()
{
    const int ROWS_1, COLS_1, ROWS_2, COLS_2;
    printf("\nEnter Order of  Matrix-A (Rows x Cols) (MAX %d x %d) => ", MAX_ROWS, MAX_COLS);
    scanf("%d%d", &ROWS_1, &COLS_1);

    // Check Invalid Input for Matrix Order
    if (ROWS_1 < 1 || ROWS_1 > MAX_ROWS || COLS_1 < 1 || COLS_1 > MAX_COLS)
    {
        puts("\n!!! Invalid order of Matrix, Plz Enter Appropriate Order...\n");
        exit(0);
    }

    printf("\nEnter Order of  Matrix-B (Rows x Cols) (MAX %d x %d) => ", MAX_ROWS, MAX_COLS);
    scanf("%d%d", &ROWS_2, &COLS_2);

    // Check Invalid Input for Matrix Order
    if (ROWS_2 < 1 || ROWS_2 > MAX_ROWS || COLS_2 < 1 || COLS_2 > MAX_COLS)
    {
        puts("\n!!! Invalid order of Matrix, Plz Enter Appropriate Order...\n");
        exit(0);
    }

    // Check that Sum of Matrices is Possible or Not
    if (ROWS_1 != ROWS_2 || COLS_1 != COLS_2)
    {
        puts("\n!!! Invalid order of Matrix, Sum of Matrices is not Possible...\n");
        exit(0);
    }

    // Declare 2-d Arrays
    int matrixA[ROWS_1][COLS_1], matrixB[ROWS_2][COLS_2], matrixC[ROWS_1][COLS_1];

    // Input Elements Matrix-A
    printf("\n>>>>>> Enter Elements of Matrix-A of Order %d x %d <<<<<<<\n", ROWS_1, COLS_1);
    input2DArray(matrixA, ROWS_1, COLS_1);

    // Input Elements Matrix-B
    printf("\n>>>>>> Enter Elements of Matrix-A of Order %d x %d <<<<<<<\n", ROWS_2, COLS_2);
    input2DArray(matrixB, ROWS_2, COLS_2);

    // Print Matrix-A
    printf("\n\n>>>>>>>> Matrix-A of %d x %d <<<<<<<<<\n", ROWS_1, COLS_1);
    print2DArray(matrixA, ROWS_1, COLS_1);

    // Print Matrix-B
    printf("\n\n>>>>>>>> Matrix-B of %d x %d <<<<<<<<<\n", ROWS_2, COLS_2);
    print2DArray(matrixB, ROWS_2, COLS_2);

    // Add Matrices
    addTwoMatrices(matrixA, matrixB, matrixC, ROWS_1, COLS_1);

    // Print Sum of Matrices
    printf("\n\n>>>>>>>> Sum Matrix-C of %d x %d <<<<<<<<<\n", ROWS_1, COLS_2);
    print2DArray(matrixC, ROWS_1, COLS_2);

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
            scanf("%d", *((int *)arr + i * cols + j));
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

// Function to Add Two Matrices
void addTwoMatrices(int (*mat1)[], int (*mat2)[], int (*res)[], int rows, int cols)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            *((int *)res + i * cols + j) = *((int *)mat1 + i * cols + j) + *((int *)mat2 + i * cols + j);
    }
}