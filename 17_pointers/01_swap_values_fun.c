// Write a function to swap strings of two char arrays by calling a functions. (TSRN)

// Header Files
#include <stdio.h>
#include <conio.h>

// Functions Declarations (Prototypes)
void swapTwoVal(int *, int *);

// // Main Function Start
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
    swapTwoVal(&a, &b);

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
