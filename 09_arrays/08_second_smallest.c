// Write a program to find the Second smallest number stored in an array of size 10. Take array values from the user.

// Header Files
#include <stdio.h>
#include <conio.h>

#define ARRAY_SIZE 10

// // Main Function Start
int main()
{
    int nums[ARRAY_SIZE];

    printf("\nEnter 10 Numbers => ");

    // Input Numbers
    for (int i = 0; i < ARRAY_SIZE; i++)
        scanf("%d", &nums[i]);

    int smallest = nums[0], secondSmallest = nums[1];

    // Set smallest and secondSmallest accordingly
    if (secondSmallest < smallest)
    {
        int temp = smallest;
        smallest = secondSmallest;
        secondSmallest = temp;
    }

    // Find Second Smallest
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (nums[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = nums[i];
        }
        else if (nums[i] < secondSmallest && nums[i] != smallest)
            secondSmallest = nums[i];
    }

    printf("\nSecond Smallest Number => %d", secondSmallest);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
