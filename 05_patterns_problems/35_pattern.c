// C proram to print following Pattern

/*

Pattern 35.

     * * * * *
      * * * *
       * * *
        * *
         *
         *
        * *
       * * *
      * * * *
     * * * * *

*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{
    int maxRowsInOne, maxRows, maxCols;
    printf("\nHow Many Rows For One Triangle => ");
    scanf("%d", &maxRowsInOne);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of maximum columns and maximum rows According to maxRows
    maxRows = maxRowsInOne * 2;
    maxCols = maxRowsInOne * 2 - 1;

    // Print Pattern
    puts("\n--------------------------------------------\n");

    // 1st Approach
    int spacesInCurrentRow, colsInCurrentRow, toggle;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = row <= maxRowsInOne ? (row - 1) * 2 : (maxRows - row) * 2;
        colsInCurrentRow = maxCols - spacesInCurrentRow;
        toggle = 1;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf(" ");

        for (int col = 1; col <= colsInCurrentRow; col++)
        {
            toggle ? printf("*") : printf(" ");
            toggle = !toggle;
        }

        printf("\n");
    }

    // 2nd Approach
    // int spacesInCurrentRow;

    // Print Upper Part
    // for (int row = 1; row <= maxRowsInOne; row++)
    // {
    //     spacesInCurrentRow = (row - 1) * 2;

    //     for (int space = 1; space <= spacesInCurrentRow / 2; space++)
    //         printf(" ");

    //     for (int col = 1; col <= maxRowsInOne + 1 - row; col++)
    //         printf("* ");

    //     printf("\n");
    // }

    // Print Lower Part
    // for (int row = 1; row <= maxRowsInOne; row++)
    // {
    //     spacesInCurrentRow = (maxRowsInOne - row) * 2;

    //     for (int space = 1; space <= spacesInCurrentRow / 2; space++)
    //         printf(" ");

    //     for (int col = 1; col <= row; col++)
    //         printf("* ");

    //     printf("\n");
    // }

    // 3rd Approach
    // int toggle, vary = 1;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     toggle = 1;

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= vary && col <= maxCols + 1 - vary && toggle)
    //         {
    //             printf("*");
    //             toggle = 0;
    //         }
    //         else
    //         {
    //             printf(" ");
    //             toggle = 1;
    //         }
    //     }

    //     if (row != maxRowsInOne)
    //         row < maxRowsInOne ? vary++ : vary--;

    //     printf("\n");
    // }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
