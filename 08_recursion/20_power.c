// Write a program in C to calculate the power of any number using recursion.

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
double power(int, int);

// // Main Function Start
int main()
{
    int base, exp;
    printf("\nEnter Base => ");
    scanf("%d", &base);
    printf("\nEnter Exponent => ");
    scanf("%d", &exp);

    printf("\nResult => %lf", power(base, exp));

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// Function Definition 👇👇

// Recursive Function to Calculate the Power 
double power(int base, int exp)
{
    if (exp == 0)
        return 1;
    else if (exp > 0)
        return base * power(base, exp - 1);
    else
        return (1.0 / base) * power(base, exp + 1);
}