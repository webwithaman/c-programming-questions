// // Write a recursive function to print squares of first N natural numbers.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Function Declaration (Prototype)
void squaresOfFirstN(int);

// // Main Function Start
int main()
{
    int n;
    printf("\nEnter N to Print Squares of First N Natural Numbers => ");
    scanf("%d", &n);

    if (n < 0)
    {
        puts("\n!!! Invalid Input, Plz Enter Positive Number...");
        exit(0);
    }

    printf("\n>>>>>>> Squares of First %d Natural Numbers <<<<<<<\n", n);
    squaresOfFirstN(n);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definition 👇👇

// // Recursive Function to Print Squares of First N Natural Numbers
void squaresOfFirstN(int n)
{
    if (n > 0)
    {
        squaresOfFirstN(n - 1);
        printf("%d ", n * n);
    }
}