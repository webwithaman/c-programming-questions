// C proram to print following Pattern

/*

Pattern 22.

    A B C D
    A B C D
    A B C D
    A B C D

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
    for (int row = 1; row <= maxRows; row++)
    {

        for (int col = 1; col <= maxCols; col++)
            printf("%c ", 'A' - 1 + col);

        printf("\n");
    }

    // // 2nd Approach
    // char charAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     charAtCol = 'A';
    //     for (int col = 1; col <= maxCols; col++)
    //         printf("%c ", charAtCol++);

    //     printf("\n");
    // }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
