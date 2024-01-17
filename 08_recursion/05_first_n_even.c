// Write a recursive function to print first N Even natural numbers.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Function Declaration (Prototype)
void firstNEvenNaturalNums(int);

// Main Function Start
int main()
{
    int n;
    printf("\nEnter N to Print First N Even Natural Numbers => ");
    scanf("%d", &n);

    if (n < 0)
    {
        puts("\n!!! Invalid Input, Plz Enter Positive Number...");
        exit(0);
    }

    printf("\n>>>>>>> First %d Even Natural Numbers <<<<<<<\n", n);
    firstNEvenNaturalNums(n);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definition 👇👇

// Recursive Function to Print First N Even Natural Numbers
void firstNEvenNaturalNums(int n)
{
    if (n > 0)
    {
        firstNEvenNaturalNums(n - 1);
        printf("%d ", n * 2);
    }
}