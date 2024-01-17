// Write a program in C to copy one string to another string.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// // Main Function Start
int main()
{
    char str[ARRAY_SIZE], copyStr[ARRAY_SIZE];

    printf("\nEnter Any String to Copy Make Its Copy (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str

    // Copy str into copyStr
    int i = 0;
    for (i = 0; str[i]; i++)
        copyStr[i] = str[i];

    copyStr[i] = '\0'; // Add Null Character at End

    printf("\nOriginal String => %s", str);
    printf("\nCopy of Entered String => %s", copyStr);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
