// C proram to print following Pattern

/*

Pattern 30.

    1 2 3
    4 5 6
    7 8 9

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
    int numAtCol = 1;

    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols; col++)
            printf(" %2d ", numAtCol++);

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = maxCols * (row - 1) + 1; col <= maxCols * row; col++)
    //         printf(" %2d ", col);

    //     printf("\n");
    // }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
