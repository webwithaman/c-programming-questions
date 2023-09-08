// C Program to Print Following Pattern

/*

          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1

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

    // Set Columns According to Rows
    maxCols = maxRows * 2 - 1;

    puts("\n----------------------------------------------------------------------\n");

    // 1st Approach
    for (int i = 1; i <= maxRows; i++)
    {

        for (int space = 1; space <= maxRows - i; space++)
            printf("   ");

        for (int j = 1; j <= i; j++)
            printf("%-3d", j);

        for (int k = i - 1; k; k--)
            printf("%-3d", k);

        printf("\n");
    }
    

    // 2nd Approach
    // int numToPrint = 1;
    // for (int i = 1; i <= maxRows; i++)
    // {
    //     for (int j = 1; j <= maxCols; j++)
    //     {
    //         if (j >= maxRows + 1 - i && j <= maxRows - 1 + i)
    //             printf("%-3d",   j < maxRows ? numToPrint++ : numToPrint--);
    //         else
    //             printf("   ");
    //     }

    //     numToPrint = 1;

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
