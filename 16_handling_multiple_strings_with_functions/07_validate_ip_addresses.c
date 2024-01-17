// From the list of IP addresses, check whether all ip addresses are valid. Use user-defined Functions to Perform these Tasks.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 16

// Functions Declarations (Prototypes)
int print2DChar(char[][MAX_COLS], int);
int input2DChar(char[][MAX_COLS], int);
int strLength(char[]);
int isValidIP(char[]);
int *findInvalidIPs(char[][MAX_COLS], int, int[], int *);

// // Main Function Start
int main()
{
    const int ROWS;
    printf("\nHow Many IP Addresses You Want to Enter (MAX %d) => ", MAX_ROWS);
    scanf("%d", &ROWS);

    // Invalid Input ROWS Entered by User
    if (ROWS < 1 || ROWS > MAX_ROWS)
    {
        puts("\n!!! Invalid Input...");
        exit(0);
    }

    // Declare 2D Array According to user's input
    char ips[ROWS][MAX_COLS];
    int invalIPs[ROWS], invalSize;

    // Read IP Addresses
    printf("\n>>>>>>>>>>>>> Enter %d IP Addresses <<<<<<<<<<<\n", ROWS);
    input2DChar(ips, ROWS);

    // Display All IP Addresses
    printf("\n>>>>>>>>>>>>> List of IP Addresses <<<<<<<<<<<\n");
    print2DChar(ips, ROWS);

    // Find Invalid IP Addresses
    findInvalidIPs(ips, ROWS, invalIPs, &invalSize);

    if (invalSize != 0)
    {
        // Display Invalid IP Addresses
        printf("\n>>>>> Following IP Addresses Are Invalid <<<<<<\n");
        for (int i = 0; i < invalSize; i++)
            puts(ips[invalIPs[i]]);
    }
    else
        puts("\nAll the IP Addresses Are Valid...");

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definitions

// Function to Display 2D Array of char
int print2DChar(char strs[][MAX_COLS], int rows)
{

    int i;
    for (i = 0; i < rows; i++)
        puts(strs[i]);

    putch('\n'); // Add new line

    return i; // return the number of strings that have been displayed
}

// Function to Input 2D Array of char
int input2DChar(char strs[][MAX_COLS], int rows)
{
    int i;
    for (i = 0; i < rows; i++)
    {
        printf("\nEnter String-%d (MAX CHARACTERS %d) => ", i + 1, MAX_COLS - 1);
        fflush(stdin);
        fgets(strs[i], MAX_COLS, stdin);
        strs[i][strcspn(strs[i], "\n")] = '\0'; // Replace '\n' character with '\0'
    }

    return i; // return the number of strings that have been input by user
}

// Function to Calculate Length of String
int strLength(char str[])
{
    int length = 0;

    while (str[length])
        length++;

    return length;
}

// Function to Validate IP Address
int isValidIP(char ip[])
{
    int countPeriods = 0, num;

    if (strLength(ip) < 7) // Minimum Length of a Valid IP Address is 7
        return 0;          // IP is invalid
    else
    {
        for (int j = 0; ip[j]; j++)
        {
            char ch = ip[j];

            if ((ch < '0' || ch > '9') && ch != '.') // If there is other character than Digit (0-9) or (.)
            {
                return 0; // IP is invalid
            }
            else if (ch == '.')
            {
                if (j == 0 || ip[j + 1] == '.' || ip[j + 1] == '\0') // if Period is 0 Index or if there are consecutive Periods one after another or if Period is at last index
                {
                    return 0; // IP is invalid
                }
                countPeriods++;
            }
        }

        if (countPeriods != 3) // if there are no valid number of periods
            return 0;          // IP is invalid

        num = 0;

        for (int j = 0; ip[j]; j++)
        {
            if (ip[j] != '.')
            {
                if (j == 0 && ip[j] == '0' && ip[j + 1] != '.') //  If First Octet value has leading
                {
                    return 0; // IP is invalid
                }

                num = num * 10 + (ip[j] - 48); // Convert Each char digit in number

                if (ip[j + 1] == '\0' && num > 255) // If last Octet has value Greater than 255
                {
                    return 0; // IP is invalid
                }
            }
            else if (num > 255) // if Any Octet Value is Greater than 255
            {
                return 0; // IP is invalid
            }
            else
            {
                num = 0;
                if (ip[j + 1] == '0' && ip[j + 2] != '.' && ip[j + 2] != '\0') // If Octet value has leading 0
                {
                    return 0; // IP is invalid
                }
            }
        }
    }

    return 1; // IP is Valid
}

int *findInvalidIPs(char ips[][MAX_COLS], int rows, int invalIPs[], int *invalSize)
{
    int j = 0; // Denote Index of invalIPs[]

    for (int i = 0; i < rows; i++)
    {
        if (isValidIP(ips[i]) == 0)
            invalIPs[j++] = i;
    }

    *invalSize = j;

    return invalIPs;
}