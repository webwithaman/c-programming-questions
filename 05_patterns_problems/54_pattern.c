// C proram to print following Pattern

/*

Pattern 54.

       E D C B A
       D C B A
       C B A
       B A
       A

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
    char ch;

    for (int row = 1; row <= maxRows; row++)
    {
        ch = 'A' + maxRows - row;

        for (int col = 1; col <= maxRows + 1 - row; col++)
            printf("%c ", ch--);

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxRows + 1 - row; col++)
    //         printf("%c ", 'A' + maxRows - row + 1 - col);

    //     printf("\n");
    // }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
