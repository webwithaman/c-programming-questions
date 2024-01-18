// // C proram to print following Pattern

/*

Pattern 39.

      **********
      ****  ****
      ***    ***
      **      **
      *        *
      *        *
      **      **
      ***    ***
      ****  ****
      **********

*/

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
int main()
{
    int maxRows, maxCols, maxRowsInOne;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // // Determine Number of Columns According to maxRows
    maxCols = maxRows;
    maxRowsInOne = (maxRows + 1) / 2;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int spacesInCurrentRow = maxRows & 1 ? -1 : -2, colsInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        if (row != maxRowsInOne + 1)
            spacesInCurrentRow += row <= maxRowsInOne ? 2 : -2;

        colsInCurrentRow = maxCols - spacesInCurrentRow;

        for (int col = 1; col <= colsInCurrentRow / 2; col++)
            printf("*");

        for (int space = 1; space <= spacesInCurrentRow; space++)
            printf(" ");

        for (int col = 1; col <= colsInCurrentRow / 2; col++)
            printf("*");

        printf("\n");
    }

    // // 2nd Approach
    // // for (int row = 1; row <= maxRowsInOne; row++)
    // // {
    // //    for (int col = 1; col <= maxCols; col++)
    // //    {
    // //        if (col <= maxRowsInOne + 1 - row || col >= maxRowsInOne + row)
    // //            printf("*");
    // //        else
    // //            printf(" ");
    // //    }

    // //    printf("\n");
    // // }

    // // for (int row = 1; row <= maxRowsInOne; row++)
    // // {
    // //    for (int col = 1; col <= maxCols; col++)
    // //    {
    // //        if (col <= row || col >= maxCols + 1 - row)
    // //            printf("*");
    // //        else
    // //            printf(" ");
    // //    }

    // //    printf("\n");
    // // }

    // // 3rd Approach
    // // int vary = maxRows & 1 ? 2 : 1;

    // // for (int row = 1; row <= maxRows; row++)
    // // {
    // //    for (int col = 1; col <= maxCols; col++)
    // //    {
    // //        if (col <= maxRowsInOne + 1 - vary || col >= maxRowsInOne + vary || (col >= maxRowsInOne - 1 + vary && maxRows & 1))
    // //            printf("*");
    // //        else
    // //            printf(" ");
    // //    }

    // //    if (row != maxRowsInOne || maxRows & 1)
    // //        row < maxRowsInOne ? vary++ : vary--;

    // //    printf("\n");
    // // }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
