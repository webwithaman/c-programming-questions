// Write a program to print the strings which are palindrome in the list of strings.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 31

// Functions Declarations
int strLength(char[]);
char *strReverse(char[]);
char *copyString(char[], char[]);
int compareStrings(char[], char[]);
int isStrPalindrome(char[]);
int print2DChar(char[][MAX_COLS], int);
int input2DChar(char[][MAX_COLS], int);

// Main Function Start
int main()
{
    const int ROWS;
    printf("\nHow Many Strings You Want to Enter (MAX %d) => ", MAX_ROWS);
    scanf("%d", &ROWS);

    // Invalid Input ROWS Entered by User
    if (ROWS < 1 || ROWS > MAX_ROWS)
    {
        puts("\n!!! Invalid Input...");
        exit(0);
    }

    // Declare 2D Array According to user's input
    char strs[ROWS][MAX_COLS], copy[MAX_COLS];
    int anyPalindrome = 0;

    // Read Cities
    printf("\n>>>>>>>>>>>>> Enter %d Strings <<<<<<<<<<<\n", ROWS);
    for (int i = 0; i < ROWS; i++)
    {
        printf("\nEnter City-%d (MAX CHARACTERS %d) => ", i + 1, MAX_COLS - 1);
        fflush(stdin);
        fgets(strs[i], MAX_COLS, stdin);
        strs[i][strcspn(strs[i], "\n")] = '\0'; // Replace '\n' character with '\0'
    }

    // Display Strings
    printf("\n>>>>>>>>>>>>> List of Strings <<<<<<<<<<<\n");
    for (int i = 0; i < ROWS; i++)
        puts(strs[i]);

    // Display Palindrome Srings
    printf("\n>>>>>>>>>>>>> Following Strings Are Palindrome <<<<<<<<<<<\n");
    for (int i = 0; i < ROWS - 1; i++)
    {
        strcpy(copy, strs[i]); // make a copy of strs[i]

        strrev(copy); // reverse copy strings

        if (strcmp(copy, strs[i]) == 0)
        { // True, then string is Palindrome
            printf("\n\"%s\"", strs[i]);
            anyPalindrome = 1;
        }
    }

    if (!anyPalindrome) // If No Palindrome Found
        printf("\nThere is No Palindrome Strings...");

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definitions

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

// Function to Calculate Length of String
int strLength(char str[])
{
    int length = 0;

    while (str[length])
        length++;

    return length;
}

// Function to Reverse a String
char *strReverse(char str[])
{
    int length = strLength(str);
    char temp;

    // Reverse str
    int beg = 0, end = length - 1;
    while (beg < end)
    {
        // Swap str[beg] with str[end]
        temp = str[beg];
        str[beg] = str[end];
        str[end] = temp;
        beg++;
        end--;
    }

    return str;
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

// Function to Check Whether a Given String an Alphanumeric String or Not
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

// Function to Check Whether a Given String is Palindrome or Not
int isStrPalindrome(char str[])
{
    char copyStr[strLength(str) + 1]; // create a string to copy str
    copyString(copyStr, str);         // copy str into copyStr
    strReverse(copyStr);              // reverse copyStr

    if (compareStrings(copyStr, str))
        return 0; // String is not Palindrome

    return 1; // String is Palindrome
}
