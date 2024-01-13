// Write a program to sort N city names stored in two dimensional arrays, taken from the user. Use user-defined Functions to Perform these Tasks.

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
int compareStrings(char str1[], char str2[]);
char *copyString(char des[], char src[]);
void sort2DChar(char strs[][MAX_COLS], int rows);

// Main Function Start
int main()
{
    const int ROWS;
    printf("\nHow Many Cities You Want to Enter (MAX %d) => ", MAX_ROWS);
    scanf("%d", &ROWS);

    // Invalid Input ROWS Entered by User
    if (ROWS < 1 || ROWS > MAX_ROWS)
    {
        puts("\n!!! Invalid Input...");
        exit(0);
    }

    // Declare 2D Array According to user's input
    char cities[ROWS][MAX_COLS], temp[MAX_COLS];

    // Read Cities
    printf("\n>>>>>>>>>>>>> Enter %d Cities <<<<<<<<<<<\n", ROWS);
    input2DChar(cities, ROWS);

    // Display Cities Before Sorting
    printf("\n>>>>>>>>>>>>> List of Cities Before Sorting <<<<<<<<<<<\n");
    print2DChar(cities, ROWS);

    // Sort Cities
    sort2DChar(cities, ROWS);

    // Display Cities After Sorting
    printf("\n>>>>>>>>>>>>> List of Cities After Sorting <<<<<<<<<<<\n");
    print2DChar(cities, ROWS);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definitions

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

// Function to Sort 2D Array of char Using Bubble sort
void sort2DChar(char strs[][MAX_COLS], int rows)
{
    char temp[MAX_COLS];

    for (int i = 0; i < rows - 1; i++)
    {
        for (int j = 0; j < rows - 1 - i; j++)
        {
            if (compareStrings(strs[j], strs[j + 1]) > 0)
            {
                copyString(temp, strs[j]);
                copyString(strs[j], strs[j + 1]);
                copyString(strs[j + 1], temp);
            }
        }
    }
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

// Function to Copy One String into Another
char *copyString(char des[], char src[])
{
    // Copy str into copy
    int i = 0;
    for (i = 0; src[i]; i++)
        des[i] = src[i];

    des[i] = '\0';

    return des;
}
