// Define a function to input a string untill user press enter and store it in an array   without any memory wastage.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <malloc.h>

// Functions Declarations (Prototypes)
char *inputString();

// Main Function Start
int main()
{
    char *ptr;
    printf("\nEnter Any String of Any Length => ");

    // Input String
    ptr = inputString();

    // Display String
    printf("\nString => %s", ptr);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function to Input a string untill user press enter and store it in an array   without any memory wastage
char *inputString()
{
    char *ptr, ch;
    int index = 0;

    // First Allocate 1 byte
    ptr = (char *)malloc(sizeof(char) * 1);

    // Take Input untill user press enter
    while (1)
    {
        scanf("%1c", &ch);

        if (ch == '\n' || ch == '\r') // Stop taking input
            break;

        ptr[index++] = ch; // put in array

        ptr = (char *)realloc(ptr, sizeof(char) * (index + 1)); // reallocate memory
    }

    ptr[index] = '\0'; // Add null character at end to terminate string

    return ptr; // return pointer to string
}