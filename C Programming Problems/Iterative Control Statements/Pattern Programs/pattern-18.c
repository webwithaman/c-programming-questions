// C Program to Print Following Pattern

/*

        *
       ***
      *****
     *******
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

    // Set Columns According to Rows
    maxCols = maxRows & 1 ? maxRows : maxRows - 1;

    puts("\n----------------------------------------------------------------------\n");

    int midOfRows = (maxRows + 1) / 2;

    // 1st Approach
    int  varyUponEachIteration = 1;

    for (int i = 1; i <= maxRows; i++)
    {
        for (int j = 1; j <= maxCols; j++)
        {
            if (j >= midOfRows + 1 - varyUponEachIteration && j <= midOfRows - 1 + varyUponEachIteration)
                printf("*");
            else
                printf(" ");
        }

        // If User Wants Even Number of Rows
        if (maxRows % 2 == 0 && i == midOfRows)
            varyUponEachIteration++;

        i < midOfRows ? varyUponEachIteration++ : varyUponEachIteration--;
        printf("\n");
    }



    // 2nd Approach
    // int varyUponEachIteration = 1;

    // for (int i = 1; i <= maxRows; i++)
    // {

    //     for (int space = 1; space <= midOfRows - varyUponEachIteration; space++)
    //         printf(" ");

    //     for (int j = 1; j <= varyUponEachIteration * 2 - 1; j++)
    //         printf("*");

    //     // If User Wants Even Number of Rows
    //     if (maxRows % 2 == 0 && i == midOfRows)
    //         varyUponEachIteration++;

    //     i < midOfRows ? varyUponEachIteration++ : varyUponEachIteration--;

    //     putch(10);
    // }


    // 3rd Approach
    // int spacesInEachRow = midOfRows-1;
    // for (int i = 1; i <= maxRows; i++)
    // {

    //     for (int space = 1; space <=spacesInEachRow; space++)
    //         printf(" ");

    //     for (int j = 1; j <= maxCols - (spacesInEachRow*2); j++)
    //         printf("*");

    //     // If User Wants Even Number of Rows
    //     if (maxRows % 2 == 0 && i == midOfRows)
    //         spacesInEachRow--;

    //     i < midOfRows ? spacesInEachRow-- : spacesInEachRow++;
    //     putch(10);
    // }


    // 4th Approach
    // int spacesInEachRow = midOfRows - 1, starsInEachRow = 1;
    // for (int i = 1; i <= maxRows; i++)
    // {

    //     for (int space = 1; space <= spacesInEachRow; space++)
    //         printf(" ");

    //     for (int j = 1; j <= starsInEachRow; j++)
    //         printf("*");

    //     // If User Wants Even Number of Rows
    //     if (maxRows % 2 == 0 && i == midOfRows)
    //     {
    //         spacesInEachRow--;
    //         starsInEachRow += 2;
    //     }

    //     if (i < midOfRows)
    //     {
    //         spacesInEachRow--;
    //         starsInEachRow += 2;
    //     }
    //     else
    //     {
    //         spacesInEachRow++;
    //         starsInEachRow -= 2;
    //     }

    //     putch(10);
    // }

    getch();
    return 0;
}
// Main Function End
