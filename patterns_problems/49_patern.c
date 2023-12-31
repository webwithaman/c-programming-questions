// C proram to print following Pattern

/*

Pattern 49.

         *
         *
         *
   * * * * * * *
         *
         *
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
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of Columns According to maxRows
    maxCols = maxRows & 1 ? maxRows : (maxRows += 1);

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols; col++)
        {
            if (col == (maxCols + 1) / 2 || row == (maxCols + 1) / 2)
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
// Main Function End
