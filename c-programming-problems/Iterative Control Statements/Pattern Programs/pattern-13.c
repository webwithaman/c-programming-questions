// C Program to Print Following Pattern

/*

    A B C D E F G F E D C B A
    A B C D E F   F E D C B A
    A B C D E       E D C B A
    A B C D           D C B A
    A B C               C B A
    A B                   B A
    A                       A

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
        for (int j = 1; j <= maxRows + 1 - i; j++)
            printf("%c ", 'A' - 1 + j);

        for (int space = 1; space <= (i - 1) * 2 - 1; space++)
            printf("  ");

        for (int k = i == 1 ? maxRows - 1 : maxRows + 1 - i; k ; k--)
            printf("%c ", k + 'A' - 1);

        printf("\n");
    }


    // 2nd Approach
    // char charToPrint = 'A';
    // for (int i = 1; i <= maxRows; i++)
    // {
    //     for (int j = 1; j <= maxCols; j++)
    //     {
    //         if (j <= maxRows + 1 - i || j >= maxRows - 1 + i)
    //             printf("%c ", charToPrint);
    //         else
    //             printf("  ");

    //         j < maxRows ? charToPrint++ : charToPrint--;
    //     }

    //     charToPrint = 'A';
    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
