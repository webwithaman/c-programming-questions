// Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
int main()
{

    while (1)
    {
        system("cls");
        char choice;
        float num1, num2;
        puts("\n>>>>> Choose One of Following Options <<<<<");
        puts("-------------------------");
        puts("Press a : Addition");
        puts("Press b : Subtraction");
        puts("Press c : Multiplication");
        puts("Press d : Division");
        puts("Press e : Exit");
        puts("-------------------------");
        printf("\nEnter Your Choice => ");
        fflush(stdin);
        scanf("%c", &choice);

        if (choice == 'a' || choice == 'b' || choice == 'c' || choice == 'd')
        {
            printf("\nEnter Two Numbers => ");
            scanf("%f%f", &num1, &num2);
        }

        switch (choice)
        {
        case 'a':
            printf("\n%f + %f => %f", num1, num2, num1 + num2);
            break;
        case 'b':
            printf("\n%f - %f => %f", num1, num2, num1 - num2);
            break;
        case 'c':
            printf("\n%f x %f => %f", num1, num2, num1 * num2);
            break;
        case 'd':
            printf("\n%f / %f => %f", num1, num2, num1 / num2);
            break;
        case 'e':
            printf("\nProgram End...");
            exit(0);
            break;
        default:
            puts("\n!!! Invalid Choice....");
        }

        getch();
    }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
