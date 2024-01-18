// // Write a function in C to print all unique elements in an array.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Functions Declarations (Prototypes)
void printArray(int[], int);
void inputArray(int[], int);
void sortAsc(int[], int);
int linearSearch(int[], int, int);
void copyArray(int[], int, int[]);
void printUniqueElements(int[], int);

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
    int arr[ARRAY_SIZE];

    // // Input Elements
    printf("\nEnter %d Elements => ", ARRAY_SIZE);
    inputArray(arr, ARRAY_SIZE);

    // // Print Array
    puts("\n\n>>>>>>>> Entered Elements <<<<<<<<<");
    printArray(arr, ARRAY_SIZE);

    puts("\n\n>>>>>>>> Unique Elements in Array <<<<<<<<<");
    printUniqueElements(arr, ARRAY_SIZE);

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

// // Function to Sort an Array in Ascending Order
void sortAsc(int arr[], int size)
{
    // // Bubble Sort
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] < arr[j + 1]) // // true, then swap
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// // Function to Search An Element Using Linear Search
int linearSearch(int arr[], int size, int search)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search)
            return i;
    }

    return -1;
}

// // Function to Copy Array
void copyArray(int arr[], int size, int arr2[])
{
    for (int i = 0; i < size; i++)
        arr2[i] = arr[i];
}

// // Function to Print Unique Elements in Array
void printUniqueElements(int arr[], int size)
{
    putch('\n');

    // // 1st Approach (using sorting)
    // // int countDup = 0, copyOfArr[size], foundUnique = 0;

    // // copyArray(arr, size, copyOfArr); // // copy arr into copyOfArr
    // // sortAsc(copyOfArr, size);        // // sort array

    // // if (size > 1 && copyOfArr[0] != copyOfArr[1])
    // // {
    // //    printf("%d ", copyOfArr[0]);
    // //    foundUnique = 1;
    // // }
    // // else if (size == 1)
    // // {
    // //    printf("%d ", copyOfArr[0]);
    // //    foundUnique = 1;
    // // }

    // // for (int i = 1; i < size - 1; i++)
    // // {
    // //    if (copyOfArr[i] != copyOfArr[i - 1] && copyOfArr[i] != copyOfArr[i + 1])
    // //    {
    // //        printf("%d ", copyOfArr[i]);
    // //        foundUnique = 1;
    // //    }
    // // }

    // // if (size > 1 && copyOfArr[size - 1] != copyOfArr[size - 2])
    // // {
    // //    printf("%d ", copyOfArr[size - 1]);
    // //    foundUnique = 1;
    // // }

    // // if (!foundUnique)
    // //    puts("\nThere Are No Unique Elements In Array...");

    // // 2nd Approach
    int inspected[size], k = 0, countDup = 0, foundUnique = 0;

    for (int i = 0; i < size; i++)
    {
        if (linearSearch(inspected, k, arr[i]) == -1)
        {
            for (int j = 0; j < size; j++)
            {
                if (arr[i] == arr[j] && i != j)
                    countDup++;
            }

            if (countDup == 0)
            {
                printf("%d ", arr[i]);
                foundUnique = 1;
            }

            inspected[k++] = arr[i];
            countDup = 0;
        }
    }

    if (!foundUnique)
        puts("\nThere Are No Unique Elements In Array...");

    putch('\n');
}
