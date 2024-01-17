// Write a program that asks the user to enter a username. If the username entered is one of the names in the list then the user is allowed to calculate the factorial of a number. Otherwise, an error message is displayed. Use user-defined Functions to Perform these Tasks.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 31

// Functions Declarations (Prototypes)
int print2DChar(char[][MAX_COLS], int);
int search2DStr(char[][MAX_COLS], int, char[]);
int compareStrings(char[], char[]);

// Main Function Start
int main()
{
    const int ROWS = 10;
    char usernames[][MAX_COLS] = {
        "user123",
        "alpha_89",
        "coolUser",
        "test_user",
        "username42",
        "demo_user",
        "guest123",
        "coderGirl",
        "powerUser",
        "hello_world"};
    char username[MAX_COLS];
    int isUsernameValid;

    // Display List of Words
    printf("\n>>>>>>>>>>>>> List of Username <<<<<<<<<<<\n");
    print2DChar(usernames, ROWS);

    // Read Username from user
    printf("\n>>>>>>>> Enter One of the Usernames, then You Will be Allowed to Calculate Factorial of a Number <<<<<<<<\n");
    printf("\nEnter username (MAX CHARACTERS %d) => ", MAX_COLS - 1);
    fflush(stdin);
    fgets(username, MAX_COLS, stdin);
    username[strcspn(username, "\n")] = '\0';

    // Check that username entered by user is one of the usernames or not
    isUsernameValid = search2DStr(usernames, ROWS, username);

    if (isUsernameValid != -1) // Username is Valid
    {
        puts("\n>>>>>> Username is Valid, You are Allowed to Calculate Factorial of a Number <<<<<<<");
        int num;
        long long unsigned int fact = 1;
        printf("\nEnter A Number to Calculate Factorial => ");
        scanf("%d", &num);

        for (int i = 2; i <= num; i++)
            fact *= i;

        printf("\nFactorial of %d => %llu", num, fact);
    }
    else
    {
        puts("\n!!! Invalid username, The username Entered by You Does not Match with Any of the List of Usernames...");
    }

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

    return 0; // Strings are equal
}