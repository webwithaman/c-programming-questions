// // C proram to print following Pattern

/*

Pattern 13.

    ABCDEFGFEDCBA
    ABCDEF FEDCBA
    ABCDE   EDCBA
    ABCD     DCBA
    ABC       CBA
    AB         BA
    A           A

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
    maxCols = maxRows * 2 - 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = (row - 1) * 2 - 1;

        for (int col = 1; col <= maxRows + 1 - row; col++)
            printf("%c", 'A' - 1 + col);

        for (int space = 1; space <= spacesInCurrentRow; space++)
            printf(" ");

        for (int col = row == 1 ? maxRows - 1 : maxRows + 1 - row; col; col--)
            printf("%c", 'A' - 1 + col);

        printf("\n");
    }

    // // 2nd Approach
    // // int spacesInCurrentRow;
    // // char charAtCol;

    // // for (int row = 1; row <= maxRows; row++)
    // // {
    // //    spacesInCurrentRow = (row - 1) * 2 - 1;
    // //    charAtCol = 'A';

    // //    for (int col = 1; col <= maxRows + 1 - row; col++)
    // //        printf("%c", charAtCol++);

    // //    for (int space = 1; space <= spacesInCurrentRow; space++)
    // //        printf(" ");

    // //    charAtCol -= row == 1 ? 2 : 1;
    // //    for (int col = row == 1 ? maxRows - 1 : maxRows + 1 - row; col; col--)
    // //        printf("%c", charAtCol--);

    // //    printf("\n");
    // // }

    // // 3rd Approach
    // // char charAtCol;

    // // for (int row = 1; row <= maxRows; row++)
    // // {
    // //    charAtCol = 'A';

    // //    for (int col = 1; col <= maxCols; col++)
    // //    {
    // //        if (col <= maxRows + 1 - row || col >= maxRows - 1 + row)
    // //            printf("%c", charAtCol);
    // //        else
    // //            printf(" ");

    // //        col < maxRows ? charAtCol++ : charAtCol--;
    // //    }

    // //    printf("\n");
    // // }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
