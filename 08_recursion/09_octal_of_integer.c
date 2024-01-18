// // Write a recursive function to print octal of a given Positive Integer

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Function Declaration (Prototype)
void octalOfPositiveInteger(int);

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter A Positive Number to Find its Octal => ");
    scanf("%d", &num);

    if (num < 0)
    {
        puts("\n!!! Invalid Input, Plz Enter Positive Number...");
        exit(0);
    }

    printf("\n>>>>>>> Octal Representation of %d <<<<<<<\n", num);
    octalOfPositiveInteger(num);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definition 👇👇

// // Recursive Function to Print Octal of A Positive Integer
void octalOfPositiveInteger(int num)
{
    if (num > 0)
    {
        octalOfPositiveInteger(num / 8);
        printf("%d", num % 8);
    }
}