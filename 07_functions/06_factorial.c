// // Write a function to calculate the factorial of a number. (TSRS)

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Function Declaration (Prototype)
double factorial(int);

// // Main Function Start
int main()
{
    int n;
    printf("\nEnter A Number to Calculate Factorial => ");
    scanf("%d", &n);

    double result = factorial(n);

    printf("\nFactorial of %d (General Form ) => %lf\n", n, result);
    printf("\nFactorial of %d (Scientific Form )=> %e", n, result);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definition 👇👇

// // Function to Calculate Factorial of A Number
double factorial(int n)
{
    double fact = 1;

    for (int i = 2; i <= n; i++)
        fact *= i;

    return fact;
}
