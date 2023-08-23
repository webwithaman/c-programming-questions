// C Program to Print Following Pattern

/*

   *
   **
   ***
   ****
   *****

*/

// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    int rows;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);

    // Handling Invalid Input
    if (rows < 0)
        rows = -rows;

    puts("\n----------------------------------------------------------------------\n");


    // 1st Approach
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }


    // 2nd Approach
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= rows; j++)
    //     {
    //         if (j <= i)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }


    // 3rd Approach
    // for (int i = rows; i; i--)
    // {
    //     for (int j = rows + 1 - i; j; j--)
    //         printf("*");
    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
