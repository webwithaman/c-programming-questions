// Write a recursive function to calculate sum of first N Odd natural numbers.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Function Declaration (Prototype)
long long unsigned int sumOfFirstNOdd(int);

// // Main Function Start
int main()
{
    int n;
    printf("\nEnter N to Calculate Sum of First N Odd Natural Numbers => ");
    scanf("%d", &n);

    if (n < 1)
    {
        puts("\n!!! Invalid Input, Plz Enter Positive Number...");
        exit(0);
    }

    printf("\nSum of First %d Odd Natural Numbers => %llu", n, sumOfFirstNOdd(n));

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definition 👇👇

// Recursive Function to Calculate Sum of First N Odd Natural Numbers
long long unsigned int sumOfFirstNOdd(int n)
{
    if (n == 1)
        return 1;

    return (n * 2 - 1) + sumOfFirstNOdd(n - 1);
}