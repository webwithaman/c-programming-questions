// // Write a recursive function to calculate factorial of a number

// // Header Files
#include <stdio.h>
#include <conio.h>

// // Function Declaration (Prototype)
double factorial(int);

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter A Number to Calculate Factorial => ");
    scanf("%d", &num);

    printf("\nFactorial of %d => %.2lf", num, factorial(num));

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definition 👇👇

// // Recursive Function to Calculate Factorial 
double factorial(int num)
{
    if (num < 2)
        return 1;

    return num * factorial(num - 1);
}