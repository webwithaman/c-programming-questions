// C Program to Print Following Pattern

/*

    **********
    ****  ****
    ***    ***
    **      **
    *        *

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
    cols = rows * 2;

    puts("\n----------------------------------------------------------------------\n");

    // 1st Approach
    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= rows + 1 - i; j++)
            printf("*");

        for (int space = 1; space <= (i-1) * 2; space++)
            printf(" ");
        
        for (int k = 1; k <= rows + 1 - i; k++)
            printf("*");

        printf("\n");
    }


    // 2nd Approach
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= cols; j++)
    //     {
    //         if (j <= rows+1-i || j >= rows + i)
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
