// Write a program to find the number of vowels in each of the N strings stored in two dimensional arrays, taken from the user.

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
