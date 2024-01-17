// C proram to print following Pattern

/*

Pattern 43.

          *           *
        *   *       *   *
      *       *   *       *
    *           *           *
  *           *   *           *

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
    maxCols = maxRows * 3;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols; col++)
        {
            if (col == maxRows + 1 - row || col == maxRows - 1 + row || col == maxRows * 2 + 2 - row || col == maxRows * 2 + row)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
