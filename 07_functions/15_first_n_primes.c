// // Write a function to print first N prime numbers (TSRN)

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// // Function Declaration (Prototype)
int isPrime(int);
void firstNPrimeNums(int);

// // Main Function Start
int main()
{
    int n;
    printf("\nEnter N to Print First N Prime Numbers => ");
    scanf("%d", &n);

    firstNPrimeNums(n);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definitions 👇👇

// // Function to Check Whether A Number is Prime or Not
int isPrime(int num)
{
    if (num < 2)
        return -1; // // Invalid Input

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

// // Function to Print First N Prime Numbers
void firstNPrimeNums(int n)
{
    putch(10);

    if (n < 1)
    {
        printf("\n!!! Invalid Input, Plz Enter Positive Number...");
        return;
    }

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }

    putch(10);
}
