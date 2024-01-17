// Write a program to demonstrate memory leak in C.

/*

Memory leak :-

A memory leak in C occurs when a programmer creates a memory in a heap and forgets to delete it. Another case is that if there is no way to access the allocated memory. It means there is some memory which is considered as used or occupied memory, but we don't have any way to use that memory. This situation is known as memory leak.

*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <malloc.h>

// Functions Declarations (Prototypes)
void inputNumUsingDMA();

// Main Function Start
int main()
{
    inputNumUsingDMA();

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function to Input a Number and display it using Dynamic memory allocation
void inputNumUsingDMA()
{
    int *ptr;

    ptr = (int *)malloc(sizeof(int));

    printf("\nEnter A Number => ");
    scanf("%d", ptr);

    printf("\nNumber => %d", *ptr);

    // Now if we don't free this memory using free(ptr) then pointer ptr will be destroyed when the function will end because it is a local variable and we will be unable to access this dynamically allocated memory. This scenario became memory leak.
}