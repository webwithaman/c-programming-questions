// C proram to print following Pattern

/*

Pattern 17.

    *********
     *     *
      *   *
       * *
        *

*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
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
    maxCols = maxRows * 2 - 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int colsInCurrentRow, spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = (row - 1) * 2;

        colsInCurrentRow = maxCols - (row - 1) * 2;
        // colsInCurrentRow = maxCols - spacesInCurrentRow;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf(" ");

        for (int col = 1; col <= colsInCurrentRow; col++)
        {
            if (col == 1 || col == colsInCurrentRow || row == 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col == row || col == maxCols + 1 - row || row == 1)
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
