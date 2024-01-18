// // Write a program to convert a given string into lowercase.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// // Main Function Start
int main()
{
    char str[ARRAY_SIZE];

    printf("\nEnter Any String to Convert it into Lowercase (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // // Input String
    str[strcspn(str, "\n")] = '\0'; // // Replace '\n' character with '\0' in str

    // // Convert into Lowercase
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }

    printf("\nEntered String Converted into Lowercase => %s", str);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
