// Write a function to search a given character in a string. (For example if the string  is "c-programming" and the character to be searched is 'a' then return the index of 'a' in string else return -1)

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// Function Declarations;
int searchChar(char[], char);

// // Main Function Start
int main()
{
    char str[ARRAY_SIZE], search;

    printf("\nEnter Any String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str

    printf("\nEnter A Character to be Searched => ");
    scanf("%c", &search);

    int index = searchChar(str, search);

    if (index != -1)
        printf("\n'%c' is Present in \"%s\" at %d Index", search, str, index);
    else
        printf("\n'%c' is not Present in \"%s\"", search, str);

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
