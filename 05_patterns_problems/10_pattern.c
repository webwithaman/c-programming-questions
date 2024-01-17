// C proram to print following Pattern

/*

Pattern 10.

    1 2 3 4 3 2 1
    1 2 3   3 2 1
    1 2       2 1
    1           1

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
    int spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = (row - 1) * 2 - 1;

        for (int col = 1; col <= maxRows + 1 - row; col++)
            printf("%2d", col);

        for (int space = 1; space <= spacesInCurrentRow; space++)
            printf("  ");

        for (int col = row == 1 ? maxRows - 1 : maxRows + 1 - row; col; col--)
            printf("%2d", col);

        printf("\n");
    }

    // // 2nd Approach
    // int numAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     numAtCol = 1;

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col <= maxRows + 1 - row || col >= maxRows - 1 + row)
    //             printf("%2d", numAtCol);
    //         else
    //             printf("  ");

    //         col < maxRows ? numAtCol++ : numAtCol--;
    //     }

    //     printf("\n");
    // }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
