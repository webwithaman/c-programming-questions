// Write a c program to copy one string into another using user-defined function.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// Function Declarations
char *copyString(char[], char[]);

// Main Function Start
int main()
{
    char str[ARRAY_SIZE], copyStr[ARRAY_SIZE];

    printf("\nEnter Any String to Copy Make Its Copy (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str

    copyString(copyStr, str); // copy str into copyStr using user-defined function

    printf("\nOriginal String => %s", str);
    printf("\nCopy of Entered String => %s", copyStr);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definitions 👇👇

// Function to Copy One String into Another
char *copyString(char des[], char src[])
{
    // Copy str into copy
    int i = 0;
    for (i = 0; src[i]; i++)
        des[i] = src[i];

    des[i] = '\0';

    return des;
}
