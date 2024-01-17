// Write a function to check whether a given string is palindrome or not

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ARRAY_SIZE 31

// Function Declarations
int strLength(char[]);
char *strReverse(char[]);
char *copyString(char[], char[]);
int compareStrings(char[], char[]);
int isStrPalindrome(char[]);

// // Main Function Start
int main()
{
    char str[ARRAY_SIZE];

    printf("\nEnter Any String to Check Whether It is Palindrome or Not (MAX CHARACTERS %d) => ", ARRAY_SIZE - 1);
    fgets(str, ARRAY_SIZE, stdin);  // Input String
    str[strcspn(str, "\n")] = '\0'; // Replace '\n' character with '\0' in str

    if (isStrPalindrome(str))
        printf("\nYes, \"%s\" is Palindrome...", str);
    else
        printf("\nNo, \"%s\" is not Palindrome...", str);

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
    int length = strLength(str);
    char temp;

    // Reverse str
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

// Function to Check Whether a Given String an Alphanumeric String or Not
int compareStrings(char str1[], char str2[])
{
    for (int i = 0; str1[i] || str2[i]; i++)
    {
        if (str1[i] > str2[i])
            return str1[i] - str2[i];
        else if (str1[i] < str2[i])
            return str1[i] - str2[i];
    }

    return 0;
}

// Function to Check Whether a Given String is Palindrome or Not
int isStrPalindrome(char str[])
{
    char copyStr[strLength(str) + 1]; // create a string to copy str
    copyString(copyStr, str);         // copy str into copyStr
    strReverse(copyStr);              // reverse copyStr

    if (compareStrings(copyStr, str))
        return 0; // String is not Palindrome

    return 1; // String is Palindrome
}
