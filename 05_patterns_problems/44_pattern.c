// C proram to print following Pattern

/*

Pattern 44.


       *        *
       **      **
       * *    * *
       *  *  *  *
       *   **   *
       *   **   *
       *  *  *  *
       * *    * *
       **      **
       *        *

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
    maxCols = maxRows + 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int vary = 1;

    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols; col++)
        {
            if (col == 1 || col == vary || col == maxCols + 1 - vary || col == maxCols)
                printf("*");
            else
                printf(" ");
        }

        row < maxCols / 2 ? vary++ : vary--;

        // if user wants even number of rows
        if (maxRows % 2 == 0 && row == maxCols / 2)
            vary++;

        printf("\n");
    }

    // // 2nd Approach
    // int spacesInCurrentRow;
    // int vary = 1;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = maxCols - vary * 2;

    //     for (int col = 1; col <= vary; col++)
    //     {
    //         if (col == 1 || col == vary)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     for (int space = 1; space <= spacesInCurrentRow; space++)
    //         printf(" ");

    //     for (int col = 1; col <= vary; col++)
    //     {
    //         if (col == 1 || col == vary)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     row < maxCols / 2 ? vary++ : vary--;

    //     // if user wants even number of rows
    //     if (maxRows % 2 == 0 && row == maxCols / 2)
    //         vary++;

    //     printf("\n");
    // }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
