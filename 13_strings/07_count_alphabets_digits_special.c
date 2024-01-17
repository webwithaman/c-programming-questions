//  Write a program in C to count the total number of alphabets, digits and special characters in a string.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// // Main Function Start
int main()
{
    char str[ARRAY_SIZE], countAlphabets = 0, countDigits = 0, countSpecialChars = 0;

    printf("\nEnter Any String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str

    // Find Occurrence of ch in str
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
            countAlphabets++;
        else if (str[i] >= '0' && str[i] <= '9')
            countDigits++;
        else
            countSpecialChars++;
    }

    // Print Number of Vowels
    printf("\nEntered String => %s", str);
    printf("\nNumber of Alphabets => %d\nNumber of Digits => %d\nNumber of Special Characters => %d", countAlphabets, countDigits, countSpecialChars);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
