// Write a function to check whether a given string is an alphanumeric string or not.
// (Alphanumeric string must contain at least one alphabet and one digit)

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// Function Declarations
int isAnAlphanumericStr(char []);

// // Main Function Start
int main()
{
    char str[ARRAY_SIZE], length;

    printf("\nEnter Any String to Check Whether It is an Alphanumeric String or Not (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str

    if (isAnAlphanumericStr(str))
        printf("\nYes, \"%s\" is an Alphanumeric String", str);
    else
        printf("\nNo, \"%s\" is not an Alphanumeric String", str);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definitions 👇👇

// Function to Check Whether a Given String an Alphanumeric String or Not
int isAnAlphanumericStr(char str[])
{
    int lock1 = 1, lock2 = 1;

    for (int i = 0; str[i]; i++)
    {
        if (lock1 && str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            lock1 = 0;
        else if (lock2 && str[i] >= '0' && str[i] <= '9')
            lock2 = 0;

        if (!lock1 && !lock2)
            return 1; // Yes, String is Alphanumeric
    }

    return 0; // No, String is Not Alphanumeric
}
