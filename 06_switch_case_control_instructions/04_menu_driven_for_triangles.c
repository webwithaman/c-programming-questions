// Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
//    isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of Right angled triangle or not
// c. Check whether a given set of three numbers are lengths of an equilateral triangle
//    or not
// d. Check whether a given set of three numbers are Lenghts of a Scalene triangle or not
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
        float length1, length2, length3;
        puts("\n>>>>> Choose One of Following Options <<<<<");
        puts("----------------------------------------------------------------------");
        puts("Press a : To check whether a given set of three numbers are lengths of an isosceles triangle or not");
        puts("Press b : To check whether a given set of three numbers are lengths of a Right angled triangle or not");
        puts("Press c : To check whether a given set of three numbers are lengths of an Equilateral triangle or not");
        puts("Press d : To check whether a given set of three numbers are lengths of an Scalene triangle or not");
        puts("Press e : Exit");
        puts("----------------------------------------------------------------------");
        printf("\nEnter Your Choice => ");
        fflush(stdin);
        scanf("%c", &choice);

        if (choice == 'a' || choice == 'b' || choice == 'c' || choice == 'd')
        {
            printf("\nEnter Lengths of Three Sides => ");
            scanf("%f%f%f", &length1, &length2, &length3);
        }

        switch (choice)
        {
        case 'a':
            if ((length1 * length2 * length3 != 0) && (length1 == length2 || length2 == length3 || length3 == length1))
                printf("\nYes, Entered Lengths Are Valid For An Isosceles Triangle...");
            else
                printf("\nNo, Entered Lengths Are Not Valid For An Isosceles Triangle...");
            break;

        case 'b':
        {
            float side1 = length1 * length1, side2 = length2 * length2, side3 = length3 * length3;
            if ((length1 * length2 * length3 != 0) && (side1 == side2 + side3 || side2 == 1 + side1 || side3 == side1 + side2))
                printf("\nYes, Entered Lengths Are Valid For A Right Angled Triangle...");
            else
                printf("\nNo, Entered Lengths Are Not Valid For A Right Angled Triangle...");
        }
        break;

        case 'c':
            if ((length1 * length2 * length3 != 0) && (length1 == length2 && length2 == length3))
                printf("\nYes, Entered Lengths Are Valid For An Equilateral Triangle...");
            else
                printf("\nNo, Entered Lengths Are Not Valid For An Equilateral Triangle...");
            break;

        case 'd':
            if ((length1 * length2 * length3 != 0) && (length1 != length2 && length2 != length3))
                printf("\nYes, Entered Lengths Are Valid For A Scalene Triangle...");
            else
                printf("\nNo, Entered Lengths Are Not Valid For A Scalene Triangle...");
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
// Main Function End
