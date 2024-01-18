// // Write a function in C to merge two arrays of the same size sorted in descending order.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ARRAY_SIZE_1 10
#define ARRAY_SIZE_2 5
#define ARRAY_SIZE_3 ARRAY_SIZE_1 + ARRAY_SIZE_2

// // Functions Declarations (Prototypes)
void printArray(int[], int);
void mergeArrays(int[], int, int[], int, int[]);

// // Main Function Start
int main()
{

    // // Declare Array of Variable size
    int arr1[ARRAY_SIZE_1] = {33, 23, 20, 16, 12, 10, 5, -3, -5, -10};
    int arr2[ARRAY_SIZE_2] = {103, 103, 99, 66, 13};
    int mergedArray[ARRAY_SIZE_3];

    // // Print First Array
    puts("\n\n>>>>>>>> Elements of First Array <<<<<<<<<");
    printArray(arr1, ARRAY_SIZE_1);

    // // Print Second Array
    puts("\n\n>>>>>>>> Elements of Second Array <<<<<<<<<");
    printArray(arr2, ARRAY_SIZE_2);

    // // Merge arr1 and arr2
    mergeArrays(arr1, ARRAY_SIZE_1, arr2, ARRAY_SIZE_2, mergedArray);

    // // Print Array of Merged Array
    puts("\n\n>>>>>>>> Elements of Merged Array <<<<<<<<<");
    printArray(mergedArray, ARRAY_SIZE_3);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Functions Definitions 👇👇

// // Function to Display Array Elements
void printArray(int arr[], int size)
{
    putch('\n'); // // Add new line

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    putch('\n'); // // Add new line
}

// // Function to Merge Two Arrays of Same Size Sorted in Descending order
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
        mergedArray[k++] = arr1[i++];

    while (j < size2)
        mergedArray[k++] = arr2[j++];
}