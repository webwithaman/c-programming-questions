// Menu Driven Program for Patterns

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Functions Prototypes (Declarations)
int choice();
void pattern_1();
void pattern_2();
void pattern_3();
void pattern_4();
void pattern_5();
void pattern_6();
void pattern_7();
void pattern_8();
void pattern_9();
void pattern_10();
void pattern_11();
void pattern_12();
void pattern_13();
void pattern_14();
void pattern_15();
void pattern_16();
void pattern_17();
void pattern_18();
void pattern_19();
void pattern_20();
void pattern_21();
void pattern_22();
void pattern_23();
void pattern_24();
void pattern_25();
void pattern_26();
void pattern_27();
void pattern_28();
void pattern_29();
void pattern_30();
void pattern_31();
void pattern_32();
void pattern_33();
void pattern_34();
void pattern_35();
void pattern_36();
void pattern_37();
void pattern_38();
void pattern_39();
void pattern_40();
void pattern_41();
void pattern_42();
void pattern_43();
void pattern_44();
void pattern_45();
void pattern_46();
void pattern_47();
void pattern_48();
void pattern_49();
void pattern_50();
void pattern_51();
void pattern_52();
void pattern_53();
void pattern_54();
void pattern_55();

// Main Function Start
int main()
{

    while (1)
    {
        switch (choice())
        {

        case 0:
            exit(0);

        case 1:
            pattern_1();
            break;

        case 2:
            pattern_2();
            break;

        case 3:
            pattern_3();
            break;

        case 4:
            pattern_4();
            break;

        case 5:
            pattern_5();
            break;

            // case 6:
            //     pattern_6();
            //     break;

            // case 7:
            //     pattern_7();
            //     break;

            // case 8:
            //     pattern_8();
            //     break;

            // case 9:
            //     pattern_9();
            //     break;

            // case 10:
            //     pattern_10();
            //     break;

            // case 11:
            //     pattern_11();
            //     break;

            // case 12:
            //     pattern_12();
            //     break;

            // case 13:
            //     pattern_13();
            //     break;

            // case 14:
            //     pattern_14();
            //     break;

            // case 15:
            //     pattern_15();
            //     break;

            // case 16:
            //     pattern_16();
            //     break;

            // case 17:
            //     pattern_17();
            //     break;

            // case 18:
            //     pattern_18();
            //     break;

            // case 19:
            //     pattern_19();
            //     break;

            // case 20:
            //     pattern_20();
            //     break;

            // case 21:
            //     pattern_21();
            //     break;

            // case 22:
            //     pattern_22();
            //     break;

            // case 23:
            //     pattern_23();
            //     break;

            // case 24:
            //     pattern_24();
            //     break;

            // case 25:
            //     pattern_25();
            //     break;

            // case 26:
            //     pattern_26();
            //     break;

            // case 27:
            //     pattern_27();
            //     break;

            // case 28:
            //     pattern_28();
            //     break;

            // case 29:
            //     pattern_29();
            //     break;

            // case 30:
            //     pattern_30();
            //     break;

            // case 31:
            //     pattern_31();
            //     break;

            // case 32:
            //     pattern_32();
            //     break;

            // case 33:
            //     pattern_33();
            //     break;

            // case 34:
            //     pattern_34();
            //     break;

            // case 35:
            //     pattern_35();
            //     break;

            // case 36:
            //     pattern_36();
            //     break;

            // case 37:
            //     pattern_37();
            //     break;

            // case 38:
            //     pattern_38();
            //     break;

            // case 39:
            //     pattern_39();
            //     break;

            // case 40:
            //     pattern_40();
            //     break;

            // case 41:
            //     pattern_41();
            //     break;

            // case 42:
            //     pattern_42();
            //     break;

            // case 43:
            //     pattern_43();
            //     break;

            // case 44:
            //     pattern_44();
            //     break;

            // case 45:
            //     pattern_45();
            //     break;

            // case 46:
            //     pattern_46();
            //     break;

            // case 47:
            //     pattern_47();
            //     break;

            // case 48:
            //     pattern_48();
            //     break;

            // case 49:
            //     pattern_49();
            //     break;

            // case 50:
            //     pattern_50();
            //     break;

            // case 51:
            //     pattern_51();
            //     break;

            // case 52:
            //     pattern_52();
            //     break;

            // case 53:
            //     pattern_53();
            //     break;

            // case 54:
            //     pattern_54();
            //     break;

            // case 55:
            //     pattern_55();
            //     break;

        default:
            puts("!!! Invalid Choice....\n");
            break;
        }

        getch();
    }

    getch();
    return 0;
}
// Main Function End

// Functions Definitions
int choice()
{
    int choice;
    system("cls");
    puts("\n>>> WEB WITH AMAN <<<");
    puts(".....................");
    printf("Press  0 : Exit");
    for (int i = 1; i <= 55; i++)
        printf("\nPress %2d : Pattern %2d", i, i);
    puts("\n.....................");

    printf("Enter Your Choice => ");
    fflush(stdin);
    scanf("%d", &choice);
    printf("\n---------------------");
    return choice;
}

void pattern_1()
{

    /*

    Pattern 01.

    *
    * *
    * * *
    * * * *
    * * * * *

    */

    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of Columns According to maxRows
    maxCols = maxRows;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= row; col++)
            printf("* ");

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col <= row)
    //             printf("* ");
    //         else
    //             printf("  ");
    //     }
    //     printf("\n");
    // }
}

void pattern_2()
{
    /*

    Pattern 02.

                 *
               * *
             * * *
           * * * *
         * * * * *

    */

    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of Columns According to maxRows
    maxCols = maxRows;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int colsInCurrentRow, spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = maxCols - row;

        colsInCurrentRow = row;

        for (int space = 1; space <= spacesInCurrentRow; space++)
            printf("  ");

        for (int col = 1; col <= colsInCurrentRow; col++)
            printf("* ");

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= maxCols + 1 - row)
    //             printf("* ");
    //         else
    //             printf("  ");
    //     }

    //     printf("\n");
    // }
}

void pattern_3()
{
    /*

    Pattern 03.

        * * * * *
        * * * *
        * * *
        * *
        *

    */

    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of Columns According to maxRows
    maxCols = maxRows;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols + 1 - row; col++)
            printf("* ");

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col <= maxCols + 1 - row)
    //             printf("* ");
    //         else
    //             printf("  ");
    //     }

    //     printf("\n");
    // }
}

void pattern_4()
{
    /*

    Pattern 04.

        * * * * *
          * * * *
            * * *
              * *
                *

    */

    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of Columns According to maxRows
    maxCols = maxRows;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int colsInCurrentRow, spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = row - 1;

        colsInCurrentRow = maxCols - spacesInCurrentRow;

        for (int space = 1; space <= spacesInCurrentRow; space++)
            printf("  ");

        for (int col = 1; col <= colsInCurrentRow; col++)
            printf("* ");

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= row)
    //             printf("* ");
    //         else
    //             printf("  ");
    //     }

    //     printf("\n");
    // }
}

void pattern_5()
{
    /*

    Pattern 05.

            *
           ***
          *****
         *******
        *********

    */

    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of Columns According to maxRows
    maxCols = maxRows * 2 - 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int colsInCurrentRow, spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = (maxRows - row) * 2;
        colsInCurrentRow = maxCols - spacesInCurrentRow;
        // colsInCurrentRow = row * 2 - 1;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf(" ");

        for (int col = 1; col <= colsInCurrentRow; col++)
            printf("*");

        printf("\n");
    }

    // // 2nd Approach
    // int spacesInCurrentRow, colsInCurrentRow = -1;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = (maxRows - row) * 2;

    //     colsInCurrentRow += 2;

    //     for (int space = 1; space <= spacesInCurrentRow / 2; space++)
    //         printf(" ");

    //     for (int col = 1; col <= colsInCurrentRow; col++)
    //         printf("*");

    //     printf("\n");
    // }

    // // 3rd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= maxRows + 1 - row && col <= maxRows - 1 + row)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }
}

void pattern_6()
{
    /*

    Pattern 06.

        *********
         *******
          *****
           ***
            *

    */

    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of Columns According to maxRows
    maxCols = maxRows * 2 - 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int colsInCurrentRow, spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = (row - 1) * 2;

        // colsInCurrentRow = maxCols - (row - 1) * 2;
        colsInCurrentRow = maxCols - spacesInCurrentRow;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf(" ");

        for (int col = 1; col <= colsInCurrentRow; col++)
            printf("*");

        printf("\n");
    }

    // // 2nd Approach
    // int colsInCurrentRow = maxCols + 2, spacesInCurrentRow;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = (row - 1) * 2;

    //     colsInCurrentRow -= 2;

    //     for (int space = 1; space <= spacesInCurrentRow / 2; space++)
    //         printf(" ");

    //     for (int col = 1; col <= colsInCurrentRow; col++)
    //         printf("*");

    //     printf("\n");
    // }

    // // 3rd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= row && col <= maxCols + 1 - row)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }
}

void pattern_7()
{
    /*

    Pattern 07.

        **********
        ****  ****
        ***    ***
        **      **
        *        *

    */

    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of Columns According to maxRows
    maxCols = maxRows * 2;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int colsInCurrentRow, spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = (row - 1) * 2;
        colsInCurrentRow = maxCols - spacesInCurrentRow;
        // colsInCurrentRow = maxCols - (row - 1) * 2;

        for (int col = 1; col <= colsInCurrentRow / 2; col++)
            printf("*");

        for (int space = 1; space <= spacesInCurrentRow; space++)
            printf(" ");

        for (int col = 1; col <= colsInCurrentRow / 2; col++)
            printf("*");

        printf("\n");
    }

    // // 2nd Approach
    // int spacesInCurrentRow, colsInCurrentRow = maxCols + 2;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = (row - 1) * 2;
    //     colsInCurrentRow -= 2;

    //     for (int col = 1; col <= colsInCurrentRow / 2; col++)
    //         printf("*");

    //     for (int space = 1; space <= spacesInCurrentRow; space++)
    //         printf(" ");

    //     for (int col = 1; col <= colsInCurrentRow / 2; col++)
    //         printf("*");

    //     printf("\n");
    // }

    // // 3rd Approach
    // int spacesInCurrentRow;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = (row - 1) * 2;

    //     for (int col = 1; col <= maxRows + 1 - row; col++)
    //         printf("*");

    //     for (int space = 1; space <= spacesInCurrentRow; space++)
    //         printf(" ");

    //     for (int col = maxRows + row; col <= maxCols; col++)
    //         printf("*");

    //     printf("\n");
    // }

    // // 4th Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col <= maxRows + 1 - row || col >= maxRows + row)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }
}

void pattern_8()
{
    /*

    Pattern 08.

            1
           121
          12321
         1234321

    */

    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of Columns According to maxRows
    maxCols = maxRows * 2 - 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = (maxRows - row) * 2;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf("  ");

        for (int col = 1; col <= row; col++)
            printf("%2d", col);

        for (int col = row - 1; col; col--)
            printf("%2d", col);

        printf("\n");
    }

    // // 2nd Approach
    // int numAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     numAtCol = 1;

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= maxRows + 1 - row && col <= maxRows - 1 + row)
    //             printf("%2d", col < maxRows ? numAtCol++ : numAtCol--);
    //         else
    //             printf("  ");
    //     }

    //     printf("\n");
    // }
}

void pattern_9()
{
    /*

    Pattern 09.

         1234321
          12321
           121
            1

    */

    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of Columns According to maxRows
    maxCols = maxRows * 2 - 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = (row - 1) * 2;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf("  ");

        for (int col = 1; col <= maxRows + 1 - row; col++)
            printf("%2d", col);

        for (int col = maxRows - row; col > 0; col--)
            printf("%2d", col);

        printf("\n");
    }

    // // 2nd Approach
    // int numAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     numAtCol = 1;

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= row && col <= maxCols + 1 - row)
    //             printf("%2d", col < maxRows ? numAtCol++ : numAtCol--);
    //         else
    //             printf("  ");
    //     }

    //     printf("\n");
    // }
}

void pattern_10()
{
    /*

    Pattern 10.

        1 2 3 4 3 2 1
        1 2 3   3 2 1
        1 2       2 1
        1           1

    */

    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of Columns According to maxRows
    maxCols = maxRows * 2 - 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = (row - 1) * 2 - 1;

        for (int col = 1; col <= maxRows + 1 - row; col++)
            printf("%2d", col);

        for (int space = 1; space <= spacesInCurrentRow; space++)
            printf("  ");

        for (int col = row == 1 ? maxRows - 1 : maxRows + 1 - row; col; col--)
            printf("%2d", col);

        printf("\n");
    }

    // // 2nd Approach
    // int numAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     numAtCol = 1;

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col <= maxRows + 1 - row || col >= maxRows - 1 + row)
    //             printf("%2d", numAtCol);
    //         else
    //             printf("  ");

    //         col < maxRows ? numAtCol++ : numAtCol--;
    //     }

    //     printf("\n");
    // }
}

void pattern_11()
{
    /*

    Pattern 11.

            A
           ABA
          ABCBA
         ABCDCBA
        ABCDEDCBA

    */

    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of Columns According to maxRows
    maxCols = maxRows * 2 - 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = (maxRows - row) * 2;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf(" ");

        for (int col = 1; col <= row; col++)
            printf("%c", 'A' - 1 + col);

        for (int col = row - 1; col; col--)
            printf("%c", 'A' - 1 + col);

        printf("\n");
    }

    // // 2nd Approach
    // int spacesInCurrentRow;
    // char charAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = (maxRows - row) * 2;
    //     charAtCol = 'A';

    //     for (int space = 1; space <= spacesInCurrentRow / 2; space++)
    //         printf(" ");

    //     for (int col = 1; col <= row; col++)
    //         printf("%c", charAtCol++);

    //     charAtCol -= 2;
    //     for (int col = row - 1; col; col--)
    //         printf("%c", charAtCol--);

    //     printf("\n");
    // }

    // // 3rd Approach
    // char charAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     charAtCol = 'A';

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= maxRows + 1 - row && col <= maxRows - 1 + row)
    //             printf("%c", col < maxRows ? charAtCol++ : charAtCol--);
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }
}

void pattern_12()
{
    /*

    Pattern 12.

        ABCDEDCBA
         ABCDCBA
          ABCBA
           ABA
            A

    */

    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of Columns According to maxRows
    maxCols = maxRows * 2 - 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = (row - 1) * 2;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf(" ");

        for (int col = 1; col <= maxRows + 1 - row; col++)
            printf("%c", 'A' - 1 + col);

        for (int col = maxRows - row; col > 0; col--)
            printf("%c", 'A' - 1 + col);

        printf("\n");
    }

    // // 2nd Approach
    // int spacesInCurrentRow;
    // char charAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = (row - 1) * 2;
    //     charAtCol = 'A';

    //     for (int space = 1; space <= spacesInCurrentRow / 2; space++)
    //         printf(" ");

    //     for (int col = 1; col <= maxRows + 1 - row; col++)
    //         printf("%c", charAtCol++);

    //     charAtCol -= 2;
    //     for (int col = maxRows - row; col > 0; col--)
    //         printf("%c", charAtCol--);

    //     printf("\n");
    // }

    // // 3rd Approach
    // char charAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     charAtCol = 'A';

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= row && col <= maxCols + 1 - row)
    //             printf("%c", col < maxRows ? charAtCol++ : charAtCol--);
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }
}