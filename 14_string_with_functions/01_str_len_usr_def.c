// // Write a c program to calculate length of the string using user-defined function.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// // Function Declarations
int strLength(char[]);

// // Main Function Start
int main()
{
    char name[ARRAY_SIZE];
    int length;

    printf("\nEnter Your Name (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(name, ARRAY_SIZE, stdin);   // // Input String
    name[strcspn(name, "\n")] = '\0'; // // Replace '\n' character with '\0' in name

    length = strLength(name); // // Find Length using user-defined function

    printf("\nYour Name is \"%s\" and Number of Characters in Your Name => %d", name, length);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definitions 👇👇

// // Function to Calculate Length of String
int strLength(char str[])
{
    int length = 0;

    while (str[length])
        length++;

    return length;
}
