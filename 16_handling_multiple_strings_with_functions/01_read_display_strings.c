// Write a program to read and display a 2D array of strings in C language.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 31

// Functions Declarations
void displayStrings(char[][MAX_COLS], int);
void inputStrings(char[][MAX_COLS], int);

// Main Function Start
int main()
{
    const int ROWS;
    printf("\nHow Many Names You Want to Enter (MAX %d) => ", MAX_ROWS);
    scanf("%d", &ROWS);

    // Invalid Input ROWS Entered by User
    if (ROWS < 1 || ROWS > MAX_ROWS)
    {
        puts("\n!!! Invalid Input...");
        exit(0);
    }

    // Declare 2D Array According to user's input
    char names[ROWS][MAX_COLS];

    // Read Names
    printf("\n>>>>>>>>>>>>> Enter %d Names <<<<<<<<<<<\n", ROWS);
    inputStrings(names, ROWS);

    // Display Names
    printf("\n>>>>>>>>>>>>> List of Names <<<<<<<<<<<");
    displayStrings(names, ROWS);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Functions Definitions
void displayStrings(char strs[][MAX_COLS], int rows)
{
    putch('\n'); // Add new line

    for (int i = 0; i < rows; i++)
        puts(strs[i]);

    putch('\n'); // Add new line
}

void inputStrings(char strs[][MAX_COLS], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        printf("\nEnter String-%d (MAX CHARACTERS %d) => ", i + 1, MAX_COLS - 1);
        fflush(stdin);
        fgets(strs[i], MAX_COLS, stdin);
        strs[i][strcspn(strs[i], "\n")] = '\0'; // Replace '\n' character with '\0'
    }
}