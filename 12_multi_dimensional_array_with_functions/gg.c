// Write a function to calculate the product of two matrices given by user

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Define Macros
#define MAX_ROWS 10
#define MAX_COLS 10

// Functions Declarations (Prototypes)
void input2DArray(int[][MAX_COLS], int, int);
void print2DArray(int[][MAX_COLS], int, int);
void productOfTwoMatrices(int[][MAX_COLS], int, int, int[][MAX_COLS], int, int, int[][MAX_COLS]);

// Main Function Start
int main()
{
    const int a;
    printf("enr => ");
    scanf("%d", &a);

    printf("\n%d\n", a);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Functions Definitions 👇👇

// Function to Input Elements of 2D Array
void input2DArray(int arr[][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("\nEnter element[%d][%d] => ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to Print 2D Array
void print2DArray(int arr[][MAX_COLS], int rows, int cols)
{
    putch(10); // Add new line

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%-4d ", arr[i][j]);

        putch(10); // Add new line
    }

    putch(10); // Add new line
}

// Function to Add Two Matrices
void productOfTwoMatrices(int mat1[][MAX_COLS], int rows1, int cols1, int mat2[][MAX_COLS], int rows2, int cols2, int res[][MAX_COLS])
{
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            res[i][j] = 0;

            for (int k = 0; k < rows2; k++)
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}