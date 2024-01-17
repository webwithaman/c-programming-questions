// Write a recursive function to calculate sum of first N natural numbers.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Function Declaration (Prototype)
long long unsigned int sumOfFirstN(int);

// // Main Function Start
int main()
{
    int n;
    printf("\nEnter N to Calculate Sum of First N Natural Numbers => ");
    scanf("%d", &n);

    if (n < 1)
    {
        puts("\n!!! Invalid Input, Plz Enter Positive Number...");
        exit(0);
    }

    printf("\nSum of First %d Natural Numbers => %llu", n, sumOfFirstN(n));

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definition 👇👇

// Recursive Function to Calculate Sum of First N Natural Numbers
long long unsigned int sumOfFirstN(int n)
{
    if (n == 1)
        return 1;

    return n + sumOfFirstN(n - 1);
}