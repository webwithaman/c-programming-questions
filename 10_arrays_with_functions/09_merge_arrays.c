// Write a function in C to merge two arrays of the same size sorted in descending order.

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Functions Declarations (Prototypes)
void printArray(int[], int);
void inputArray(int[], int);
void mergeArrays(int[], int, int[], int, int[]);

// Main Function Start
int main()
{
    const int ARRAY_SIZE;
    printf("\nHow Many Elements You Want to Enter => ");
    scanf("%d", &ARRAY_SIZE);

    // Check for Invalid Array Size
    if (ARRAY_SIZE < 1)
    {
        puts("\n!!! Invalid Input, Plz Correctly Specify Number of Elements...");
        exit(0);
    }

    // Declare Array of Variable size
    int nums[ARRAY_SIZE];

    // Input Elements
    printf("\nEnter %d Elements => ", ARRAY_SIZE);
    inputArray(nums, ARRAY_SIZE);

    // Print Array
    puts("\n\n>>>>>>>> Elements Before Sorting <<<<<<<<<");
    printArray(nums, ARRAY_SIZE);

    // sort in descending order
    sortDes(nums, ARRAY_SIZE);

    // Print Array
    puts("\n\n>>>>>>>> Elements After Sorting In Ascending Order <<<<<<<<<");
    printArray(nums, ARRAY_SIZE);

    // sort in ascending order
    sortAsc(nums, ARRAY_SIZE);

    // Print Array
    puts("\n\n>>>>>>>> Elements After Sorting In Descending Order <<<<<<<<<");
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

// Function to Merge Two Arrays of Same Size Sorted in Descending order
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[])
{
    int k = 0, i = 0, j = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] > arr2[j])
            mergedArray[k++] = arr1[i++];
        else
            mergedArray[k++] = arr2[j++];
    }

    while (i < size1)
        mergedArray[k++] = arr1[i];

    while (j < size2)
        mergedArray[k++] = arr2[j];
}