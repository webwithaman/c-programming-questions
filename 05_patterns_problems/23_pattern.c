// // C proram to print following Pattern

/*

Pattern 23.

    A B C D
    E F G H
    I J K L
    M N O P

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
    char charAtCol = 'A';

    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols; col++)
            printf("%c ", charAtCol++);

        printf("\n");
    }

    // // 2nd Approach
    // // for (int row = 1; row <= maxRows; row++)
    // // {
    // //     for (int col = maxCols * (row - 1) + 1; col <= maxCols * row; col++)
    // //         printf("%c ", 'A' - 1 + col);

    // //     printf("\n");
    // // }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
