// // Write a program in C to find the sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 using the function.

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Function Declaration (Prototype)
double sumOfSeries(int);
double factorial(int n);

// // Main Function Start
int main()
{
    int n;
    printf("\nEnter Positive N to Find Sum of Series Like this - (For N = 3, 1!/1 + 2!/2 + 3!/3) , (For N = 4, 1!/1 + 2!/2 + 3!/3 + 4!/4) => ");
    scanf("%d", &n);

    printf("\nSum of Series Till %d => %lf", n, sumOfSeries(n));

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definition 👇👇

// // Function to Find Sum of Series like this - 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5
double sumOfSeries(int n)
{
    if (n < 0)
        return -1;

    double sum = 0;
    for (int i = 1; i <= n; i++)
        sum += factorial(i) / i;
    
    return sum;
}

// // Function to Calculate Factorial of A Number
double factorial(int n)
{
    double fact = 1;

    for (int i = 2; i <= n; i++)
        fact *= i;

    return fact;
}
