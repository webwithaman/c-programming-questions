// // Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main()
{
    const int ROWS, COLS;
    printf("\nEnter Order of Matrix-A (Rows x Cols) (MAX %d x %d) => ", MAX_ROWS, MAX_COLS);
    scanf("%d%d", &ROWS, &COLS);

    // // Check Invalid Input for Matrix Order
    if (ROWS < 1 || ROWS > MAX_ROWS || COLS < 1 || COLS > MAX_COLS)
    {
        puts("\n!!! Invalid order of Matrix, Plz Enter Appropriate Order...\n");
        exit(0);
    }

    // // Declare 2-d Array of Entered Order
    int matrixA[ROWS][COLS], countZeros = 0;

    // // Input Elements of Matrix-A and Count Number of Zeros
    printf("\n>>>>>> Enter Elements of Matrix-A of Order %d x %d <<<<<<<\n", ROWS, COLS);

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("\nEnter element[%d][%d] => ", i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);

            if (matrixA[i][j] == 0)
                countZeros++;
        }
    }

    // // Print Matrix-A
    printf("\n\n>>>>>>>> Matrix-A of %d x %d <<<<<<<<<\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            printf("%4d ", matrixA[i][j]);

        putch(10); // // Add New line
    }

    // // Set the threshold for sparsity (for example, considering 70% of zeros as sparse)
    float threshold = 0.7;

    // // Total Elements
    int totalElements = ROWS * COLS;

    // // Calculate the percentage of zero elements
    float zeroPercentage = (float)countZeros / totalElements;

    // // Determine if the matrix is sparse or not based on the threshold
    if (zeroPercentage >= threshold)
        printf("\nThe matrix is a sparse matrix");
    else
        printf("\nThe matrix is not a sparse matrix");

    putch('\n');
    getch();
    return 0;
}
