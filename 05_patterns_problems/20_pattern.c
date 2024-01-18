// // C proram to print following Pattern

/*

Pattern 20.

    1
    2 3
    4 5 6
    7 8 9 10

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
    int numAtCol = 1;

    for (int row = 1; row <= maxRows; row++)
    {

        for (int col = 1; col <= row; col++)
            printf("%3d", numAtCol++);

        printf("\n");
    }

    // // 2nd Approach
    // // int numAtCol = 1, vary = 1;

    // // for (int row = 1; row <= maxRows; row++)
    // // {
    // //    vary += row - 1;

    // //    for (int col = vary; col <= vary + row - 1; col++)
    // //        printf("%3d", col);

    // //    printf("\n");
    // // }

    // // 3rd Approach
    // // int numAtCol = 1;

    // // for (int row = 1; row <= maxRows; row++)
    // // {

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
