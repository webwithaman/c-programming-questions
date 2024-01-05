// Write a recursive function to calculate HCF of two numbers.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Function Declaration (Prototype)
int hcfOfTwo(int, int);

// Main Function Start
int main()
{
    int num1, num2;
    printf("\nEnter Two Numbers to Calculate HCF => ");
    scanf("%d%d", &num1, &num2);
 int result  = hcfOfTwo(num1, num2);

    if (result)
        printf("\nHCF of %d and %d => %d", num1, num2, result);
        else 
        printf("\nHCF of 0 and 0 is Umdefined")

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definition 👇👇

// Recursive Function to Calculate Sum of First N Odd Natural Numbers
int hcfOfTwo(int num1, int num2)
{
    if (num1 == 0 && num2 == 0)
        return 0; // Invalid Input
}