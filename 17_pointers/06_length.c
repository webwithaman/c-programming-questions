// Write a program to calculate the length of the string using a pointer.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// // Main Function Start
int main()
{
    char str[ARRAY_SIZE], *ptr;
    int length = 0;

    // Assign Address to Pointer
    ptr = str;

    printf("\nEnter Any String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(ptr, ARRAY_SIZE, stdin);  // Input String
    ptr[strcspn(ptr, "\n")] = '\0'; // Replace '\n' character with '\0'

    // Find Length
    while (*(ptr + length))
        length++;

    printf("\nLength of String => %d", length);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
