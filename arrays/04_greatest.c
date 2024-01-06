// Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

// Header Files
#include <stdio.h>
#include <conio.h>

#define ARRAY_SIZE 10

// Main Function Start
int main()
{
    int nums[ARRAY_SIZE];

    printf("\nEnter 10 Numbers => ");

    // Input Elements and Search for Greatest
    for (int i = 0; i < ARRAY_SIZE; i++)
        scanf("%d", &nums[i]);

    int greatest = nums[0];

    // Find Greatest
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (nums[i] > greatest)
            greatest = nums[i];
    }

    printf("\nGreatest Number => %d", greatest);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
