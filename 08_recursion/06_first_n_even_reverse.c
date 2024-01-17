// Write a recursive function to print first N Even natural numbers in reverse order.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Function Declaration (Prototype)
void firstNEvenNaturalNumsReverse(int);

// // Main Function Start
int main()
{
    int n;
    printf("\nEnter N to Print First N Even Natural Numbers In Reverse Order => ");
    scanf("%d", &n);

    if (n < 0)
    {
        puts("\n!!! Invalid Input, Plz Enter Positive Number...");
        exit(0);
    }

    printf("\n>>>>>>> First %d Even Natural Numbers In Reverse Order <<<<<<<\n", n);
    firstNEvenNaturalNumsReverse(n);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// Function Definition 👇👇

// Recursive Function to Print First N Even Natural Numbers In Reverse Order
void firstNEvenNaturalNumsReverse(int n)
{
    if (n > 0)
    {
        printf("%d ", n * 2);
        firstNEvenNaturalNumsReverse(n - 1);
    }
}