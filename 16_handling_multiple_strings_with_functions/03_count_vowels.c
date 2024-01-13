// Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.Use user - defined Functions to Perform these Tasks.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 31

int display2DStr(char[][MAX_COLS], int);
int input2DStr(char[][MAX_COLS], int);
void 

// Main Function Start
int main()
{
    const int ROWS;
    printf("\nHow Many Names Strings Want to Enter (MAX %d) => ", MAX_ROWS);
    scanf("%d", &ROWS);

    // Invalid Input ROWS Entered by User
    if (ROWS < 1 || ROWS > MAX_ROWS)
    {
        puts("\n!!! Invalid Input...");
        exit(0);
    }

    // Declare 2D Array According to user's input
    char strs[ROWS][MAX_COLS], vowels[11] = "AEIOUaeiou";
    int count;

    // Read Names
    printf("\n>>>>>>>>>>>>> Enter %d Strings <<<<<<<<<<<\n", ROWS);
    for (int i = 0; i < ROWS; i++)
    {
        printf("\nEnter String-%d (MAX CHARACTERS %d) => ", i + 1, MAX_COLS - 1);
        fflush(stdin);
        fgets(strs[i], MAX_COLS, stdin);
        strs[i][strcspn(strs[i], "\n")] = '\0'; // Replace '\n' character with '\0'
    }

    // Display Names Before Sorting
    printf("\n>>>>>>>>>>>>> List of Strings <<<<<<<<<<<\n");
    for (int i = 0; i < ROWS; i++)
        puts(strs[i]);

    printf("\n>>>>>>>>>>>>> Number of Vowels in Each String <<<<<<<<<<<\n");

    // Count Vowels in Each String
    for (int i = 0; i < ROWS; i++)
    {
        count = 0;

        for (int j = 0; j < strs[i][j]; j++)
        {
            for (int k = 0; vowels[k]; k++)
            {
                if (strs[i][j] == vowels[k])
                {
                    count++;
                    break;
                }
            }
        }

        printf("\nThere Are %d Vowels in \"%s\"", count, strs[i]);
    }

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Functions Definitions
int display2DStr(char strs[][MAX_COLS], int rows)
{
    putch('\n'); // Add new line

    int i;
    for (i = 0; i < rows; i++)
        puts(strs[i]);

    putch('\n'); // Add new line

    return i; // return the number of strings that have been displayed
}

int input2DStr(char strs[][MAX_COLS], int rows)
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
