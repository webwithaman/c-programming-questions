// C Program to Print Following Pattern

/*

        *
       ***
      *****
     *******
    *********

*/

// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    int rows, cols;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);

    // Handling Invalid Input
    if (rows < 0)
        rows = -rows;

    // Set Columns According to Rows
    cols = rows * 2 - 1;

    puts("\n----------------------------------------------------------------------\n");

    // 1st Approach
    for (int i = 1; i <= rows; i++)
    {
        for (int space = 1; space <= rows - i; space++)
            printf(" ");

        for (int j = 1; j <= i * 2 - 1; j++)
            printf("*");

        printf("\n");
    }

    // 2nd Approach
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int space = 1; space <= rows - i; space++)
    //         printf(" ");

    //     for (int j = 1; j <= i; j++)
    //         printf("*");

    //     for (int k = 1; k <= i - 1; k++)
    //         printf("*");

    //     printf("\n");
    // }

    // 3rd Approach
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= cols; j++)
    //     {
    //         if (j >= rows + 1 - i && j <= rows - 1 + i)
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
