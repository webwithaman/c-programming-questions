// Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.


// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 31

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
    char names[ROWS][MAX_COLS], search[MAX_COLS], index = -1;

    // Read Names
    printf("\n>>>>>>>>>>>>> Enter %d Names <<<<<<<<<<<\n", ROWS);
    for (int i = 0; i < ROWS; i++)
    {
        printf("\nEnter Name-%d (MAX CHARACTERS %d) => ", i + 1, MAX_COLS - 1);
        fflush(stdin);
        fgets(names[i], MAX_COLS, stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; // Replace '\n' character with '\0'
    }

    // Display Names Before Sorting
    printf("\n>>>>>>>>>>>>> List of Names <<<<<<<<<<<\n");
    for (int i = 0; i < ROWS; i++)
        puts(names[i]);

    // Input Name to be Searched
    printf("\nEnter A Name to be Searched in the Given List of Names (MAX CHARACTERS %d) => ", MAX_COLS - 1);
    fgets(search, MAX_COLS, stdin);
    search[strcspn(search, "\n")] = '\0'; // Replace '\n' character with '\0'

    // Search Names Using Linear Search
    for (int i = 0; i < ROWS; i++)
    {
        if (strcmp(names[i], search) == 0)
        {
            index = i;
            break;
        }
    }

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
