// // Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Functions Declarations (Prototypes)
void printArray(int[], int);
void inputArray(int[], int);
int firstOccurOfAdjDup(int[], int, int *);

// // Main Function Start
int main()
{
    const int ARRAY_SIZE;
    printf("\nHow Many Elements You Want to Enter => ");
    scanf("%d", &ARRAY_SIZE);

    // // Check for Invalid Array Size
    if (ARRAY_SIZE < 1)
    {
        puts("\n!!! Invalid Input, Plz Correctly Specify Number of Elements...");
        exit(0);
    }

    // // Declare Array of Variable size
    int arr[ARRAY_SIZE], isAdjDupPresent;

    // // Input Elements
    printf("\nEnter %d Elements => ", ARRAY_SIZE);
    inputArray(arr, ARRAY_SIZE);

    // // Print Array
    puts("\n\n>>>>>>>> Entered Elements <<<<<<<<<");
    printArray(arr, ARRAY_SIZE);

    // // find first occurrence of adjacent duplicate
    int value = firstOccurOfAdjDup(arr, ARRAY_SIZE, &isAdjDupPresent);

    if (isAdjDupPresent)
        printf("\nFirst Adjacent Duplicate Value => %d", value);
    else
        printf("\nThere is no Adjacent Duplicate Value in Array");

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

// // Function to Input Array Elements
void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

// // Function to Find the First Occurrence of Adjacent Duplicate Values
int firstOccurOfAdjDup(int arr[], int size, int *isAdjDupPresent)
{
    *isAdjDupPresent = 0;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            *isAdjDupPresent = 1;
            return arr[i];
        }
    }
}
