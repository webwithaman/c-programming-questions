// // C proram to print following Pattern

/*

Pattern 21.

    1
    2 3
    3 4 5
    4 5 6 7

*/

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
int main()
{
    int maxRows, maxCols;
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

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int numAtCol;

    for (int row = 1; row <= maxRows; row++)
    {
        numAtCol = row;

        for (int col = 1; col <= row; col++)
            printf("%3d", numAtCol++);

        printf("\n");
    }

    // // 2nd Approach
    // // for (int row = 1; row <= maxRows; row++)
    // // {
    // //    for (int col = row; col <= row * 2 - 1; col++)
    // //        printf("%3d", col);

    // //    printf("\n");
    // // }

    // // 3rd Approach
    // // int numAtCol;

    // // for (int row = 1; row <= maxRows; row++)
    // // {
    // //    numAtCol = row;

    // //    for (int col = 1; col <= maxCols; col++)
    // //    {
    // //        if (col <= row)
    // //            printf("%3d", numAtCol++);
    // //        else
    // //            printf("   ");
    // //    }

    // //    printf("\n");
    // // }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
