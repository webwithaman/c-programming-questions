// Write a program to calculate the length of the string without using built-in method.

// Header Files
#include <stdio.h>
#include <conio.h>

#define ARRAY_SIZE 30

// Main Function Start
int main()
{
    char name[ARRAY_SIZE], length = 0;

    printf("\nEnter Your Name => ");
    fgets(name, ARRAY_SIZE, stdin); // Input String

    // Find Length
    while (name[length])
        length++;

    name[--length] = '\0'; // Replace '\n' Char with '\0'

    printf("\nYour Name is %s and Number of Characters in Your Name => %d", name, length);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
