// Write a program to count vowels in a given string.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// // Main Function Start
int main()
{
    char str[ARRAY_SIZE], ch, vowels[11] = "AEIOUaeiou";
    int count = 0;

    printf("\nEnter Any String to Count Vowels in it (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str

    // Count Vowels
    for (int i = 0; str[i]; i++)
    {
        for (int j = 0; vowels[j]; j++)
        {
            if (str[i] == vowels[j])
            {
                count++;
                break;
            }
        }
    }

    // Print Number of Vowels
    printf("\nThere are %d vowels in \"%s\" ", count, str);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
