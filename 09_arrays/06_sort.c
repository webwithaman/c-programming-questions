//  Write a program to sort (ascending order) elements of an array of size 10. Take array  values from the user.

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

    // Print Elements
    puts("\n>>>>>>>> Elements Before Sorting <<<<<<<<<");
    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("%d ", nums[i]);

    // // Sorting using Selection Sort
    for (int i = 0; i < ARRAY_SIZE - 1; i++)
    {
        for (int j = i + 1; j < ARRAY_SIZE; j++)
        {
            if (nums[i] > nums[j]) // true, then swap
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    // // Sorting using Bubble Sort
    // for (int i = 0; i < ARRAY_SIZE - 1; i++)
    // {
    //     for (int j = 0; j < ARRAY_SIZE - 1; j++)
    //     {
    //         if (nums[j] > nums[j + 1]) // true, then swap
    //         {
    //             int temp = nums[j];
    //             nums[j] = nums[j + 1];
    //             nums[j + 1] = temp;
    //         }
    //     }
    // }

    // Print Elements
    puts("\n\n>>>>>>>> Elements After Sorting <<<<<<<<<");
    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("%d ", nums[i]);

    putch('\n');
    getch();
    return 0;
}
// Main Function End
