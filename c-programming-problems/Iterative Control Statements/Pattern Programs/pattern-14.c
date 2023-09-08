// C Program to Print Following Pattern

/*

   *
   **
   * *
   *  *
   *****

*/

// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    int maxRows;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 0)
        maxRows = -maxRows;

    puts("\n----------------------------------------------------------------------\n");

    // 1st Approach
    for (int i = 1; i <= maxRows; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == maxRows)
                printf("*");
            else
                putch(' '); // Function to Print A Character on Screen
        }

        putch(10); // Passing ASCII Code of '\n'
    }

    // 2nd Approach
    // for (int i = 1; i <= maxRows; i++)
    // {
    //     for (int j = 1; j <= maxRows; j++)
    //     {
    //         if (j == 1 || j == i || i == maxRows)
    //             printf("*");
    //         else
    //             putch(' ');
    //     }
    
    //     putch('\n');
    // }

    
    getch();
    return 0;
}
// Main Function End
