// C Program to Print Following Pattern

/*

    *********
     *******
      *****
       ***
        *

*/

// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 0)
        maxRows = -maxRows;

    // Set Columns According to maxRows
    maxCols = maxRows * 2 - 1;

    puts("\n----------------------------------------------------------------------\n");

    // 1st Approach
    for (int i = 1; i <= maxRows; i++)
    {
        for (int space = 1; space <= i - 1; space++)
            printf(" ");

        for (int j = 1; j <= maxCols - (i - 1) * 2; j++)
            printf("*");

        printf("\n");
    }

    // 2nd Approach
    for (int i = 1; i <= maxRows; i++)
    // {
    //     for (int space = 1; space <= i - 1; space++)
    //         printf(" ");

    //     for (int j = 1; j <= maxRows + 1 - i; j++)
    //         printf("*");

    //     for (int k = 1; k <= maxRows - i; k++)
    //         printf("*");

    //     printf("\n");
    // }

    // 3rd Approach
    // for (int i = 1; i <= maxRows; i++)
    // {
    //     for (int j = 1; j <= maxCols; j++)
    //     {
    //         if (j >= i && j <= maxCols + 1 - i)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
