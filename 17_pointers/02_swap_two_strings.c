// Write a function to swap values of two in variables by calling a function. (TSRN)

// Header Files
#include <stdio.h>
#include <conio.h>

#define ARRAY_SIZE 31

// Functions Declarations (Prototypes)
void swapTwoVal(int *, int *);

// Main Function Start
int main()
{
    char str1[ARRAY_SIZE], str2[ARRAY_SIZE];

    printf("\nEnter String-1 (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str1, ARRAY_SIZE, stdin);   // Input String
    str1[strcspn(str1, "\n")] = '\0'; // Replace '\n' character with '\0'

    printf("\nEnter String-2 (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str2, ARRAY_SIZE, stdin);   // Input String
    str2[strcspn(str2, "\n")] = '\0'; // Replace '\n' character with '\0'

    printf("\n\n>>>>>>>>>>> Before Swapping <<<<<<<<<<<\n");
    printf("str1 => %s\nb => %s\n", str1, str2);

    // Swap values of a and b
    swapTwoStrs(str1, str2);

    printf("\n\n>>>>>>>>>>> After Swapping <<<<<<<<<<<\n");
    printf("str1 => %s\nb => %s\n", str1, str2);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function to Swap values of two int variables
void swapTwoStrs(int *str1, int *str2)
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
