// // Write a program to compute the sum of all elements in an array using a pointer.

// // Header Files
#include <stdio.h>
#include <conio.h>

#define ARRAY_SIZE 10

// // Main Function Start
int main()
{
    int *ptr, nums[ARRAY_SIZE], sum = 0;

    // // Assign address to pointer
    ptr = nums;

    printf("\nEnter 10 Numbers to Calculate Sum => ");

    // // Input Numbers using pointer
    for (int i = 0; i < ARRAY_SIZE; i++)
        scanf("%d", ptr + i);

    // // Find Sum using pointer
    for (int i = 0; i < ARRAY_SIZE; i++)
        sum += *(ptr + i);

    printf("\nSum of Entered Numbers => %d", sum);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
