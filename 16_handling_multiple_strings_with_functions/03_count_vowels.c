// Write a program to find the number of vowels in each of the N strings stored in two dimensional arrays, taken from the user.Use user - defined Functions to Perform these Tasks.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 31

// Functions Declarations
int print2DChar(char[][MAX_COLS], int);
int input2DChar(char[][MAX_COLS], int);
void countVowelsInEachStrOf2D(char[][MAX_COLS], int, int[]);
int countVowelsInStr(char[]);

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
    char strs[ROWS][MAX_COLS];

    // Read Names
    printf("\n>>>>>>>>>>>>> Enter %d Strings <<<<<<<<<<<\n", ROWS);
    input2DChar(strs, ROWS);

    // Display Names Before Sorting
    printf("\n>>>>>>>>>>>>> List of Strings <<<<<<<<<<<\n");
    print2DChar(strs, ROWS);

    // Find Vowels in Each String
    printf("\n>>>>>>>>>>>>> Number of Vowels in Each String <<<<<<<<<<<\n");
    findVowelsInEachStrOf2D(strs, ROWS);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Functions Definitions

// Function to Display 2D Array of char
int print2DChar(char strs[][MAX_COLS], int rows)
{
    putch('\n'); // Add new line

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

// Function to Find the Number of Vowels in Each of the N strings Stored in 2D Array of char
void findVowelsInEachStrOf2D(char strs[][MAX_COLS], int rows, int vowelCount[])
{
    for (int i = 0; i < rows; i++)
    {
        vowelCount[i] = countVowelsInStr(strs[i]);

        printf("\nThere Are %d Vowels in \"%s\"", vowelCount[i], strs[i]);
    }
}

// Function to Count Number of Vowels In String
int countVowelsInStr(char str[])
{
    char vowels[11] = "AEIOUaeiou";
    int count = 0;

    for (int i = 0; str[i]; i++)
    {
        for (int k = 0; vowels[k]; k++)
        {
            if (str[i] == vowels[k])
            {
                count++;
                break;
            }
        }
    }

    return count; // return number of vowels
}