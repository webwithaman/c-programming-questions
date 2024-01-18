// // Write a c program to concat two strings using user-defined function.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// // Function Declarations;
char *conactStrings(char[], char[]);
int strLength(char[]);

// // Main Function Start
int main()
{
    char str1[ARRAY_SIZE * 2], str2[ARRAY_SIZE];
    printf("\n>>>>>>>> Enter Two Strings For Concatenation <<<<<<<<<\n");

    printf("\nEnter First String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str1, ARRAY_SIZE, stdin);   // // Input String
    str1[strcspn(str1, "\n")] = '\0'; // // Replace '\n' character with '\0' in str1

    printf("\nEnter Second String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str2, ARRAY_SIZE, stdin);   // // Input String
    str2[strcspn(str2, "\n")] = '\0'; // // Replace '\n' character with '\0' in str2

    conactStrings(str1, str2); // // Conact Two strings

    printf("\nStrings After Concatenation => %s", str1);

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

// // Function to Concat Two Strings
char *conactStrings(char str1[], char str2[])
{
    int length = strLength(str1);

    int i = 0;

    for (i = 0; str2[i]; i++)
        str1[i + length] = str2[i];

    str1[i + length] = 0; // // Add Null Character At End
}