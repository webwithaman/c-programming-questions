// // Write a function in C to count the frequency of each element of an array.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Functions Declarations (Prototypes)
void printArray(int[], int);
void inputArray(int[], int);
int countFrequency(int[], int, int);
void sortAsc(int[], int);
void copyArray(int[], int, int[]);
void printFrequencyOfEach(int[], int);
int linearSearch(int arr[], int size, int search);

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

    puts("\n\n>>>>>>>> Frequency of Each Element <<<<<<<<<");
    printFrequencyOfEach(arr, ARRAY_SIZE);

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

// // Function to Count Frequency of Given Element
int countFrequency(int arr[], int size, int element)
{
    int frequency = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            frequency++;
    }

    return frequency;
}

// // Function to Print Frequency of Each Element
void printFrequencyOfEach(int arr[], int size)
{
    // // 1st Approach
    int inspected[size], k = 0;

    for (int i = 0; i < size; i++)
    {
        if (linearSearch(inspected, k, arr[i]) == -1)
        {
            printf("\nFrequency of %d => %d", arr[i], countFrequency(arr, size, arr[i]));

            inspected[k++] = arr[i];
        }
    }

    // // 2nd Approach
    // // int copyOfArr[size], count;
    // // copyArray(arr, size, copyOfArr); // // copy of arr into copyOfArr
    // // sortAsc(copyOfArr, size);        // // sort copyOfArr

    // // for (int i = 0; i < size; i += count)
    // // {
    // //    count = 1;

    // //    for (int j = i + 1; j < size && copyOfArr[i] == copyOfArr[j]; j++)
    // //        count++;

    // //    printf("\nFrequecy of %d => %d", copyOfArr[i], count);
    // // }

    putch('\n');
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

// // Function to Copy Array
void copyArray(int arr[], int size, int arr2[])
{
    for (int i = 0; i < size; i++)
        arr2[i] = arr[i];
}
