// Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out. Use user-defined Functions to Perform these Tasks.

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
int searchCharInStr(char[], char);
int *findInvalidEmails(char[][MAX_COLS], int, int[], int *);

// // Main Function Start
int main()
{
    const int ROWS;
    printf("\nHow Many Emails You Want to Enter (MAX %d) => ", MAX_ROWS);
    scanf("%d", &ROWS);

    // Invalid Input ROWS Entered by User
    if (ROWS < 1 || ROWS > MAX_ROWS)
    {
        puts("\n!!! Invalid Input...");
        exit(0);
    }

    // Declare 2D Array According to user's input
    char emails[ROWS][MAX_COLS];
    int invalMailsInd[ROWS], sizeOfInval;

    // Read Emails
    printf("\n>>>>>>>>>>>>> Enter %d Emails <<<<<<<<<<<\n", ROWS);
    input2DChar(emails, ROWS);

    // Display All Emails
    printf("\n>>>>>>>>>>>>> List of Emails <<<<<<<<<<<\n");
    print2DChar(emails, ROWS);

    // Find Emails Which Don't have '@' in it
    findInvalidEmails(emails, ROWS, invalMailsInd, &sizeOfInval);

    // Display Emails Which Don't have '@' in it
    if (sizeOfInval != 0)
    {
        printf("\n>>>>> Following Emails Are Invalid, Don't have '@' Symbol <<<<<<\n");
        for (int i = 0; i < sizeOfInval; i++)
        {
            puts(emails[invalMailsInd[i]]);
        }
    }
    else
        puts("\nAll the Emails Are Valid...");

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

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

// Function to Search a Given Character in a String
int searchCharInStr(char str[], char search)
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == search)
            return i; // If Found
    }

    return -1;
}

// Function to Find Emails Which Don't have '@' in it
int *findInvalidEmails(char emails[][MAX_COLS], int rows, int invalMailsInd[], int *sizeOfInval)
{
    int j = 0; // for indexes of invalMailsInd[]

    for (int i = 0; i < rows; i++)
    {
        if (searchCharInStr(emails[i], '@') == -1)
            invalMailsInd[j++] = i;
    }

    *sizeOfInval = j; // sizeOfInval of invalMailsInd[]

    return invalMailsInd;
}