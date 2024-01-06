// Write a function to find the largest number from the given array of any size. (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Functions Declarations (Prototypes)
int largest(int[], int);
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

    printf("\nLargest Number => %d", largest(nums, ARRAY_SIZE));

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

// Function to Find Largest Element of An Array
int largest(int arr[], int size)
{
    int largest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }

    return largest;
}