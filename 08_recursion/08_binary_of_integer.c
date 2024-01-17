// Write a recursive function to print binary of a given Positive Integer

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Function Declaration (Prototype)
void binaryOfPositiveInteger(int);

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter A Positive Number to Find its Binary => ");
    scanf("%d", &num);

    if (num < 0)
    {
        puts("\n!!! Invalid Input, Plz Enter Positive Number...");
        exit(0);
    }

    printf("\n>>>>>>> Binary Representation of %d <<<<<<<\n", num);
    binaryOfPositiveInteger(num);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definition 👇👇

// Recursive Function to Print Binary of A Positive Integer
void binaryOfPositiveInteger(int num)
{
    if (num > 0)
    {
        binaryOfPositiveInteger(num / 2);
        printf("%d ", num % 2);
    }
}