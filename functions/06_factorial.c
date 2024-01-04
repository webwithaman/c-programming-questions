// Write a function to calculate the factorial of a number. (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
long long unsigned int factorial(int);

// Main Function Start
int main()
{
    int n;
    printf("\nEnter N to Print First N Odd Natural Numbers => ");
    scanf("%d", &n);

    printf("\nFactorial of %d => %llu", factorial(n));

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
