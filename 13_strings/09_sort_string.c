// Write a C program to sort a string array in ascending order.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// Function Declaration
void swap(char *, char *);

// Main Function Start
int main()
{
    char str[ARRAY_SIZE], length = 0;

    printf("\nEnter Any String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str

    // Find Length
    while (str[length])
        length++;

    // // 1st Approach (Bubble Sort)
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i)
        {
        }
    }

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function to Swap values of Two Character variables
void swap(char *ch1, char *ch2)
{
    *ch1 = (*ch1 + *ch2) - (*ch2 = *ch1);
}
