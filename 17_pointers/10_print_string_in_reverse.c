// Write a program to print a string in reverse using a pointer.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// // Main Function Start
int main()
{
    char *ptr, str[ARRAY_SIZE];
    int length = 0;

    // Assign address to pointer
    ptr = str;

    printf("\nEnter Any String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(ptr, ARRAY_SIZE, stdin);  // Input String
    ptr[strcspn(ptr, "\n")] = '\0'; // Replace '\n' character with '\0'

    // Print Numbers In Normal Order
    printf("\nString in Original Order => ");
    for (int i = 0; i < strlen(ptr); i++)
        printf("%c", *(ptr + i));

    // Print Numbers In Reverse Order
    printf("\nString in Reverse Order => ");
    for (int i = strlen(ptr); i >= 0; i--)
        printf("%c", *(ptr + i));

    putch('\n');
    getch();
    return 0;
}
// Main Function End
