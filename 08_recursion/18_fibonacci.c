// // Write a recursive function to find nth term Fibonacci series and then print first n terms using this function.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Function Declaration (Prototype)
long long  int nthTermOfFibonacci(int);

// // Main Function Start
int main()
{
    int n;
    printf("\nEnter N to Print First N Terms of Fibonacci Series => ");
    scanf("%d", &n);

    if (n < 0)
    {
        puts("\n!!! Invalid Input, Plz Enter Positive Number...");
        exit(0);
    }

    printf("\n>>>>>>> First %d Terms of Fibonacci Series <<<<<<<\n", n);

    for (int i = 1; i <= n; i++)
        printf("%lld ", nthTermOfFibonacci(i));

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definition 👇👇

// // Recursive Function to Print First N Natural Numbers
long long int nthTermOfFibonacci(int n)
{
    if (n < 1)
        return -1; // // Invalid Input
    else if (n == 1)
        return 0;
    else if (n == 2)
        return 1;

    return nthTermOfFibonacci(n - 1) + nthTermOfFibonacci(n - 2);
}