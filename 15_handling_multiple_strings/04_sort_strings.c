// Write a program to sort N city cities stored in two dimensional arrays, taken from the user.

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
    for (int i = 0; i < ROWS; i++)
    {
        printf("\nEnter City-%d (MAX CHARACTERS %d) => ", i + 1, MAX_COLS - 1);
        fflush(stdin);
        fgets(cities[i], MAX_COLS, stdin);
        cities[i][strcspn(cities[i], "\n")] = '\0'; // Replace '\n' character with '\0'
    }

    // Display Cities Before Sorting
    printf("\n>>>>>>>>>>>>> List of Cities Before Sorting <<<<<<<<<<<\n");
    for (int i = 0; i < ROWS; i++)
        puts(cities[i]);

    // Sort Cities Using Bubble Sort
    for (int i = 0; i < ROWS - 1; i++)
    {
        for (int j = 0; j < ROWS - 1 - i; j++)
        {
            if (strcmp(cities[j], cities[j + 1]) > 0)
            {
                strcpy(temp, cities[j]);
                strcpy(cities[j], cities[j + 1]);
                strcpy(cities[j + 1], temp);
            }
        }
    }

    // Display Cities After Sorting
    printf("\n>>>>>>>>>>>>> List of Cities After Sorting <<<<<<<<<<<\n");
    for (int i = 0; i < ROWS; i++)
        puts(cities[i]);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
