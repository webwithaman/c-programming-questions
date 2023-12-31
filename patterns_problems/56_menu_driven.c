// Menu Driven Program for Patterns

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Functions Prototypes (Declarations)
int choice();
int fact(int);
int sumOfFirstN(int);
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

void pattern_13()
{
    /*

    Pattern 13.

        ABCDEFGFEDCBA
        ABCDEF FEDCBA
        ABCDE   EDCBA
        ABCD     DCBA
        ABC       CBA
        AB         BA
        A           A

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
            printf("%c", 'A' - 1 + col);

        for (int space = 1; space <= spacesInCurrentRow; space++)
            printf(" ");

        for (int col = row == 1 ? maxRows - 1 : maxRows + 1 - row; col; col--)
            printf("%c", 'A' - 1 + col);

        printf("\n");
    }

    // // 2nd Approach
    // int spacesInCurrentRow;
    // char charAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = (row - 1) * 2 - 1;
    //     charAtCol = 'A';

    //     for (int col = 1; col <= maxRows + 1 - row; col++)
    //         printf("%c", charAtCol++);

    //     for (int space = 1; space <= spacesInCurrentRow; space++)
    //         printf(" ");

    //     charAtCol -= row == 1 ? 2 : 1;
    //     for (int col = row == 1 ? maxRows - 1 : maxRows + 1 - row; col; col--)
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
    //         if (col <= maxRows + 1 - row || col >= maxRows - 1 + row)
    //             printf("%c", charAtCol);
    //         else
    //             printf(" ");

    //         col < maxRows ? charAtCol++ : charAtCol--;
    //     }

    //     printf("\n");
    // }
}

void pattern_14()
{
    /*

    Pattern 14.

         *
         * *
         *   *
         *     *
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
    int colsInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        colsInCurrentRow = row;

        for (int col = 1; col <= colsInCurrentRow; col++)
        {
            if (col == 1 || col == row || row == maxRows)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col == 1 || col == row || row == maxRows)
    //             printf("* ");
    //         else
    //             printf("  ");
    //     }
    //     printf("\n");
    // }
}

void pattern_15()
{
    /*

    Pattern 15.

                 *
               * *
             *   *
           *     *
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
        {
            if (col == colsInCurrentRow || col == 1 || row == maxRows)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col == maxCols || col == maxCols + 1 - row || row == maxRows)
    //             printf("* ");
    //         else
    //             printf("  ");
    //     }

    //     printf("\n");
    // }
}

void pattern_16()
{
    /*

    Pattern 16.

            *
           * *
          *   *
         *     *
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
        {
            if (col == 1 || col == colsInCurrentRow || row == maxRows)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col == maxRows + 1 - row || col == maxRows - 1 + row || row == maxRows)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }
}

void pattern_17()
{
    /*

    Pattern 17.

        *********
         *     *
          *   *
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
    maxCols = maxRows * 2 - 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int colsInCurrentRow, spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = (row - 1) * 2;

        colsInCurrentRow = maxCols - (row - 1) * 2;
        // colsInCurrentRow = maxCols - spacesInCurrentRow;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf(" ");

        for (int col = 1; col <= colsInCurrentRow; col++)
        {
            if (col == 1 || col == colsInCurrentRow || row == 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col == row || col == maxCols + 1 - row || row == 1)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }
}

void pattern_18()
{
    /*

    Pattern 18.

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
    int colsInCurrentRow = -1, spacesInCurrentRow, halfOfCols = (maxCols + 1) / 2;

    for (int row = 1; row <= maxRows; row++)
    {
        colsInCurrentRow += row <= halfOfCols ? 2 : -2;

        // If user wants even number of rows
        if (row == halfOfCols + 1 && maxRows % 2 == 0)
            colsInCurrentRow += 2;

        spacesInCurrentRow = maxCols - colsInCurrentRow;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf(" ");

        for (int col = 1; col <= colsInCurrentRow; col++)
            printf("*");

        printf("\n");
    }

    // // 2nd Approach
    // int halfOfCols = (maxCols + 1) / 2, vary = 1;

    // for (int row = 1; row <= maxRows; row++)
    // {

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= halfOfCols + 1 - vary && col <= halfOfCols - 1 + vary)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     row < halfOfCols ? vary++ : vary--;

    //     // If user wants even number of rows
    //     if (row == halfOfCols && maxRows % 2 == 0)
    //         vary++;

    //     printf("\n");
    // }
}

void pattern_19()
{
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

    int maxRows = 13, maxCols = 19;
    char name[maxCols + 1];

    printf("\nEnter Your Name to Print In Heart => ");
    fflush(stdin);

    // Get name from user
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
}

void pattern_20()
{
    /*

    Pattern 20.

        1
        2 3
        4 5 6
        7 8 9 10

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
    int numAtCol = 1;

    for (int row = 1; row <= maxRows; row++)
    {

        for (int col = 1; col <= row; col++)
            printf("%3d", numAtCol++);

        printf("\n");
    }

    // // 2nd Approach
    // int numAtCol = 1, vary = 1;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     vary += row - 1;

    //     for (int col = vary; col <= vary + row - 1; col++)
    //         printf("%3d", col);

    //     printf("\n");
    // }

    // // 3rd Approach
    // int numAtCol = 1;

    // for (int row = 1; row <= maxRows; row++)
    // {

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col <= row)
    //             printf("%3d", numAtCol++);
    //         else
    //             printf("   ");
    //     }

    //     printf("\n");
    // }
}

void pattern_21()
{
    /*

    Pattern 21.

        1
        2 3
        3 4 5
        4 5 6 7

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
    int numAtCol;

    for (int row = 1; row <= maxRows; row++)
    {
        numAtCol = row;

        for (int col = 1; col <= row; col++)
            printf("%3d", numAtCol++);

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = row; col <= row * 2 - 1; col++)
    //         printf("%3d", col);

    //     printf("\n");
    // }

    // // 3rd Approach
    // int numAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     numAtCol = row;

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col <= row)
    //             printf("%3d", numAtCol++);
    //         else
    //             printf("   ");
    //     }

    //     printf("\n");
    // }
}

void pattern_22()
{
    /*

    Pattern 22.

        A B C D
        A B C D
        A B C D
        A B C D

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

        for (int col = 1; col <= maxCols; col++)
            printf("%c ", 'A' - 1 + col);

        printf("\n");
    }

    // // 2nd Approach
    // char charAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     charAtCol = 'A';
    //     for (int col = 1; col <= maxCols; col++)
    //         printf("%c ", charAtCol++);

    //     printf("\n");
    // }
}

void pattern_23()
{
    /*

    Pattern 23.

        A B C D
        E F G H
        I J K L
        M N O P

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
    char charAtCol = 'A';

    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols; col++)
            printf("%c ", charAtCol++);

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = maxCols * (row - 1) + 1; col <= maxCols * row; col++)
    //         printf("%c ", 'A' - 1 + col);

    //     printf("\n");
    // }
}

void pattern_24()
{
    /*

    Pattern 24.

        1 1 1 1
          2 2 2
            3 3
              4

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
            printf("%2d", row);

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= row)
    //             printf("%2d", row);
    //         else
    //             printf("  ");
    //     }

    //     printf("\n");
    // }
}

void pattern_25()
{
    /*

    Pattern 25.

               1
             2 2
           3 3 3
         4 4 4 4

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
            printf("%2d", row);

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= maxCols + 1 - row)
    //             printf("%2d", row);
    //         else
    //             printf("  ");
    //     }

    //     printf("\n");
    // }
}

void pattern_26()
{
    /*

    Pattern 26.

           1 2 3 4
             2 3 4
               3 4
                 4

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
    int spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = row - 1;

        for (int space = 1; space <= spacesInCurrentRow; space++)
            printf("  ");

        for (int col = row; col <= maxCols; col++)
            printf("%2d", col);

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= row)
    //             printf("%2d", col);
    //         else
    //             printf("  ");
    //     }

    //     printf("\n");
    // }
}

void pattern_27()
{
    /*

    Pattern 27.

              1
            2 3
          4 5 6

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
    // int colsInCurrentRow, spacesInCurrentRow, numAtCol = 1;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = maxCols - row;

    //     colsInCurrentRow = row;

    //     for (int space = 1; space <= spacesInCurrentRow; space++)
    //         printf("   ");

    //     for (int col = 1; col <= colsInCurrentRow; col++)
    //         printf("%3d", numAtCol++);

    //     printf("\n");
    // }

    // // 2nd Approach
    // int numAtCol = 1;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= maxCols + 1 - row)
    //             printf("%3d", numAtCol++);
    //         else
    //             printf("   ");
    //     }

    //     printf("\n");
    // }
}

void pattern_28()
{
    /*

   Pattern 28.

       1 2 3 4 5 5 4 3 2 1
       1 2 3 4 * * 4 3 2 1
       1 2 3 * * * * 3 2 1
       1 2 * * * * * * 2 1
       1 * * * * * * * * 1

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
    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxRows + 1 - row; col++)
            printf("%3d", col);

        for (int star = 1; star <= (row - 1) * 2; star++)
            printf("  *");

        for (int col = maxRows + 1 - row; col; col--)
            printf("%3d", col);

        printf("\n");
    }

    // // 2nd Approach
    // int numAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     numAtCol = 1;
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col <= maxRows + 1 - row)
    //             printf("%3d", numAtCol++);
    //         else if (col >= maxRows + row)
    //             printf("%3d", --numAtCol);
    //         else
    //             printf("  *");
    //     }

    //     printf("\n");
    // }
}

void pattern_29()
{
    /*

    Pattern 29.

        4 3 2 1
        4 3 2 1
        4 3 2 1

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
        for (int col = maxCols; col; col--)
            printf("%d ", col);

        printf("\n");
    }

    // // 2nd Approach
    // int numAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     numAtCol = maxCols;
    //     for (int col = 1; col <= maxCols; col++)
    //         printf("%d ", numAtCol--);

    //     printf("\n");
    // }
}

void pattern_30()
{
    /*

    Pattern 30.

        1 2 3
        4 5 6
        7 8 9

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
    int numAtCol = 1;

    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols; col++)
            printf(" %2d ", numAtCol++);

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = maxCols * (row - 1) + 1; col <= maxCols * row; col++)
    //         printf(" %2d ", col);

    //     printf("\n");
    // }
}

void pattern_31()
{
    /*

    Pattern 31.

        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5

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
    int colsInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        colsInCurrentRow = row;

        for (int col = 1; col <= colsInCurrentRow; col++)
            printf("%d ", col);

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col <= row)
    //             printf("%d ", col);
    //         else
    //             printf("  ");
    //     }
    //     printf("\n");
    // }
}

void pattern_32()
{
    /*

    Pattern 32.

        *
        **
        ***
        ****
        *****
        ****
        ***
        **
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
    maxCols = (maxRows + 1) / 2;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int vary = 1;

    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols; col++)
        {
            if (col <= vary)
                printf("*");
            else
                printf(" ");
        }

        row < maxCols ? vary++ : vary--;

        // If user wants even number of rows
        if (row == maxCols && maxRows % 2 == 0)
            vary++;

        printf("\n");
    }

    // // 2nd Approach
    // int colsInCurrentRow;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     colsInCurrentRow = row <= maxCols ? row : maxCols - (row - maxCols);

    //     // If user wants even number of rows
    //     if (row >= maxCols + 1 && maxRows % 2 == 0)
    //         colsInCurrentRow++;

    //     for (int col = 1; col <= colsInCurrentRow; col++)
    //         printf("*");

    //     printf("\n");
    // }
}

void pattern_33()
{
    /*

    Pattern 33.

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
            printf("* ");

        printf("\n");
    }

    // // 2nd Approach
    // int colsInCurrentRow, spacesInCurrentRow, toggle;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = (maxRows - row) * 2;
    //     colsInCurrentRow = maxCols - spacesInCurrentRow;
    //     // colsInCurrentRow = row * 2 - 1;
    //     toggle = 1;

    //     for (int space = 1; space <= spacesInCurrentRow / 2; space++)
    //         printf(" ");

    //     for (int col = 1; col <= colsInCurrentRow; col++)
    //     {
    //         toggle ? printf("*") : printf(" ");
    //         toggle = !toggle;
    //     }

    //     printf("\n");
    // }

    // // 3rd Approach
    // int toggle;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     toggle = 1;

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= maxRows + 1 - row && col <= maxRows - 1 + row && toggle)
    //         {
    //             printf("*");
    //             toggle = 0;
    //         }
    //         else
    //         {
    //             printf(" ");
    //             toggle = 1;
    //         }
    //     }

    //     printf("\n");
    // }
}

void pattern_34()
{
    /*

    Pattern 34.

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
            printf("* ");

        printf("\n");
    }

    // // 2nd Approach
    // int colsInCurrentRow, spacesInCurrentRow, toggle;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = (row - 1) * 2;

    //     colsInCurrentRow = maxCols - spacesInCurrentRow;
    //     // colsInCurrentRow = maxCols - (row - 1) * 2;
    //     toggle = 1;

    //     for (int space = 1; space <= spacesInCurrentRow / 2; space++)
    //         printf(" ");

    //     for (int col = 1; col <= colsInCurrentRow; col++)
    //     {
    //         toggle ? printf("*") : printf(" ");
    //         toggle = !toggle;
    //     }

    //     printf("\n");
    // }

    // // 3rd Approach
    // int toggle;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     toggle = 1;

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= row && col <= maxCols + 1 - row && toggle)
    //         {
    //             printf("*");
    //             toggle = 0;
    //         }
    //         else
    //         {
    //             printf(" ");
    //             toggle = 1;
    //         }
    //     }

    //     printf("\n");
    // }
}

void pattern_35()
{
    /*

    Pattern 35.

         * * * * *
          * * * *
           * * *
            * *
             *
             *
            * *
           * * *
          * * * *
         * * * * *

    */

    int maxRowsInOne, maxRows, maxCols;
    printf("\nHow Many Rows For One Triangle => ");
    scanf("%d", &maxRowsInOne);

    // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of maximum columns and maximum rows According to maxRows
    maxRows = maxRowsInOne * 2;
    maxCols = maxRowsInOne * 2 - 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int spacesInCurrentRow, colsInCurrentRow, toggle;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = row <= maxRowsInOne ? (row - 1) * 2 : (maxRows - row) * 2;
        colsInCurrentRow = maxCols - spacesInCurrentRow;
        toggle = 1;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf(" ");

        for (int col = 1; col <= colsInCurrentRow; col++)
        {
            toggle ? printf("*") : printf(" ");
            toggle = !toggle;
        }

        printf("\n");
    }

    // // 2nd Approach
    // int spacesInCurrentRow;

    // // Print Upper Part
    // for (int row = 1; row <= maxRowsInOne; row++)
    // {
    //     spacesInCurrentRow = (row - 1) * 2;

    //     for (int space = 1; space <= spacesInCurrentRow / 2; space++)
    //         printf(" ");

    //     for (int col = 1; col <= maxRowsInOne + 1 - row; col++)
    //         printf("* ");

    //     printf("\n");
    // }

    // // Print Lower Part
    // for (int row = 1; row <= maxRowsInOne; row++)
    // {
    //     spacesInCurrentRow = (maxRowsInOne - row) * 2;

    //     for (int space = 1; space <= spacesInCurrentRow / 2; space++)
    //         printf(" ");

    //     for (int col = 1; col <= row; col++)
    //         printf("* ");

    //     printf("\n");
    // }

    // // 3rd Approach
    // int toggle, vary = 1;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     toggle = 1;

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= vary && col <= maxCols + 1 - vary && toggle)
    //         {
    //             printf("*");
    //             toggle = 0;
    //         }
    //         else
    //         {
    //             printf(" ");
    //             toggle = 1;
    //         }
    //     }

    //     if (row != maxRowsInOne)
    //         row < maxRowsInOne ? vary++ : vary--;

    //     printf("\n");
    // }
}

void pattern_36()
{
    /*

    Pattern 36.

              *
             * *
            *   *
           *     *
          *       *
           *     *
            *   *
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
    int colsInCurrentRow = -1, spacesInCurrentRow, halfOfCols = (maxCols + 1) / 2;

    for (int row = 1; row <= maxRows; row++)
    {
        colsInCurrentRow += row <= halfOfCols ? 2 : -2;

        // If user wants even number of rows
        if (row == halfOfCols + 1 && maxRows % 2 == 0)
            colsInCurrentRow += 2;

        spacesInCurrentRow = maxCols - colsInCurrentRow;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf(" ");

        for (int col = 1; col <= colsInCurrentRow; col++)
        {
            if (col == 1 || col == colsInCurrentRow)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    // // 2nd Approach
    // int halfOfCols = (maxCols + 1) / 2, vary = 1;

    // for (int row = 1; row <= maxRows; row++)
    // {

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col == halfOfCols + 1 - vary || col == halfOfCols - 1 + vary)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     row < halfOfCols ? vary++ : vary--;

    //     // If user wants even number of rows
    //     if (row == halfOfCols && maxRows % 2 == 0)
    //         vary++;

    //     printf("\n");
    // }
}

void pattern_37()
{
    /*

        Pattern 37.

                  1
                1   1
              1   2   1
            1   3   3   1
          1   4   6   4   1

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
    // int toggle, colno, element;

    // for (int row = 0; row < maxRows; row++)
    // {
    //     toggle = 1;
    //     colno = 0;

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= maxRows - row && col <= maxRows + row && toggle)
    //         {
    //             element = fact(row) / (fact(colno) * (fact(row - colno)));
    //             printf("%2d ", element);
    //             toggle = 0;
    //             colno++;
    //         }
    //         else
    //         {
    //             printf("   ");
    //             toggle = 1;
    //         }
    //     }

    //     printf("\n");
    // }

    // // 3rd Approach (Using 2nd Formula)
    // int colsInCurrentRow, spacesInCurrentRow, toggle, colno, n, element;

    // for (int row = 0; row < maxRows; row++)
    // {
    //     spacesInCurrentRow = (maxRows - row - 1) * 2;
    //     colsInCurrentRow = maxCols - spacesInCurrentRow;
    //     toggle = n = 1;
    //     colno = 0;

    //     for (int space = 1; space <= spacesInCurrentRow / 2; space++)
    //         printf("   ");

    //     for (int col = 1; col <= colsInCurrentRow; col++)
    //     {
    //         if (toggle)
    //         {
    //             printf("%2d ", n);
    //             n = n * (row - colno) / (colno + 1);
    //             colno++;
    //         }
    //         else
    //         {
    //             printf("   ");
    //         }
    //         toggle = !toggle;
    //     }

    //     printf("\n");
    // }
}

// Function to Find Factorial
int fact(int n)
{
    int result = 1;

    // loop from 2 to n to get the factorial
    for (int i = 2; i <= n; i++)
        result *= i;

    return result;
}

void pattern_38()
{
    /*

    Pattern 38.

             1
            212
           32123
          4321234
           32123
            212
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
    maxCols = maxRows;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int colsInCurrentRow = -1, spacesInCurrentRow, halfOfCols = (maxCols + 1) / 2, numAtCol = 0;

    for (int row = 1; row <= maxRows; row++)
    {

        if (row <= halfOfCols)
        {
            colsInCurrentRow += 2;
            numAtCol = row;
        }
        else
        {
            colsInCurrentRow -= 2;
            numAtCol = maxRows + 1 - row;
        }

        // If user wants even number of rows
        if (row == halfOfCols + 1 && maxRows % 2 == 0)
            colsInCurrentRow += 2;

        spacesInCurrentRow = maxCols - colsInCurrentRow;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf("   ");

        for (int col = 1; col <= colsInCurrentRow; col++)
        {
            printf("%2d ", col < (colsInCurrentRow + 1) / 2 ? numAtCol-- : numAtCol++);
        }

        printf("\n");
    }

    // // 2nd Approach
    // int spacesInCurrentRow, halfOfCols = (maxCols + 1) / 2;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = row <= halfOfCols ? halfOfCols - row : row - halfOfCols;

    //     // If user wants even number of rows
    //     if (row >= halfOfCols + 1 && maxRows % 2 == 0)
    //         spacesInCurrentRow--;

    //     for (int space = 1; space <= spacesInCurrentRow; space++)
    //         printf("   ");

    //     for (int col = row <= halfOfCols ? row : maxRows + 1 - row; col; col--)
    //         printf("%2d ", col);

    //     for (int col = 2; col <= (row <= halfOfCols ? row : maxRows + 1 - row); col++)
    //         printf("%2d ", col);

    //     printf("\n");
    // }

    // // 3rd Approach
    // int spacesInCurrentRow, halfOfCols = (maxCols + 1) / 2, numAtCol = 0;

    // for (int row = 1; row <= maxRows; row++)
    // {

    //     if (row <= halfOfCols)
    //     {
    //         spacesInCurrentRow = halfOfCols - row;
    //         numAtCol = row;
    //     }
    //     else
    //     {
    //         spacesInCurrentRow = row - halfOfCols;
    //         numAtCol = maxRows + 1 - row;
    //     }

    //     // If user wants even number of rows
    //     if (row >= halfOfCols + 1 && maxRows % 2 == 0)
    //         spacesInCurrentRow--;

    //     for (int space = 1; space <= spacesInCurrentRow; space++)
    //         printf("   ");

    //     for (int col = numAtCol; col; col--)
    //         printf("%2d ", col);

    //     for (int col = 2; col <= numAtCol; col++)
    //         printf("%2d ", col);

    //     printf("\n");
    // }

    // // 4th Approach
    // int halfOfCols = (maxCols + 1) / 2, vary = 1, numAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     numAtCol = row <= halfOfCols ? row : maxRows + 1 - row;

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= halfOfCols + 1 - vary && col <= halfOfCols - 1 + vary)
    //             printf("%2d ", col < halfOfCols ? numAtCol-- : numAtCol++);
    //         else
    //             printf("   ");
    //     }

    //     row < halfOfCols ? vary++ : vary--;

    //     // If user wants even number of rows
    //     if (row == halfOfCols && maxRows % 2 == 0)
    //         vary++;

    //     printf("\n");
    // }
}

void pattern_39()
{
    /*

    Pattern 39.

          **********
          ****  ****
          ***    ***
          **      **
          *        *
          *        *
          **      **
          ***    ***
          ****  ****
          **********

    */

    int maxRows, maxCols, maxRowsInOne;
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
    maxRowsInOne = (maxRows + 1) / 2;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int spacesInCurrentRow = maxRows & 1 ? -1 : -2, colsInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        if (row != maxRowsInOne + 1)
            spacesInCurrentRow += row <= maxRowsInOne ? 2 : -2;

        colsInCurrentRow = maxCols - spacesInCurrentRow;

        for (int col = 1; col <= colsInCurrentRow / 2; col++)
            printf("*");

        for (int space = 1; space <= spacesInCurrentRow; space++)
            printf(" ");

        for (int col = 1; col <= colsInCurrentRow / 2; col++)
            printf("*");

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRowsInOne; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col <= maxRowsInOne + 1 - row || col >= maxRowsInOne + row)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }

    // for (int row = 1; row <= maxRowsInOne; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col <= row || col >= maxCols + 1 - row)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }

    // // 3rd Approach
    // int vary = maxRows & 1 ? 2 : 1;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col <= maxRowsInOne + 1 - vary || col >= maxRowsInOne + vary || (col >= maxRowsInOne - 1 + vary && maxRows & 1))
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     if (row != maxRowsInOne || maxRows & 1)
    //         row < maxRowsInOne ? vary++ : vary--;

    //     printf("\n");
    // }
}

void pattern_40()
{
    /*

    Pattern 40.

           *        *
           **      **
           ***    ***
           ****  ****
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
    maxCols = maxRows + 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int vary = 1;

    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols; col++)
        {
            if (col <= vary || col >= maxCols + 1 - vary)
                printf("*");
            else
                printf(" ");
        }

        row < maxCols / 2 ? vary++ : vary--;

        // if user wants even number of rows
        if (maxRows % 2 == 0 && row == maxCols / 2)
            vary++;

        printf("\n");
    }

    // // 2nd Approach
    // int spacesInCurrentRow;
    // int vary = 1;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = maxCols - vary * 2;

    //     for (int col = 1; col <= vary; col++)
    //         printf("*");

    //     for (int space = 1; space <= spacesInCurrentRow; space++)
    //         printf(" ");

    //     for (int col = 1; col <= vary; col++)
    //         printf("*");

    //     row < maxCols / 2 ? vary++ : vary--;

    //     // if user wants even number of rows
    //     if (maxRows % 2 == 0 && row == maxCols / 2)
    //         vary++;

    //     printf("\n");
    // }
}

void pattern_41()
{
    /*

    Pattern 41.

           *****
           *   *
           *   *
           *   *
           *****

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

    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols; col++)
        {
            if (col == 1 || col == maxCols || row == 1 || row == maxRows)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
}

void pattern_42()
{
    /*

    Pattern 42.

           1
           0 1
           1 0 1
           0 1 0 1
           1 0 1 0 1


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
            col + row & 1 ? printf("0 ") : printf("1 ");

        printf("\n");
    }

    // // 2nd Approach
    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols; col++)
        {
            if (col <= row)
                col + row & 1 ? printf("0 ") : printf("1 ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void pattern_43()
{
    /*

    Pattern 43.

              *           *
            *   *       *   *
          *       *   *       *
        *           *           *
      *           *   *           *

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
    maxCols = maxRows * 3;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols; col++)
        {
            if (col == maxRows + 1 - row || col == maxRows - 1 + row || col == maxRows * 2 + 2 - row || col == maxRows * 2 + row)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern_44()
{
    /*

    Pattern 44.


           *        *
           **      **
           * *    * *
           *  *  *  *
           *   **   *
           *   **   *
           *  *  *  *
           * *    * *
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
    maxCols = maxRows + 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int vary = 1;

    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols; col++)
        {
            if (col == 1 || col == vary || col == maxCols + 1 - vary || col == maxCols)
                printf("*");
            else
                printf(" ");
        }

        row < maxCols / 2 ? vary++ : vary--;

        // if user wants even number of rows
        if (maxRows % 2 == 0 && row == maxCols / 2)
            vary++;

        printf("\n");
    }

    // // 2nd Approach
    // int spacesInCurrentRow;
    // int vary = 1;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     spacesInCurrentRow = maxCols - vary * 2;

    //     for (int col = 1; col <= vary; col++)
    //     {
    //         if (col == 1 || col == vary)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     for (int space = 1; space <= spacesInCurrentRow; space++)
    //         printf(" ");

    //     for (int col = 1; col <= vary; col++)
    //     {
    //         if (col == 1 || col == vary)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     row < maxCols / 2 ? vary++ : vary--;

    //     // if user wants even number of rows
    //     if (maxRows % 2 == 0 && row == maxCols / 2)
    //         vary++;

    //     printf("\n");
    // }
}

void pattern_45()
{
    /*

    Pattern 45.

          *           *
            *       *
              *   *
                *
              *   *
            *       *
          *           *

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

    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols; col++)
        {
            if (col == row || col == maxCols + 1 - row)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern_46()
{
    /*

    Pattern 46.

              *****
             *   *
            *   *
           *   *
          *****

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
    for (int row = 1; row <= maxRows; row++)
    {
        for (int space = 1; space <= maxRows - row; space++)
            printf(" ");

        for (int col = 1; col <= maxRows; col++)
        {
            if (col == 1 || col == maxRows || row == 1 || row == maxRows)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    // // 2nd Approach
    // for (int row = 1; row <= maxRows; row++)
    // {
    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col == maxRows + 1 - row || col == maxCols + 1 - row || row == 1 && col >= maxRows + 1 - row || row == maxRows && col <= maxCols + 1 - row)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }
}

void pattern_47()
{
    /*

    Pattern 47.

          1  2  3  4   17  18  19  20
             5  6  7   14  15  16
                8  9   12  13
                   10  11

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
    int sum = sumOfFirstNNums(maxRows), addNum;

    for (int row = 1; row <= maxRows; row++)
    {
        for (int space = 1; space <= row - 1; space++)
            printf("    ");

        addNum = sum - sumOfFirstNNums(maxRows + 1 - row);

        for (int col = 1; col <= maxRows + 1 - row; col++)
            printf("%3d ", col + addNum);

        addNum = sum + sumOfFirstNNums(maxRows - row);

        for (int col = 1; col <= maxRows + 1 - row; col++)
            printf("%3d ", col + addNum);

        printf("\n");
    }

    // // 2nd Approach
    // int sum = sumOfFirstNNums(maxRows), countForLeft = 1, countForRight;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     countForRight = sum + 1 + sumOfFirstNNums(maxRows - row);

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= row && col <= maxCols + 1 - row)
    //         {
    //             if (col <= maxRows)
    //                 printf("%3d ", countForLeft++);
    //             else
    //                 printf("%3d ", countForRight++);
    //         }
    //         else
    //             printf("    ");
    //     }

    //     printf("\n");
    // }

    // // 3rd Approach
    // int sum = maxRows * (maxRows + 1) / 2, numAtCol, lock;

    // for (int row = 1; row <= maxRows; row++)
    // {
    //     numAtCol = 1 + sum - sumOfFirstNNums(maxRows + 1 - row);
    //     lock = 1;

    //     for (int col = 0; col <= maxCols; col++)
    //     {
    //         if (col >= row && col <= maxCols + 1 - row)
    //         {
    //             if (col <= maxRows)
    //                 printf("%3d ", numAtCol++);
    //             else
    //             {
    //                 if (lock)
    //                 {
    //                     numAtCol += sumOfFirstNNums(maxRows - row) * 2;
    //                     lock = 0;
    //                 }
    //                 printf("%3d ", numAtCol++);
    //             }
    //         }
    //         else
    //             printf("    ");
    //     }

    //     printf("\n");
    // }
}

void pattern_48()
{
    /*

    Pattern 48.

             *
            * *
           * * *
          * * * *
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
    int colsInCurrentRow = -1, spacesInCurrentRow, halfOfCols = (maxCols + 1) / 2, toggle;

    for (int row = 1; row <= maxRows; row++)
    {
        colsInCurrentRow += row <= halfOfCols ? 2 : -2;
        toggle = 1;

        // If user wants even number of rows
        if (row == halfOfCols + 1 && maxRows % 2 == 0)
            colsInCurrentRow += 2;

        spacesInCurrentRow = maxCols - colsInCurrentRow;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf(" ");

        for (int col = 1; col <= colsInCurrentRow; col++)
        {
            toggle ? printf("*") : printf(" ");
            toggle = !toggle;
        }

        printf("\n");
    }

    // // 2nd Approach
    // int halfOfCols = (maxCols + 1) / 2, vary = 1, toggle;

    // for (int row = 1; row <= maxRows; row++)
    // {

    //     toggle = 1;

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= halfOfCols + 1 - vary && col <= halfOfCols - 1 + vary && toggle)
    //         {
    //             printf("*");
    //             toggle = 0;
    //         }
    //         else
    //         {
    //             printf(" ");
    //             toggle = 0;
    //         }
    //     }

    //     row < halfOfCols ? vary++ : vary--;

    //     // If user wants even number of rows
    //     if (row == halfOfCols && maxRows % 2 == 0)
    //         vary++;

    //     printf("\n");
    // }
}

void pattern_49()
{
    /*

    Pattern 49.

             *
             *
             *
       * * * * * * *
             *
             *
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
    maxCols = maxRows & 1 ? maxRows : (maxRows += 1);

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    for (int row = 1; row <= maxRows; row++)
    {
        for (int col = 1; col <= maxCols; col++)
        {
            if (col == (maxCols + 1) / 2 || row == (maxCols + 1) / 2)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
}

void pattern_50()
{
    /*

    Pattern 50.

                1
              2 1 2
            3 2 1 2 3
          4 3 2 1 2 3 4
        5 4 3 2 1 2 3 4 5

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
    int colsInCurrentRow = -1, spacesInCurrentRow, numAtCol = 0;

    for (int row = 1; row <= maxRows; row++)
    {

        colsInCurrentRow += 2;
        numAtCol = row;
        spacesInCurrentRow = maxCols - colsInCurrentRow;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf("   ");

        for (int col = 1; col <= colsInCurrentRow; col++)
        {
            printf("%2d ", col < (colsInCurrentRow + 1) / 2 ? numAtCol-- : numAtCol++);
        }

        printf("\n");
    }

    // // 2nd Approach
    // int spacesInCurrentRow, numAtCol = 0;

    // for (int row = 1; row <= maxRows; row++)
    // {

    //     spacesInCurrentRow = maxRows - row;
    //     numAtCol = row;

    //     for (int space = 1; space <= spacesInCurrentRow; space++)
    //         printf("   ");

    //     for (int col = numAtCol; col; col--)
    //         printf("%2d ", col);

    //     for (int col = 2; col <= numAtCol; col++)
    //         printf("%2d ", col);

    //     printf("\n");
    // }

    // // 3rd Approach
    // int halfOfCols = (maxCols + 1) / 2, vary = 1, numAtCol;

    // for (int row = 1; row <= maxRows; row++)
    // {

    //     numAtCol = row;

    //     for (int col = 1; col <= maxCols; col++)
    //     {
    //         if (col >= maxRows + 1 - row && col <= maxRows - 1 + row)
    //             printf("%2d ", col < maxRows ? numAtCol-- : numAtCol++);
    //         else
    //             printf("   ");
    //     }

    //     printf("\n");
    // }
}