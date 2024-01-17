// Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.

// Header Files
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
    int found = 0, isAllValid = 1;

    // Read Emails
    printf("\n>>>>>>>>>>>>> Enter %d Emails <<<<<<<<<<<\n", ROWS);
    for (int i = 0; i < ROWS; i++)
    {
        printf("\nEnter Email-%d (MAX CHARACTERS %d) => ", i + 1, MAX_COLS - 1);
        fflush(stdin);
        fgets(emails[i], MAX_COLS, stdin);
        emails[i][strcspn(emails[i], "\n")] = '\0'; // Replace '\n' character with '\0'
    }

    // Display All Emails
    printf("\n>>>>>>>>>>>>> List of Emails <<<<<<<<<<<\n");
    for (int i = 0; i < ROWS; i++)
        puts(emails[i]);

    // Display Emails Which Don't have '@' in it
    printf("\n>>>>> Following Emails Are Invalid, Don't have '@' Symbol <<<<<<\n");
    for (int i = 0; i < ROWS; i++)
    {
        found = 0;

        for (int j = 0; j < emails[i][j]; j++)
        {
            if (emails[i][j] == '@')
            {
                found = 1;
                break;
            }
        }

        if (!found)
        { // If '@' not Found
            printf("\n\"%s\"", emails[i]);
            isAllValid = 0;
        }
    }

    if (isAllValid) // If All Emails are Valid
        puts("\nAll the Emails Are Valid...");

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
