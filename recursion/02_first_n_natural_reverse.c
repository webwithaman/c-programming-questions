// Write a recursive function to print first N natural numbers in reverse order.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Function Declaration (Prototype)
void firstNNaturalNumsInReverse(int);

// Main Function Start
int main()
{
    int n;
    printf("\nEnter N to Print First N Natural Numbers In Reverse => ");
    scanf("%d", &n);

    if (n < 0)
    {
        puts("\n!!! Invalid Input, Plz Enter Positive Number...");
        exit(0);
    }

    printf("\n>>>>>>> First %d Natural Numbers In Reverse <<<<<<<\n", n);
    firstNNaturalNumsInReverse(n);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definition 👇👇

// Recursive Function to Print First N Natural Numbers
void firstNNaturalNumsInReverse(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        firstNNaturalNumsInReverse(n - 1);
    }
}