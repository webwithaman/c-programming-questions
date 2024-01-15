// Write a program to count the number of vowels and consonants in a string using a pointer.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// Main Function Start
int main()
{
    char *ptr, str[ARRAY_SIZE], ch, vowels[11] = "AEIOUaeiou";
    int countVowels = 0, countConsonants = 0;

    printf("\nEnter Any String to Count Vowels and Consonants in it (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str

    // Assign Address to Pointer
    ptr = str;

    // Find Occurrence of ch in str
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
