// C proram to print following Pattern

/*

Pattern 28.

    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1

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
    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxRows + 1 - row; col++)
            printf("%3d", col);

        for (int star = 1; star <= (row - 1) * 2; star++)
            printf("  *");

        for (int col = maxRows + 1 - row; col; col--)
            printf("%3d", col);

        printf("\n");
    }

    // 2nd Approach
    // int numAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     numAtCol = 1;
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col <= maxRows + 1 - row)
    //             printf("%3d", numAtCol++);
    //         else if (col >= maxRows + row)
    //             printf("%3d", --numAtCol);
    //         else
    //             printf("  *");
    //     }

    //     printf("\n");
    // }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
