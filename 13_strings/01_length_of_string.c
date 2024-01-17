// Write a program to calculate the length of the string without using built-in method.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// // Main Function Start
int main()
{
    char name[ARRAY_SIZE];
    int length = 0;

    printf("\nEnter Your Name (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(name, ARRAY_SIZE, stdin);   // Input String
    name[strcspn(name, "\n")] = '\0'; // Replace '\n' character with '\0' in name

    // Find Length
    while (name[length])
        length++;

    printf("\nYour Name is \"%s\" and Number of Characters in Your Name => %d", name, length);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
