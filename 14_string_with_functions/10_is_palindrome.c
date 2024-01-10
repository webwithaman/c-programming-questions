// Write a c program to reverse a string using user-defined function.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// Function Declarations
int strLength(char[]);
char *strReverse(char[]);
int isStrPalindrome(char[]);

// Main Function Start
int main()
{
    char str[ARRAY_SIZE];

    printf("\nEnter Any String (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str

    printf("\nString Before Reversing => %s", str);

    printf("\nString After Reversing => %s", strReverse(str));

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

// Function to Reverse a String
char *strReverse(char str[])
{
    int length = 0;
    char temp;

    // Find Length of str
    while (str[length])
        length++;

    // // Reverse copyStr
    int beg = 0, end = length - 1;
    while (beg < end)
    {
        // Swap str[beg] with str[end]
        temp = str[beg];
        str[beg] = str[end];
        str[end] = temp;
        beg++;
        end--;
    }

    return str;
}

// Function to Check Whether a Given String is Palindrome or Not
int isStrPalindrome(char str[])
{

    if (copyStr)

        return str;
}
