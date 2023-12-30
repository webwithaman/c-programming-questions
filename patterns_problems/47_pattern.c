// C proram to print following Pattern

/*

Pattern 47.

      1  2  3  4   17  18  19  20
         5  6  7   14  15  16
            8  9   12  13
               10  11

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
    maxCols = maxRows + 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
   

    printf("\n");
    getch();
    return 0;
}
// Main Function End
