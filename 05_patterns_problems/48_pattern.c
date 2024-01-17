// C proram to print following Pattern

/*

Pattern 48.

         *
        * *
       * * *
      * * * *
     * * * * *
      * * * *
       * * *
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
    maxCols = maxRows;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int colsInCurrentRow = -1, spacesInCurrentRow, halfOfCols = (maxCols + 1) / 2, toggle;

    for (int row = 1; row <= maxRows; row++)
    {
        colsInCurrentRow += row <= halfOfCols ? 2 : -2;
        toggle = 1;

        // If user wants even number of rows
        if (row == halfOfCols + 1 && maxRows % 2 == 0)
            colsInCurrentRow += 2;

        spacesInCurrentRow = maxCols - colsInCurrentRow;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf(" ");

        for (int col = 1; col <= colsInCurrentRow; col++)
        {
            toggle ? printf("*") : printf(" ");
            toggle = !toggle;
        }

        printf("\n");
    }

    // // 2nd Approach
    // int halfOfCols = (maxCols + 1) / 2, vary = 1, toggle;

    // for (int row = 1; row <= maxRows; row++)
    // {

    //     toggle = 1;

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= halfOfCols + 1 - vary && col <= halfOfCols - 1 + vary && toggle)
    //         {
    //             printf("*");
    //             toggle = 0;
    //         }
    //         else
    //         {
    //             printf(" ");
    //             toggle = 0;
    //         }
    //     }

    //     row < halfOfCols ? vary++ : vary--;

    //     // If user wants even number of rows
    //     if (row == halfOfCols && maxRows % 2 == 0)
    //         vary++;

    //     printf("\n");
    // }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
