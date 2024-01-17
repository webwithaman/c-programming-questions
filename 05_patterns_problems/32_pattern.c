// C proram to print following Pattern

/*

Pattern 32.

    *
    **
    ***
    ****
    *****
    ****
    ***
    **
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
    maxCols = (maxRows + 1) / 2;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int vary = 1;

    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols; col++)
        {
            if (col <= vary)
                printf("*");
            else
                printf(" ");
        }

        row < maxCols ? vary++ : vary--;

        // If user wants even number of rows
        if (row == maxCols && maxRows % 2 == 0)
            vary++;

        printf("\n");
    }

    // // 2nd Approach
    // int colsInCurrentRow;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     colsInCurrentRow = row <= maxCols ? row : maxCols - (row - maxCols);

    //     // If user wants even number of rows
    //     if (row >= maxCols + 1 && maxRows % 2 == 0)
    //         colsInCurrentRow++;

    //     for (int col = 1; col <= colsInCurrentRow; col++)
    //         printf("*");

    //     printf("\n");
    // }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
