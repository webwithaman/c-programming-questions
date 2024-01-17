// Write a recursive function to Find HCF of two numbers.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Function Declaration (Prototype)
int hcfOfTwo(int, int);

// // Main Function Start
int main()
{
    int num1, num2;
    printf("\nEnter Two Numbers to Calculate HCF => ");
    scanf("%d%d", &num1, &num2);
    int hcf = hcfOfTwo(num1, num2);

    if (hcf == -1)
        printf("\n!!! Invalid Input,Plz Enter Positive Number.HCF of Negative Numbers is Undedined...");
    else if (hcf)
        printf("\nHCF of %d and %d => %u", num1, num2, hcfOfTwo(num1 > num2 ? num1 : num2, num1 < num2 ? num1 : num2));
    else
        printf("\n!!! Invalid Input,Plz Enter Positive Number.HCF of 0 and 0 is Undefined Exist...");

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definition 👇👇

// Recursive Function to Find HCF of Two Numbers
int hcfOfTwo(int num1, int num2)
{
    if (num1 == 0 && num2 == 0)
        return 0; // Invalid Input (HCF of 0 and 0 is Undefined)
    else if (num1 < 0 || num2 < 0)
        return -1; // Invalid Input Negative Numbers is Undefined
    else if (num2 == 0)
        return num1;

    hcfOfTwo(num2, num1 % num2);
}