// Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.

// Header Files
#include <stdio.h>
#include <conio.h>

#define ARRAY_SIZE 10

// Main Function Start
int main()
{
    int nums[ARRAY_SIZE], sumOfEven = 0, sumOfOdd = 0;

    printf("\nEnter 10 Numbers to Calculate Sum of Even And Odd => ");

    // Input Elements and Add
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        scanf("%d", &nums[i]);

        if (nums[i] & 1) // if odd
            sumOfOdd += nums[i];
        else
            sumOfEven += nums[i];
    }

    printf("\nSum of Even Numbers => %d", sumOfEven);
    printf("\nSum of Odd Numbers => %d", sumOfOdd);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
