// Write a program to calculate the length of the string using a pointer.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// Main Function Start
int main()
{
    char str[ARRAY_SIZE], *ptr;
    int length = 0;

    printf("\nEnter Any String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str

    // Assign Address to Pointer
    ptr = str;

    // Find Length
    while (*(ptr + length))
        length++;

    printf("\nLength of String => %d", length);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
