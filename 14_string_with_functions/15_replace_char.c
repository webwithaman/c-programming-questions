// Write a function to replace a single character with another single character in a string.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// Function Declarations;
int searchChar(char[], char);
char *replaceChar(char[], char, char);

// // Main Function Start
int main()
{
    char str[ARRAY_SIZE], toBeReplace, replaceWith;

    printf("\nEnter Any String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str

    fflush(stdin);
    printf("\nEnter the Character to be Replaced => ");
    scanf("%c", &toBeReplace);

    fflush(stdin);
    printf("\nEnter the New Character to be Inserted => ");
    scanf("%c", &replaceWith);

    printf("\nString Before Replacing => \"%s\"", str);

    replaceChar(str, toBeReplace, replaceWith);

    printf("\nString After Replacing => \"%s\"", str);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definitions 👇👇

// Function to Search given Character in a String
int searchChar(char str[], char search)
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == search)
            return i;
    }

    return -1;
}

// Function to Search given Character in a String
char *replaceChar(char str[], char toBeReplace, char replaceWith)
{
    int index = searchChar(str, toBeReplace);

    if (index != -1)
        str[index] = replaceWith;

    return str;
}
