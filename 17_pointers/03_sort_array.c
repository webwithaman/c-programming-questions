// Write a function to sort an array of int type values using pointers. [ void sort(int *ptr,int size); ]

// Header Files
#include <stdio.h>
#include <conio.h>

#define ARRAY_SIZE 10

// Functions Declarations (Prototypes)
void sort(int *, int);

// // Main Function Start
int main()
{
    int nums[ARRAY_SIZE];

    printf("\nEnter 10 Numbers => ");

    // Input Numbers
    for (int i = 0; i < ARRAY_SIZE; i++)
        scanf("%d", &nums[i]);

    // Print Numbers
    puts("\n>>>>>>>> Numbers Before Sorting <<<<<<<<<");
    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("%d ", nums[i]);

    // sort array
    sort(nums, ARRAY_SIZE);

    // Print Numbers
    puts("\n\n>>>>>>>> Numbers After Sorting <<<<<<<<<");
    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("%d ", nums[i]);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Function Definitions

// Function to Sort an Array (Bubble Sort)
void sort(int *ptr, int size)
{
    for (int i = 0; i < ARRAY_SIZE - 1; i++)
    {
        for (int j = 0; j < ARRAY_SIZE - 1 - i; j++)
        {
            if (*(ptr + j) > *(ptr + j + 1)) // true, then swap
            {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}