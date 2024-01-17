// C proram to print following Pattern

/*

Pattern 07.

    **********
    ****  ****
    ***    ***
    **      **
    *        *

*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

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
    int colsInCurrentRow, spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = (row - 1) * 2;
        colsInCurrentRow = maxCols - spacesInCurrentRow;
        // colsInCurrentRow = maxCols - (row - 1) * 2;

        for (int col = 1; col <= colsInCurrentRow / 2; col++)
            printf("*");

        for (int space = 1; space <= spacesInCurrentRow; space++)
            printf(" ");

        for (int col = 1; col <= colsInCurrentRow / 2; col++)
            printf("*");

        printf("\n");
    }

    // 2nd Approach
    // int spacesInCurrentRow, colsInCurrentRow = maxCols + 2;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = (row - 1) * 2;
    //     colsInCurrentRow -= 2;

    //     for (int col = 1; col <= colsInCurrentRow / 2; col++)
    //         printf("*");

    //     for (int space = 1; space <= spacesInCurrentRow; space++)
    //         printf(" ");

    //     for (int col = 1; col <= colsInCurrentRow / 2; col++)
    //         printf("*");

    //     printf("\n");
    // }

    // 3rd Approach
    // int spacesInCurrentRow;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = (row - 1) * 2;

    //     for (int col = 1; col <= maxRows + 1 - row; col++)
    //         printf("*");

    //     for (int space = 1; space <= spacesInCurrentRow; space++)
    //         printf(" ");

    //     for (int col = maxRows + row; col <= maxCols; col++)
    //         printf("*");

    //     printf("\n");
    // }

    // 4th Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col <= maxRows + 1 - row || col >= maxRows + row)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
