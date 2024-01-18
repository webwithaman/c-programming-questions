// // Write a function to sort (both ascending and descending order) an array of any size. (TSRS)

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Functions Declarations (Prototypes)
void printArray(int[], int);
void inputArray(int[], int);
void sortDes(int[], int);
void sortAsc(int[], int);

// // Main Function Start
int main()
{
    const int ARRAY_SIZE;
    printf("\nHow Many Numbers You Want to Enter => ");
    scanf("%d", &ARRAY_SIZE);

    // // Check for Invalid Array Size
    if (ARRAY_SIZE < 1)
    {
        puts("\n!!! Invalid Input, Plz Correctly Specify Number of Numbers...");
        exit(0);
    }

    // // Declare Array of Variable size
    int nums[ARRAY_SIZE];

    // // Input Numbers
    printf("\nEnter %d Numbers => ", ARRAY_SIZE);
    inputArray(nums, ARRAY_SIZE);

    // // Print Array
    puts("\n\n>>>>>>>> Numbers Before Sorting <<<<<<<<<");
    printArray(nums, ARRAY_SIZE);

    // // sort in descending order
    sortDes(nums, ARRAY_SIZE);

    // // Print Array
    puts("\n\n>>>>>>>> Numbers After Sorting In Ascending Order <<<<<<<<<");
    printArray(nums, ARRAY_SIZE);

    // // sort in ascending order
    sortAsc(nums, ARRAY_SIZE);

    // // Print Array
    puts("\n\n>>>>>>>> Numbers After Sorting In Descending Order <<<<<<<<<");
    printArray(nums, ARRAY_SIZE);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Functions Definitions 👇👇

// // Function to Display Array Numbers
void printArray(int nums[], int size)
{
    putch('\n'); // // Add new line

    for (int i = 0; i < size; i++)
        printf("%d ", nums[i]);

    putch('\n'); // // Add new line
}

// // Function to Input Array Numbers
void inputArray(int nums[], int size)
{
    for (int i = 0; i < size; i++)
        scanf("%d", &nums[i]);
}

// // Function to Sort an Array in Descending Order
void sortDes(int nums[], int size)
{
    // // Selection Sort
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] > nums[j]) // // true, then swap
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    // // Bubble Sort
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (nums[j] > nums[j + 1]) // // true, then swap
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}

// // Function to Sort an Array in Ascending Order
void sortAsc(int nums[], int size)
{
    // // Selection Sort
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] < nums[j]) // // true, then swap
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    // // Bubble Sort
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (nums[j] < nums[j + 1]) // // true, then swap
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}
