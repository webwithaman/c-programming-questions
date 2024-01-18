// // Write a function to print PASCAL Triangle. (TSRN)

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// // Function Declaration (Prototype)
void pascalTriangle(int);
double factorial(int n);

// // Main Function Start
int main()
{
    int maxRows;
    printf("\nHow Many Rows You Want to Print => ");
    scanf("%d", &maxRows);

    pascalTriangle(maxRows);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definitions 👇👇

// // Function to Print Pascal Triangle
void pascalTriangle(int maxRows)
{
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input, Plz Enter Positive Number...");
        return;
    }

    puts("\n--------------------------------------------\n");

    int spacesInCurrentRow, element;

    for (int row = 0; row < maxRows; row++)
    {
        spacesInCurrentRow = (maxRows - row) * 2;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf("  ");

        for (int col = 0; col <= row; col++)
        {
            element = factorial(row) / (factorial(col) * (factorial(row - col)));
            printf("%3d ", element);
        }

        printf("\n"); // // New Line
    }
}

// // Function to Calculate Factorial of A Number
double factorial(int n)
{
    double fact = 1;

    for (int i = 2; i <= n; i++)
        fact *= i;

    return fact;
}
