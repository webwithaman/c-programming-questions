// // Write a program to find the Second largest number stored in an array of size 10. Take array values from the user.

// // Header Files
#include <stdio.h>
#include <conio.h>

#define ARRAY_SIZE 10

// // Main Function Start
int main()
{
    int nums[ARRAY_SIZE];

    printf("\nEnter 10 Numbers => ");

    // // Input Numbers
    for (int i = 0; i < ARRAY_SIZE; i++)
        scanf("%d", &nums[i]);

    int largest = nums[0], secondLargest = nums[1];

    // // Set largest and secondLargest accordingly
    if (secondLargest > largest)
    {
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }

    // // Find Second Largest
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (nums[i] > largest)
        {
            secondLargest = largest;
            largest = nums[i];
        }
        else if (nums[i] > secondLargest && nums[i] != largest)
            secondLargest = nums[i];
    }

    printf("\nSecond Largest Number => %d", secondLargest);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
