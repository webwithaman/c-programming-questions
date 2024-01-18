// // Write a program to allocate memory dynamically of the size in bytes entered by the user. Also handle the case when memory allocation is failed.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <malloc.h>

#define MAX_BYTES 31

// // Main Function Start
int main()
{
    int bytes;
    printf("\nHow Many Bytes Memory You Want to Allocate For char Array (MAX %d) => ", MAX_BYTES - 1);
    scanf("%d", &bytes);

    // // Invalid Input
    if (bytes < 1 || bytes > MAX_BYTES - 1)
    {
        puts("\n!!! Invalid Input...\n");
        exit(0);
    }

    char *ptr;

    // // Allocate memory using malloc according to user's input
    ptr = (char *)malloc(bytes);

    // // If Memory is Not Allocated (malloc returns NULL)
    if (!ptr)
    {
        puts("\n!!! Unable to Allocate Memory...\n");
        exit(0);
    }

    puts("\nMemory Successfully Allocated...");

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
