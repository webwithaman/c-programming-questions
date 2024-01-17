// Write a program to demonstrate dangling pointers in C.

/*

Dangling Pointer :-

A pointer pointing to a memory location that has been deleted (or freed) is called dangling pointer.

*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <malloc.h>

// Main Function Start
int main()
{
    int *ptr;

    ptr = (int *)malloc(sizeof(int));

    printf("\nEnter A Number => ");
    scanf("%d", ptr);

    printf("\nNumber => %d\n", *ptr);

    free(ptr); // Free dynamically allocated memory

    // Now the pointer ptr is still pointing to the memory address which is now in free area that is deallocated. Therefore ptr is a Dangling pointer.

    putch('\n');
    getch();
    return 0;
}
// Main Function End
