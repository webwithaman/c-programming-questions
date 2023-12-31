// C proram to print following Pattern

/*

Pattern 11.

        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA

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
    maxCols = maxRows * 2 - 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = (maxRows - row) * 2;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf(" ");

        for (int col = 1; col <= row; col++)
            printf("%c", 'A' - 1 + col);

        for (int col = row - 1; col; col--)
            printf("%c", 'A' - 1 + col);

        printf("\n");
    }

    // // 2nd Approach
    // int spacesInCurrentRow;
    // char charAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = (maxRows - row) * 2;
    //     charAtCol = 'A';

    //     for (int space = 1; space <= spacesInCurrentRow / 2; space++)
    //         printf(" ");

    //     for (int col = 1; col <= row; col++)
    //         printf("%c", charAtCol++);

    //     charAtCol -= 2;
    //     for (int col = row - 1; col; col--)
    //         printf("%c", charAtCol--);

    //     printf("\n");
    // }

    // // 3rd Approach
    // char charAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     charAtCol = 'A';

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= maxRows + 1 - row && col <= maxRows - 1 + row)
    //             printf("%c", col < maxRows ? charAtCol++ : charAtCol--);
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }

    printf("\n");
    getch();
    return 0;
}
// Main Function End
