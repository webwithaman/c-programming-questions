// C proram to print following Pattern

/*

Pattern 47.

      1  2  3  4   17  18  19  20
         5  6  7   14  15  16
            8  9   12  13
               10  11

*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Function Prototype (Declaration)
int sumOfFirstNNums(int);

// Main Function Start
int main()
{
    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of Columns According to maxRows
    maxCols = maxRows * 2;

    // Print Pattern
    puts("\n--------------------------------------------\n");

    // 1st Approach
    int sum = sumOfFirstNNums(maxRows), addNum;

    for (int row = 1; row <= maxRows; row++)
    {
        for (int space = 1; space <= row - 1; space++)
            printf("    ");

        addNum = sum - sumOfFirstNNums(maxRows + 1 - row);

        for (int col = 1; col <= maxRows + 1 - row; col++)
            printf("%3d ", col + addNum);

        addNum = sum + sumOfFirstNNums(maxRows - row);

        for (int col = 1; col <= maxRows + 1 - row; col++)
            printf("%3d ", col + addNum);

        printf("\n");
    }

    // 2nd Approach
    // int sum = sumOfFirstNNums(maxRows), countForLeft = 1, countForRight;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     countForRight = sum + 1 + sumOfFirstNNums(maxRows - row);

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= row && col <= maxCols + 1 - row)
    //         {
    //             if (col <= maxRows)
    //                 printf("%3d ", countForLeft++);
    //             else
    //                 printf("%3d ", countForRight++);
    //         }
    //         else
    //             printf("    ");
    //     }

    //     printf("\n");
    // }

    // 3rd Approach
    // int sum = maxRows * (maxRows + 1) / 2, numAtCol, lock;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     numAtCol = 1 + sum - sumOfFirstNNums(maxRows + 1 - row);
    //     lock = 1;

    //     for (int col = 0; col <= maxCols; col++)
    //     {
    //         if (col >= row && col <= maxCols + 1 - row)
    //         {
    //             if (col <= maxRows)
    //                 printf("%3d ", numAtCol++);
    //             else
    //             {
    //                 if (lock)
    //                 {
    //                     numAtCol += sumOfFirstNNums(maxRows - row) * 2;
    //                     lock = 0;
    //                 }
    //                 printf("%3d ", numAtCol++);
    //             }
    //         }
    //         else
    //             printf("    ");
    //     }

    //     printf("\n");
    // }

    printf("\n");
    getch();
    return 0;
}
// Main Function End

// Function to Find Sum of First N Natural Numbers
int sumOfFirstNNums(int n)
{
    return n * (n + 1) / 2;
}