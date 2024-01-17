// Write a recursive function to print first N odd natural numbers in reverse order.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Function Declaration (Prototype)
void firstNOddNaturalNumsReverse(int);

// // Main Function Start
int main()
{
    int n;
    printf("\nEnter N to Print First N Odd Natural Numbers In Reverse Order => ");
    scanf("%d", &n);

    if (n < 0)
    {
        puts("\n!!! Invalid Input, Plz Enter Positive Number...");
        exit(0);
    }

    printf("\n>>>>>>> First %d Odd Natural Numbers In Reverse Order <<<<<<<\n", n);
    firstNOddNaturalNumsReverse(n);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definition 👇👇

// Recursive Function to Print First N Odd Natural Numbers In Reverse Order
void firstNOddNaturalNumsReverse(int n)
{
    if (n > 0)
    {
        printf("%d ", n * 2 - 1);
        firstNOddNaturalNumsReverse(n - 1);
    }
}