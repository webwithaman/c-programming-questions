// Write a function to find the repeated character in a given string.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// Function Declarations;
int strLength(char[]);
char *copyString(char[], char[]);
char *sortStr(char str[]);
char *findRepeatedChars(char[], char[]);
void swap(char *ch1, char *ch2);

// // Main Function Start
int main()
{
    char str[ARRAY_SIZE], repeatedChars[ARRAY_SIZE];

    printf("\nEnter Any String to Find Repeated Characters in It (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str

    findRepeatedChars(str, repeatedChars);

    if (strLength(repeatedChars))
    {
        printf("\nRepeated Characters in \"%s\" => ", str);
        for (int i = 0; repeatedChars[i]; i++)
            printf("%c ", repeatedChars[i]);
    }
    else
        printf("\nThere is no Repeated Characters in \"%s\"", str);

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

// Function to Copy One String into Another
char *copyString(char des[], char src[])
{
    // Copy str into copy
    int i = 0;
    for (i = 0; src[i]; i++)
        des[i] = src[i];

    des[i] = '\0';

    return des;
}

// Function to Find Repeated Characters in a String
char *findRepeatedChars(char str[], char repeat[])
{
    int length = strLength(str);
    char copyStr[length];     // create a string to copy str
    copyString(copyStr, str); // copy str into copyStr
    sortStr(copyStr);         // sort copyStr

    if (length <= 1)
    {
        repeat[0] = 0;
        return repeat;
    }

    int j = 0;

    for (int i = 0; copyStr[i]; i++)
    {
        if (copyStr[i] == copyStr[i + 1])
        {
            repeat[j++] = copyStr[i];

            while (copyStr[i] == copyStr[i + 1])
                i++;
        }
    }

    repeat[j] = '\0'; // Add Null Character At End

    return repeat;
}

// Function to sort a string in ascending order
char *sortStr(char str[])
{
    int length = strLength(str);

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (str[j] > str[j + 1])
                swap(&str[j], &str[j + 1]);
        }
    }
}

// Function to Swap values of Two Character variables
void swap(char *ch1, char *ch2)
{
    *ch1 = (*ch1 + *ch2) - (*ch2 = *ch1);
}
