// // Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Function Declaration (Prototype)
double factorial(int);
double arrangements(int, int);

// // Main Function Start
int main()
{
    int n, r;
    double totalArr;
    printf("\nEnter (n) Number of Items => ");
    scanf("%d", &n);
    printf("\nEnter (r) Selected at a Time => ");
    scanf("%d", &r);

    totalArr = arrangements(n, r);

    if ((int)totalArr == -1)
        printf("\n!!! Invalid Input, Plz Enter Non-negative Numbers (n >= r >= 0)");
    else
    {
        printf("\nTotal Number of Arrangements Can be Made (General Form) => %lf", totalArr);
        printf("\nTotal Number of Arrangements Can be Made (Scientific Form) => %e", totalArr);
    }

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definitions 👇👇

// // Function to Calculate Factorial of A Number
double factorial(int n)
{
    double fact = 1;

    for (int i = 2; i <= n; i++)
        fact *= i;

    return fact;
}

// // Function to Calculate the Number of Combinations
double arrangements(int n, int r)
{
    if (n < 0 || r < 0)
        return -1; // // Invalid Input

    return factorial(n) / factorial(n - r);
}
