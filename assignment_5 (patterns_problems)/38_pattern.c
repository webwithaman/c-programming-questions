// C proram to print following Pattern

/*

Pattern 38.

         1
        212
       32123
      4321234
       32123
        212
         1

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
    maxCols = maxRows;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int colsInCurrentRow = -1, spacesInCurrentRow, halfOfCols = (maxCols + 1) / 2, numAtCol = 0;

    for (int row = 1; row <= maxRows; row++)
    {

        if (row <= halfOfCols)
        {
            colsInCurrentRow += 2;
            numAtCol = row;
        }
        else
        {
            colsInCurrentRow -= 2;
            numAtCol = maxRows + 1 - row;
        }

        // If user wants even number of rows
        if (row == halfOfCols + 1 && maxRows % 2 == 0)
            colsInCurrentRow += 2;

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
    // int spacesInCurrentRow, halfOfCols = (maxCols + 1) / 2;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = row <= halfOfCols ? halfOfCols - row : row - halfOfCols;

    //     // If user wants even number of rows
    //     if (row >= halfOfCols + 1 && maxRows % 2 == 0)
    //         spacesInCurrentRow--;

    //     for (int space = 1; space <= spacesInCurrentRow; space++)
    //         printf("   ");

    //     for (int col = row <= halfOfCols ? row : maxRows + 1 - row; col; col--)
    //         printf("%2d ", col);

    //     for (int col = 2; col <= (row <= halfOfCols ? row : maxRows + 1 - row); col++)
    //         printf("%2d ", col);

    //     printf("\n");
    // }

    // // 3rd Approach
    // int spacesInCurrentRow, halfOfCols = (maxCols + 1) / 2, numAtCol = 0;

    // for (int row = 1; row <= maxRows; row++)
    // {

    //     if (row <= halfOfCols)
    //     {
    //         spacesInCurrentRow = halfOfCols - row;
    //         numAtCol = row;
    //     }
    //     else
    //     {
    //         spacesInCurrentRow = row - halfOfCols;
    //         numAtCol = maxRows + 1 - row;
    //     }

    //     // If user wants even number of rows
    //     if (row >= halfOfCols + 1 && maxRows % 2 == 0)
    //         spacesInCurrentRow--;

    //     for (int space = 1; space <= spacesInCurrentRow; space++)
    //         printf("   ");

    //     for (int col = numAtCol; col; col--)
    //         printf("%2d ", col);

    //     for (int col = 2; col <= numAtCol; col++)
    //         printf("%2d ", col);

    //     printf("\n");
    // }

    // // 4th Approach
    // int halfOfCols = (maxCols + 1) / 2, vary = 1, numAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     numAtCol = row <= halfOfCols ? row : maxRows + 1 - row;

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= halfOfCols + 1 - vary && col <= halfOfCols - 1 + vary)
    //             printf("%2d ", col < halfOfCols ? numAtCol-- : numAtCol++);
    //         else
    //             printf("   ");
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
