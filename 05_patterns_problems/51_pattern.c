// // C proram to print following Pattern

/*

Pattern 51.

    1                 1
    1 2             2 1
    1 2 3         3 2 1
    1 2 3 4     4 3 2 1
    1 2 3 4 5 5 4 3 2 1

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
    maxCols = maxRows * 2;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int numAtCol;

    for (int row = 1; row <= maxRows; row++)
    {
        numAtCol = 1;

        for (int col = 1; col <= maxCols; col++)
        {
            if (col <= row || col >= maxCols + 1 - row)
            {
                printf("%2d", numAtCol);
            }
            else
                printf("  ");

            if (col != maxRows)
                col < maxRows ? numAtCol++ : numAtCol--;
        }

        printf("\n");
    }

    // // 2nd Approach
    // // int spacesInCurrentRow;

    // // for (int row = 1; row <= maxRows; row++)
    // // {
    // //     spacesInCurrentRow = maxCols - row * 2;

    // //     for (int col = 1; col <= row; col++)
    // //         printf("%2d", col);

    // //     for (int space = 1; space <= spacesInCurrentRow; space++)
    // //         printf("  ");

    // //     for (int col = row; col; col--)
    // //         printf("%2d", col);

    // //     printf("\n");
    // // }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
