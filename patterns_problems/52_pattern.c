// C proram to print following Pattern

/*

Pattern 52.

       a
       B c
       D e F
       g H i J
       k L m N o

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

    char ch = 'a';

    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if (col + row & 1)
                printf("%c ", ch - 32);
            else
                printf("%c ", ch);
            ch++;
        }

        printf("\n");
    }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
