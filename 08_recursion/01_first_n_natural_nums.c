// // Write a recursive function to print first N natural numbers.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Function Declaration (Prototype)
void firstNNaturalNums(int);

// // Main Function Start
int main()
{
    int n;
    printf("\nEnter N to Print First N Natural Numbers => ");
    scanf("%d", &n);

    if (n < 0)
    {
        puts("\n!!! Invalid Input, Plz Enter Positive Number...");
        exit(0);
    }

    printf("\n>>>>>>> First %d Natural Numbers <<<<<<<\n", n);
    firstNNaturalNums(n);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definition 👇👇

// // Recursive Function to Print First N Natural Numbers
void firstNNaturalNums(int n)
{
    if (n > 0)
    {
        firstNNaturalNums(n - 1);
        printf("%d ", n);
    }
}