// Given a list of words followed by two words, the task is to find the minimum distance between the given two words in the list of words.(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} word1 = “the”, word2 = “fox”, OUTPUT : 1).Use user - defined Functions to Perform these Tasks.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 31

// Functions Declarations (Prototypes)
int print2DChar(char[][MAX_COLS], int);
int minDisBetTwoWords(char[][MAX_COLS], int, char[], char[]);
int compareStrings(char[], char[]);

// // Main Function Start
int main()
{
    const int ROWS = 8;
    char words[8][MAX_COLS] = {
        "apple",
        "kiwi",
        "banana",
        "kiwi",
        "apple",
        "date",
        "apple",
        "banana"};

    char word1[MAX_COLS], word2[MAX_COLS];
    int minDis;

    // Display List of Words
    printf("\n>>>>>>>>>>>>> List of Words <<<<<<<<<<<\n");
    print2DChar(words, ROWS);

    // Read Two Words
    printf("\n>>> Enter Two Words From the List to Find Minimum Distance Between <<<<<<<<\n");

    printf("\nEnter Word-1 (MAX CHARACTERS %d) => ", MAX_COLS - 1);
    fflush(stdin);
    fgets(word1, MAX_COLS, stdin);
    word1[strcspn(word1, "\n")] = '\0';

    printf("\nEnter Word-2 (MAX CHARACTERS %d) => ", MAX_COLS - 1);
    fflush(stdin);
    fgets(word2, MAX_COLS, stdin);
    word2[strcspn(word2, "\n")] = '\0';

    // Find Minimum Distance
    minDis = minDisBetTwoWords(words, ROWS, word1, word2);

    if (minDis != ROWS)
        printf("\nMinimum Distance Between \"%s\" and \"%s\" => %d", word1, word2, minDis);
    else
        printf("\n\"%s\" Or \"%s\" not Present in the List of words", word1, word2);

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

// Functon to Find Minimum Distance Between Two Words
int minDisBetTwoWords(char words[][MAX_COLS], int rows, char word1[], char word2[])
{
    int index1 = -1, index2 = -1, minDis = rows;

    for (int i = 0; i < rows; i++)
    {
        if (compareStrings(word1, words[i]) == 0)
            index1 = i;

        if (compareStrings(word2, words[i]) == 0)
            index2 = i;

        if (index1 != -1 && index2 != -1 && index1 <= index2)
        {
            if (index2 - index1 < minDis)
                minDis = index2 - index1;
        }
    }

    return minDis;
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