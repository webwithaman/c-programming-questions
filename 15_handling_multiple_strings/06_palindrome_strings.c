// // Write a program to print the strings which are palindrome in the list of strings.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 31

// // Main Function Start
int main()
{
    const int ROWS;
    printf("\nHow Many Strings You Want to Enter (MAX %d) => ", MAX_ROWS);
    scanf("%d", &ROWS);

    // // Invalid Input ROWS Entered by User
    if (ROWS < 1 || ROWS > MAX_ROWS)
    {
        puts("\n!!! Invalid Input...");
        exit(0);
    }

    // // Declare 2D Array According to user's input
    char strs[ROWS][MAX_COLS], copy[MAX_COLS];
    int anyPalindrome = 0;

    // // Read Cities
    printf("\n>>>>>>>>>>>>> Enter %d Strings <<<<<<<<<<<\n", ROWS);
    for (int i = 0; i < ROWS; i++)
    {
        printf("\nEnter City-%d (MAX CHARACTERS %d) => ", i + 1, MAX_COLS - 1);
        fflush(stdin);
        fgets(strs[i], MAX_COLS, stdin);
        strs[i][strcspn(strs[i], "\n")] = '\0'; // // Replace '\n' character with '\0'
    }

    // // Display Strings
    printf("\n>>>>>>>>>>>>> List of Strings <<<<<<<<<<<\n");
    for (int i = 0; i < ROWS; i++)
        puts(strs[i]);

    // // Display Palindrome Srings
    printf("\n>>>>>>>>>>>>> Following Strings Are Palindrome <<<<<<<<<<<\n");
    for (int i = 0; i < ROWS - 1; i++)
    {
        strcpy(copy, strs[i]); // // make a copy of strs[i]

        strrev(copy); // // reverse copy strings

        if (strcmp(copy, strs[i]) == 0)
        { // // True, then string is Palindrome
            printf("\n\"%s\"", strs[i]);
            anyPalindrome = 1;
        }
    }

    if (!anyPalindrome) // // If No Palindrome Found
        printf("\nThere is No Palindrome Strings...");

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
