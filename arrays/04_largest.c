// Write a program to find the largest number stored in an array of size 10. Take array values from the user.

// Header Files
#include <stdio.h>
#include <conio.h>

#define ARRAY_SIZE 10

// Main Function Start
int main()
{
    int nums[ARRAY_SIZE];

    printf("\nEnter 10 Numbers => ");

    // Input Elements
    for (int i = 0; i < ARRAY_SIZE; i++)
        scanf("%d", &nums[i]);

    int largest = nums[0];

    // Find Largest
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (nums[i] > largest)
            largest = nums[i];
    }

    printf("\nLargest Number => %d", largest);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
