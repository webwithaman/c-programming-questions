// Write a function in C to Reverse an Array

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Functions Declarations (Prototypes)
void printArray(int[], int);
void inputArray(int[], int);
void reverseArray(int[], int);

// Main Function Start
int main()
{
    const int ARRAY_SIZE;
    printf("\nHow Many Numbers You Want to Enter => ");
    scanf("%d", &ARRAY_SIZE);

    if (ARRAY_SIZE < 1)
    {
        printf("\n!!! Invalid Input, Plz Correctly Specify Number of Elements...");
        exit(0);
    }

    // Declare Array of Variable size
    int nums[ARRAY_SIZE];

    // Input Elements
    printf("\nEnter %d Numbers => ", ARRAY_SIZE);
    inputArray(nums, ARRAY_SIZE);

    // Print Elements In Normal Order
    puts("\n>>>>>>>> Numbers In Normal Order <<<<<<<<<");
    printArray(nums, ARRAY_SIZE);

    // Reverse Array
    reverseArray(nums, ARRAY_SIZE);

    // Print Elements In Reverse Order
    puts("\n\n>>>>>>>> Numbers In Reverse Order <<<<<<<<<");
    printArray(nums, ARRAY_SIZE);

    putch('\n');
    getch();
    return 0;
}
// Main Function End

// Functions Definitions 👇👇

// Function to Display Array Elements
void printArray(int arr[], int size)
{
    putch('\n'); // Add new line

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    putch('\n'); // Add new line
}

// Function to Input Array Elements
void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

// Function to Reverse Array
void reverseArray(int arr[], int size)
{

    // // 1st Approach
    int beg = 0, end = size - 1, temp;
    while (beg < end)
    {
        temp = arr[beg];
        arr[beg] = arr[end];
        arr[end] = temp;
        beg++;
        end--;
    }

    // // 2nd Approach
    // int temp;
    // for (int i = 0; i < size / 2; i++)
    // {
    //     temp = arr[i];
    //     arr[i] = arr[size - 1 - i];
    //     arr[size - 1 - i] = temp;
    // }
}
