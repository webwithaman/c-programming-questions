// // Write a function to rotate an array by n position in d direction. The d is an  indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Functions Declarations (Prototypes)
void printArray(int[], int);
void inputArray(int[], int);
void rotateArray(int[], int, int, int);
void rotateTowardsLeft(int[], int, int);
void rotateTowardsRight(int[], int, int);
void swap(int *, int *);

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
    int arr[ARRAY_SIZE], position;
    char direction;

    // // Input Elements
    printf("\nEnter %d Elements => ", ARRAY_SIZE);
    inputArray(arr, ARRAY_SIZE);

    // // Input Position
    printf("\nEnter N to Rotate Array by N Positions => ");
    scanf("%d", &position);

    // // Check Invalid Input for Position
    if (position > ARRAY_SIZE || position < 0)
    {
        puts("\n!!! Invalid Input, Position Cannot be Greater than Size of Array and Less than 0");
        exit(0);
    }

    // // Input Direction
    printf("\nEnter Direction Towards Array Will be Rotated\nFor Left Press L or l\nFor Right Press R or r\n\nEnter Your Choice => ");
    fflush(stdin);
    scanf("%c", &direction);

    // // Check Invalid Input for Direction
    if (direction != 'L' && direction != 'l' && direction != 'R' && direction != 'r')
    {
        puts("\n!!! Invalid Input, Direction is not valid...");
        exit(0);
    }

    // // Print Array
    puts("\n\n>>>>>>>> Elements Before Rotating <<<<<<<<<");
    printArray(arr, ARRAY_SIZE);

    // // sort in descending order
    rotateArray(arr, ARRAY_SIZE, position, direction);

    // // Print Array
    printf("\n\n>>>>>>>> Elements Before Rotating by %d Position Towards %s Direction <<<<<<<<<\n", position, direction == 'L' || direction == 'l' ? "Left" : "Right");
    printArray(arr, ARRAY_SIZE);

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

// // Function to Rotate An Array by n position towards given Direction
void rotateArray(int arr[], int size, int position, int direction)
{
    // // Rotate Towards Left Direction
    if (direction == 'l' || direction == 'L')
        rotateTowardsLeft(arr, size, position);
    else // // Rotate Towards Right Direction
        rotateTowardsRight(arr, size, position);
}

// // Function to Rotate An Array by n position towards Left
void rotateTowardsLeft(int arr[], int size, int position)
{
    // // 1st Approach
    int saveElements[position];

    for (int i = 0; i < position; i++)
        saveElements[i] = arr[i];

    for (int i = 0; i < size - position; i++)
        arr[i] = arr[i + position];

    for (int i = 0; i < position; i++)
        arr[i + size - position] = saveElements[i];

    // // 2nd Approach
    // // for (int j = 0; j < position; j++)
    // // {
    // //    for (int i = 0; i < size - 1; i++)
    // //    {
    // //        swap(&arr[i], &arr[i + 1]);
    // //    }
    // // }
}

// // Function to Rotate An Array by n position towards Right
void rotateTowardsRight(int arr[], int size, int position)
{
    // // 1st Approach
    int saveElements[position];

    for (int i = size - position; i < size; i++)
        saveElements[i + position - size] = arr[i];

    for (int i = size - 1; i > position - 1; i--)
        arr[i] = arr[i - position];

    for (int i = 0; i < position; i++)
        arr[i] = saveElements[i];

    // // 2nd Approach
    // // for (int j = 0; j < position; j++)
    // // {
    // //    for (int i = size - 1; i > 0; i--)
    // //    {
    // //        swap(&arr[i], &arr[i - 1]);
    // //    }
    // // }
}

// // Function to Swap values of Two Variables
void swap(int *a, int *b)
{
    *a = (*a + *b) - (*b = *a);
}
