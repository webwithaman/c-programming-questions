// Write a function to count words in a given string.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// Function Declarations
int strLength(char[]);
int countWords(char[]);

// // Main Function Start
int main()
{
    char str[ARRAY_SIZE];

    printf("\nEnter Any String to Count Words in It (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str

    int totalWords = countWords(str);

    printf("\nThere Are %d Words in \"%s\"", totalWords, str);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definitions 👇👇

// Function to Calculate Length of String
int strLength(char str[])
{
    int length = 0;

    while (str[length])
        length++;

    return length;
}

//  Function to Count words in a Given String
int countWords(char str[])
{
    // ASCII Code of Space ' ' is 32

    // ASCII Code of Horizontal Tab '\t' is 9

    // Skip Leading Spaces in String
    int j = 0;
    while (str[j] == 32 || str[j] == '\t')
        j++;

    if (str[j] == '\0')
        return 0; // No words in string

    int count = 1; // Counter to count words

    // Count words
    for (int i = j; str[i]; i++)
    {
        if (str[i + 1] != '\0' && str[i] == 32 && str[i + 1] != 32 && str[i] == '\t' && str[i + 1] != '\t')
        {
            count++;
        }
    }

    return count; // return total words
}
