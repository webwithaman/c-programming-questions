// Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
long long unsigned int factorial(int);
int combinations(int,int);

// Main Function Start
int main()
{
    int n;
    printf("\nEnter N to Print First N Odd Natural Numbers => ");
    scanf("%d", &n);
    printf("\nFactorial of %d => %llu\n", n, factorial(n));

    getch();
    return 0;
}
// Main Function End

// Function Definition
long long unsigned int factorial(int n)
{
    long long unsigned fact = 1;

    for (int i = 2; i <= n; i++)
        fact *= i;

    return fact;
}

int combinations(int,int);

