// C proram to print following Pattern

/*

Pattern 55.

       4 4 4 4 4 4 4
       4 3 3 3 3 3 4
       4 3 2 2 2 3 4
       4 3 2 1 2 3 4
       4 3 2 2 2 3 4
       4 3 3 3 3 3 4
       4 4 4 4 4 4 4

*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{
    int n, maxRows, maxCols;
    printf("\nHow Many Numbers => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of Columns According to maxRows
    maxCols = maxRows = n * 2 - 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int vary = 1, numAtCol;

    for (int row = 1; row <= maxRows; row++)
    {
        numAtCol = n;

        for (int col = 1; col <= maxCols; col++)
        {
            if (col >= vary && col <= maxCols + 1 - vary)
                printf("%2d ", n + 1 - vary);
            else if (col <= vary)
                printf("%2d ", numAtCol--);
            else
                printf("%2d ", ++numAtCol);
        }

        row < n ? vary++ : vary--;

        printf("\n");
    }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
