// C proram to print following Pattern

/*

Pattern 29.

    4 3 2 1
    4 3 2 1
    4 3 2 1

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
    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = maxCols; col; col--)
            printf("%d ", col);

        printf("\n");
    }

    // // 2nd Approach
    // int numAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     numAtCol = maxCols;
    //     for (int col = 1; col <= maxCols; col++)
    //         printf("%d ", numAtCol--);

    //     printf("\n");
    // }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
