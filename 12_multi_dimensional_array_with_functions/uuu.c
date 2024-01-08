#include <stdio.h>

int value(int (*arr)[])

void print2DArray(int (*arr)[], int rows, int cols)
{
    // Accessing elements and printing the 2D array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // printf("%d ", *((int *)arr + i * cols + j));
        }
        printf("\n");
    }
}


int main()
{
    int rows, cols;

    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Check for valid input (positive dimensions)
    if (rows <= 0 || cols <= 0)
    {
        printf("Invalid dimensions. Please enter positive values for rows and columns.\n");
        return 1;
    }

    // Declare a static 2D array with variable length (based on user input)
    int matrix[rows][cols];

    printf("Enter elements for the matrix:\n");

    // Input elements for the matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Printing the matrix using the function
    printf("\nThe entered matrix is:\n");
    print2DArray(matrix, rows, cols);

    return 0;
}
