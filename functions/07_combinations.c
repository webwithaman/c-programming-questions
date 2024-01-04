// Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
long long unsigned int factorial(int);
int combinations(int, int);

// Main Function Start
int main()
{
    int n, r, totalCombins;
    printf("\nEnter (n) Number of Items => ");
    scanf("%d", &n);
    printf("\nEnter (r) Selected at a Time => ");
    scanf("%d", &r);
    totalCombins = combinations(n, r);
    printf("\nTotal Number of Combinations Can be Made => %d", totalCombins);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definitions 👇👇

// Function to Calculate Factorial of A Number
long long unsigned int factorial(int n)
{
    long long unsigned fact = 1;

    for (int i = 2; i <= n; i++)
        fact *= i;

    return fact;
}

// Function to Calculate the Number of Combinations
int combinations(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
