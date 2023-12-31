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
            pattern_1();
            break;

        case 3:
            pattern_1();
            break;

        case 4:
            pattern_1();
            break;

        case 5:
            pattern_1();
            break;

        case 6:
            pattern_1();
            break;

        case 7:
            pattern_1();
            break;

        case 8:
            pattern_1();
            break;

        case 9:
            pattern_1();
            break;

        case 10:
            pattern_1();
            break;

        case 11:
            pattern_1();
            break;

        case 12:
            pattern_1();
            break;

        case 13:
            pattern_1();
            break;

        case 14:
            pattern_1();
            break;

        case 15:
            pattern_1();
            break;

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
    for (int i = 0; i < 10; i++)
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