// // C proram to print following Pattern

/*

Pattern 19.

  *****     *****
 *******   *******
********* *********
****WEBWITHAMAN****
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *

*/

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

// // Main Function Start
int main()
{
    int maxRows = 13, maxCols = 19;
    char name[maxCols + 1];

    printf("\nEnter Your Name to Print In Heart => ");
    fflush(stdin);

    // // Get name from user
    fgets(name, maxCols + 1, stdin);
    name[strcspn(name, "\n")] = 0;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    for (int row = 1; row <= maxRows; row++)
    {
        if (row <= 3)
        {
            for (int col = 1; col <= maxCols; col++)
            {
                if (col >= 4 - row && col <= 6 + row || col >= 14 - row && col <= 16 + row)
                    printf("*");
                else
                    printf(" ");
            }
        }
        else if (row == 4)
        {
            int lengthOfName = strlen(name), restOfCols = maxCols - lengthOfName;

            for (int col = 1; col <= restOfCols / 2; col++)
                printf("*");

            printf("%s", name);

            for (int col = lengthOfName & 1 ? 1 : 0; col <= restOfCols / 2; col++)
                printf("*");
        }
        else
        {
            for (int col = 1; col <= maxCols; col++)
            {
                if (col >= maxCols - (maxCols - (row + 2 - 5)) && col <= maxCols - (row + 1 - 5))
                    printf("*");
                else
                    printf(" ");
            }
        }

        printf("\n");
    }

    printf("\n");
    getch();
    return 0;
}
// // Main Function Start
