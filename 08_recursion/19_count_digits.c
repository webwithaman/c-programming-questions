// Write a program in C to count the digits of a given number using recursion.

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
int countDigits(int);

// Main Function Start
int main()
{
    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);

    printf("\nTotal Digits in %d => %d", num, countDigits(num));

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definition 👇👇

// Recursive Function to Count the Digits of number
int countDigits(int num)
{
    if (num)
        return 1 + countDigits(num / 10);
}