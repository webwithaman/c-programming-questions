// Write a recursive function to print first N odd natural numbers.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Function Declaration (Prototype)
void firstNOddNaturalNums(int);

// // Main Function Start
int main()
{
    int n;
    printf("\nEnter N to Print First N Odd Natural Numbers => ");
    scanf("%d", &n);

    if (n < 0)
    {
        puts("\n!!! Invalid Input, Plz Enter Positive Number...");
        exit(0);
    }

    printf("\n>>>>>>> First %d Odd Natural Numbers <<<<<<<\n", n);
    firstNOddNaturalNums(n);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// Function Definition 👇👇

// Recursive Function to Print First N Odd Natural Numbers
void firstNOddNaturalNums(int n)
{
    if (n > 0)
    {
        firstNOddNaturalNums(n - 1);
        printf("%d ", n * 2 - 1);
    }
}