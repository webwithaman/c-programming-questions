// Write a function in C to find the row with maximum number of 1s.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// Functions Declarations (Prototypes)
void input2DArray(int (*)[], int, int);
void print2DArray(int (*)[], int, int);
int isSparseMatrix(int (*)[], int, int, float);

// Main Function Start
int main()
{
    const int ROWS, COLS;
    printf("\nEnter Order of Matrix-A (Rows x Cols) (MAX %d x %d) => ", MAX_ROWS, MAX_COLS);
    scanf("%d%d", &ROWS, &COLS);

    // Check Invalid Input for Matrix Order
    if (ROWS < 1 || ROWS > MAX_ROWS || COLS < 1 || COLS > MAX_COLS)
    {
        puts("\n!!! Invalid order of Matrix, Plz Enter Appropriate Order...\n");
        exit(0);
    }

    // Declare 2-d Array of Entered Order
    int matrixA[ROWS][COLS], count = 0, rowWIthMaxOnes = -1, numOfOnes = 0;

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

    // Find Row with Maximum Number of 1s
    for (int i = 0; i < ROWS; i++)
    {
        count = 0;

        for (int j = 0; j < COLS; j++)
        {
            if (matrixA[i][j] == 1)
                count++;
        }
        if (count > numOfOnes)
        {
            numOfOnes = count;
            rowWIthMaxOnes = i + 1;
        }
    }

    // Print Row with Maximum Number of 1s
    if (rowWIthMaxOnes != -1)
        printf("\nRow with Maximum Number of 1s => %d and Number of 1s => %d", rowWIthMaxOnes, numOfOnes);
    else
        printf("\nThere is No 1 in Matrix");

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

// Function to Check whether a given Matrix is Sparse matrix or Not
int isSparseMatrix(int (*mat)[], int rows, int cols, float threshold)
{
    int countZeros = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            if (*((int *)mat + i * cols + j) == 0)
                countZeros++;
        }
    }

    // Calculate the percentage of zero elements
    float zeroPercentage = (float)countZeros / (rows * cols);

    // Determine if the matrix is sparse or not based on the threshold
    if (zeroPercentage >= threshold)
        return 1;

    return 0;
}
