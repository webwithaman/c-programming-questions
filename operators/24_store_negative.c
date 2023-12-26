// C program to Store -8 in a Variable using Bitwise operator. You cannot Directly Assign -8 to a Variable.

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    // Bitwise Complemet (~) Returns 1's complement of Its Operand

    int num = ~7; // It implies num = -8;
    printf("\n~7 Converted in => %d", num);

    int num2 = ~103; // It implies num2 = -104
    printf("\n~103 Converted in => %d", num2);

    getch();
    return 0;
}