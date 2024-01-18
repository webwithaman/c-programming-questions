// // Write a program in C to Find the Frequency of Characters.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// // Main Function Start
int main()
{
    char str[ARRAY_SIZE], copyStr[ARRAY_SIZE], length = 0, count;

    printf("\nEnter Any String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // // Input String
    str[strcspn(str, "\n")] = '\0'; // // Replace '\n' character with '\0' in str

    // // Find Length
    while (str[length])
        length++;

    // // Copy str into copyStr
    int i = 0;
    for (i = 0; str[i]; i++)
        copyStr[i] = str[i];

    copyStr[i] = '\0'; // // Add Null Character at End

    // // Sort copyStr
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (copyStr[j] > copyStr[j + 1])
            {
                char temp = copyStr[j];
                copyStr[j] = copyStr[j + 1];
                copyStr[j + 1] = temp;
            }
        }
    }

    // // Find and Print Frequency of each character
    for (int i = 0; i < length; i += count)
    {
        count = 1;

        for (int j = i + 1; j < length && copyStr[i] == copyStr[j]; j++)
            count++;

        if (copyStr[i] == ' ')
            printf("\nFrequecy of Spaces => %d", count);
        else
            printf("\nFrequecy of %c => %d", copyStr[i], count);
    }

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
