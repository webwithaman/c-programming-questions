// // Write a c program to transform string into lowercase using user-defined function.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// // Function Declarations
char *strLowercase(char[]);

// // Main Function Start
int main()
{
    char str[ARRAY_SIZE];

    printf("\nEnter Any String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // // Input String
    str[strcspn(str, "\n")] = '\0'; // // Replace '\n' character with '\0' in str

    printf("\nOriginal String => %s", str);

    printf("\nString After Converted into Lowercase => %s", strLowercase(str));

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definitions 👇👇

// // Function to Reverse a String
char *strLowercase(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }

    return str;
}
