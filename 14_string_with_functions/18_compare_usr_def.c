// Write a c program to compare two strings using user-defined function.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// Function Declarations
int compareStrings(char[], char[]);

// // Main Function Start
int main()
{
    char str1[ARRAY_SIZE], str2[ARRAY_SIZE];
    puts("\n>>>>>>> Enter Two Strings to Check Whether Both Are Equal or Not <<<<<<<<<");

    printf("\nEnter First String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str1, ARRAY_SIZE, stdin);   // Input String
    str1[strcspn(str1, "\n")] = '\0'; // Replace '\n' character with '\0' in str1

    printf("\nEnter Second String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str2, ARRAY_SIZE, stdin);   // Input String
    str2[strcspn(str2, "\n")] = '\0'; // Replace '\n' character with '\0' in str2

    if (compareStrings(str1, str2))
        printf("\nNo, \"%s\" and \"%s\" Are Not Equal...", str1, str2);
    else
        printf("\nYes, \"%s\" and \"%s\" Are Equal...", str1, str2);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definitions 👇👇

// Function to Compare Two Strings
int compareStrings(char str1[], char str2[])
{
    for (int i = 0; str1[i] || str2[i]; i++)
    {
        if (str1[i] > str2[i])
            return str1[i] - str2[i];
        else if (str1[i] < str2[i])
            return str1[i] - str2[i];
    }

    return 0;
}
