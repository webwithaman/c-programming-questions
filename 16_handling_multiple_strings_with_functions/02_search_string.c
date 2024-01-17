// Write a program to search a string in the list of strings. Use user-defined Functions to Perform these Tasks.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 31

// Functions Declarations (Prototypes)
int print2DChar(char[][MAX_COLS], int);
int input2DChar(char[][MAX_COLS], int);
int search2DStr(char[][MAX_COLS], int, char[]);
int compareStrings(char[], char[]);

// // Main Function Start
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
    char names[ROWS][MAX_COLS], search[MAX_COLS], index = -1;

    // Read Names
    printf("\n>>>>>>>>>>>>> Enter %d Names <<<<<<<<<<<\n", ROWS);
    input2DChar(names, ROWS);

    // Display Names
    printf("\n>>>>>>>>>>>>> List of Names <<<<<<<<<<<\n");
    print2DChar(names, ROWS);

    // Input Name to be Searched
    printf("\nEnter A Name to be Searched in the Given List of Names (MAX CHARACTERS %d) => ", MAX_COLS - 1);
    fgets(search, MAX_COLS, stdin);
    search[strcspn(search, "\n")] = '\0'; // Replace '\n' character with '\0'

    // Search Name
    index = search2DStr(names, ROWS, search);

    // Name Found or Not
    if (index != -1)
        printf("\nYes, \"%s\" is Present in List of Names...", search);
    else
        printf("\nNo, \"%s\" is Not Present in List of Names...", search);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Functions Definitions

// Function to Display 2D Array of char
int print2DChar(char strs[][MAX_COLS], int rows)
{

    int i;
    for (i = 0; i < rows; i++)
        puts(strs[i]);

    putch('\n'); // Add new line

    return i; // return the number of strings that have been displayed
}

// Function to Input 2D Array of char
int input2DChar(char strs[][MAX_COLS], int rows)
{
    int i;
    for (i = 0; i < rows; i++)
    {
        printf("\nEnter String-%d (MAX CHARACTERS %d) => ", i + 1, MAX_COLS - 1);
        fflush(stdin);
        fgets(strs[i], MAX_COLS, stdin);
        strs[i][strcspn(strs[i], "\n")] = '\0'; // Replace '\n' character with '\0'
    }

    return i; // return the number of strings that have been input by user
}

// Function to Search String in 2D Array of char
int search2DStr(char strs[][MAX_COLS], int rows, char search[])
{
    for (int i = 0; i < rows; i++)
    {
        if (compareStrings(strs[i], search) == 0)
            return i; // return the index at search string found
    }

    return -1;
}

// Function to Compare Two Strings
int compareStrings(char str1[], char str2[])
{
    for (int i = 0; str1[i] || str2[i]; i++)
    {
        if (str1[i] > str2[i])
            return str1[i] - str2[i];
        else if (str1[i] < str2[i])
            return str1[i] - str2[i];
    }

    return 0;
}