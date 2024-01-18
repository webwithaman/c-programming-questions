// // Write a program to convert a given string into uppercase.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// // Main Function Start
int main()
{
    char str[ARRAY_SIZE];

    printf("\nEnter Any String to Convert it into Uppercase (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // // Input String
    str[strcspn(str, "\n")] = '\0'; // // Replace '\n' character with '\0' in str

    // // Convert into Uppercase
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }

    printf("\nEntered String Converted into Uppercase => %s", str);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
