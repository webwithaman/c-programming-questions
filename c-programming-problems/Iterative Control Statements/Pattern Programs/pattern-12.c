// C Program to Print Following Pattern

/*

     A B C D E D C B A
       A B C D C B A
         A B C B A
           A B A
             A

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
        for (int space = 1; space <= i - 1; space++)
            printf("  ");

        for (int j = 1; j <= maxRows + 1 - i; j++)
            printf("%c ", 'A' - 1 + j);

        for (int k = maxRows - i; k; k--)
            printf("%c ", 'A' - 1 + k);

        printf("\n");
    }


    // 2nd Approach
    // char charToPrint = 'A';
    // for (int i = 1; i <= maxRows; i++)
    // {

    //     for (int space = 1; space <= i - 1; space++)
    //         printf("  ");

    //     for (int j = 1; j <= maxRows + 1 - i; j++)
    //         printf("%c ", charToPrint++);

    //     charToPrint--;

    //     for (int k = maxRows - i; k; k--)
    //         printf("%c ", --charToPrint);

    //     charToPrint = 'A';
    //     printf("\n");
    // }


    // 3rd Approach
    // for (int i = 1; i <= maxRows; i++)
    // {

    //     for (int space = 1; space <= i - 1; space++)
    //         printf("  ");

    //     for (int j = 'A'; j <= maxRows + 1 - i + 'A' - 1; j++)
    //         printf("%c ", j);

    //     for (int k = 'A' - 1 + maxRows - i; k >= 'A'; k--)
    //         printf("%c ", k);

    //     printf("\n");
    // }


    // 4th Approach
    // char charToPrint = 'A';
    // for (int i = 1; i <= maxRows; i++)
    // {
    //     for (int j = 1; j <= maxCols; j++)
    //     {
    //         if (j >= i && j <= maxCols + 1 - i)
    //             printf("%c ", j < maxRows ? charToPrint++ : charToPrint--);
    //         else
    //             printf("  ");
    //     }

    //     charToPrint = 'A';
    //     printf("\n");
    // }


    getch();
    return 0;
}
// Main Function End
