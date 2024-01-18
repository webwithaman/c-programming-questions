// // Write a function to print first N terms of Fibonacci series (TSRN)

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Function Declaration (Prototype)
void firstNFibonacciTerms(int);

// // Main Function Start
int main()
{
    int n;
    printf("\nEnter N to Print First N Terms of Fibonacci Series => ");
    scanf("%d", &n);
    firstNFibonacciTerms(n);

    getch();
    return 0;
}
// // Main Function End

// // Function Definition 👇👇

// // Function to Print First N Terms of Fibonacci Series
void firstNFibonacciTerms(int n)
{
    putch(10); // // It means putch('\n') , ASCII of '\n' is 10

    if (n < 1)
    {
        puts("!!! Invalid Input, Plz Enter Positive Number...");
        return;
    }

    printf(">>>>>>> First %d Terms of Fibonacci Series <<<<<<<\n", n);

    long long int prev = -1, next = 1, result;

    // // If Series Start from 0,1,1,2,3,5..... N
    for (int i = 1; i <= n; i++)
    {
        result = prev + next;
        prev = next;
        next = result;
        printf("%lld ", result);
    }

    // // If Series Start from 1,1,2,3,5..... N

    putch('\n');
}
