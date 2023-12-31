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

    switch (choice())
    {
    case 1:
        pattern_1();
        break;

    default:
        puts("!!! Invalid Choice....\n");
        break;
    }

    getch();
    return 0;
}
// Main Function End

// Functions Definitions
int choice()
{
    int choice;
    puts("\n>>> WEB WITH AMAN <<<");
    puts(".....................");
    printf("Press  0 : Exit");
    for (int i = 1; i <= 55; i++)
        printf("\nPress %2d : Pattern %2d", i, i);
    puts("\n.....................");

    printf("Enter Your Choice => ");
    scanf("%d", &choice);
    return choice;
}

void pattern_1()
{
    printf("111111111");
}