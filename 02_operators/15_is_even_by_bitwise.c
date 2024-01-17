// C program to check whether a number is Even or Odd using Bitwise operator

// Header Files
#include <stdio.h>
#include <conio.h>

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter A Number to Check Whether It is Even or Odd => ");
    scanf("%d", &num);

    // // Using if-else
    // if (num & 1)
    //     printf("\n%d is an Odd Number\n", num);
    // else
    //     printf("\n%d is an Even Number\n", num);

    // // Using Conditional Operator
    printf(num & 1 ? "%d is an Odd Number\n" : "%d is an Even Number\n", num);

    getch();
    return 0;
}
// Main Function End
