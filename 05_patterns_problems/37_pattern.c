// // C program to Print Following Pattern

/*

    Pattern 37.

              1
            1   1
          1   2   1
        1   3   3   1
      1   4   6   4   1

      Pascal Traingle

      1st Formula..
      Find Element For Any Position = row! / ( col! * (row-col)! )
      where, row =  0 1 2 ...... N and col = 0 1 2 ..... N

      2nd Formula..
      Find Element For Any Position =>  n =  n * (row - col) / (col + 1).
      where, n Starts with 1 for Each Row, row =  0 1 2 ...... N and col = 0 1 2 ..... N


*/

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Function Prototype (Declaration)
int fact(int);

// // Main Function Start
int main()
{

    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // // Determine Number of Columns According to maxRows
    maxCols = maxRows * 2 - 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach (Using 1st Formula)
    int spacesInCurrentRow, element;

    for (int row = 0; row < maxRows; row++)
    {
        spacesInCurrentRow = (maxRows - row) * 2;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf("  ");

        for (int col = 0; col <= row; col++)
        {
            element = fact(row) / (fact(col) * (fact(row - col)));
            printf("%3d ", element);
        }

        printf("\n");
    }

    // // 2nd Approach (Using 1st Formula)
    // // int toggle, colno, element;

    // // for (int row = 0; row < maxRows; row++)
    // // {
    // //    toggle = 1;
    // //    colno = 0;

    // //    for (int col = 1; col <= maxCols; col++)
    // //    {
    // //        if (col >= maxRows - row && col <= maxRows + row && toggle)
    // //        {
    // //            element = fact(row) / (fact(colno) * (fact(row - colno)));
    // //            printf("%2d ", element);
    // //            toggle = 0;
    // //            colno++;
    // //        }
    // //        else
    // //        {
    // //            printf("   ");
    // //            toggle = 1;
    // //        }
    // //    }

    // //    printf("\n");
    // // }

    // // 3rd Approach (Using 2nd Formula)
    // // int colsInCurrentRow, spacesInCurrentRow, toggle, colno, n, element;

    // // for (int row = 0; row < maxRows; row++)
    // // {
    // //    spacesInCurrentRow = (maxRows - row - 1) * 2;
    // //    colsInCurrentRow = maxCols - spacesInCurrentRow;
    // //    toggle = n = 1;
    // //    colno = 0;

    // //    for (int space = 1; space <= spacesInCurrentRow / 2; space++)
    // //        printf("   ");

    // //    for (int col = 1; col <= colsInCurrentRow; col++)
    // //    {
    // //        if (toggle)
    // //        {
    // //            printf("%2d ", n);
    // //            n = n * (row - colno) / (colno + 1);
    // //            colno++;
    // //        }
    // //        else
    // //        {
    // //            printf("   ");
    // //        }
    // //        toggle = !toggle;
    // //    }

    // //    printf("\n");
    // // }

    getch();
    return 0;
}
// // Main Function End

// // Function to Find Factorial
int fact(int n)
{
    int result = 1;

    // // loop from 2 to n to get the factorial
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }

    return result;
}