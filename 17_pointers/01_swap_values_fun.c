//  Write a program to read and display a 2D array of strings in C language. Use user-defined Functions to Perform these Tasks.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

// Functions Declarations (Prototypes)
void swapTwoVal(int *, int *);

// Main Function Start
int main()
{
    int a, b;
    printf("\nEnter value of a => ");
    scanf("%d", &a);
    printf("\nEnter value of b => ");
    scanf("%d", &b);
    printf("\n\n>>>>>>>>>>> Before Swapping <<<<<<<<<<<\n");
    printf("a => %d, b => %d\n", a, b);

    // Swap values of a and b
    swapTwoVal(&a, &b)

        printf("\n\n>>>>>>>>>>> After Swapping <<<<<<<<<<<\n");
    printf("a => %d, b => %d\n", a, b);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function to Swap values of two int variables
void swapTwoVal(int *a, int *b)
{

    // // using Addition and Subtraction
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

    // // using Divison and Multiplication
    // *a = *a * *b;
    // *b = *a / *b;
    // *a = *a / *b;

    // // using Bitwise XOR (^)
    // *a = *a ^ *b;
    // *b = *a ^ *b;
    // *a = *a ^ *b;

    // // In Single Statement
    // *a = (*a + *b) - (*b = *a);
}
