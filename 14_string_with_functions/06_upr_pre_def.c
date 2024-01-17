// Write a c program to transform string into uppercase using pre-defined function.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

#define ARRAY_SIZE 31

// // Main Function Start
int main()
{
    char str[ARRAY_SIZE];

    printf("\nEnter Any String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str

    printf("\nOriginal String => %s", str);

    printf("\nString After Converted into Uppercase => %s", strupr(str));

    putch('\n');
    getch();
    return 0;
}
// Main Function End
