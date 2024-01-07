// Write a program to calculate the sum of two matrices each of order 3x3.

// Header Files
#include <stdio.h>
#include <conio.h>

#define ARRAY_SIZE 10

// Main Function Start
int main()
{
    int nums[ARRAY_SIZE], sum = 0;

    printf("\nEnter 10 Numbers to Calculate Sum => ");

    // Input Elements and Add
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    printf("\nSum of Entered Numbers => %d", sum);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
