// C proram to print following Pattern

/*

Pattern 03.

    * * * * *
    * * * *
    * * *
    * *
    *

*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{
    int maxRows, maxCols;
    printf("\nHow Many maxRows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of Columns According to maxRows
    maxCols = maxRows;
    puts("\n--------------------------------------------\n");

    // // Print Pattern

    // // 1st Approach
    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols + 1 - row; col++)
            printf("* ");

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col <= maxCols + 1 - row)
    //             printf("* ");
    //         else
    //             printf("  ");
    //     }

    //     printf("\n");
    // }

    printf("\n");
    getch();
    return 0;
}