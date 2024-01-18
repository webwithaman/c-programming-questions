// // C proram to print following Pattern

/*

Pattern 42.

       1
       0 1
       1 0 1
       0 1 0 1
       1 0 1 0 1


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
    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= row; col++)
            col + row & 1 ? printf("0 ") : printf("1 ");

        printf("\n");
    }

    // // 2nd Approach
    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols; col++)
        {
            if (col <= row)
                col + row & 1 ? printf("0 ") : printf("1 ");
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
