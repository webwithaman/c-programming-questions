// Write a c program to transform string into uppercase using user-defined function.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// Function Declarations
char *strUppercase(char[]);

// // Main Function Start
int main()
{
    char str[ARRAY_SIZE];

    printf("\nEnter Any String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str

    printf("\nOriginal String => %s", str);

    printf("\nString After Converted into Uppercase => %s", strUppercase(str));

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definitions 👇👇

// Function to Reverse a String
char *strUppercase(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }

    return str;
}
