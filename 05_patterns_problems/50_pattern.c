// C proram to print following Pattern

/*

Pattern 50.

            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5

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
    int colsInCurrentRow = -1, spacesInCurrentRow, numAtCol = 0;

    for (int row = 1; row <= maxRows; row++)
    {

        colsInCurrentRow += 2;
        numAtCol = row;
        spacesInCurrentRow = maxCols - colsInCurrentRow;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf("   ");

        for (int col = 1; col <= colsInCurrentRow; col++)
        {
            printf("%2d ", col < (colsInCurrentRow + 1) / 2 ? numAtCol-- : numAtCol++);
        }

        printf("\n");
    }

    // // 2nd Approach
    // int spacesInCurrentRow, numAtCol = 0;

    // for (int row = 1; row <= maxRows; row++)
    // {

    //     spacesInCurrentRow = maxRows - row;
    //     numAtCol = row;

    //     for (int space = 1; space <= spacesInCurrentRow; space++)
    //         printf("   ");

    //     for (int col = numAtCol; col; col--)
    //         printf("%2d ", col);

    //     for (int col = 2; col <= numAtCol; col++)
    //         printf("%2d ", col);

    //     printf("\n");
    // }

    // // 3rd Approach
    // int halfOfCols = (maxCols + 1) / 2, vary = 1, numAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {

    //     numAtCol = row;

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= maxRows + 1 - row && col <= maxRows - 1 + row)
    //             printf("%2d ", col < maxRows ? numAtCol-- : numAtCol++);
    //         else
    //             printf("   ");
    //     }

    //     printf("\n");
    // }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
