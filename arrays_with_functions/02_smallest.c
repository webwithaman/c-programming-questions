// Write a function to find the smallest number from the given array of any size. (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Functions Declarations (Prototypes)
int smallest(int[], int);
void inputArray(int[], int);

// Main Function Start
int main()
{
    const int ARRAY_SIZE;
    printf("\nHow Many Numbers You Want to Enter => ");
    scanf("%d", &ARRAY_SIZE);

    if (ARRAY_SIZE < 1)
    {
        puts("\n!!! Invalid Input, Plz Correctly Specify Number of Elements...");
        exit(0);
    }

    // Declare Array of Variable size
    int nums[ARRAY_SIZE];

    // Input Elements
    printf("\nEnter %d Numbers => ", ARRAY_SIZE);
    inputArray(nums, ARRAY_SIZE);

    printf("\nSmallest Number => %d", smallest(nums, ARRAY_SIZE));

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Functions Definitions 👇👇

// Function to Input Array Elements
void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

// Function to Find Smallest Element of An Array
int smallest(int arr[], int size)
{
    int smallest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    return smallest;
}