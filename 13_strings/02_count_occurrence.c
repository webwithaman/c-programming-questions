// Write a program to count the occurrence of a given character in a given string.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// Main Function Start
int main()
{
    char str[ARRAY_SIZE], ch;
    int count = 0;

    printf("\nEnter Any String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str

    printf("\nEnter a Character to Find Its Occurrence In Given String => ");
    scanf("%c", &ch);

    // Find Occurrence of ch in str
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == ch)
            count++;
    }

    // Print Occurrence
    printf("\nThere are %d, '%c' in \"%s\" ", count, ch, str);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
