// Write a program to implement a 2D array of int using malloc without any memory wastage according to user's input.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <malloc.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// // Main Function Start
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

    // Allocate memory dynamically for 2D Array using malloc

    // create rows
    int **matrix = (int **)malloc(ROWS * sizeof(int *));

    if (!matrix)
    {
        puts("\nUnable to Allocate Memory Dynamically...\n");
        exit(0);
    }

    // create cols
    for (int i = 0; i < ROWS; i++)
    {
        matrix[i] = (int *)malloc(COLS * sizeof(int *));

        if (!matrix[i])
        {
            puts("\nUnable to Allocate Memory Dynamically...\n");
            exit(0);
        }
    }

    // Input Elements of Matrix
    printf("\n>>>>>> Enter Elements of Matrix of Order %d x %d <<<<<<<\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("\nEnter element[%d][%d] => ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print Matrix
    printf("\n\n>>>>>>>> Matrix of %d x %d <<<<<<<<<\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            printf("%-4d ", matrix[i][j]);

        putch(10); // Add New line
    }

    putch('\n');
    getch();
    return 0;
}
// Main Function End
