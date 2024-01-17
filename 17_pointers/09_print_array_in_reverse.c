// Write a program to print the elements of an array in reverse order using a pointer.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{
    const int ARRAY_SIZE;
    printf("\nHow Many Numbers You Want to Enter => ");
    scanf("%d", &ARRAY_SIZE);

    if (ARRAY_SIZE < 1)
    {
        printf("\n!!! Invalid Input, Plz Correctly Specify Number of Numbers...");
        exit(0);
    }

    // Declare Array of Variable size
    int *ptr, nums[ARRAY_SIZE];

    // Assign address to pointer
    ptr = nums;

    // Input Numbers
    printf("\nEnter %d Numbers => ", ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++)
        scanf("%d", ptr + i);

    // Print Numbers In Normal Order
    puts("\n>>>>>>>> Numbers In Normal Order <<<<<<<<<");
    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("%d ", *(ptr + i));

    // Print Numbers In Reverse Order
    puts("\n\n>>>>>>>> Numbers In Reverse Order <<<<<<<<<");
    for (int i = ARRAY_SIZE - 1; i >= 0; i--)
        printf("%d ", *(ptr + i));

    putch('\n');
    getch();
    return 0;
}
// Main Function End
